/************************************************************
 * <bsn.cl fy=2014 v=onl>
 * </bsn.cl>
 ************************************************************
 *
 *
 *
 ***********************************************************/
#include <onlplib/gpio.h>
#include <onlplib/file.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <dirent.h>
#include "onlplib_log.h"

#define SYS_CLASS_GPIO_PATH "/sys/class/gpio/gpio%d"

int
onlp_gpio_export(int gpio, int direction)
{
    int fd;
    int rv;
    fd = onlp_file_open(O_RDONLY, 0, SYS_CLASS_GPIO_PATH, gpio);
    if(fd < 0) {
        /* Not exported yet */
        char g[32];
        ONLPLIB_SNPRINTF(g, sizeof(g)-1, "%d\n", gpio);
        rv = onlp_file_write_str(g, "/sys/class/gpio/export");
        if(rv < 0) {
            AIM_LOG_ERROR("Exporting gpio %d failed.", gpio);
            return -1;
        }
    }
    close(fd);

    rv = onlp_file_write_str( (direction) ? "out\n" : "in\n",
                              SYS_CLASS_GPIO_PATH "/direction", gpio);
    if(rv < 0) {
        AIM_LOG_MSG("Failed to set gpio%d direction=%s: %{errno}",
                    gpio, (direction) ? "out" : "in", errno);
        return -1;
    }
    return 0;
}

int
onlp_gpio_set(int gpio, int v)
{
    char* str = (v) ? "1\n" : "0\n";
    return onlp_file_write((uint8_t*)str, strlen(str),
                           SYS_CLASS_GPIO_PATH "/value", gpio);
}

int
onlp_gpio_get(int gpio, int* v)
{
    return onlp_file_read_int(v, SYS_CLASS_GPIO_PATH "/value", gpio);
}

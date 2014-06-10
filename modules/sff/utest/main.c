/**************************************************************************//**
 *
 *
 *
 *****************************************************************************/
#include <sff/sff_config.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <AIM/aim.h>
#include <sff/sff.h>

typedef struct {
    sff_info_t info;
} eeprom_verify_t;


static eeprom_verify_t data[] =
    {
        /* Amphenol 10GBASE-CR */
        {
            /* sff info */
            {
                /* eeprom */
                {
                    0x03, 0x04, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x01, 0x00, 0x41, 0x6d, 0x70, 0x68, 0x65, 0x6e, 0x6f, 0x6c, 0x20, 0x20, 0x20, 0x20,
                    0x20, 0x20, 0x20, 0x20, 0x00, 0x41, 0x50, 0x48, 0x35, 0x37, 0x31, 0x35, 0x34, 0x30, 0x30, 0x30,
                    0x37, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4b, 0x20, 0x20, 0x20, 0x01, 0x00, 0x00, 0xfa,
                    0x00, 0x00, 0x00, 0x00, 0x41, 0x50, 0x46, 0x31, 0x30, 0x30, 0x38, 0x30, 0x30, 0x37, 0x30, 0x31,
                    0x34, 0x37, 0x20, 0x20, 0x31, 0x30, 0x30, 0x33, 0x30, 0x32, 0x20, 0x20, 0x00, 0x00, 0x00, 0xa9,
                    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                },

                "Amphenol        ",
                "571540007       ",
                "APF10080070147  ",

                /* sfp_type */
                SFF_SFP_TYPE_SFP,
                "SFP",

                /* module_type */
                SFF_MODULE_TYPE_10G_BASE_CR,
                "10GBASE-CR",

                /* media_type */
                SFF_MEDIA_TYPE_COPPER,
                "Copper",

                /* caps */
                0x0,

                /* Length */
                0x1
            },
        },
        /* CISCO-MOLEX */
        {
            /* sff_info */
            {
                /* eeprom */
                {
                    0x03, 0x04, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x01, 0x00, 0x43, 0x49, 0x53, 0x43, 0x4f, 0x2d, 0x4d, 0x4f, 0x4c, 0x45, 0x58, 0x20,
                    0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x09, 0x3a, 0x37, 0x34, 0x37, 0x35, 0x32, 0x2d, 0x39, 0x35,
                    0x31, 0x39, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x30, 0x38, 0x20, 0x20, 0x01, 0x00, 0x00, 0x11,
                    0x00, 0x00, 0x00, 0x00, 0x4d, 0x4f, 0x43, 0x31, 0x35, 0x34, 0x37, 0x30, 0x30, 0x30, 0x48, 0x20,
                    0x20, 0x20, 0x20, 0x20, 0x31, 0x31, 0x31, 0x31, 0x32, 0x31, 0x20, 0x20, 0x00, 0x00, 0x00, 0x8f,
                    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x69, 0xf9, 0x8e, 0x5a,
                    0x43, 0x4f, 0x50, 0x51, 0x41, 0x41, 0x34, 0x4a, 0x41, 0x42, 0x33, 0x37, 0x2d, 0x30, 0x39, 0x36,
                    0x30, 0x2d, 0x30, 0x33, 0x56, 0x30, 0x33, 0x20, 0x01, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0xcc,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x53, 0x46, 0x50, 0x2d, 0x48, 0x31, 0x30, 0x47, 0x42, 0x2d, 0x43, 0x55, 0x31, 0x4d, 0x20, 0x20,
                    0x20, 0x20, 0x20, 0x20, 0x30, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb3,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                },
                "CISCO-MOLEX     ",
                "74752-9519      ",
                "MOC1547000H     ",

                /* sfp_type */
                SFF_SFP_TYPE_SFP,
                "SFP",
                SFF_MODULE_TYPE_10G_BASE_CR,
                "10GBASE-CR",

                SFF_MEDIA_TYPE_COPPER,
                "Copper",
                0x0,
                0x1,
            },
        },
        /* Unknown */
        {
            /* sff_info */
            {
                /* eeprom */
                {
                    0x03, 0x04, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x00,
                    0x00, 0x01, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
                    0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x43, 0x39, 0x39, 0x39, 0x39, 0x2d, 0x31, 0x4d,
                    0x2d, 0x50, 0x2d, 0x4c, 0x43, 0x20, 0x20, 0x20, 0x41, 0x20, 0x20, 0x20, 0x01, 0x00, 0x00, 0xa1,
                    0x00, 0x00, 0x00, 0x00, 0x31, 0x33, 0x30, 0x35, 0x33, 0x30, 0x30, 0x30, 0x34, 0x31, 0x20, 0x20,
                    0x20, 0x20, 0x20, 0x20, 0x31, 0x33, 0x30, 0x34, 0x31, 0x33, 0x20, 0x20, 0x00, 0x00, 0x00, 0x1d,
                    0x00, 0x00, 0x11, 0xb6, 0x7f, 0x7f, 0x08, 0x96, 0xee, 0x8e, 0x60, 0x37, 0xb4, 0xc8, 0x8b, 0x88,
                    0x66, 0x9c, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa3, 0xdd, 0x56, 0xe8,
                    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                },
                "                ",
                "C9999-1M-P-LC   ",
                "1305300041      ",
                SFF_SFP_TYPE_SFP,
                "SFP",
                SFF_MODULE_TYPE_10G_BASE_CR,
                "10GBASE-CR",
                SFF_MEDIA_TYPE_COPPER,
                "Copper",
                0x0,
                0x0,
            },
        },
        /* CISCO-MOLEX */
        {
            {
                {
                    0x03, 0x04, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x03, 0x00, 0x43, 0x49, 0x53, 0x43, 0x4f, 0x2d, 0x4d, 0x4f, 0x4c, 0x45, 0x58, 0x20,
                    0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x09, 0x3a, 0x37, 0x34, 0x37, 0x35, 0x32, 0x2d, 0x39, 0x35,
                    0x32, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x30, 0x38, 0x20, 0x20, 0x01, 0x00, 0x00, 0x0b,
                    0x00, 0x00, 0x00, 0x00, 0x4d, 0x4f, 0x43, 0x31, 0x36, 0x30, 0x33, 0x30, 0x42, 0x48, 0x34, 0x20,
                    0x20, 0x20, 0x20, 0x20, 0x31, 0x32, 0x30, 0x31, 0x31, 0x39, 0x20, 0x20, 0x00, 0x00, 0x00, 0xa5,
                    0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0x04, 0x3b, 0x5b,
                    0x43, 0x4f, 0x50, 0x51, 0x41, 0x41, 0x36, 0x4a, 0x41, 0x42, 0x33, 0x37, 0x2d, 0x30, 0x39, 0x36,
                    0x31, 0x2d, 0x30, 0x33, 0x56, 0x30, 0x33, 0x20, 0x01, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0xcf,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x53, 0x46, 0x50, 0x2d, 0x48, 0x31, 0x30, 0x47, 0x42, 0x2d, 0x43, 0x55, 0x33, 0x4d, 0x20, 0x20,
                    0x20, 0x20, 0x20, 0x20, 0x30, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb5,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                },
                "CISCO-MOLEX     ",
                "74752-9520      ",
                "MOC16030BH4     ",
                SFF_SFP_TYPE_SFP,
                "SFP",
                SFF_MODULE_TYPE_10G_BASE_CR,
                "10GBASE-CR",
                SFF_MEDIA_TYPE_COPPER,
                "Copper",
                0x0,
                0x3
            },
        },
        /* OEM */
        {
            {
                {
                    0x00, 0x80, 0xfb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00,
                    0x01, 0x0d, 0x33, 0x0c, 0xcb, 0x0c, 0xcb, 0x0d, 0x33, 0x1b, 0xd5, 0x1b, 0x54, 0x18, 0xcd, 0x1c,
                    0x75, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x01, 0x00, 0x03, 0x67, 0x00, 0x00, 0x00, 0x0a, 0x03, 0x00, 0x00, 0x4f, 0x45, 0x4d, 0x20, 0x20,
                    0x0d, 0x00, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x03, 0x67, 0x00, 0x00, 0x00,
                    0x0a, 0x03, 0x00, 0x00, 0x4f, 0x45, 0x4d, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
                    0x20, 0x20, 0x20, 0x20, 0x07, 0x00, 0x1e, 0x00, 0x51, 0x53, 0x46, 0x50, 0x2d, 0x34, 0x30, 0x47,
                    0x2d, 0x53, 0x52, 0x34, 0x20, 0x20, 0x20, 0x20, 0x31, 0x41, 0x42, 0x68, 0x07, 0xd0, 0x46, 0x0c,
                    0x00, 0x00, 0x00, 0xde, 0x41, 0x43, 0x52, 0x34, 0x30, 0x47, 0x30, 0x30, 0x34, 0x31, 0x20, 0x20,
                    0x20, 0x20, 0x20, 0x20, 0x31, 0x32, 0x30, 0x38, 0x32, 0x37, 0x31, 0x39, 0x08, 0x00, 0x00, 0x8a,
                    0x00, 0x00, 0x11, 0x9d, 0xf1, 0x68, 0x34, 0xac, 0xb2, 0x3d, 0xc6, 0x19, 0x53, 0x0b, 0xbf, 0xf0,
                    0x2e, 0xe1, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf7, 0xfe, 0x58, 0x27,
                },
                "OEM             ",
                "QSFP-40G-SR4    ",
                "ACR40G0041      ",
                SFF_SFP_TYPE_QSFP_PLUS,
                "QSFP+",
                SFF_MODULE_TYPE_40G_BASE_SR4,
                "40GBASE-SR4",
                SFF_MEDIA_TYPE_FIBER,
                "Fiber",
                0x0,
                -1,
            },
        },
        {
            {
                {
                    0x0d, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x0d, 0x00, 0x23, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x03, 0xa0, 0x41, 0x6d, 0x70, 0x68, 0x65, 0x6e, 0x6f, 0x6c, 0x20, 0x20, 0x20, 0x20,
                    0x20, 0x20, 0x20, 0x20, 0x00, 0x78, 0xa7, 0x14, 0x36, 0x30, 0x33, 0x30, 0x32, 0x30, 0x30, 0x30,
                    0x33, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x42, 0x20, 0x07, 0x0b, 0x00, 0x00, 0x46, 0x01,
                    0x00, 0x00, 0x00, 0x00, 0x41, 0x50, 0x46, 0x31, 0x33, 0x30, 0x32, 0x30, 0x30, 0x33, 0x35, 0x41,
                    0x52, 0x56, 0x20, 0x20, 0x31, 0x33, 0x30, 0x31, 0x31, 0x35, 0x20, 0x20, 0x00, 0x00, 0x00, 0xf9,
                    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                },
                "Amphenol        ",
                "603020003       ",
                "APF13020035ARV  ",
                SFF_SFP_TYPE_QSFP_PLUS,
                "QSFP+",
                SFF_MODULE_TYPE_40G_BASE_CR4,
                "40GBASE-CR4",
                SFF_MEDIA_TYPE_COPPER,
                "Copper",
                0x0,
                0x3
            },
        },
        /* Fiberstore */
        {
            {
                {
                    0x03, 0x04, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x01, 0x00, 0x46, 0x69, 0x62, 0x65, 0x72, 0x53, 0x74, 0x6f, 0x72, 0x65, 0x20, 0x20,
                    0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x40, 0x20, 0x31, 0x30, 0x47, 0x53, 0x46, 0x50, 0x2d, 0x50,
                    0x43, 0x2d, 0x33, 0x30, 0x2d, 0x31, 0x20, 0x20, 0x41, 0x30, 0x20, 0x20, 0x00, 0x00, 0x00, 0xd9,
                    0x00, 0x00, 0x00, 0x00, 0x46, 0x53, 0x34, 0x30, 0x32, 0x31, 0x32, 0x44, 0x30, 0x31, 0x37, 0x36,
                    0x20, 0x20, 0x20, 0x20, 0x31, 0x34, 0x30, 0x32, 0x31, 0x33, 0x20, 0x20, 0x00, 0x00, 0x00, 0x8f,
                    0x00, 0x00, 0x11, 0x4b, 0xd4, 0xe4, 0xc5, 0x99, 0xd1, 0xfb, 0xdb, 0x5e, 0xa2, 0xc4, 0x62, 0x0c,
                    0xf2, 0x5b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x26, 0xfa, 0x99,
                    0x43, 0x4f, 0x50, 0x51, 0x41, 0x41, 0x34, 0x4a, 0x41, 0x41, 0x33, 0x37, 0x2d, 0x30, 0x39, 0x36,
                    0x30, 0x2d, 0x30, 0x32, 0x56, 0x30, 0x32, 0x20, 0x01, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0xc9,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x53, 0x46, 0x50, 0x2d, 0x48, 0x31, 0x30, 0x47, 0x42, 0x2d, 0x43, 0x55, 0x31, 0x4d, 0x20, 0x20,
                    0x20, 0x20, 0x20, 0x20, 0x30, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb3,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                },
                "FiberStore      ",
                "10GSFP-PC-30-1  ",
                "FS40212D0176    ",
                SFF_SFP_TYPE_SFP,
                "SFP",
                SFF_MODULE_TYPE_10G_BASE_CR,
                "10GBASE-CR",
                SFF_MEDIA_TYPE_COPPER,
                "Copper",
                0x0,
                0x1,
            },
        },
        /* 1GSX */
        {
            {
                {
                    0x03, 0x04, 0x21, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x06, 0x67, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x03, 0x00, 0x49, 0x42, 0x4d, 0x2d, 0x41, 0x6d, 0x70, 0x68, 0x65, 0x6e, 0x6f, 0x6c,
                    0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x17, 0xef, 0x39, 0x30, 0x59, 0x39, 0x34, 0x32, 0x38, 0x2d,
                    0x4e, 0x32, 0x38, 0x35, 0x30, 0x30, 0x41, 0x20, 0x46, 0x20, 0x20, 0x20, 0x01, 0x00, 0x00, 0x7a,
                    0x00, 0x00, 0x00, 0x00, 0x59, 0x33, 0x35, 0x30, 0x56, 0x54, 0x32, 0x42, 0x52, 0x31, 0x4b, 0x50,
                    0x20, 0x20, 0x20, 0x20, 0x31, 0x32, 0x31, 0x31, 0x32, 0x37, 0x20, 0x20, 0x00, 0x00, 0x00, 0x1b,
                    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                },
                "IBM-Amphenol    ",
                "90Y9428-N28500A ",
                "Y350VT2BR1KP    ",
                SFF_SFP_TYPE_SFP,
                "SFP",
                SFF_MODULE_TYPE_1G_BASE_CX,
                "1GBASE-CX",
                SFF_MEDIA_TYPE_COPPER,
                "Copper",
                0x0,
                0x3,
            },
        },

    };


int
aim_main(int argc, char* argv[])
{

    int i;
    for(i = 0; i < AIM_ARRAYSIZE(data); i++) {
        int rv;
        sff_info_t info;
        eeprom_verify_t* p = data+i;

        aim_printf(&aim_pvs_stdout, "Verifying entry %d: %s:%s:%s...\n",
                   i,
                   p->info.vendor,
                   p->info.model,
                   p->info.serial);


        if( (rv=sff_info_init(&info, p->info.eeprom)) < 0) {
            AIM_DIE("index=%d sff_info_init=%d\n", i, rv);
        }

        if(strcmp(info.vendor, p->info.vendor)) {
            AIM_DIE("index=%d vendor expected '%s' got '%s'",
                    i, p->info.vendor, info.vendor);
        }
        if(strcmp(info.model, p->info.model)) {
            AIM_DIE("index=%d model expected '%s' got '%s'",
                    i, p->info.model, info.model);
        }
        if(strcmp(info.serial, p->info.serial)) {
            AIM_DIE("index=%d serial expected '%s' got '%s'",
                    i, p->info.serial, info.serial);
        }
        if(info.sfp_type != p->info.sfp_type) {
            AIM_DIE("index=%d sfp_type expected '%{sff_sfp_type}' got '%{sff_sfp_type}'",
                    i, p->info.sfp_type, info.sfp_type);
        }
        if(strcmp(info.sfp_type_name, p->info.sfp_type_name)) {
            AIM_DIE("index=%d type_name expected '%s' got '%s'",
                    i, p->info.sfp_type, info.sfp_type);
        }
        if(info.module_type != p->info.module_type) {
            AIM_DIE("index=%d module_type expected '%{sff_module_type}' got '%{sff_module_type}'",
                    i, p->info.module_type, info.module_type);
        }
        if(info.media_type != p->info.media_type) {
            AIM_DIE("index=%d media_type expected '%{sff_media_type}' got '%{sff_media_type}'\n",
                    i, p->info.media_type, info.media_type);
        }
        if(strcmp(info.media_type_name, p->info.media_type_name)) {
            AIM_DIE("index=%d media_type_name expected '%s' got '%s'",
                    i, p->info.media_type_name, info.media_type_name);
        }

        if(info.length != p->info.length) {
            AIM_DIE("index=%d length expected %d got %d",
                    i, p->info.length, info.length);
        }

        aim_printf(&aim_pvs_stdout, "Verifying entry %d: %s:%s:%s...PASSED\n",
                   i,
                   p->info.vendor,
                   p->info.model,
                   p->info.serial);

    }
    return 0;
}


#include "DATA.h"

int sine1024[]={
	0x7FFF,0x80C8,0x8191,0x825A,0x8323,0x83EC,0x84B5,0x857E,0x8647,0x8710,0x87D8,0x88A1,0x896A,0x8A32,0x8AFA,0x8BC3
            ,0x8C8B,0x8D53,0x8E1B,0x8EE2,0x8FAA,0x9072,0x9139,0x9200,0x92C7,0x938E,0x9454,0x951B,0x95E1,0x96A7,0x976D,0x9832
            ,0x98F8,0x99BD,0x9A82,0x9B46,0x9C0A,0x9CCE,0x9D92,0x9E56,0x9F19,0x9FDC,0xA09E,0xA161,0xA223,0xA2E4,0xA3A5,0xA466
            ,0xA527,0xA5E7,0xA6A7,0xA766,0xA826,0xA8E4,0xA9A3,0xAA61,0xAB1E,0xABDB,0xAC98,0xAD54,0xAE10,0xAECB,0xAF86,0xB041
            ,0xB0FB,0xB1B4,0xB26D,0xB326,0xB3DE,0xB495,0xB54C,0xB603,0xB6B9,0xB76E,0xB823,0xB8D8,0xB98C,0xBA3F,0xBAF2,0xBBA4
            ,0xBC55,0xBD07,0xBDB7,0xBE67,0xBF16,0xBFC5,0xC073,0xC120,0xC1CD,0xC279,0xC324,0xC3CF,0xC47A,0xC523,0xC5CC,0xC674
            ,0xC71C,0xC7C2,0xC869,0xC90E,0xC9B3,0xCA57,0xCAFA,0xCB9D,0xCC3F,0xCCE0,0xCD80,0xCE20,0xCEBF,0xCF5D,0xCFFA,0xD097
            ,0xD132,0xD1CE,0xD268,0xD301,0xD39A,0xD432,0xD4C9,0xD55F,0xD5F4,0xD689,0xD71D,0xD7AF,0xD842,0xD8D3,0xD963,0xD9F3
            ,0xDA81,0xDB0F,0xDB9C,0xDC28,0xDCB3,0xDD3D,0xDDC6,0xDE4F,0xDED6,0xDF5D,0xDFE2,0xE067,0xE0EB,0xE16E,0xE1F0,0xE271
            ,0xE2F1,0xE370,0xE3EE,0xE46B,0xE4E7,0xE562,0xE5DD,0xE656,0xE6CE,0xE745,0xE7BC,0xE831,0xE8A5,0xE918,0xE98B,0xE9FC
            ,0xEA6C,0xEADB,0xEB4A,0xEBB7,0xEC23,0xEC8E,0xECF8,0xED61,0xEDC9,0xEE2F,0xEE95,0xEEFA,0xEF5E,0xEFC0,0xF022,0xF082
            ,0xF0E1,0xF140,0xF19D,0xF1F9,0xF254,0xF2AE,0xF306,0xF35E,0xF3B4,0xF40A,0xF45E,0xF4B1,0xF503,0xF554,0xF5A4,0xF5F3
            ,0xF640,0xF68D,0xF6D8,0xF722,0xF76B,0xF7B3,0xF7F9,0xF83F,0xF883,0xF8C6,0xF908,0xF949,0xF989,0xF9C7,0xFA04,0xFA41
            ,0xFA7C,0xFAB5,0xFAEE,0xFB25,0xFB5C,0xFB91,0xFBC4,0xFBF7,0xFC29,0xFC59,0xFC88,0xFCB6,0xFCE2,0xFD0E,0xFD38,0xFD61
            ,0xFD89,0xFDB0,0xFDD5,0xFDF9,0xFE1C,0xFE3E,0xFE5E,0xFE7E,0xFE9C,0xFEB9,0xFED4,0xFEEF,0xFF08,0xFF20,0xFF37,0xFF4C
            ,0xFF61,0xFF74,0xFF86,0xFF96,0xFFA6,0xFFB4,0xFFC1,0xFFCD,0xFFD7,0xFFE0,0xFFE8,0xFFEF,0xFFF5,0xFFF9,0xFFFC,0xFFFE
            ,0xFFFE,0xFFFE,0xFFFC,0xFFF9,0xFFF5,0xFFEF,0xFFE8,0xFFE0,0xFFD7,0xFFCD,0xFFC1,0xFFB4,0xFFA6,0xFF96,0xFF86,0xFF74
            ,0xFF61,0xFF4C,0xFF37,0xFF20,0xFF08,0xFEEF,0xFED4,0xFEB9,0xFE9C,0xFE7E,0xFE5E,0xFE3E,0xFE1C,0xFDF9,0xFDD5,0xFDAF
            ,0xFD89,0xFD61,0xFD38,0xFD0E,0xFCE2,0xFCB6,0xFC88,0xFC59,0xFC28,0xFBF7,0xFBC4,0xFB91,0xFB5C,0xFB25,0xFAEE,0xFAB5
            ,0xFA7C,0xFA41,0xFA04,0xF9C7,0xF989,0xF949,0xF908,0xF8C6,0xF883,0xF83F,0xF7F9,0xF7B3,0xF76B,0xF722,0xF6D8,0xF68D
            ,0xF640,0xF5F3,0xF5A4,0xF554,0xF503,0xF4B1,0xF45E,0xF40A,0xF3B4,0xF35E,0xF306,0xF2AE,0xF254,0xF1F9,0xF19D,0xF140
            ,0xF0E1,0xF082,0xF022,0xEFC0,0xEF5E,0xEEFA,0xEE95,0xEE2F,0xEDC9,0xED61,0xECF8,0xEC8E,0xEC23,0xEBB7,0xEB49,0xEADB
            ,0xEA6C,0xE9FC,0xE98B,0xE918,0xE8A5,0xE831,0xE7BC,0xE745,0xE6CE,0xE656,0xE5DC,0xE562,0xE4E7,0xE46B,0xE3EE,0xE370
            ,0xE2F1,0xE270,0xE1F0,0xE16E,0xE0EB,0xE067,0xDFE2,0xDF5D,0xDED6,0xDE4F,0xDDC6,0xDD3D,0xDCB3,0xDC28,0xDB9C,0xDB0F
            ,0xDA81,0xD9F2,0xD963,0xD8D3,0xD841,0xD7AF,0xD71C,0xD689,0xD5F4,0xD55F,0xD4C9,0xD432,0xD39A,0xD301,0xD268,0xD1CD
            ,0xD132,0xD097,0xCFFA,0xCF5D,0xCEBE,0xCE20,0xCD80,0xCCE0,0xCC3E,0xCB9D,0xCAFA,0xCA57,0xC9B3,0xC90E,0xC868,0xC7C2
            ,0xC71C,0xC674,0xC5CC,0xC523,0xC479,0xC3CF,0xC324,0xC279,0xC1CD,0xC120,0xC073,0xBFC5,0xBF16,0xBE67,0xBDB7,0xBD06
            ,0xBC55,0xBBA4,0xBAF2,0xBA3F,0xB98B,0xB8D8,0xB823,0xB76E,0xB6B9,0xB603,0xB54C,0xB495,0xB3DE,0xB326,0xB26D,0xB1B4
            ,0xB0FA,0xB040,0xAF86,0xAECB,0xAE10,0xAD54,0xAC98,0xABDB,0xAB1E,0xAA60,0xA9A2,0xA8E4,0xA825,0xA766,0xA6A7,0xA5E7
            ,0xA527,0xA466,0xA3A5,0xA2E4,0xA222,0xA160,0xA09E,0x9FDC,0x9F19,0x9E55,0x9D92,0x9CCE,0x9C0A,0x9B46,0x9A81,0x99BC
            ,0x98F7,0x9832,0x976D,0x96A7,0x95E1,0x951B,0x9454,0x938E,0x92C7,0x9200,0x9139,0x9071,0x8FAA,0x8EE2,0x8E1A,0x8D53
            ,0x8C8B,0x8BC2,0x8AFA,0x8A32,0x8969,0x88A1,0x87D8,0x870F,0x8647,0x857E,0x84B5,0x83EC,0x8323,0x825A,0x8191,0x80C8
            ,0x7FFF,0x7F36,0x7E6D,0x7DA4,0x7CDB,0x7C12,0x7B49,0x7A80,0x79B7,0x78EE,0x7825,0x775D,0x7694,0x75CC,0x7503,0x743B
            ,0x7373,0x72AB,0x71E3,0x711B,0x7054,0x6F8C,0x6EC5,0x6DFE,0x6D37,0x6C70,0x6BA9,0x6AE3,0x6A1D,0x6957,0x6891,0x67CB
            ,0x6706,0x6641,0x657C,0x64B8,0x63F3,0x632F,0x626C,0x61A8,0x60E5,0x6022,0x5F5F,0x5E9D,0x5DDB,0x5D1A,0x5C58,0x5B97
            ,0x5AD7,0x5A17,0x5957,0x5897,0x57D8,0x5719,0x565B,0x559D,0x54E0,0x5423,0x5366,0x52AA,0x51EE,0x5133,0x5078,0x4FBD
            ,0x4F03,0x4E4A,0x4D91,0x4CD8,0x4C20,0x4B68,0x4AB1,0x49FB,0x4945,0x488F,0x47DA,0x4726,0x4672,0x45BF,0x450C,0x445A
            ,0x43A8,0x42F7,0x4247,0x4197,0x40E8,0x4039,0x3F8B,0x3EDE,0x3E31,0x3D85,0x3CD9,0x3C2E,0x3B84,0x3ADB,0x3A32,0x398A
            ,0x38E2,0x383B,0x3795,0x36F0,0x364B,0x35A7,0x3504,0x3461,0x33BF,0x331E,0x327E,0x31DE,0x313F,0x30A1,0x3004,0x2F67
            ,0x2ECB,0x2E30,0x2D96,0x2CFD,0x2C64,0x2BCC,0x2B35,0x2A9F,0x2A09,0x2975,0x28E1,0x284E,0x27BC,0x272B,0x269B,0x260B
            ,0x257D,0x24EF,0x2462,0x23D6,0x234B,0x22C1,0x2238,0x21AF,0x2128,0x20A1,0x201B,0x1F97,0x1F13,0x1E90,0x1E0E,0x1D8D
            ,0x1D0D,0x1C8E,0x1C10,0x1B93,0x1B17,0x1A9B,0x1A21,0x19A8,0x1930,0x18B8,0x1842,0x17CD,0x1759,0x16E5,0x1673,0x1602
            ,0x1592,0x1522,0x14B4,0x1447,0x13DB,0x1370,0x1306,0x129D,0x1235,0x11CE,0x1169,0x1104,0x10A0,0x103E,0x0FDC,0x0F7C
            ,0x0F1C,0x0EBE,0x0E61,0x0E05,0x0DAA,0x0D50,0x0CF8,0x0CA0,0x0C49,0x0BF4,0x0BA0,0x0B4D,0x0AFA,0x0AAA,0x0A5A,0x0A0B
            ,0x09BE,0x0971,0x0926,0x08DC,0x0893,0x084B,0x0805,0x07BF,0x077B,0x0738,0x06F6,0x06B5,0x0675,0x0637,0x05F9,0x05BD
            ,0x0582,0x0549,0x0510,0x04D9,0x04A2,0x046D,0x043A,0x0407,0x03D5,0x03A5,0x0376,0x0348,0x031C,0x02F0,0x02C6,0x029D
            ,0x0275,0x024E,0x0229,0x0205,0x01E2,0x01C0,0x01A0,0x0180,0x0162,0x0145,0x012A,0x010F,0x00F6,0x00DE,0x00C7,0x00B2
            ,0x009D,0x008A,0x0078,0x0068,0x0058,0x004A,0x003D,0x0031,0x0027,0x001E,0x0016,0x000F,0x0009,0x0005,0x0002,0x0000
            ,0x0000,0x0000,0x0002,0x0005,0x0009,0x000F,0x0016,0x001E,0x0027,0x0031,0x003D,0x004A,0x0058,0x0068,0x0078,0x008A
            ,0x009D,0x00B2,0x00C7,0x00DE,0x00F6,0x010F,0x012A,0x0145,0x0162,0x0180,0x01A0,0x01C0,0x01E2,0x0205,0x0229,0x024F
            ,0x0275,0x029D,0x02C6,0x02F0,0x031C,0x0348,0x0376,0x03A5,0x03D6,0x0407,0x043A,0x046E,0x04A3,0x04D9,0x0510,0x0549
            ,0x0583,0x05BE,0x05FA,0x0637,0x0675,0x06B5,0x06F6,0x0738,0x077B,0x07BF,0x0805,0x084C,0x0893,0x08DC,0x0926,0x0972
            ,0x09BE,0x0A0B,0x0A5A,0x0AAA,0x0AFB,0x0B4D,0x0BA0,0x0BF4,0x0C4A,0x0CA0,0x0CF8,0x0D51,0x0DAA,0x0E05,0x0E61,0x0EBF
            ,0x0F1D,0x0F7C,0x0FDD,0x103E,0x10A1,0x1104,0x1169,0x11CF,0x1236,0x129D,0x1306,0x1370,0x13DB,0x1448,0x14B5,0x1523
            ,0x1592,0x1602,0x1674,0x16E6,0x1759,0x17CD,0x1843,0x18B9,0x1930,0x19A8,0x1A22,0x1A9C,0x1B17,0x1B93,0x1C10,0x1C8F
            ,0x1D0E,0x1D8E,0x1E0F,0x1E91,0x1F13,0x1F97,0x201C,0x20A2,0x2128,0x21B0,0x2238,0x22C1,0x234C,0x23D7,0x2463,0x24EF
            ,0x257D,0x260C,0x269B,0x272C,0x27BD,0x284F,0x28E2,0x2975,0x2A0A,0x2A9F,0x2B36,0x2BCD,0x2C65,0x2CFD,0x2D97,0x2E31
            ,0x2ECC,0x2F68,0x3004,0x30A2,0x3140,0x31DF,0x327E,0x331F,0x33C0,0x3462,0x3504,0x35A8,0x364C,0x36F0,0x3796,0x383C
            ,0x38E3,0x398A,0x3A32,0x3ADB,0x3B85,0x3C2F,0x3CDA,0x3D85,0x3E32,0x3EDE,0x3F8C,0x403A,0x40E8,0x4198,0x4247,0x42F8
            ,0x43A9,0x445B,0x450D,0x45BF,0x4673,0x4727,0x47DB,0x4890,0x4946,0x49FC,0x4AB2,0x4B69,0x4C21,0x4CD9,0x4D91,0x4E4A
            ,0x4F04,0x4FBE,0x5078,0x5133,0x51EF,0x52AA,0x5367,0x5423,0x54E0,0x559E,0x565C,0x571A,0x57D9,0x5898,0x5957,0x5A17
            ,0x5AD8,0x5B98,0x5C59,0x5D1A,0x5DDC,0x5E9E,0x5F60,0x6023,0x60E6,0x61A9,0x626C,0x6330,0x63F4,0x64B8,0x657D,0x6642
            ,0x6707,0x67CC,0x6892,0x6958,0x6A1E,0x6AE4,0x6BAA,0x6C71,0x6D38,0x6DFE,0x6EC6,0x6F8D,0x7054,0x711C,0x71E4,0x72AC
            ,0x7374,0x743C,0x7504,0x75CD,0x7695,0x775E,0x7826,0x78EF,0x79B8,0x7A81,0x7B49,0x7C12,0x7CDB,0x7DA4,0x7E6D,0x7F36,
};


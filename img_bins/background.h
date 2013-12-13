
//{{BLOCK(background)

//======================================================================
//
//	background, 256x160@4, 
//	+ palette 256 entries, not compressed
//	+ 115 tiles (t|f|p reduced) lz77 compressed
//	+ regular map (flat), lz77 compressed, 32x20 
//	Total size: 512 + 1640 + 428 = 2580
//
//	Time-stamp: 2013-12-12, 19:03:18
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.6
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short backgroundTiles[820] __attribute__((aligned(4)))=
{
	0x6010,0x000E,0x0030,0xF000,0x9001,0x4005,0x4444,0x0044,
	0x1140,0x1111,0x3140,0x3333,0x00AD,0x4403,0x0700,0x9014,
	0x0003,0x441E,0x1E00,0x1106,0x3333,0x3333,0x0B90,0x0F00,
	0x0C32,0x3333,0x2223,0x1FF0,0x1F50,0x4443,0x3309,0x1433,
	0xF013,0x111F,0x0041,0x412B,0x0041,0x416E,0x2224,0x4133,
	0x53B0,0x0081,0x1347,0x2221,0x1333,0x6022,0xCD03,0x3F90,
	0x6710,0x2222,0x01B0,0x5FD0,0x0014,0x6ECB,0x0014,0x408C,
	0x2303,0x7FF0,0x0B30,0xBC00,0x7B43,0x0022,0xF0A0,0x401F,

	0x010B,0x130F,0xA000,0x0FD1,0xD180,0x331F,0x4233,0x3341,
	0x1423,0x1306,0x2333,0x3231,0x0730,0x0F10,0x1123,0x3322,
	0x5123,0x3424,0x2432,0x0701,0x215A,0x0F01,0x0024,0x002C,
	0x4173,0x1A00,0x6712,0x0123,0x113B,0x1433,0x0132,0x0107,
	0x000F,0xBFB3,0x1321,0x0134,0x111B,0x011F,0x215C,0x9127,
	0xF00B,0xED03,0x0DD1,0x01F0,0xA010,0x0014,0x00A0,0x3103,
	0x0740,0x10B9,0x230F,0x1300,0x2321,0x6800,0x1334,0xA000,
	0x3265,0xA000,0x0700,0x4133,0x1401,0x1022,0xF6BB,0xA000,

	0xE421,0xA000,0x1710,0x1044,0x40E9,0x12A0,0x01B8,0x22EC,
	0xFD01,0x0160,0x1010,0x1123,0x3812,0x1333,0x0BC1,0x0F10,
	0x1802,0x3213,0x2833,0x2144,0x8A01,0x0012,0x2441,0x4233,
	0x233F,0x2021,0x3007,0x120F,0x100B,0x11F3,0x0003,0x3DF4,
	0x4341,0x0F01,0x0710,0x0F50,0xCB31,0x0112,0x53CF,0x0123,
	0x13D7,0xCBC0,0x4213,0x8B22,0x6000,0x125B,0x6000,0x0041,
	0x0060,0x42CB,0xCB00,0x0710,0x20F5,0x220F,0x0197,0x1154,
	0x317C,0x5501,0x0023,0xFC60,0x0710,0x0F50,0xB720,0xD010,

	0xCE60,0x7F02,0x1333,0x02A8,0x13A3,0x1E02,0x0042,0x42B7,
	0x1314,0x326B,0xAB31,0xF742,0x0223,0x21F8,0x2810,0xF001,
	0x443F,0x0144,0x11BF,0x21D3,0x41AB,0x12BB,0x22DB,0xF5DF,
	0xD721,0xB710,0xBF10,0x9362,0x0221,0x139F,0x0340,0x425F,
	0xB700,0x0142,0x4220,0x012D,0x417B,0x12FC,0x9F1C,0x5B00,
	0x1423,0x6000,0x0D03,0x7C70,0xA110,0xAB03,0x10FA,0x1203,
	0x1250,0x42E1,0x037B,0x4283,0x0F01,0x9913,0xCD80,0x1213,
	0x6F01,0x7B01,0x2312,0x7701,0x117F,0xA002,0x3110,0xBB10,

	0xEC60,0xBF10,0x9F01,0x7361,0x13EC,0x9097,0x63C7,0x126F,
	0x7B03,0xE503,0x3122,0x1300,0x2211,0x1131,0x2244,0xBC31,
	0xBE03,0x7031,0x931E,0x13A3,0x5353,0x33A7,0xB734,0x1F03,
	0xD321,0x021F,0x232B,0x7004,0x2303,0x3413,0x02BE,0x3113,
	0xA340,0x4423,0xA390,0x1752,0xA390,0x5742,0x0221,0x1227,
	0x2703,0x0224,0x10AE,0xF083,0xAF03,0x0B60,0x0014,0x1480,
	0x7201,0xFFC2,0x2304,0x0F23,0x337D,0x7C00,0x1732,0xA402,
	0x1F12,0x0F10,0x0021,0x7B60,0x0033,0x2060,0x727D,0x03E6,

	0x24BE,0xEF13,0x6F01,0x83E4,0x61EF,0x00B7,0x337E,0x0211,
	0x3313,0xBC21,0xDB02,0x3214,0x03E3,0x43E6,0x03CF,0x412F,
	0x7F11,0x7231,0x5017,0x84D3,0x14AB,0x20B3,0x9360,0x61AF,
	0xBB07,0x6000,0x0014,0x0260,0x136F,0x238F,0xE342,0xB962,
	0x225E,0x9003,0x0021,0x1260,0x901B,0x20D3,0x33AF,0x117A,
	0x6E03,0xB173,0xEB10,0xAA03,0x0432,0x24B6,0x3258,0xD503,
	0xC134,0x2373,0x12E0,0x1222,0x00B0,0x2150,0x17F2,0x9314,
	0x4132,0x1222,0x3206,0x1141,0x3121,0xB714,0x5F04,0xF533,

	0x4F11,0x6B14,0x7735,0x4C01,0x0414,0x140B,0x1705,0x039E,
	0x421F,0x0024,0x9460,0x142E,0x0341,0x22B1,0x247A,0xB110,
	0x7351,0x0914,0xB772,0x0032,0x327E,0x00AF,0x317E,0x5605,
	0x1021,0x05A7,0x0466,0x2088,0xD598,0x8512,0x8F73,0x0323,
	0x124E,0x9904,0x0512,0xF552,0x0720,0xDA24,0x3F72,0x2B02,
	0x0041,0x13AB,0xAF00,0x10A5,0x2407,0xBB00,0x2331,0xAF73,
	0x0514,0xB7B7,0xA710,0x0514,0x04C7,0x125F,0x3B06,0x0310,
	0xCB60,0x04CC,0x01B7,0x12CF,0x0442,0x0461,0x12F6,0x7A42,

	0x0511,0x65BA,0x16DC,0x0067,0x3160,0x6000,0xDE23,0x6000,
	0x0710,0x0014,0x0060,0x84B5,0x142D,0x21A2,0x12D6,0x1233,
	0x41E6,0xF905,0x2013,0x1207,0x43F6,0x02E7,0x8432,0x016F,
	0x448B,0x1432,0xA352,0x76CF,0xFF0B,0x1316,0x2B16,0x7C04,
	0x3326,0x2316,0xCF35,0x5314,0xE315,0x427F,0xE305,0x0011,
	0x0710,0xF315,0xE216,0x7C10,0xC225,0x1357,0x5406,0x0442,
	0x44CB,0xF901,0x7F15,0x4E02,0x26FF,0x948F,0x256F,0x0627,
	0x120B,0x0531,0x2448,0x84EE,0xB1FB,0x4905,0x0623,0x10C6,

	0x42C7,0x4323,0xCF20,0xA4CC,0x166F,0x12D3,0x0011,0x00BF,
	0x41C7,0xFC31,0x0300,0xFF62,0xD356,0xBB10,0xF316,0x0408,
	0x4341,0x36F6,0x23F7,0x47F0,0x06B3,0x2366,0x6A06,0xC710,
	0xFA42,0xC720,0x8C15,0x6956,0x1B07,0xC014,0x1012,0x43BF,
	0x00FA,0x0260,0x05C1,0x76F2,0x1687,0x1193,0x9905,0xFB44,
	0x5407,0x9910,0xA100,0x0118,0xAF40,0x0514,0x9527,0xEB49,
	0x2715,0xBB17,0xA710,0x0532,0x12C6,0x0E08,0xE7A5,0x18EC,
	0x16E0,0x27C0,0x1293,0xE7C5,0xAD01,0x2241,0x04FF,0x8087,

	0x17AF,0x7363,0x4503,0x16DF,0x0386,0x6069,0xFE60,0x3297,
	0xE417,0x4111,0x9F16,0x4F03,0xE7A5,0x0E12,0xC642,0x6000,
	0xA907,0x2313,0x0121,0x054A,0x2343,0x1236,0x0242,0x05C7,
	0x21DF,0x6B17,0x1536,0xB624,0x4808,0x0721,0x025C,0x42E7,
	0xC100,0x1D10,0xB542,0x1F06,0x5623,0x05D2,0x4158,0x7808,
	0x0641,0x77FB,0x0441,0x20E3,0x0507,0x4170,0x4306,0xFF42,
	0x1B08,0x00EA,0x0060,0x0003,0x1207,0xEC06,0x0612,0x219B,
	0x17D5,0x236B,0x13CF,0x6000,0x0032,0x1360,0x4813,0x40BE,

	0x1260,0x8006,0x1D04,0x0C37,0xB905,0x1242,0xBE32,0xDA02,
	0x1032,0x1507,0xB3D1,0x09D0,0x03CF,0x3320,0x3253,0x2B09,
	0x0912,0x222B,0x0732,0x09B0,0xE133,0xCF00,0x484A,0x2E09,
	0x2343,0x3232,0xDF07,0x14FF,0x0418,0x0994,0x1117,0x2112,
	0x1026,0x10AB,0xF0B3,0xD5C3,0x3F65,0xE708,0x0723,0x3253,
	0xEB08,0x0812,0x2EEB,0x3222,0x0730,0x2812,0x181F,0x09AB,
	0x4370,0x4157,0x6000,0x0913,0x3270,0xBC08,0x0710,0xD411,
	0x37F7,0x01F2,0x3330,0x609E,0x22C3,0x9506,0xE710,0xD728,

	0x97FE,0xC881,0x08EB,0x1008,0x6945,0x080D,0x092B,0x13EB,
	0x427F,0xE006,0xD706,0xE416,0x1BB8,0xF809,0x8F04,0x7307,
	0x06FF,0x09BB,0x4873,0x741F,0xD86F,0x08EB,0xB9D7,0x086B,
	0xAF8C,0xEB08,0x0813,0x23EB,0xE318,0x8B19,0x1EA0,0x590A,
	0x427E,0x0809,0x3215,0x3A05,0xA011,0x8B79,0xEBE8,0xFF13,
	0x3619,0x0217,0xAF00,0x790B,0xD712,0x6E08,0x89A5,0x6307,
	0x19DF,0x0997,0x41F3,0xFF09,0xC726,0x0393,0x8B99,0xEBF8,
	0x09FF,0x09FA,0x2AF8,0x1557,0x193D,0x2635,0x7193,0x954A,

	0xFFDA,0x6010,0xC716,0x0393,0x5F1B,0x03F3,0x0373,0xA313,
	0x03F3,0x73F7,0x1303,0xF3A3,0xA203,0x423F,0x03F3,0x0373,
	0x881B,0xF3FE,0x7303,0x2303,0xF3A3,0x6303,0xCD03,0x1D4F,
	0x335F,0x2DFF,0x0D6F,0x1D77,0x5B8D,0x5945,0x9937,0x4043,
	0x2D1F,0xFF2F,0x371D,0x1FF0,0x3F00,0x2B6D,0xB71A,0x83B9,
	0xED1D,0x2F9D,0xD9E7,0x20A3,0x391F,0x2433,0x0912,0x0DD3,
	0xF07C,0xC01F,0x67FD,0x9FA0,
};

const unsigned short backgroundMap[214] __attribute__((aligned(4)))=
{
	0x0010,0x0005,0x003F,0xF000,0xF001,0xF001,0xF001,0xF001,
	0xF001,0x8001,0x01F0,0x0001,0x0002,0x0003,0x0E04,0x0500,
	0x0600,0x01F0,0x01F0,0x0F00,0x0005,0x0704,0x0800,0x0900,
	0x0100,0x0440,0x4D10,0x000A,0x000B,0x000C,0x0D07,0x0E00,
	0x0F00,0x01F0,0x01F0,0x0F00,0x0E00,0x1004,0x1100,0x1200,
	0x4100,0x400A,0x133F,0x1400,0x1500,0x3FF0,0xF0C1,0x6001,
	0x163F,0x1700,0x1800,0x3F60,0x1907,0x1A00,0x1B00,0x3FF0,
	0x01F0,0x7F60,0x1C04,0x1D00,0x1E00,0x7F60,0x001F,0x2011,

	0x2100,0x3F60,0x0022,0xF023,0x9001,0x0D20,0x0422,0xBF50,
	0x0421,0x0420,0x1F20,0x5004,0x24BF,0x2500,0x2600,0x60B8,
	0x277F,0x71F0,0x1950,0x3F60,0x0028,0x2025,0x2904,0xFF60,
	0x002A,0x002B,0xE02C,0x3FF0,0x3FF0,0x7F60,0x002D,0x002E,
	0x832F,0x3F61,0x0030,0x0031,0xF032,0xF03F,0x823F,0xBF60,
	0x0033,0x0034,0x6135,0x367F,0x000E,0x0037,0xF038,0xF03F,
	0x603F,0x39FF,0x0008,0x003A,0x613B,0x3CBF,0x3D00,0x0038,
	0xF03E,0xF03F,0x613F,0x3F3F,0x4000,0x0020,0x6141,0x42FF,

	0x4300,0x4400,0xF0E0,0xF03F,0x613F,0x457F,0x4600,0x4700,
	0x6283,0x483F,0x4900,0x4A00,0x3FF0,0x3FF0,0x6182,0x4BBF,
	0x4C00,0x4D00,0x7F62,0x0E4E,0x4F00,0x5000,0x3FF0,0x3FF0,
	0xFF61,0x0851,0x5200,0x5300,0xBF62,0x0054,0x3855,0x5600,
	0x3FF0,0x3FF0,0x3F62,0x0057,0x2058,0x5900,0xFF62,0x005A,
	0x005B,0xE05C,0x3FF0,0x3FF0,0x7F62,0x005D,0x005E,0x835F,
	0x3F63,0x0060,0x0061,0xF062,0xF03F,0x823F,0xBF62,0x0063,
	0x0064,0x6365,0x667F,0x000E,0x0067,0xF068,0xF03F,0x623F,

	0x69FF,0x0008,0x006A,0x436B,0x6CBF,0x6D00,0x0082,0x6E01,
	0x6F00,0x7000,0x0120,0x3271,0x7200,0x01F0,0x0D20,0x0471,
	0x2130,0x146F,0x6E04,0x1004,0x6C33,0x3F24,
};

const unsigned short backgroundPal[256] __attribute__((aligned(4)))=
{
	0x0000,0x0D72,0x1084,0x2236,0x04C9,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(background)

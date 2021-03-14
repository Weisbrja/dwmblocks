static const Block blocks[] = {
	/* icon   command                        update interval   update signal */
	{ "",     "dwmblocks_network",           30,               0 },
	{ "",     "dwmblocks_keyboard_layout",   0,                1 },
	{ "",     "dwmblocks_volume",            0,                2 },
	{ "",     "dwmblocks_memory",            30,               0 },
	{ "",     "dwmblocks_date",              60,               0 },
	{ "",     "dwmblocks_battery",           30,               0 },
};

// sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "^d^|";
static unsigned int delimLen = 4;

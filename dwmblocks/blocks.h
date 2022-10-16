//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
	{"<\x01 ", "dwmnet", 5, 0},

    {"\x02 ", "upt", 10, 0},
 
    {"\x03 ", "uname -r", 10, 0},
       /* {"\x03", "weather", 1799, 0}, */

    {"\x04﨎 ", "cputemp", 1, 0},

	{"\x05  ", "core", 2, 0},

	{"\x06 ", "memory2", 5, 0},

	{"\x07 ", "updates", 5, 0},

	{"\x08 ", "pamixer --get-volume-human", 1, 0},

	{"\x09 ", "clock", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '<';

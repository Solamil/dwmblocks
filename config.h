//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "connet",						 5,		6},
	{"", "battery",						 5, 		5},
	{"", "partitions",					 5,		4},
	{"", "volume",						 0, 		3},
	{"", "keyboard-layout", 				 0, 	        2},
	{"", "clock",						50,		1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
//static char delim = '|';
static char *delim = " | ";
static unsigned int delimLen = 6;

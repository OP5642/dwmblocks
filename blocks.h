#define SC(route) "$HOME/.local/bin/" #route
//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"| \uf241  ", 		SC(./battery),				60,		0}, 	//Battery
	{"\uf2db ", 		SC(./cpu),					2,		0}, 	//Battery
	{"\uf85a ",  		SC(./ram),					30,		0},		//Memory
	{"\uf028 ", 		SC(./volume),				0,		10},	//Volume
	{"\uf1eb ", 		SC(./wifi_ssid),			3,		0},		//Wifi_SSID
	{"", 				SC(./network),				1,		0},		//Network
	{"", 				"date '+%F %a %H:%M'",		30,		0},		//Date
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

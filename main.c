#include <stdio.h>

#define NEW_LINE putchar(0x0A)
void show(char *s) { printf("%s", s); }

void show_header () {
	show("[ laptrinh.io ]"); NEW_LINE;
	show("---------------"); NEW_LINE;
}

#define HEADER show_header()

/* MAIN PROGRAM */
int main(int argc, char * argv[])
{
	HEADER;
	show("A sample of simplifying the printf() method");
	NEW_LINE;
	
	return 0;
}
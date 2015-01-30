// ********************************************************************
//	Here's a "quick and dirty" assignment for you. Write a program
//	that will take a command line and "parse" the arguments.  So,
//	we'll assume that your command line
//	looks something like:
//
//	   pgmName  options
//
//	for example,  it might be
//
//	ls -ltga
//
//	What your program should do is 1) list the pgm name(ls in this
//	example) and each of the options (l, t, g, a) on separate lines,
//	and THEN actually run the command.
//
//	We'll assume that each command has one set of options that start
//	the '-' character and includes each option as a single letter.
//
//	So, we could have sort -n, but not sort --key=1 since that wouldn't
//	fit our model at this point..
//
// *********************************************************************
// Samuel Epstein
// Mayur Kotamraju
// Charles Bido
// Emanuel Taylor

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void doTheThing(int, char*[]);

int main(int argc, char** argv) {
	doTheThing(argc, argv);
   return 0;
}

/**
 * This does the thing.
 * @param argc {{int}} standard system level argc param
 * @param argv {{char *}} standard system level argv param
 */
void doTheThing(int argc, char *argv[]) {
	int i; 
	printf("The command is: %s, and the arguments are: ", argv[0]);
	for(i = 1; i<argc; i++) { printf("%s ", argv[i]); }
	printf("\n");
}

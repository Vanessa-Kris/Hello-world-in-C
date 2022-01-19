/**
helloworld.c
This program is created independently by Robert Beisert
This program is based on the original "Hello, world!" program from K&R __The_C_Programming_Language__
 
Prints "Hello, world!" to the terminal
**/
 
//In order to use functions from other sources, we have to use #include
//printf() comes from the file stdio.h
//stdio.h is a default library, so we surround the file name with <>
#include <stdio.h>
 
 
/*
This is a comment block
C comment blocks are defined by the symbols you see here
*/
 
/*    Comment blocks can be on one line, if you want */
 
//Inline comments, defined by the two slashes, make everything else on the line into a comment
 
int main(int argc, char *argv[])
{
 
//Prints text directly to the terminal
//"\n" is the newline character - it acts like the ENTER key in Microsoft Word.
printf("Hello, world!\n");
//This function is designed to return an int
//In order to make these funtions work properly, we have to return some integer
//Conventionally, we return 0 if everything worked properly
return 0;
 
}

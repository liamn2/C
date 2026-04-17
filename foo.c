#include <stdio.h>

int foo(void);

int main(void)
{
    int i;
    i = foo();    
    printf("%d\n", i);
}

int foo(void)  
{
    return 3490;
}

//int foo() and int foo(void) are not the same. Leaving void out of the prototype indicates to the compiler that there is no additional information about the parameters to the function. 
//It effectively turns off all that type checking.
//Pointer = Data Index (Location, Address). Symbol is '&', Ampersand.

#include <stdio.h>

int main(void)
{
    int i = 10;

    printf("The value of i is %d\n", i); //%d prints decimal integer.
    printf("And its address is %p\n", (void *)&i); //%p prints pointer.
}

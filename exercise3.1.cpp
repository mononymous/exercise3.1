/* exercise3.1.cpp : calculate absolute value */
#include <stdio.h>
int main()
{
    float a, b;
    fprintf(stdout, "Please, input a real number!\n");
    fscanf(stdin, "%f", &a);
    b=a;
    if( a < 0.0 )
    {
        b=-a;
    }
    fprintf(stdout, "a=%f, |a|=%f\n", a, b);
	
	fprintf(stdout, "17-1401-023-3 Kenta Kawaguchi.\n" );
    return 0;
}
#include<stdio.h>
#include "max.h"

// birth of Linux .so file (dynamical library file)
// we can read the article of jiqingwu of cnblogs.com
/**
 * 1 writing max.c file
 * 2 "gcc -fPIC -shared -o libmax.so max.c"
 * 3 writing max.h file
 * 4 writing test.c file with main function
 * 5 "gcc test.c -L. -lmax"
 * 6 "LD_LIBRARY_PATH=. ./a.out"
 * 
 * we can write a file of MakeFile to auto
 * */
int main(int argc, char *argv[])
{
    int a = 10, b = -2, c = 100;
    printf("max = %d.\n", max(a,b,c));
    return 0;
}
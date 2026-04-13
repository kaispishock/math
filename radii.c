#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265359
int main(int argc, char **argv)
{
    char *endptr;
    float r=strtof(argv[1], &endptr);
    if (*endptr!='\0') {
        fprintf(stderr,"Err: %s is not a valid float!",argv[1]);
        return 1;
    }
    float C=(2*PI)*r;
    float A=(PI*r)*(PI*r);
    printf("C: %f\n",C);
    printf("A: %f\n",A);
    return 0;
}
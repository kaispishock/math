#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// triIneqSides2ifExists - kaispishock
int compareFloatFunc(const void *a, const void *b) {
    float float_a = *((const float *)a);
    float float_b = *((const float *)b);

    if (float_a < float_b) return -1;
    if (float_a > float_b) return 1;
    return 0;
}
int main(int argc, char * argv[]) {
    // TODO: fix segment faults by implementing actual foolproofing
    if (argv[1] == NULL) { // check if the program was given any arguments.
        fprintf(stderr, "Error: No arguments (exit code 1)\n");
        return 1;
    } else {
        if (argc == 3) { //check for valid number of arguments

            float mainArray[3]; // define vars
            float sArgv2;
            bool ifExists;

            mainArray[1]=atof(argv[1]); //put command line arguments into an array that i can sort.
            mainArray[2]=atof(argv[2]);
            mainArray[3]=atof(argv[3]);

            qsort(mainArray, 3, sizeof(float), compareFloatFunc); //sort array in acending order.

            sArgv2=mainArray[1]+mainArray[2]; //calculate sum of two least values

            if (sArgv2 < mainArray[3] ) { //use the triangle inequality theorem to determing if the triangle exists or not.
                ifExists=true;
            } else {
                ifExists=false;
            }
        } else {
            fprintf(stderr, "Error: Invalid arguments (exit code 2)\n");
            return 2;
        }
        if (ifExists=true) { // tell the user the results (in a user friendly way.)
            printf("The given triangle exists.");
        } else { // no other values than false, do i can use an else statement.
            printf("The given triangle does not exist.")
        }
        return 0;
    }
}

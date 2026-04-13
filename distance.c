#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// distance v1 - kaispishock

int main(int argc, char * argv[]) {
	if (argv[1]="-h","--help") {
		printf("usage: distance [-h] [1] [2] [3] [4]"); // howto format help?
		return 0;
	} else if (argc=4) {
		float x1,x2,y1,y2;	// make the vars.
		x1=atof(argv[1]);	// take float from string, and use it to define vars.
		x2=atof(argv[2]);
		y1=atof(argv[3]);
		y2=atof(argv[4]);
		float deltax=x2-x1; float deltay=y2-y1;	// find change in x and y
		float awns=sqrt(powf(deltax, 2.0f)+powf(deltay, 2.0f));	// plug it into the distance formula
		printf("%f/n", awns);	// output
		return 0;	// exit
	} else {	//error handleing for when supplied with none or more than the ammount of args needed
		printf("Invalid number of arguments (exit code 1)/n");
		printf("usage: distance [-h] [1] [2] [3] [4]"); // howto format help?
		return 1;
	}
}

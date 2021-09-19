#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int j;
    double e;
    char st[1000];
    // Read and save an integer, double, and String to your variables.
    scanf("%d %lf %[^\n]s",&j,&e,st);
    // Print the sum of both integer variables on a new line.
    printf("%d\n",i+j);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n",d+e);
    // Concatenate and print the String variables on a new line
	printf("%s%s\n",s,st);
    // The 's' variable above should be printed first.

    return 0;
}
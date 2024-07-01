//home work 1: a code to solve the quadric formula
#include <stdio.h>
#include <math.h>

int main(){
//printing what's the purpose of this code
printf("solving the quadric equation ax^2 + bx + c = 0 \n");
//taking the user's inputs
printf("Enter the coefficient a:\n");
float a;
scanf("%f",&a);
printf("Enter the coefficient b:\n");
float b;
scanf("%f",&b);
printf("Enter the constent c:\n");
float c;
scanf("%f",&c);
//solving the equation
//printing the equation that is being solved
printf("solving the equation: %fx^2 + %fx + %f = 0\n",a,b,c);
//calculating the discremenant (delta)
float delta = b*b - 4*a*c;
//finding the solutions
//if delta > 0
if (delta > 0) {
float x = (-b + sqrt(delta))/(2*a);
float y = (-b - sqrt(delta))/(2*a);
printf("The discremenant delta > 0, so, the equation has 2 real solutions:\nx = %f\nx = %f ",x,y);
}
//if delta = 0
else if (delta = 0) {
    float x = -b/(2*a);
    printf("The discremenant delta = 0, so, the equation has only 1 real solution:\nx = %f",x);
}
//if delta < 0
else {
    printf("The discremenant delta < 0, so, The equation has no real solutions.");
}
    return 0;
}
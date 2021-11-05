// This simple program shows call-by value type function
#include<stdio.h>

const pi = 3.14;
double surf(double);
void print(double);

int main(){

    double r; // This is variable for radius
    // Read the radius from keyboard
    printf("Please enter radius: ");
    scanf("%lf",&r);

    // Calculate the surface by means of function call
    double s = surf(r); // This is the function call (call-by-value)

}

double surf(double a){

    double srf = pi * a* a;

    return srf;

}

void print(double b){

    printf("The surface of circle =%lf\n",b);


}
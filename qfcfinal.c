#include <stdio.h>
#include <math.h>

void print_x();
void print_i();

float a, b, c, discriminant, x1 , x2;

int main ()
{
    // Welcome User
    printf("Quadratic Formula Calculator - Jason Saini \n");
    printf("WARNING: Simplification and basic mathemtatical proficiency are required after end result!\n");
    printf("Before starting, making sure the quadratic equation is in standard form: \nf(x) = (ax^2) + bx + c , where f(x) = 0 \n");
    
    // Prompt User for a, b, c
    printf("\nEnter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    printf("Enter value of c: ");
    scanf("%f", &c);

    discriminant = (b*b)-(4*a*c);
    printf("The value of the discriminant is: %f\n", discriminant);

    if (discriminant >=0)
    {
        // Prints zeroes if x-intercepts are real numbers
        print_x();
    }
    else
    {// How would you ouput complex zeroes? 
        // Prints complex zeroes (a+bi)
        print_i();
    }
    return 0;
}

 void print_x ()
{  
    x1 = ((b* -1) + (sqrtf(discriminant)) )/ (2*a);
    x2 = ((b * -1) - (sqrtf(discriminant)) )/ (2*a);
    
    // Outputs the x-intercepts in a+bi form
    printf("x = - %f + (sqrt(%f))", b, discriminant); 
    printf("\n     ______________________________\n");
    printf("          %f", (2*a));
    printf("\nAND\n");
    printf("x = - %f - (sqrt(%f))", b, discriminant) ;
    printf("\n     ______________________________\n");
    printf("          %f", (2*a)); 
    
    // Prints the zeroes (required for graphing)
    printf("\nThe x-intercepts of this function are: %.3f and %.3f" ,x1 , x2);
    }
 void print_i ()
{
     // Make the discriminant positive
    discriminant = discriminant * -1;
    
    //Print i next to square root of discriminant
    printf("x = - %f + (sqrt(%f) * i)", b, discriminant); 
    printf("\n     ______________________________\n");
    printf("          %f", (2*a));
    printf("\nAND\n");
    printf("x = - %f - (sqrt(%f) * i)", b, discriminant) ;
    printf("\n     ______________________________\n");
    printf("          %f", (2*a)); 

}
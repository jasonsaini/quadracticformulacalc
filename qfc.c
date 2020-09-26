#include <stdio.h>
#include <math.h>

int main()
{   float a, b, c, discriminant, x1,x2;
    
    // Welcome User
    printf("Quadratic Formula Calculator - Jason Saini \n");
    printf("WARNING: Simplification and basic mathemtatical proficiency are required after end result!\n");
    printf("Before starting, making sure the quadratic equation is in standard form: \n(ax^2) + bx + c = (f(x), where f(x) = 0 \n");

    
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
    // Calculates the zeroes of the function if they are real and not complex
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
    else
    {// How would you ouput complex zeroes? 
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
    return 0;
}
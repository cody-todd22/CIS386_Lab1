#include<stdio.h>
#include<math.h>

int main(void){
    float a, b, c;

    printf("Enter the sides of your triangle: \n");

    printf("Enter the length of side A: \n");
    scanf("%f", &a);

    printf("Enter the length of side B: \n");
    scanf("%f", &b);

    printf("Enter the length of side C: \n");
    scanf("%f", &c);

    if((a < b + c) && (b < a + c) && (c < a + b))
    {
        if((a == b) && (b == c))
        {
            printf("You have an equilateral triangle \n");
        }
        else if((a == b) || (a == c) || (b == c)){
            printf("You have an isosceles triangle \n");
        }
        else
        {
            printf("You have a scalene triangle \n");
        }

        float n = (a + b + c) / 2;

        float area = sqrt(n * (n - a) * (n - b) * (n - c));

        printf("The area of your triangle is %f", area);
    }

    else
    {
        printf("It is impossible to make a triangle with these sides \n");
    }

    return 0;
}

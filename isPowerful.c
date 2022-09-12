#include <stdio.h>  
#include <string.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a number to check if it is powerful or not: ");
    scanf("%d", &num);
    
    while (num % 2 == 0) {
        int power = 0;
        while (num % 2 == 0) {
            num /= 2;
            power++;
        }
 
        if (power == 1){
            printf("false");
            return 0;
        }
    }   

   for(int factor = 3; factor <= sqrt(num); factor = factor + 2){
        int power = 0;
        while(num % factor == 0){
            num = num / factor;
            power++;
        }
        if(power == 1){
            printf("false");
            return 0;
        }
    }

    if(num == 1){
        printf("true");
        return 0;

    }
    else{
        printf("false");
        return 0;

    }
    
}
#include <stdio.h>
#include <cs50.h>
#include <math.h> //include round function library.

int main(void){
    
    int a = 0;
    float b;
    
    do{
        printf("How much change is owed?\n");
        b = GetFloat();
    } while (b < 0.00);
    
    float c = roundf(b*100) / 100;
    //printf("%f\n", c);
    int f = 100 * c;
    
    while (f > 0){
        //printf("%i\n", f);
        if (f%25 != f && f%25 >= 0) {
            f = f - 25;
        } else if (f%10 != f && f%10 >= 0) {
            f = f - 10;
        } else if (f%5 != f && f%5 >= 0) {
            f = f - 5;
        } else {
            f = f - 1;
        }
        a++;
    }
    
    printf("%i\n", a);
    
}
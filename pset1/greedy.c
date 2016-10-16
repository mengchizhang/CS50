#include <stdio.h>
#include <cs50.h>
#include <math.h> //include round function library.

int main(void){
    
    int c = 0;
    float f;
    
    do{
        printf("How much change is owed?\n");
        f = GetFloat();
    } while (f < 0.00);
    
    int i = roundf(f*100);
    
    while (i > 0){
        //printf("%i\n", f);
        if (i%25 != i && i%25 >= 0) {
            i -= 25;
        } else if (i%10 != i && i%10 >= 0) {
            i -= 10;
        } else if (i%5 != i && i%5 >= 0) {
            i -= 5;
        } else {
            i -= 1;
        }
        c++;
    }
    
    printf("%i\n", c);
    
}
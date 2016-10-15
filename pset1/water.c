#include <stdio.h>
#include <cs50.h>

int main(void){
    printf("minutes: ");
    int m = GetInt();
    int b = 12 * m;
    printf("bottles: %i\n", b);
}
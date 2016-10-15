#include <stdio.h>
#include <cs50.h>

int main(void){
    
    int h;
    
    do{
        printf("height: ");
        h = GetInt();
    }
    while (h < 0 || h > 23);

    for (int a = 0; a < h; a++){
        int x = h - a - 1; //number of spaces to print on this row.
        int y = a + 2; //number of hashes to print on this row.
        int b = 0;
        while (b < x){
            printf(" ");
            b++;
        }
        for (int c = 0; c < y; c++){
            printf("#");
        }
        printf("\n");
    }
}
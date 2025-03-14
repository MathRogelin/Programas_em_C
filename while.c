#include <stdio.h>

int main(){

    int num = 0;
    // while == enquanto
    while (num <= 10){
        if ( num % 2 == 0){
            printf("O numero %d e par\n", num);
        }
        
        num ++;
    }
    
    return 0;
}
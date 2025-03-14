#include <stdio.h>

int main(){
    int A[3][3] = {
        {3,1,2},
        {6,2,4},
        {9,3,6}
    };

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
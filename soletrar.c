#include <stdio.h>
#include <string.h>

int main(){
    printf("Programa Soletrar\n");

    char palavra[41];
    printf("O limite de letras é de 40\n");
    scanf("%40s", palavra);
    //string lenght --> strlen()
    for (int i = 0; i < strlen(palavra); i++)
    {
        printf("%c\n", palavra[i]);
    }
    
    return 0;
}
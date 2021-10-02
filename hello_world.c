#include <stdio.h>

int main(){
    char str[100];
    fgets (str, 100, stdin);
    printf("Hello World!");
    printf(str);
    

    return 0;
}
#include <stdio.h>

void encrypt(char *c){
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr -1;
        ptr++;
    }
}

int main(){
    char c[]= "diibwj!jt!b!hjsm/";
    encrypt(c);
    printf("Decrypted string is : %s", c);
    return 0;
}
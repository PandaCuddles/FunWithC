#include <stdio.h>

/* Checks if system does sign extension */
int main(void){
    int i = -1;
    unsigned u = -1;
    if (i >> 1 == u >> 1)
        printf("Zeros are shifted in.\n");
    else
        printf("Sign bits are shifted in.\n");
}

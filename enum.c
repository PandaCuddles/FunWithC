#include <stdio.h>


typedef enum day {
        sun, mon, tue, wed,
        thu, fri, sat
} day;


int main(void){
    day today = sun;

    if (today == sun)
        printf("Hooray, today is sunday!\n");
    return 0;

}


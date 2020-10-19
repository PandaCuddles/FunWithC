#include <limits.h>
#include <stdio.h>

/* packs 4 characters into an int variable */
int pack(char a, char b, char c, char d){
    int p = a; /* p will be packed with a, b, c, d*/
    
    p = (p << CHAR_BIT) | b;
    p = (p << CHAR_BIT) | c;
    p = (p << CHAR_BIT) | d;

    return p;

}

/* unpacks and prints characters lifo style */
void print_packed_lifo(int a){
    int i, size;
    size = sizeof(int);

    for(i=0; i<size; i++){
        putchar(a); /* first 8 bits of int are sent to stdout as a char */
        putchar('\n');
        a >>= CHAR_BIT; /* shift next 8 bits to the right */
    }
}

/* unpacks and prints characters fifo style */
void print_packed_fifo(int a){
    int i, size, shifter;
    size = sizeof(int);
    shifter = (sizeof(int)-1) * CHAR_BIT;
    
    for(i=0; i<size; i++){
        putchar(a>>shifter); /*  shift last 8 bits into first 8 bits, then send to stdout */
        putchar('\n');
        a <<= CHAR_BIT; /* shift next 8 bits to the left */
    }
}


int main(void){
    int packed = pack('a', 'b', 'c', 'd');
    print_packed_lifo(packed);
    print_packed_fifo(packed);
    return 0;
}

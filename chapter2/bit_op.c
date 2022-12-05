// purpose: C provide six operators for bit manipulation
//          these may only be applied to integral operands,
//          that is, char、short、int and long,whether signed or unsigned
//          &   bitwise AND
//          |   bitwise inclusive OR
//          ^   bitwise exclusive OR
//          <<  left shift
//          >>  right shift
//          ~   one's complement(unary)

#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main(int argc, char const *argv[])
{
    // the bitwise AND(&) is often used to mask off some set of bits
    // the bitwise OR(|) is used to turn bits on
    // the bitwise exclusive OR(^)  sets a one in each bit position where its operands have
    // different bits, and zero where they are the same
    // the shift operators << and >> perform left and right shifts of their left operand by
    // the number of bit positions given by the right operand
    // The unary operator ~ yields the one's complement of an integer; that is, it converts each 1-bit
    // into a 0-bit and vice versa
    printf("-8 >> 2: %d\n", -8 >> 2);
    printf("8 >> 2: %d\n", 8 >> 2);
    printf("~0 << 2: %d\n", ~(~0 << 2));
    unsigned int x = getbits(4, 2, 2);
    printf("x: %lu\n", x);
    return 0;
}

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}
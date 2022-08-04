#include "c++testing.h"
#include <stdio.h>

int main (int argc, char *argv[]) 
{
    int x = 1000000;
    int y = 16;
    int z = 0;

    // swap test
    var_swap(x,y); 
    var_swap(y,z); 
     
    assert(x == 16);
    assert(y == 0);
    assert(z == 1000000);

    // change bit test 
    assert(change_bit_in_num(5, 1, bit_true) == 7);
    assert(change_bit_in_num(1, 1, bit_true) == 3);
    assert(change_bit_in_num(5, 0, bit_false) == 4);
    assert(change_bit_in_num(0, 0, bit_true) == 1);

    return 0;
}

template<typename T>
void var_swap(T& x, T& y)
{
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}

int change_bit_in_num(int num, unsigned char bit_num, BitValue bit_value)
{
    num ^= (1 << bit_num);
 
    // for changing sign bit
    // x ^= ~(1 << (sizeof(num) * 8 - 1));  

    return num;
}

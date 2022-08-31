#include "c++testing.h"

int main (int argc, char *argv[]) 
{
    int x = 1000000;
    int y = 16;
    int z = 0;
    bool rhs_val = true;
    bool lhs_val = false;
    char rhs_str = 'r';
    char lhs_str = 'l';
    
    // swap test
    var_swap(x,y); 

    assert(x == 16);
    assert(y == 1000000);
    assert(z == 0);

    var_swap(y,z); 
     
    assert(x == 16);
    assert(y == 0);
    assert(z == 1000000);

    var_swap(rhs_val, lhs_val);

    assert(rhs_val == false);
    assert(lhs_val == true);

    var_swap(rhs_str, lhs_str);

    assert(rhs_str == 'l');
    assert(lhs_str == 'r');

    // change bit test 
    assert(change_bit_in_num(0b000101, 1, TRUE) == 0b000111);
    assert(change_bit_in_num(0b0000010, 0, TRUE) == 0b0000011);
    assert(change_bit_in_num(0b000101, 0, FALSE) == 0b000100);
    assert(change_bit_in_num(0b000101, 1, FALSE) == 0b000101);
    assert(change_bit_in_num(0b000000, 0, TRUE) == 0b000001);

    return 0;
}

template<typename T>
void var_swap(T& x, T& y)
{
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}

int change_bit_in_num(int num, unsigned char bit_num, Bit bit_value)
{
    return ((num & ~(1<<bit_num)) | (bit_value << bit_num));
}


#include <iostream>

enum BitValue {bit_true, bit_false};

template<typename T>
void var_swap(T&, T&);

int change_bit_in_num(int num, unsigned char bit_num, BitValue bit_value);

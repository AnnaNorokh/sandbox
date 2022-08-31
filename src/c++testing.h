#include <assert.h>

enum Bit {FALSE = 0, TRUE};

template<typename T>
void var_swap(T&, T&);

int change_bit_in_num(int num, unsigned char bit_num, Bit bit_value);

#include "c++testing.h"

int main (int argc, char *argv[]) 
{
    int x = 10;
    int y = 16;
    int z = 0;
    
    //swap test
    std::cout<<"Befor swap : x= "<<x<<" , y= "<<y<<" , z= "<<z<<std::endl;
    var_swap(&x,&y); 
    var_swap(&y,&z); 
    std::cout<<"After swap : x= "<<x<<" , y= "<<y<<" , z= "<<z<<std::endl;

    //change bit test 
    std::cout<<change_bit_in_num(5, 1, 1)<<std::endl;   //should be 7
    std::cout<<change_bit_in_num(1, 1, 1)<<std::endl;   //should be 3
    std::cout<<change_bit_in_num(1, 2, 1)<<std::endl;   //should be 5
    std::cout<<change_bit_in_num(4, 0, 1)<<std::endl;   //should be 5

    return 0;
}

void var_swap(int* xp, int* yp)
{
    *xp = *xp ^ *yp;
    *yp = *xp ^ *yp;
    *xp = *xp ^ *yp;
}

int change_bit_in_num(int num, int bit_num, int bit_value)
{
    num |= (bit_value << bit_num);
    
    return num;
}
#include "bitarray.h"
#include <climits>

unsigned character_offset(unsigned bit_number);
unsigned bit_offset(unsigned bit_number);


/**
 * set a soecific bit to 1
 */
void set_bit(char bit_array[],unsigned bit_number)
{
    bit_array[character_offset(bit_number)]|=(1<<bit_offset(bit_number));
}


/**
 * clear a specific bit to 0
 */
void clear_bit(char bit_array[],unsigned bit_number)
{
    bit_array[character_offset(bit_number)]&=~(1<<bit_offset(bit_number));
}



/**
 * assign a specific bit to value (0 or 1)
 */
void assign_bit(char bit_array[],unsigned bit_number,int value)
{
    if(value!=0)
    {
        set_bit(bit_array,bit_number);
    }
    else
    {
        clear_bit(bit_array,bit_number);
    }
}


/**
 * test a specific bit's value
 */
int test_bit(char bit_array[],unsigned bit_number)
{
    return (bit_array[character_offset(bit_number)]&(1<<bit_offset(bit_number)))!=0;
}



unsigned character_offset(unsigned bit_number)
{
    return bit_number / CHAR_BIT;
}

unsigned bit_offset(unsigned bit_number)
{
    return bit_number % CHAR_BIT;
}

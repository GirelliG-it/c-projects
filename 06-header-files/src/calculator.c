#include "calculator.h"

int add_numbers(int first_number, int second_number)
{
	return first_number + second_number;
}

int subtract_numbers(int first_number, int second_number)
{
    return first_number - second_number;
}   
    
int multiply_numbers(int first_number, int second_number)
{   
    return first_number * second_number;
}   
    
int quotient_calc(int first_number, int second_number)
{
    return first_number / second_number;
}
    
int remainder_calc(int first_number, int second_number)
{
    return first_number % second_number;
}

float decimal_quotient_calc(int first_number, int second_number)
{
    return (float) first_number / second_number;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/conversions.h"

#define binary_base 2
#define octal_base 8
#define hexadecimal_base 16

/**
 * @brief Allocates N bytes of memory.
 * @return A pointer to the first byte in the allocated memory
 *         block or NULL if memory allocation fails.
 */
static void* reserve(size_t __n)
{
    void* __p = malloc(__n);
    if(!__p)
    {
        // do something
    }
    return __p;
}

/**
 * @brief Counts the number of digits in the equivalents of a decimal value.
 * @param __val Decimal value.
 * @param __base Base value.
 * @return The number of digits in the value equivalent.
 * 
 * This function Counts the number of digits in a value equivalent to  @a __val 
 * in other numerial systems according to @a __base.
 */
static int count_digits(size_t __val, int __base)
{
    int count = __val ? 0 : 1;
    while (__val)
    {
        __val /= __base;
        ++count;
    }
    return count;
}

char* BinToOct(const char* __val)
{
    return DecToOct(BinToDec(__val));
}

size_t BinToDec(const char* __val)
{
    if(!__val)
    {
        return 0;
    }
    int len = strlen(__val);
    size_t decimal = 0, current_val = 1;
    for (int i = len-1; i != -1; --i)
    {
        if(__val[i] == '0' || __val[i] == '1')
        {
            decimal += (__val[i] - '0') * current_val;
            current_val *= binary_base;
        }
        else
        {
            break;
        }
    }
    return decimal;
}

char* BinToHex(const char* __val)
{
    return DecToHex(BinToDec(__val));
}

char* OctToBin(const char* __val)
{
    return DecToBin(OctToDec(__val));
}

size_t OctToDec(const char* __val)
{
    if(!__val)
    {
        return 0;
    }
    int len = strlen(__val);
    size_t decimal = 0, current_val = 1;
    for (int i = len-1; i != -1; --i)
    {
        if(__val[i] >= '0' && __val[i] < '8')
        {
            decimal += (__val[i] - '0') * current_val;
            current_val *= octal_base;
        }
        else
        {
            break;
        }
    }
    return decimal;
}

char* OctToHex(const char* __val)
{
    return DecToHex(OctToDec(__val));
}

char* DecToBin(size_t __val)
{
    int len = count_digits(__val, binary_base);
    char* buffer = (char*) reserve((len + 1) * sizeof(char));
    buffer[len] = '\0';
    for (size_t i = len; i > 0; __val /= binary_base)
    {
        buffer[--i] = __val % binary_base + '0';
    }
    return buffer;        
}

char* DecToOct(size_t __val)
{
    int len = count_digits(__val, octal_base);
    char* buffer = (char*) reserve((len + 1) * sizeof(char));
    buffer[len] = '\0';
    for (size_t i = len; i > 0; __val /= octal_base)
    {
        buffer[--i] = __val % octal_base + '0';
    }
    return buffer;        
}

char* DecToHex(size_t __val)
{
    int len = count_digits(__val, hexadecimal_base);
    char* buffer = (char*) reserve((len + 1) * sizeof(char));
    buffer[len] = '\0';
    int value = 0;
    for (size_t i = len; i > 0; __val /= hexadecimal_base)
    {
        value = __val % hexadecimal_base;
        if(value < 10)
        {
            buffer[--i] = value + '0';
        }
        else
        {
            buffer[--i] = value + 'W';
        }
    }
    return buffer;        
}

char* HexToBin(const char* __val)
{
    return DecToBin(HexToDec(__val));
}

char* HexToOct(const char* __val)
{
    return DecToOct(HexToDec(__val));
}

size_t HexToDec(const char* __val)
{
    if(!__val)
    {
        return 0;
    }
    int len = strlen(__val);
    size_t decimal = 0, current_val = 1;
    for (int i = len-1; i != -1; --i)
    {
        if(__val[i] >= '0' && __val[i] <= '9')
        {
            decimal += (__val[i] - '0') * current_val;
        }
        else if(__val[i] >= 'a' && __val[i] <= 'f')
        {
            decimal += (__val[i] - 'W') * current_val;
        }
        else if(__val[i] >= 'A' && __val[i] <= 'F')
        {
            decimal += (__val[i] - '7') * current_val;
        }
        else
        {
            break;
        }
        current_val *= hexadecimal_base;
    }
    return decimal;
}

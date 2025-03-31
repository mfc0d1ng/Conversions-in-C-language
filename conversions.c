#include <stdio.h>
#include <stdlib.h>
#include "include/conversions.h"

size_t BinToDec(const string* binary)
{
    size_t decimal = 0, base = 1;
    for (string_iterator it = string_rbegin(binary); it != string_rend(binary); --it)
    {
        if(*it == '0' || *it == '1')
        {
            decimal += (*it - '0') * base;
            base *= 2;
        }
        else
        {
            break;
        }
    }
    return decimal;
}

void BinToOct(string* octal, const string* binary)
{
    DecToOct(octal, BinToDec(binary));
}

void BinToHex(string* hexadecimal, const string* binary)
{
    DecToHex(hexadecimal, BinToDec(binary));
}


void DecToBin(string* binary, size_t decimal)
{
    do
    {
        string_insert(binary, string_begin(binary), decimal % 2 + '0');
    } while ((decimal /= 2));
}

void DecToOct(string* octal, size_t decimal)
{
    do
    {
        string_insert(octal, string_begin(octal), decimal % 8 + '0');
    } while ((decimal /= 8));
}

void DecToHex(string* hexadecimal, size_t decimal)
{
    int value;
    do
    {
        value = decimal % 16;
        if(value < 10)
        {
            string_insert(hexadecimal, string_begin(hexadecimal), value + '0');
        }
        else
        {
            string_insert(hexadecimal, string_begin(hexadecimal), value + 'W');
        }
    } while ((decimal /= 16));
}


void OctToBin(string* binary, const string* octal)
{
    DecToBin(binary, OctToDec(octal));
}

size_t OctToDec(const string* octal)
{
    size_t decimal = 0, base = 1;
    for (string_iterator it = string_rbegin(octal); it != string_rend(octal); --it)
    {
        if(*it >= '0' && *it < '8')
        {
            decimal += (*it - '0') * base;
            base *= 8;
        }
        else
        {
            break;
        }
    }
    return decimal;
}

void OctToHex(string* hexadecimal, const string* octal)
{
    DecToHex(hexadecimal, OctToDec(octal));
}


void HexToBin(string* binary, const string* hexadecimal)
{
    DecToBin(binary, HexToDec(hexadecimal));
}

void HexToOct(string* octal, const string* hexadecimal)
{
    DecToOct(octal, HexToDec(hexadecimal));
}

size_t HexToDec(const string* hexadecimal)
{
    size_t decimal = 0, base = 1;
    for (string_iterator it = string_rbegin(hexadecimal); it != string_rend(hexadecimal); --it)
    {
        if(*it >= '0' && *it <= '9')
        {
            decimal += (*it - '0') * base;
        }
        else if(*it >= 'A' && *it <= 'F')
        {
            decimal += (*it - '7') * base;
        }
        else if(*it >= 'a' && *it <= 'f')
        {
            decimal += (*it - 'W') * base;
        }
        else
        {
            break;
        }
        base *= 16;
    }
    return decimal;
}

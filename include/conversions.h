#ifndef CONVERSIONS_H
#define CONVERSIONS_H

#include "string.h"

/**
 * @brief Converts a binary value to decimal value.
 * @param binary Binary value.
 * @return The decimal equivalent to @a binary.
 */
extern size_t BinToDec(const string* binary);

/**
 * @brief Converts a binary value to octal value.
 * @param octal Buffer to store the octal value.
 * @param binary Binary value.
 */
extern void BinToOct(string* octal, const string* binary);

/**
 * @brief Converts a binary value to hexadecimal value.
 * @param hexadecimal Buffer to store the hexadecimal value.
 * @param binary Binary value.
 */
extern void BinToHex(string* hexadecimal, const string* binary);

/**
 * @brief Converts an octal value to binary value.
 * @param binary Buffer to store the binary value.
 * @param Octal Octal value.
 */
extern void OctToBin(string* binary, const string* octal);

/**
 * @brief Converts an octal value to decimal value.
 * @param Octal Octal value.
 * @return The decimal equivalent to @a octal.
 */
extern size_t OctToDec(const string* octal);

/**
 * @brief Converts an octal value to hexadecimal value.
 * @param hexadecimal Buffer to store the hexadecimal value.
 * @param Octal Octal value.
 */
extern void OctToHex(string* hexadecimal, const string* octal);

/**
 * @brief Converts a decimal value to binary value.
 * @param binary Buffer to store the binary value.
 * @param decimal Decimal value.
 */
extern void DecToBin(string* binary, size_t decimal);

/**
 * @brief Converts a decimal value to octal value.
 * @param octal Buffer to store the octal value.
 * @param decimal Decimal value.
 */
extern void DecToOct(string* octal, size_t decimal);

/**
 * @brief Converts a decimal value to hexadecimal value.
 * @param octal Buffer to store the hexadecimal value.
 * @param decimal Decimal value.
 */
extern void DecToHex(string* hexadecimal, size_t decimal);

/**
 * @brief Converts a hexadecimal value to binary value.
 * @param binary Buffer to store the binary value.
 * @param hexadecimal Hexadecimal value.
 */
extern void HexToBin(string* binary, const string* hexadecimal);

/**
 * @brief Converts a hexadecimal value to octal value.
 * @param octal Buffer to store the octal value.
 * @param hexadecimal Hexadecimal value.
 */
extern void HexToOct(string* octal, const string* hexadecimal);

/**
 * @brief Converts a hexadecimal value to decimal value.
 * @param hexadecimal Hexadecimal value.
 * @return The decimal equivalent to @a hexadecimal.
 */
extern size_t HexToDec(const string* hexadecimal);

#endif

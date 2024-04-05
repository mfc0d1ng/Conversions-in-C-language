#ifndef CONVERSIONS_H

/**
 * @brief Converts a binary value to octal.
 * @param __val Binary value.
 * @return A null-terminated heap string holdng the octal equivalent.
*/
extern char* BinToOct(const char* __val);

/**
 * @brief Converts a binary value to decimal.
 * @param __val Binary value.
 * @return The decimal equivalent.
*/
extern size_t BinToDec(const char* __val);

/**
 * @brief Converts a binary value to hexadecimal.
 * @param __val Binary value.
 * @return A null-terminated heap string holdng the hexadecimal equivalent.
*/
extern char* BinToHex(const char* __val);

/**
 * @brief Converts an octal value to binary.
 * @param __val Octal value.
 * @return A null-terminated heap string holdng the binary equivalent.
*/
extern char* OctToBin(const char* __val);

/**
 * @brief Converts an octal value to decimal.
 * @param __val Octal value.
 * @return The decimal equivalent.
*/
extern size_t OctToDec(const char* __val);

/**
 * @brief Converts an octal value to hexadecimal.
 * @param __val Octal value.
 * @return A null-terminated heap string holdng the hexadecimal equivalent.
*/
extern char* OctToHex(const char* __val);

/**
 * @brief Converts a decimal value to binary.
 * @param __val Decimal value.
 * @return A null-terminated heap string holdng the binary equivalent.
*/
extern char* DecToBin(size_t __val);

/**
 * @brief Converts a decimal value to octal.
 * @param __val Decimal value.
 * @return A null-terminated heap string holdng the octal equivalent.
*/
extern char* DecToOct(size_t __val);

/**
 * @brief Converts a decimal value to hexadecimal.
 * @param __val Decimal value.
 * @return A null-terminated heap string holdng the hexadecimal equivalent.
*/
extern char* DecToHex(size_t __val);

/**
 * @brief Converts a hexadecimal value to binary.
 * @param __val Hexadecimal value.
 * @return A null-terminated heap string holdng the binary equivalent.
*/
extern char* HexToBin(const char* __val);

/**
 * @brief Converts a hexadecimal value to octal.
 * @param __val Hexadecimal value.
 * @return A null-terminated heap string holdng the octal equivalent.
*/
extern char* HexToOct(const char* __val);

/**
 * @brief Converts a hexadecimal value to decimal.
 * @param __val Hexadecimal value.
 * @return The decimal equivalent.
*/
extern size_t HexToDec(const char* __val);

#endif
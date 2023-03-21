#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - prints character to the stdout.
 *@char: printed parameter type, character.
 *
 * Return: 1 on success.
 *
 */
int _putchar(char);

/**
 * print_alphabet - prints the alphabet, in lowercase to the stdout.
 *
 * Return: none
 *
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase to the stdout.
 *
 * Return: none
 *
 */
void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase character.
 * @c: checked character
 * Return: 1 if c is lowercase and 0 otherwise.
 *
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabetic character.
 * @c: checked character
 * Return: 1 if c is a letter,lowercase or upper and 0 otherwise.
 *
 */
int _isalpha(int c);

/**
 * print_sign - prints the sign of a number.
 * @n: number
 * Return: 1 if n is a greater than zero, 0 if n is zero and
 * -1 if n is less than zero.
 *
 */
int print_sign(int n);

/**
 * _abs - prints character to the stdout.
 *@int: computed parameter type, integer.
 *
 * Return: absolute value.
 *
 */
int _abs(int);

#endif

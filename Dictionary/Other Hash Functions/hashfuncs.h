#ifndef HASHFUNCS_HH
#define HASHFUNCS_HH
/*
 * Declarations of sample hash functions for CS70.  Most of these
 * functions hash C++-style strings (string), although a few work with
 * integers.  Not all of them have been extensively tested to be sure
 * they generate good hash values.
 *
 * All of the functions fall into one of two classes: integer hashers
 * and string hashers.  The integer hashers all take a signed integer
 * key; the string hashers take a C++-style string (string).
 *
 * All functions return an unsigned integer suitable for use as a
 * hash-table index.  With one exception (hashStringBase256), this
 * integer can be larger than the size of the hash table, so the
 * caller must reduce the integer modulo the table size.
 *
 * The functions are:
 *
 * hashStringCRC	Uses a method sometimes called "modified CRC".
 *			This is a simple, fast algorithm that
 *			generates good hash values.  It is closely
 *			related to the hash algorithm used in ispell.
 * hashStringBase256	Treats a string as a very large base-256
 *			number and returns that number modulo the
 *			table size.  This is the only function that
 *			accepts the table size as an argument, and the
 *			only one that guarantees that its result will
 *			be in the range 0 to tableSize - 1.  It should
 *			produce good results but has not been tested
 *			extensively.
 * hashPJW		Uses a method recommended by Aho, Sethi, and
 *			Ullman's book on compilers.  Seems to generate
 *			pretty good values.
 * hashIntegerMultiply	Uses a multiplicative method suggested by Knuth.
 *			Not extensively tested.
 * hashStringBUZ	Uses a randomization method that is intended
 *			to produce better hash values.  Seems to
 *			generate pretty good values, but doesn't do
 *			much better with the ispell dictionary than
 *			hashStringCRC.
 * hashIntegerBUZ	Uses the same randomization method by treating
 *			an integer as a 4-character string.
 * hashIntegerAbs	Returns the absolute value of the hashed
 *			integer.  Not extensively tested.  Should work
 *			well if the integer keys are well distributed
 *			and the table size is prime.
 * hashStringPreiss	Uses the method recommended in Preiss's book
 *			on data structures.  Not extensively tested.
 *			Probably produces poor hash values for long
 *			strings that differ only in the leading
 *			characters, especially if those characters are
 *			transpositions of each other.
 * hashStringWeiss1	Uses the method recommended in the first
 *			edition of Weiss's book on data structures.
 *			Not extensively tested.  Produces poor hash
 *			values for long strings that differ only in
 *			the leading characters.
 * hashStringWeiss2	Uses the method recommended in the second
 *			edition of Weiss's book on data structures.
 *			Not extensively tested.  Produces poor hash
 *			values for long strings that differ only in
 *			the leading characters.
 */

#include <string.h>

extern unsigned int	hashStringCRC(const char *key);
				// Hash a string using the fake-CRC XOR method
extern unsigned int	hashStringBase256(const char *key,
			  unsigned int tableSize);
				// Hash a string by interpreting it in base 256
extern unsigned int	hashPJW(const char *key);
				// Hash a string with Aho/Sethi/Ullman's method
extern unsigned int	hashIntegerMultiply(int key);
				// Hash an integer multiplicatively
extern unsigned int	hashStringBUZ(const char *key);
				// Hash a string with the BUZ method
extern unsigned int	hashIntegerBUZ(int key);
				// Hash an integer with the BUZ method
extern unsigned int	hashIntegerAbs(int key);
				// Hash an integer by taking the absolute value
extern unsigned int	hashStringPreiss(const char *key);
				// Hash a string using Preiss's method
extern unsigned int	hashStringWeiss1(const char *key);
				// Hash a string using Weiss's first method
extern unsigned int	hashStringWeiss2(const char *key);
				// Hash a string using Weiss's second method
#endif // HASHFUNCS_HH


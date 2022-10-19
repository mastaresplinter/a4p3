/*
    Part of the Real-Time Embedded Systems course at Halmstad University
    Copyright (c) 2017, Sebastian Kunze <sebastian.kunze@hh.se>
    All rights reserved.
 */
/*
 * Modified by Wagner Morais on Aug 2022.
 */

#ifndef _EXPSTRUCT_H
#define _EXPSTRUCT_H

struct expStruct
{
    int expInt;
    int expFraction;
};

typedef struct expStruct ExpStruct;

/** @brief Calculates the nth faculty
 *
 *  @param n integer
 *
 *	@return returns a double with the nth faculty
 *
 *  Pre-condition: none
 *
 *  Post-condition: none
 *
 */
double faculty(int n);

/** @brief Calculates base to the power of exp
 *
 *  @param base base
 *
 *  @param exp exponent
 *
 *	@return returns double
 *
 *  Pre-condition: none
 *
 *  Post-condition: none
 *
 */
double ppow(int base, int exp);

/** @brief Calculates e to the power of x with two decimal precision with taylor series and toggles the led every second iteration
 *
 *  @param x the exponent of e
 *
 *	@return returns a ExpStruct pointer which hold the integer and fractual value of e to the power of x
 *
 *  Pre-condition: none
 *
 *  Post-condition: none
 *
 */
ExpStruct *iexp(int x);
#endif
#ifndef COMPLEXMATH_H_INCLUDED
#define COMPLEXMATH_H_INCLUDED
/* ^^ include guards */

#include <stdio.h>
#include <string.h>
#include <math.h>

//Calculate the real offset of the complex cube roots of a real , given the real root double re_complexroots(double);

double re_complexroots(double z);

//Calculate the imaginary parts of the complex cube roots of a real , given the real root double im_complexroots(double);

double im_complexroots(double z);

#endif
#ifndef      __CCLIB_H
#define      __CCLIB_H
 
/*
 *
 * Note: link with math library libm.so: gcc -g -Wall test.c -o res -lm
 * The math library is named libm.so, and the -l command option assumes a lib prefix and .a or .so
 *
 *
 */
#include     <math.h>

typedef struct complex_number
{
	long double r;
	long double i;
}cnb;

#define icn(X)     cnb X;X.r=(long double)0;X.i=(long double)0;
#define ccn(X,R,I) cnb X;X.r=(long double)R;X.i=(long double)I;

#define pcn(X) printf("%Lg %Lg",X.r,X.i);

#define acn(A,B,C) icn(A); A.r = B.r + C.r; A.i = B.i + C.i;
#define scn(A,B,C) icn(A); A.r = B.r - C.r; A.i = B.i - C.i;

#define avl(N,X)  long double N; N=sqrtl(X.r*X.r + X.i*X.i);
#define avl2(N,X) long double N; N=X.r*X.r + X.i*X.i;

#define mcn(A,B,C) icn(A); A.r = B.r* C.r - B.i*C.i; A.i = B.r*C.i + B.i*C.r;

#define conj(A,B) icn(A); A.r=B.r;A.i=-B.i;
#define conji(A)  A.i=-A.i;


#endif

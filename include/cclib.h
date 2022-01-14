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

#define ncn(X)     X.r=(long double)0;X.i=(long double)0;
#define icn(X,R,I) X.r=(long double)R;X.i=(long double)I;

#define pcn(X) printf("\n%-10.10Lg %-10.10Lg\n",X.r,X.i);

#define acn(A,B,C)          A.r=B.r+C.r; A.i=B.i+C.i;
#define scn(A,B,C)          A.r=B.r-C.r; A.i=B.i-C.i;

#define avl(N,X)            N=sqrtl(X.r*X.r+X.i*X.i);
#define avl2(N,X)           N=X.r*X.r+X.i*X.i;

#define mcn(A,B,C)          A.r=B.r*C.r-B.i*C.i; A.i=B.r*C.i+B.i*C.r;

#define conj(A,B)           A.r=B.r;A.i=-B.i;
#define conji(A)            A.i=-A.i;


#define asg(A,B)            A.r=B.r;A.i=B.i;

#define dcn(A,B,C)          A.r=B.r*C.r+B.i*C.i; A.i=-B.r*C.i+B.i*C.r;A.r=A.r/(C.r*C.r+C.i*C.i);A.i=A.i/(C.r*C.r+C.i*C.i);



#endif

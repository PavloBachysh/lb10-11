#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>


int main()
{
	/*int a, b, c;

	printf_s("First number\n");
	scanf_s("%d", &a);

	b = a * 3;
	c = a + b;

	printf_s("Your number is %d\n", a);
	printf_s("Second number is %d\n", b);
	printf_s("Third number is %d\n", c); */	  //task 2


	/*double c, x, S, m, y, k;

	printf_s("Input c: \n");	//input values
	scanf_s("%lf", &c);
	printf_s("Input x: \n");
	scanf_s("%lf", &x);

	S = log((c*exp(-2.5*c + x) + pow(atan(fabs(c-x)), 2))  / (fabs(pow(-1, -2.5*c )) + sqrt(log(fabs(x)) + tan(fabs(c)))))   / log(c) ;  //count S
	printf_s("S =%lf\n", S);

	printf_s("Input m: \n");	//input values
	scanf_s("%lf", &m);
	printf_s("Input y: \n");
	scanf_s("%lf", &y);

	k = sqrt(  (pow(sin(m*y), 2) + pow(cos(y/m), 2) + 0.64)  / (	log10(fabs(m*y))) + log(fabs(pow(m,2) - pow(y,3)))	+	exp(-(m-y))  ) ;  //count k
	printf_s("k =%lf\n", k); */	  //task 1



	double a, b, c, lamda, f;

	printf_s("Input a: \n");	//input values
	scanf_s("%lf", &a);
	printf_s("Input b: \n");	
	scanf_s("%lf", &b);
	printf_s("Input c: \n");	
	scanf_s("%lf", &c);
	printf_s("Input lamda: \n");	
	scanf_s("%lf", &lamda);

	f = ((pow(c * b - fabs(a / c), 1 / 3)) / (log(b) - tan(a + M_PI))) + lamda*c - pow(8, 23);
	printf_s("f = %lf\n", f);


	return 0;
}




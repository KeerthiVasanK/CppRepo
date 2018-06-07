// ExceptionHandling.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

double Quotient(long lNumberA, long lNumberB)
{	
	double dNumberC = 0.0;
	try
	{
		if(lNumberB == 0)
			throw "Divide by zero";
		else
			return lNumberA/lNumberB;
	}
	catch(const char* ex)
	{
		printf("\n Arithemetic exception: %s", ex);
	}

	return dNumberC;
}

int _tmain(int argc, _TCHAR* argv[])
{

	printf("\n%lf", Quotient(10, 3));
	printf("\n%lf", Quotient(4, 8));
	printf("\n%lf", Quotient(0, 5));
	printf("\n%lf", Quotient(4, 0));
	printf("\n%lf", Quotient(0, 0));

	int x;
	scanf("%d", &x);

	return 0;
}


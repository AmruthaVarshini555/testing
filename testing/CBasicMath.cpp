#include "CBasicMath.hpp"

int CBasicMath::Addition(int x, int y)
{
	return (x + y);
}

int CBasicMath::Substraction(int x, int y)
{
	if (x>y)
	{	
   		return (x - y);
	}
	else
	{
		return (y-x);
	}
}
int CBasicMath::Multiply(int x, int y)
{
   	return (x * y);
}

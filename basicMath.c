#include "myMath.h"

float addition(float x, float y)
{
    float result;

    result = x + y;

    return result;
}

float sub(float x, float y)
{
    float result;

    result = x - y;

    return result;
}

double mul(double x, int y)
{
    double result;
    
    result = x*(double)y;
    
    return result;
}

double div(double x, int y)
{
    double result;
    
    result = x/(double)y;
    
    return result;
}

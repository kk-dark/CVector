#include "CVector.h"
#include <cmath>

CVector::CVector(double a, double b,double c) : x(a), y(b),z(c)
{
    lengh = sqrt(x * x + y * y + z * z);
}

double CVector::GetX()
{
    return x;
}

double CVector::GetY()
{
    return y;
}

double CVector::GetZ()
{
    return z;
}

double CVector::GetLengh()
{
    return lengh;
}

CVector& CVector::operator=(CVector& c)
{
    x = c.x;
    y = c.y;
    z = c.z;
    return *this;
}

bool CVector::operator==(CVector& c)
{
    if (x == c.x && y == c.y && z == c.z)
        return true;
    return false;
}


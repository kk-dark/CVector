#include "global.h"
#include <cmath>

CVector operator+(CVector& a, CVector& b) 
{
    return CVector(a.GetX() + b.GetX() + a.GetY() + b.GetY(), a.GetZ() + b.GetZ());
}

CVector operator-(CVector& a, CVector& b)
{
    return CVector(a.GetX() - b.GetX() - a.GetY() - b.GetY(), a.GetZ() - b.GetZ());
}

double operator*(CVector& a, CVector& b) 
{
    return a.GetX() * b.GetX() + a.GetY() * b.GetY() + a.GetZ() * b.GetZ();
}

CVector operator^(CVector& a, CVector& b)
{
    double i, j, k;
    i = a.GetY() * b.GetZ() - b.GetY() * a.GetZ();
    j = a.GetX() * b.GetZ() - b.GetX() * a.GetZ();
    k = a.GetX() * b.GetY() - b.GetX() * a.GetY();
    return CVector(i,-j,k);
}

double GetLDistance(CLine& a, CLine& b)
{
    double dist = 0;
    if (IsParallel(a, b)) {
        CVector temp(a.point.GetX() - b.point.GetX(), a.point.GetY()-b.point.GetY(),a.point.GetZ()-b.point.GetZ());
        
    }
    else {
        
    }
    return dist;
}

double GetPDistance(CVector& a, CVector& b)
{
    double dis = sqrt((a.x - b.x) * (a.x - b.x) +
                      (a.y - b.y) * (a.y - b.y) +
                      (a.z - b.z) * (a.z - b.z));
    return dis;
}

bool IsParallel(CLine& a, CLine& b)
{
    double k1 = a.vec.GetX() * b.vec.GetY() - b.vec.GetX() * a.vec.GetY();
    double k2 = a.vec.GetX() * b.vec.GetZ() - b.vec.GetX() * a.vec.GetZ();
    double k3 = a.vec.GetY() * b.vec.GetZ() - b.vec.GetY() * a.vec.GetZ();
    if (k1 == 0 && k2 == 0 && k3 == 0)
        return true;
    return false;
}

double GetTheta(CVector& a, CVector& b)
{
    return acos((a*b)/(a.GetLengh()*b.GetLengh()));
}



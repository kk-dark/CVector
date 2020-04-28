#pragma once
#include "CVector.h"

class CLine
{
private:
    CVector vec, point;
public:
    CLine(double a = 0, double b = 0, double c = 0, double d = 0, double e = 0, double f = 0);
    CLine(CVector& vector, CVector& point);
    CLine& operator = (CLine &b);
    bool operator ==(CLine& b);
    CVector& GetPoint();
    CVector& GetVector();
    friend bool IsParallel(CLine& a, CLine& b);
    friend double GetLDistance(CLine& a, CLine& b);
    friend double GetPDistance(CVector& a, CVector& b);
};
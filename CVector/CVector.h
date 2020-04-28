#pragma once

class CVector
{
private:
    double x, y, z;
    double lengh;

public:
    double GetX();
    double GetY();
    double GetZ();
    double GetLengh();
    CVector(double a=0, double b=0,double z=0);
    CVector& operator=(CVector& c);             //向量赋值运算符
    bool operator==(CVector& c);                //坐标比较运算符
    friend class CLine;
    friend double GetLDistance(CLine& a, CLine& b);
    friend double GetPDistance(CVector& a, CVector& b);
    friend double GetTheta(CVector& a, CVector& b);
};
#pragma once
#include "CLine.h"
#include "CVector.h"

CVector operator+(CVector& a, CVector& b); //向量相加运算符
CVector operator-(CVector& a, CVector& b); //向量相减运算符
double operator*(CVector& a, CVector& b);  //数量积运算符
CVector operator^(CVector& a, CVector& b); //向量积运算符
double GetLDistance(CLine& a, CLine& b);   //计算两直线距离
double GetPDistance(CVector& a, CVector& b); //计算两点距离
bool IsParallel(CLine& a, CLine& b);	   //判断两直线是否平行
double GetTheta(CVector& a, CVector& b);   //计算两向量的夹角


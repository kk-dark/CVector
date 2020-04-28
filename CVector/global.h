#pragma once
#include "CLine.h"
#include "CVector.h"

CVector operator+(CVector& a, CVector& b); //������������
CVector operator-(CVector& a, CVector& b); //������������
double operator*(CVector& a, CVector& b);  //�����������
CVector operator^(CVector& a, CVector& b); //�����������
double GetLDistance(CLine& a, CLine& b);   //������ֱ�߾���
double GetPDistance(CVector& a, CVector& b); //�����������
bool IsParallel(CLine& a, CLine& b);	   //�ж���ֱ���Ƿ�ƽ��
double GetTheta(CVector& a, CVector& b);   //�����������ļн�


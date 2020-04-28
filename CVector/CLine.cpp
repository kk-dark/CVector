#include "CLine.h"

CLine::CLine(double a, double b, double c, double d, double e, double f) :point(a, b, c), vec(d, e, f) {}

CLine::CLine(CVector& vector, CVector& point)
{
	this->point = point;
	this->vec = vector;
}

CLine& CLine::operator=(CLine& b)
{
	point = b.point;
	vec = b.vec;
	return *this;
}

bool CLine::operator==(CLine& b)
{
	if (point == b.point && vec == b.vec)
		return true;
	return false;
}

CVector& CLine::GetPoint()
{
	return point;
}

CVector& CLine::GetVector()
{
	return vec;
}


#include <iostream>

#include "CVector.h"
#include "CLine.h"
#include "global.h"
using namespace std;

int main()
{
    CVector Vec_L1(1,2,3), Vec_L2(2,4,6);
    CVector Pot_L1(10,11,12), Pot_L2(13,14,15);
    CLine L1(Vec_L1, Pot_L1);
    CLine L2(Vec_L2, Pot_L2);
    cout << Vec_L1.GetLengh() << endl;
    cout << Vec_L2.GetLengh() << endl;
    cout << L1.GetVector().GetLengh() << endl;
    cout << L2.GetVector().GetLengh() << endl;
    cout << GetTheta(L1.GetVector(),L2.GetVector()) << endl;
    return 0;
}
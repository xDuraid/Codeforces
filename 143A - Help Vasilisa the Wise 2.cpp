#include <iostream>

using namespace std;

int main()
{
    int r1 = 0, r2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0;
    int A = 0, B = 0, C = 0, D = 0;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    A = (d1 + c1 - r2)/2;
    B = r1 - A;
    C = c1 - A;
    D = d1 - A;
    if(A == B || A == C || A == D || B == C || B == D || C == D ||
       A > 9 || A < 1 || B > 9 || B < 1 || C > 9 || C < 1 || D > 9 || D < 1)
        cout << -1;
    else
        cout << A << " " << B << endl << C << " " << D;
    return 0;
}

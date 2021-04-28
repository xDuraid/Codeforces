#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int factorial(int n)
{
    if(n <= 1)
        return 1;
    else
        return n * factorial(n-1);
}

int C(int n, int k)
{
    return factorial(n)/(factorial(n-k)*factorial(k));
}

int main()
{
    IOS
    string s1, s2;
    cin >> s1 >> s2;
    int n1 = 0, n2 = 0, p1 = 0, p2 = 0, q = 0;
    double a = 0.0;
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] == '+')
            p1++;
        else
            n1++;
        if(s2[i] == '+')
            p2++;
        else if(s2[i] == '-')
            n2++;
        else
            q++;
    }
    if(n2 > n1 || p2 > p1)
        a = 0.0;
    else if(n1 == n2 && p1 == p2)
        a = 1.0;
    else
        a = C(q, p1-p2)/pow(2,q);
    cout << setprecision(12) << fixed << showpoint << a;
    return 0;

}

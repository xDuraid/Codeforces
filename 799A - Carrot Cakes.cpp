#include <iostream>
using namespace std;
 
int main()
{
    int n = 0, t = 0, k = 0, d = 0;
    cin >> n >> t >> k >> d;
    int o1 = 0, o2 = d;
    int s = (n + k - 1) / k;
    for(int i = 0; i < s; i++){
        if(o1 <= o2)
            o1 += t;
        else
            o2 += t;
    }
    if(max(o1,o2) < s * t)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

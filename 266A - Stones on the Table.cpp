#include <iostream>
using namespace std;

int main()
{
    int n = 0, result = 0;
    cin >> n;
    char a = '0',b = '0';
    cin >> a;
    for(int i = 1; i < n; i++){
        cin >> b;
        if(a == b)
            result++;
        a = b;
    }
    cout << result;
    return 0;
}

#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 1)
            cout << "I hate ";
        else
            cout << "I love ";
        if(n-i)
            cout << "that ";
    }
    cout << "it";
    return 0;
}

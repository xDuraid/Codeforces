#include <iostream>
#include <algorithm>

using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)



int main()
{
    IOS
    int a[6] = {0};
    int t = 0;
    for(int i = 0; i < 6; i++)
        cin >> a[i];
    sort(a, a + 6);
    if(a[0] == a[3]){
        if(a[4] == a[5])
            cout << "Elephant";
        else
            cout << "Bear";
    }
    else if(a[1] == a[4]){
        cout << "Bear";
    }
    else if(a[2] == a[5]){
        if(a[0] == a[1])
            cout << "Elephant";
        else
            cout << "Bear";
    }
    else
        cout << "Alien";
    return 0;
}

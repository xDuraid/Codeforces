#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n = 0;
    bool b;
    cin >> n;
    while(n--){
        cin >> b;
        if(b){
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;
}

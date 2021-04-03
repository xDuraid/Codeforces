#include <iostream>
using namespace std;

int main()
{
    
    ios_base::sync_with_stdio(false);
    int n = 0, g = 1, a = 0, b = 0;
    cin >> n;
    cin >> a;
    for(int i = 1; i < n; i++){
        cin >> b;
        if(a == b){
            continue;
        }
        else
            g++;
        a = b;
    }
    cout << g;
    return 0;
}

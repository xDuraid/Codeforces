#include <iostream>
using namespace std;

int main()
{
    int n = 0, a = 0, b = 0, c = 0;
    int down = 0;
    cin >> n;
    cin >> a >> b >> c;
    n--;
    down = 7 - a;
    for(int i = 0; i < n; i++){
        cin >> b >> c;
        if(down == b || down == 7 - b || down == c || down == 7 - c){
            cout << "NO";
            return 0;
        }
        down = 7 - (21 - (14+down));
    }
    cout << "YES";
    return 0;
}

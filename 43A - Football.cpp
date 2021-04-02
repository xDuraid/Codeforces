#include <iostream>

using namespace std;

int main()
{
    int n = 0, x = 0, y = 0;
    string a, b;
    cin >> n;
    cin >> a;
    x++;
    for(int i = 0; i < n - 1; i++){
        string temp;
        cin >> temp;
        if(temp == a){
            x++;
        }
        else{
            b = temp;
            y++;
        }
    }
    if(x > y)
        cout << a;
    else
        cout << b;
    return 0;
}

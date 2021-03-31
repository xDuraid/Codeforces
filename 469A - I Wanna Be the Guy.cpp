#include <iostream>
using namespace std;
 
int main(){
    int n = 0, r = 0;
    int x = 0, y = 0;
    cin >> n;
    int a[n+1] = {0};
    int temp = 0;
    cin >> x;
    for(int i = 0; i < x; i++){
        cin >> temp;
        a[temp]++;
        if(a[temp] == 1)
            r++;
    }
    cin >> y;
    for(int i = 0; i < y; i++){
        cin >> temp;
        a[temp]++;
        if(a[temp] == 1)
            r++;
    }
    if(r == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    return 0;
}

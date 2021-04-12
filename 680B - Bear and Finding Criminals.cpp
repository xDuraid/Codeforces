#include <iostream>

using namespace std;

int main()
{

    int n = 0, m = 0, c = 0;
    cin >> n >> c;
    c--;
    int a[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(a[c] == 1)
        m++;
    int i = c-1, j = c+1;
    while(i != -1 && j != n){
        if(a[i] == 1 && a[j] == 1)
            m += 2;
        i--;
        j++;
    }
    while(i != -1){
        m += a[i];
        i--;
    }
    while(j != n){
        m += a[j];
        j++;
    }
    cout << m;
    
    return 0;
}

#include <iostream>

using namespace std;

int main()
{

    int n = 0, m = 0;
    cin >> n;
    int a[n] = {0};
    int b[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int j = 0;
    for(int i = 0; i < n; i++){
        j = i-1;
        while(a[j] <= a[j+1] && j >= 0){
            b[i]++;
            j--;
        }
        j = i+1;
        while(a[j] <= a[j-1] && j < n){
            b[i]++;
            j++;
        }
        b[i]++;
        if(b[i] > m)
            m = b[i];
    }

    cout << m;
    return 0;
}

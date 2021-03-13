#include <iostream>
using namespace std;

int main()
{
    int n = 0, m = 0;
    int wire = 0,bird = 0;
    cin >> n;
    int a[n + 2] = {0};
    for(int i = 1; i < n + 1; i++)
        cin >> a[i];

    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> wire >> bird;
        a[wire + 1] += a[wire] - bird;
        a[wire - 1] += bird - 1;
        a[wire] = 0;
    }

    for(int i = 1 ; i < n + 1; i++)
        cout << a[i] << endl;

    return 0;
}

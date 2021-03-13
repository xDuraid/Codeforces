#include <iostream>
#include <string>
using namespace std;

int main()
{
    int y = 0, w = 0;
    const string p[7] = {"","1/1","5/6","2/3","1/2","1/3","1/6"};
    cin >> y >> w;
    int m = max(y,w);
    cout << p[m];
    return 0;
}

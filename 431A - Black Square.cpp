#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a[5] = {0}, calories = 0;
    string s;

    for(int i = 1; i < 5; i++){
        cin >> a[i];
    }
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        calories += a[s[i]-48];
    }

    cout << calories;

    return 0;
}

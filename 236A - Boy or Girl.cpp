#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int a[128] = {0};
    int sum = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        a[s[i]] = 1;
    }
    for(int i = 0; i < 128; i++){
        sum += a[i];
    }
    if(sum % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}

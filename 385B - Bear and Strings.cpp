#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    vector<int> v(1,0);
    string s;
    cin >> s;
    int n = s.size(), sum = 0;
    for(int i = 0; i < n - 3; i++){
        if(s[i] == 'b' && s[i+1] == 'e' && s[i+2] == 'a' && s[i+3] == 'r'){
            v.push_back(i+1);
        }
    }
    for(int i = 1; i < v.size(); i++){
        sum += (v[i] - v[i-1]) * (n - v[i] - 2);
    }
    cout << sum;
    return 0;
}

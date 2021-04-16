#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int n = 1, sum1 = 0, sum2 = 0;
    cin >> s;
    if(s.size() == 1){
        cout << 0;
        return 0;
    }
    for(int i = 0; i < s.size(); i++){
        sum1 += s[i] - '0';
    }
    while(sum1 > 9){
        sum2 = 0;
        while(sum1){
            sum2 += sum1 % 10;
            sum1 /= 10;
        }
        n++;
        sum1 = sum2;
    }
    cout << n;
    return 0;

}

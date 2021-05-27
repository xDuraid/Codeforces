#include <iostream>
#include <string>

using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int a[128] = {0}, b[128] = {0};
    for(int i = 0; i < s1.size(); i++){
        a[s1[i]]++;
    }
    for(int i = 0; i < s2.size(); i++){
        a[s2[i]]++;
    }
    for(int i = 0; i < s3.size(); i++){
        b[s3[i]]++;
    }
    for(int i = 'A'; i <= 'Z'; i++){
        if(a[i] != b[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}

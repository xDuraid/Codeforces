#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n = 0, t = 0;
    cin >> n >> t;
    char s[n+1];
    cin >> s;
    for(int i = 0; i < t; i++){
        int j = 0;
        while(j < n-1){
            if(s[j] == 'B' && s[j+1] == 'G'){
                swap(s[j], s[j+1]);
                j += 2;
            }
            else
                j++;
        }
    }
    cout << s;
    return 0;
}

#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)




int main()
{
    IOS
    TEST{
        int n = 0;
        cin >> n;
        string s;
        cin >> s;
        int i = 0;
        while(s[i] == '?')
            i++;
        int j = i;
        while(j > 0){
            s[j - 1] = (s[j] == 'R') ? 'B' : 'R';
            j--;
        }
        while(i < n){
            if(s[i] == '?'){
                if(s[i - 1] == 'B')
                    s[i] = 'R';
                else
                    s[i] = 'B';
            }
            i++;
        }
        cout << s << endl;

    }
    return 0;
}

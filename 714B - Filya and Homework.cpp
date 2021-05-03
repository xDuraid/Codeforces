#include <iostream>
#include <set>
#include <iterator>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n = 0, t = 0;
    cin >> n;
    set<int>a;
    for(int i = 0; i < n; i++){
        cin >> t;
        a.insert(t);
    }
    if(a.size() <= 2){
        cout << "YES";
    }
    else if(a.size() == 3){
        set<int>::iterator it = a.begin();
        int a = *it;
        int b = *(++it);
        int c = *(++it);
        if(a+c == 2*b)
            cout << "YES";
        else
            cout << "NO";
    }
    else{
        cout << "NO";
    }
    return 0;
}

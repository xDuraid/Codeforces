#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n = 0;
    vector<int> math, programming, sport;
    int teams = 0;
    cin >> n;
    int a[n + 1] = {0};
    for(int i = 1; i < n + 1; i++){
        cin >> a[i];
        if(a[i] == 1){
            programming.push_back(i);
        }
        else if(a[i] == 2)
            math.push_back(i);
        else
            sport.push_back(i);
    }
    teams = min(min(programming.size(),math.size()),sport.size());
    cout << teams << endl;
    for(int i = 0; i < teams; i++)
        cout << programming[i] << " " << math[i] << " " << sport[i] << endl;
    return 0;
}

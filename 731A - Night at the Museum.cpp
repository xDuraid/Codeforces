#include <iostream>
#include <string>
using namespace std;

int main()
{
    char initial = 'a';
    int steps = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(abs(initial - s[i]) < 13){
            steps += abs(initial - s[i]);
        }
        else{
            steps += 26 - abs(initial - s[i]);
        }
        initial = s[i];

    }
    cout << steps;
    
    return 0;
}

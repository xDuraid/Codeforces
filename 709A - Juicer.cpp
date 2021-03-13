#include <iostream>
using namespace std;
 
int main()
{
    int n = 0, b = 0, d = 0;
    int x = 0, sum = 0, result = 0;
    cin >> n >> b >> d;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x > b)
            continue;
        sum += x;
        if(sum > d){
            result++;
            sum = 0;
        }
    }
    cout << result;
    return 0;
}

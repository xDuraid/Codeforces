#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    int x = 0;
    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 6; j++){
            cin >> x;
            if(x == 1){
                cout << abs(3 - i) + abs(3 - j);
                break;
             }
        }
    }
    return 0;
}

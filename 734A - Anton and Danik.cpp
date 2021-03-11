#include <iostream>
using namespace std;

int main()
{
    int n = 0, A = 0, D = 0;
    cin >> n;
    char temp = '0';
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == 'A')
            A++;
        else
            D++;
    }
    if(A > D)
        cout << "Anton";
    else if(A < D)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}

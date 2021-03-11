#include <iostream>
using namespace std;

int main()
{
    int n = 0, event = 0, untreated = 0, officers = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> event;
        if(event == -1){
            if(officers == 0)
                untreated++;
            else
                officers--;
        }
        else
            officers += event;
    }
    cout << untreated;
    return 0;
}

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

bool con(pair<int,int> z, pair<int,int> x, int t)
{
    if(z.second >= x.second + t){
        if(x.second + t >= z.first)
            return 1;
    }
    else{
        if(z.second >= x.first + t)
            return 1;
    }
    return 0;
}

int main()
{
    IOS
    int p = 0, q = 0, l = 0, r = 0, m = 0;
    cin >> p >> q >> l >> r;
  
    vector<pair<int,int>>Z(p);
    vector<pair<int,int>>X(q);
  
    for(int i = 0; i < p; i++){
        cin >> Z[i].first >> Z[i].second;
    }

    for(int i = 0; i < q; i++){
        cin >> X[i].first >> X[i].second;
    }
  
    for(int t = l; t <= r; t++){
        bool k = 0;
      
        for(int i = 0; i < p; i++){
          
            for(int j = 0; j < q; j++){
              
                if(con(Z[i],X[j],t)){
                    k = 1;
                    break;
                }
            }
            if(k){
                m++;
                break;
            }
        }
    }
    cout << m;
    return 0;

}

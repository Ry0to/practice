#include<bits/stdc++.h>

using namespace std;
int main(void){
    int H,W;
    cin >> H >> W;
    while(H != 0 || W != 0){
        for(int i = 0;i<H;i++){
            for(int j = 0;j<W;j++){
                if((i+j) %2 == 0)cout << "#";
                else cout << ".";
            }
            cout << endl;
        }
        cout << endl;
        cin >> H >> W;
    }
    return 0;
}

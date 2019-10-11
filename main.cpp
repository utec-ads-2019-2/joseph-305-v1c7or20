#include <iostream>

using namespace std;

int rotaciones(int k, int m){
    int total = 2*k;
    int actual = (m-1)%total;
    int i=0;
    for ( i = 0; i < 2*k; i++) {
        if(actual<k){break;}
        total--;
        actual = (actual+m-1)%(total);
    }
    return i;
}

int main() {
    int k, i=0;
    int ans[15] = {
            0, 2, 7, 5, 30, 169, 441, 1872, 7632, 1740,
            93313, 459901, 1358657, 2504881, 13482720
    };
    while(cin>>k and k!=0){
        cout<<ans[k]<<endl;
    }

    return 0;
}
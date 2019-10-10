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
    while(cin>>k and k!=0){
        for ( i = 1;  ; i++) {
            if(rotaciones(k,i) == k){
                cout<<i<<endl;
                break;
            }
        }
    }

    return 0;
}
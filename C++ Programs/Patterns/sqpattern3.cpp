#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i<=n){
        int j = 1;
        int k = n;
        while(j<=n){
            cout<<k;
            j++;
            k--;
        }
        cout<<endl;
        i++;
    }
}
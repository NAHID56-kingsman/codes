#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,k,c=0;
    cin >> n>>k;
    k=240-k;
    for(int i=1;i<=n;i++){
        k=k-(5*i);
        if(k>=0){

            c++;
        }
        else{
             cout<<c;
             return 0;

        }


    }
    cout<<c;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(i==1||j==1||j==n||i==n){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=1;i<=(n-1);++i){
        for(int j=1;j<=n;++j){
            if(j==1||j==n||i==(n-1)){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;
}
    return 0;
}

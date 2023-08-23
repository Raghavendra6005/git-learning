#include<iostream>
#include<vector>
using namespace std;
bool prime(int n){
    int c=0;
    if(n==0 or n==1 or n==2){
        return false;
    }else{
        for(int i=2;i<n;i++){
            if(n%i==0){
              c++;
            }
        }
    }
    if(c==0){
        return true;
    }else{
        return false;
    }
} 
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    int sum=0;
    for(int i=0;i<v.size();i++){
        if(prime(v[i])){
            sum+=v[i];
        }
    }
    cout<<sum;
}
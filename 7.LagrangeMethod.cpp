#include<bits/stdc++.h>
using namespace std;


void lagrange(float x[],float y[],float val,int n){
    float ans=0;
    for(int i=0;i<n;i++){
        float term=y[i];
        for(int j=0;j<n;j++){
            if(i!=j) term*=(val-x[j])/(x[i]-x[j]);
        }
        ans+=term;
    }
    cout<<"Value of y at x is: "<<ans<<endl;
}


int main(){
    int n;
    cout<<"Enter data points: ";
    cin>>n;
    float x[100],y[100];
    cout<<"Eneter values of x: ";
    for(int i=0;i<n;i++) cin>>x[i];
    cout<<"Eneter values of y: ";
    for(int i=0;i<n;i++) cin>>y[i];
    float val;
    cout<<"Enter value of x to be find: ";
    cin>>val;
    lagrange(x,y,val,n);
    return 0;
}
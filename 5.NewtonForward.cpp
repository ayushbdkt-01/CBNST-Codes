#include<iostream>
using namespace std;


double factorial(int n){
    double ans=1.00;
    for(int i=2;i<=n;i++) ans*=i;
    return ans;
}


void newtonForward(int n,double x[100],double y[][100],double xn){
    for(int j=1;j<n;j++){
        for(int i=0;i<n-j;i++){
            y[i][j] = y[i+1][j-1]-y[i][j-1];
        }
    }
    float u = (xn-x[0])/(x[1]-x[0]);
    float sum=y[0][0];
    float uTerm=1;
    
    for(int i=1;i<n;i++){
        uTerm = uTerm * (u-(i-1));
        sum += (uTerm*y[0][i])/factorial(i);
    }
    cout<<"Value of y at x is: "<<sum<<endl;
}


int main(){
    double x[100]={0};
    double y[100][100]={0};
    
    int n;
    cout<<"Enter number of entries: ";
    cin>>n;
    
    cout<<"Enter values of x: "<<endl;
    for(int i=0;i<n;i++) cin>>x[i];
    
    cout<<"Enter values of y: "<<endl;
    for(int i=0;i<n;i++) cin>>y[i][0];
    
    double xn;
    cout<<"Enter value of x to find y: ";
    cin>>xn;
    
    newtonForward(n,x,y,xn);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;


void curveFitting(int n, double x[],double y[]){

    double sumX=0, sumY=0, sumXY=0, sumX2=0;
    for(int i=0;i<n;i++){
        sumX+=x[i];
        sumY+=y[i];
        sumXY+=x[i]*y[i];
        sumX2+=x[i]*x[i];
    }
    double slope=(n*sumXY - sumX*sumY)/(n*sumX2 - sumX*sumX);
    double intercept=(sumY-slope*sumX)/n;
    cout<<"The best fit line is: "<<slope<<"x+"<<intercept<<endl;
}

int main(){
    int n;
    cout<<"Enter number of Terms: ";
    cin>>n;
    double x[100];
    double y[100];
    cout<<"Enter values of x: ";
    for(int i=0;i<n;i++) cin>>x[i];
    cout<<"Enter values of y: ";
    for(int i=0;i<n;i++) cin>>y[i];
    curveFitting(n,x,y);
    return 0;
}
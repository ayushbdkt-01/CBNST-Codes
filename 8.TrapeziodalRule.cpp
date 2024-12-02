#include<bits/stdc++.h>
using namespace std;


double func(double x){
    return x*x;
}


void trapezoidalRule(float a, float b, int n){
    double h=(b-a)/n;
    double sum=func(a)+func(b);
    for(int i=0;i<n;i++){
        double x=a+(i*h);
        sum+=2*func(x);
    }
    cout<<"Approx value of Intergral is: "<<(h/2)*sum<<endl;
}


int main(){
    double a,b;
    int n;
    cout<<"Enter upper and lower limit of integration: ";
    cin>>a>>b;
    cout<<"Enter number of Sub-Interval: ";
    cin>>n;
    trapezoidalRule(a,b,n);
    return 0;
}
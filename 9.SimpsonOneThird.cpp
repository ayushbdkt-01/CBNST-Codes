#include<bits/stdc++.h>
using namespace std;


double func(double x){
    return x*x;
}

void oneByThreeSimpson(double a, double b, int n){
    if(n%2==1){
        cout<<"SubIntervals should be even"<<endl;
        return;
    }
    double h=(b-a)/n;
    double sum=func(a)+func(b);
    for(int i=1;i<n;i++){
        double x=a+(i*h);
        if(i%2==0) sum+=2*func(x);
        else sum+=4*func(x);
    }
    cout<<"Approx value of Intergral is: "<<(h/3)*sum<<endl;
}


int main(){
    double a,b;
    int n;
    cout<<"Enter upper and lower limit of integration: ";
    cin>>a>>b;
    cout<<"Enter number of Sub-Interval: ";
    cin>>n;
    oneByThreeSimpson(a,b,n);
    return 0;
}
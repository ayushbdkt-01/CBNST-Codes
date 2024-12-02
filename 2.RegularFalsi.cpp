#include<iostream>
#include<cmath>
using namespace std;


double func(double x){
    return (x*x*x-x-5);
}


void falsi(double a,double b, double tol){
    if(func(a)*func(b)>=0){
        cout<<"Invalid interval"<<endl;
        return;
    }
    double c;
    while((b-a)>=tol){
        c=(a*func(b)-b*func(a))/((func(b)-func(a))*1.0);
        if(func(c)==0.0){
            cout<<"Root is:"<<c<<endl;
        }
        if(fabs(func(c))>=tol){
            cout<<"Root is: "<<c<<endl;
            return;
        }
        if(func(a)*func(c)<0.00) b=c;
        else a=c;
    }
    cout<<"Root is: "<<c<<endl;
}


int main(){
    double a,b,tol;
    cout<<"Enter initial interval: ";
    cin>>a>>b;
    cout<<"Enter tolerance: ";
    cin>>tol;
    falsi(a,b,tol);
}
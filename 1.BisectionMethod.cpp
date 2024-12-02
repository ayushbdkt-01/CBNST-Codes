#include<iostream>
using namespace std;


double func(double x){
    return ((x*x*x*1.0)-(2*x*1.0)-5);
}


void bisection(double a,double b,double tol){
    if(func(a)*func(b)>=0){
        cout<<"Invalid interval"<<endl;
        return;
    }
    double mid;
    while((b-a)>tol){
        mid=(a+b)/2.0;
        if(func(mid)==0.00){
            cout<<"root is: "<<mid<<endl;
            return;
        }
        if(func(a)*func(mid)<0.00) b=mid;
        else a=mid;
    }
    cout<<"Root is: "<<mid<<endl;
}


int main(){
    double a,b;
    cout<<"Enter range of interval"<<endl;
    cin>>a>>b;
    double tol;
    cout<<"Enter tolerance: "<<endl;
    cin>>tol;
    bisection(a,b,tol);
}
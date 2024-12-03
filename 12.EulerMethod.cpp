#include<bits/stdc++.h>
using namespace std;


double func(double x,double y){
    return x+y;
}


void euler(double x, double y, double xEnd, double h){
    while(x<=xEnd){
        cout<<x<<'\t'<<y<<endl;
        y=y+(h*func(x,y));
        x=x+h;
    }
}


int main(){
    double x,y,xEnd,h;
    cout<<"Enter initial values of x and y: ";
    cin>>x>>y;
    cout<<"Enter ending value of x: ";
    cin>>xEnd;
    cout<<"Enter step size: ";
    cin>>h;
    euler(x,y,xEnd,h);
    return 0;
}
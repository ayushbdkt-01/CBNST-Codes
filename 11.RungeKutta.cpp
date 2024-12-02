#include<bits/stdc++.h>
using namespace std;

double func(double x, double y){
    return x+y;
}

void rungeKutta(double x, double y, double val, double h){
    int n=(val-x)/h;
    for(int i=0;i<n;i++){
        double k1 = h * func(x, y);
        double k2 = h * func(x + h / 2.0, y + k1 / 2.0);
        double k3 = h * func(x + h / 2.0, y + k2 / 2.0);
        double k4 = h * func(x + h, y + k3);
        y += (k1 + 2 * k2 + 2 * k3 + k4) / 6.0;
        x += h;
        cout<<x<<'\t'<<y<<endl;
    }
}


int main(){
    float x,y,val,h;
    cout<<"Enter initial values of x and y: ";
    cin>>x>>y;
    cout<<"Enter value of x for y: ";
    cin>>val;
    cout<<"Enter step size: ";
    cin>>h;
    rungeKutta(x,y,val,h);
    return 0;
}
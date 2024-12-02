#include<iostream>
#include<cmath>
using namespace std;

double func(double x){
    return (x*x*x-4*x-5);
}

double derivative(double x){
    return (3*x*x-4);
}

void raphson(double x,double tol){
    double x1;
    int iterations;
    cout<<"Enter number of iterations: "<<endl;
    cin>>iterations;
    for(int i=0;i<iterations;i++){
        x1=(x)-(func(x)/derivative(x));
        if(fabs(x-x1)<=tol){
            cout<<"Root is: "<<x1<<endl;
            return;
        }
        x=x1;
    }
    cout<<"Root is: "<<x1<<endl;
}

int main(){
    double x,tol;
    cout<<"Enter initial root: "<<endl;
    cin>>x;
    cout<<"Enter tolerance: "<<endl;
    cin>>tol;
    raphson(x,tol);
    return 0;
}
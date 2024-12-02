#include<iostream>
#include<cmath>
using namespace std;

double derivative(double x){
    // original eqn = x^3-3x+2
    return (x*x+2)/3.0;
}

void iterative_method(double x, double tol){
    cout<<"Enter number of iterations: ";
    int iterations;
    cin>>iterations;
    double x1;
    for(int i=0;i<iterations;i++){
        x1=derivative(x);
        if(fabs(x1-x)<=tol){
            cout<<"Root is: "<<x1<<endl;
            return;
        }
        x=x1;
    }
    cout<<"Root is: "<<x1<<endl;
}

int main(){
    double x,tol;
    cout<<"Enter initial root: ";
    cin >>x;
    cout<<"Enter tolerance: ";
    cin>>tol;
    iterative_method(x,tol);
}
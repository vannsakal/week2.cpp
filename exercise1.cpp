#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}
int add(double a, double b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
double divide(int a, double b=1.0){
    return a/b;
}

int main(){
    double a, b;
    cout<<"Enter 1st NUmber: ";
    cin >> a;
    cout<<"Enter 2nd NUmber: ";
    cin >> b;
    cout<<"Sum: " << add(a,b)<< endl;
    cout<<"Difference: " << subtract(a,b)<< endl;
    cout<<"Product: " << multiply(a,b)<< endl;
    cout<<"Quotient: " << divide(a,b)<< endl;
    return 0;
}
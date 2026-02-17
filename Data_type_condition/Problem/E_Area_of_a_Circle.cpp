#include<iostream>
#include<iomanip>
using namespace std;

const double pi = 3.141592653;
int main(){
    double r;
    cin >> r;

    double area = pi * r * r;

    cout <<fixed << setprecision(9) << area;
    return 0;
}
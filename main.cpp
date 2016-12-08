#include <iostream>
#include <complex>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    complex<double> y(0.45, 0.78);
    cout<<"y="<<y<<endl;
    cout<<"pow(y,0.31)="<<pow(y,0.31)<<endl;

    complex<double> c = pow(y,0.31);
    cout<<"real part is: "<<c.real()<<endl;
    cout<<"can also do this:"<<endl;
    cout<<(pow(y,0.31)).real()<<endl;
    cout<<(pow(y,0.31)+pow(-y,0.25)).real()<<endl;
    return 0;
}

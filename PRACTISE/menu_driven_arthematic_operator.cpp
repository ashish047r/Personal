#include <iostream>
using namespace std;
 int main()
 {
    cout<< "Menu\n"<<"1. Add\n"<<"2. Sub\n"<<"3. Mul\n"<<"4. div\n";
    int a,b,c,option;
    cout<<"choose the option";
    cin>>option;
    cout<<"enter the value";
    cin>>a>>b;
    switch (option)
    {
        case 1: c=a+b;
        cout<<"result is"<<c;
        break;
        case 2: c=a-b;
        cout<<"result is"<<c;
        break;
        case 3: c=a*b;
        cout<<"result is"<<c;
        break;
        case 4: c=a/b;
        cout<<"result is"<<c;
        break;
        default: cout<<"wrong input";

    }
 }

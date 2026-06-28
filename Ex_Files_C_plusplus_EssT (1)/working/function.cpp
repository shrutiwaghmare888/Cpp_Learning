#include <iostream>
using namespace std;

int func(int a)
{ ++a;
    return a;

}

int func1(int *d){
    ++*d;
}

int main (){

    int p=2;
    cout<<func(p)<<endl;;
    int n=60;
    cout<<func1(&n)<<endl;

}
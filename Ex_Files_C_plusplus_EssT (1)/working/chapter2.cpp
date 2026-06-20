#include<iostream>
using namespace std;
int main()
{
    
     int x{20};
    int y{7};
    if(x>y)
    {
        cout << "x is greater than y" << endl;
    }
    else 
    {
        cout << "x is not greater than y" << endl;
    }

   
    auto z=x<y?" xis less than y": " y is greater than x";
    cout << z << endl;
}
#include<iostream>
using namespace std;
int main()
{
    
    //  int x{20};
    // int y{7};
    // if(x>y)
    // {
    //     cout << "x is greater than y" << endl;
    // }
    // else 
    // {
    //     cout << "x is not greater than y" << endl;
    // }

   
    // auto z=x<y?" xis less than y": " y is greater than x";
    // cout << z << endl;


    //loops
    //loop end until the condition become false

    int array[]{1,2,3,4,5};
    int i{0};
    while(i<5){
        if (i==3) break;
        cout<<"Array element :"<<array[i]<<endl;
        ++i;
    }


    do {
        cout<<"Array element :"<<array[i]<<endl;
        ++i;
    } while(i<5);


    // for loop 

    for (int i{0}; i<5; i++)
    { 
        cout<<"Array element :"<<array[i]<<endl;
    }
    string myname="shruti";
    for (int i{0}; i<myname.length(); i++)
    {
        cout << "Character : " << myname[i] << endl;
    }
}
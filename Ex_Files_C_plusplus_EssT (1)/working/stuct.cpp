#include <iostream>
using namespace std;

struct S
{
    int i{};
    double d{};
    const char *s{};
};

int main()
{
    S s1{1,40.7,"shruti"};
\
 


    //accesing the members of structure using pointer
    auto *sp=&s1;
  cout<<sp->i<<endl;


}

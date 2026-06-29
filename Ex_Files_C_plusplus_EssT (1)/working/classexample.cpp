#include <iostream>
using namespace std;

class C2
{
    private:
int cval;
public:
void setval(int val)

int getval()

};
void C2 :: setval(int val)
{
    cval = val;
}
int C2::getval()
{
    return cval;
}

int main()
{
    C2 objc2;
  objc2.setval(10);
  cout<<objc2.getval();

    return 0;
}

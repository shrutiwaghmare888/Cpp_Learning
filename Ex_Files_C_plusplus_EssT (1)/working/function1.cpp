#include<iostream>
using namespace std;

void func(const std::string &s)
{
    cout<<s<<endl;

}

int main()
{
    std :: string s{"this is string"};
    func(s);
    cout<<s<<endl;
}

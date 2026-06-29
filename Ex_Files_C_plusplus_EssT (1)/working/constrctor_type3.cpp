#include <iostream>
using namespace std;

class Bank
{
    private :
   
    int B_code;
    string B_name;
    

    public :
    Bank(int bank_code , string bank_name)
    {
       B_code =bank_code;
       B_name =bank_name;
   
    }


void display()
{

cout<<"bank code"<<B_code<<endl;
cout<<"bank name "<<B_name;

}
    
//copy constructor

    Bank(const Bank &b)
    {
  B_code = b.B_code;

B_name= b.B_name;





     }
};


int main()
{
Bank b1 (440,"sbi");
b1.display();
//here b2 is another of that store the copy of b1 
Bank b2(b1);
}
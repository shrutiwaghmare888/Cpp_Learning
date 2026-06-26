#include<iostream>
using namespace std;


struct LibraryCatalogCard
{
   const char* title{};
 const   char*author{};
  const char* publisher{};
    const char* subject{};
    int ISBN {};
   short  int publishyear{};
  short  int acquireyear{};
    int quantity{};


};


int main()
{
  LibraryCatalogCard card1{
        "cpp",
        "abc",
        "xyz",
        "c++ programming",
        987,
        2026,
        2026,
        10
     };
     cout << "Title: " << card1.title << endl;
     cout << "Author: " << card1.author << endl;
     cout << "Publisher: " << card1.publisher << endl;
     cout << "Subject: " << card1.subject << endl;
     cout << "ISBN: " << card1.ISBN << endl;
     cout << "Publish Year: " << card1.publishyear << endl;
     cout << "Acquire Year: " << card1.acquireyear << endl;
     cout << "Quantity: " << card1.quantity << endl;
     return 0;
}
#include<iostream>
#include<conio.h>
#include<windows.h>
#include "include\mul.h"
#include "include\div.h"
#include "include\sub.h"
#include "include\add.h"
using namespace std;
class inherit:public addition,public subtraction, public multiply, public division
{
    public:
     int ch;
    inherit() {ch=0;}
    void call()
    {

      cout<<"1.Addition\n2.Subtract\n3.Multiplication\n4.Division\n5.Exit";
      cout<<"\n\nEnter your choice : ";
      cin>>ch;
      switch(ch)
      {
                case 1 : { main_function(); break;}
                case 2 : {subtraction1(); break;}
                case 3 : {
                         fn_div();
                         getch();
                         break;}
                case 4 : {
                         getip();
                         getch();
                         break;}
                case 5 : cout<<"\nCleaning Up .. Exiting";
                         exit(1);
                default : cout<<"\nInvalid Option";
      }

    }
~inherit() {cout<<"\nThank you : \nProgram developed by \nAditya (12BCE1061)\nDeepak (12BCE1083) \nJeet (12BCE1105) \nPushpak (12BCE1141) \n)";
Sleep(1000);
cout<<"\nPress any key to exit!!!";
exit(0);
//Sleep(3000);
getch();}
};

int main()
{

      cout<<"BCD Arithmetic Operation";
      cout<<"\nMenu\n\n";
      inherit i1;
      i1.call();
      getch();
      return 0;
}

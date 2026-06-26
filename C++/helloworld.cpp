#include <iostream>
using namespace std;

int main()
{
  cout<<"This is how to Print"<<endl;
  cout<<"Hello world"<<endl;
  cout<<"Have a Good Day"<<endl;

  cout<<endl;

  cout<<"You can also output mathematics"<<endl;
  cout<< 3 + 3 <<endl;
  cout<< 2 * 5 <<endl;
  cout<< 10 / 2 <<endl;
  cout<< 8 - 4 <<endl;

  cout<<endl;

  cout<<"You can also use backslash commands to output different results"<<endl;
  cout<<"Hello \nWorld"<<endl;
  cout<<"or"<<endl;
  cout<<"Hello " << "\n" <<"World"<<endl;

  //this is a comment
  //you can add comments to take notes of your code

  /*
   this is a multi-line comment
   you can use this to make comments on multiple lines instead
   of typing // in every line
  */

  cout<<endl;

  cout<<"This is how to declare a Variable"<<endl;
  cout<<"type Variable_name = value"<<endl;
  int number = 15;
  cout<<"The number is: "<<number<<endl;

  cout<<"You can also use other data types as well"<<endl;
  cout<<"string \n bool \n char \n int \n string"<<endl;

  cout<<endl;

  cout<<"Examples"<<endl;

  string name = "Keithron";
  int num = 6;
  char A = 'B';
  bool is_male = true;
  float height = 5.9;

  cout<<"My name is:  "<<name<<endl;
  cout<<"My favourite number: "<<num<<endl;
  cout<<"Am I: "<<is_male<<endl;
  cout<<"My height: "<<height<<endl;

  cout<<endl;

  //this is declairing many variables
  cout<<"This is declairing multiple variables"<<endl;
  cout<<"int x = 5, y = 6, z = 50"<<endl;
  int x = 5, y = 6, z = 50;
  cout<< x + y + z<<endl;

  cout<<endl;

  cout<<"We can also do \n int x, y, z; \n x = y = z = 50;"<<endl;
  int x1, y1, z1;
  x1 = y1 = z1 = 50;
  cout<< x1 + y1 + z1 <<endl;

  cout<<endl;

  cout<<"This is how to print constants"<<endl;
  cout<<"const mynum = 69"<<ednl;
  const mynum = 69;

  return 0;
}

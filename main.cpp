#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
   ofstream name_file;
   name_file.open("jina.txt");

   string name_1, name_2;
   cout<<"Enter the first name"<<endl;
   cin>>name_1;
   cout<<"Enter the second name"<<endl;
   cin>>name_2;

   name_file<<name_1<<"\t"<<name_2;
   name_file.close();

}

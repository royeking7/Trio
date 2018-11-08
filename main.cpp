#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE

void Sort(int &a, int &b, int &c);

 
int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
 Sort(red, green, blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

void Sort(int &a, int &b, int &c)
{
    if(a<b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if(a<c)
    {
        int tmp = a;
        a=c;
        c = tmp;
    }
    if(b<c)
    {
        int tmp = b;
        b=c;
        c=tmp;
    }
    return;
}









// <-- ADD YOUR FUNCTION DEFINITON HERE

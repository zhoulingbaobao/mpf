#include <iostream>
using namespace std;
int main()
{
  int i;
  for(i=0;i<1000;i++)
  {
  int a;
  cout <<"please input a number:\n";
  cin >>a;
  int c1 = a%3 ==0;
  int c2 = a%5 ==0;
  int c3 = a%7 ==0;
  switch((c1<<2)+(c2<<1)+c3){
    case 0: cout <<"���ܱ�3,5,7����.\n"; break;
    case 1: cout <<"ֻ�ܱ�7����.\n"; break;
    case 2: cout <<"ֻ�ܱ�5����.\n"; break;
    case 3: cout <<"���Ա�5,7����.\n"; break;
    case 4: cout <<"ֻ�ܱ�3����.\n"; break;
    case 5: cout <<"���Ա�3,7����.\n"; break;
    case 6: cout <<"���Ա�3,5����.\n"; break;
    case 7: cout <<"���Ա�3,5,7����.\n"; break;
  }
  }
}


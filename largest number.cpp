#include<iostream>
using namespace std;
class Largest
{
  int a,b,c;
   public:
   void input()
{
   cout<<"enter any three numbers";
   cin>>a>>b>>c;
}
 void calculate()
{
  int r;
  r=((a>b)&&(a>c)?a:(b>a)&&(b>c)?b:c);
cout<<"largest no.:"<<r;
}
};
int main()
{
       Largest l;
       l.input();
       l.calculate();
       return 0;
}
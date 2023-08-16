#include <iostream>
using namespace std;
int main () 
{
char operation;
do {
 double first;
 double second;
 double sum;
 double p;
 cout <<"calculator for 2 no."<<endl;
 cout <<"A for addition "<< endl;
 cout <<"S for subtraction"<< endl;
 cout <<"M for multiplication"<<endl;
 cout <<"D for division "<<endl;
 cout <<"E for exponential"<<endl;
 cout <<"T for trigonometric operations"<<endl;
 cout <<"Q for quit"<<endl;
 cin >> operation; 
  if (operation=='a' || operation=='A')
  {
  cout <<"Enter two numbers: "<<endl;
  cin>>first>>second;
  cout <<"The sum is: "<<first+second<<endl;
  }
  else if (operation=='s' || operation=='S')
  {
  cout <<"Enter two numbers: "<<endl;
  cin>>first>>second;
  cout <<"The difference is: "<<first-second<<endl;
  }
  else if (operation=='m' || operation=='M')
  {
  cout <<"Enter two numbers: "<<endl;
  cin>>first>>second;
  cout <<"The product is: "<<first*second<<endl;
  }
  else if (operation=='d' || operation=='D')
  {
  cout <<"Enter two numbers: "<<endl;
  cin>>first>>second;
   if (second==0)
   {
    cout<<"not defined"<<endl;
   }
   else;
   cout <<"The quotient is: "<<first/second<<endl;
  }
  else if (operation=='e' || operation=='E')
  {
  cout << "write power raise to e to :"<<endl;
  cin >> p;
  double s;
  s=(1 + p/1 +( p*p)/(1*2) +(p*p*p)/(1*2*3) + (p*p*p*p)/(1*2*3*4)+ (p*p*p*p*p)/( 1*2*3*4*5)+(p*p*p*p*p*p)/(720)+(p*p*p*p*p*p*p)/(720*7));
  cout <<"The required value is :"<<s<<endl;
  }
  else if (operation=='t' || operation=='T')
  {
  char trig;
  cout <<"s for sin \n";
  cout <<"c for cos \n";
  cout <<"t for tan \n";
  cout <<"Which trignometric operation you want: "<<endl;
  cin >>trig;
  if (trig=='s' || trig =='S')
  {
  cout <<"for which angle you want to calculate sin:"<<endl;
  cin>>p;
  cout <<"The required sin is:"<<( p-(p*p*p)/6 +(p*p*p*p*p)/120- (p*p*p*p*p*p*p)/(120*42))<<endl;
  }
  else if (trig =='c' || trig =='C')
  {
  cout <<"for which angle you want to calculate cos:"<<endl;
  cin>>p;
  cout <<"The required cos is:"<<( 1-(p*p)/2 +(p*p*p*p)/24- (p*p*p*p*p*p)/(720))<<endl;
  }
  else if (trig=='t' || trig=='T')
  {
  cout <<"for which angle you want to calculate tan:"<<endl;
  cin>>p; 
  cout <<"The required tan is:"<<( p+(p*p*p)/(3)+(2*(p*p*p*p*p))/15) <<endl;
  }
  }
  } while (operation!='q' && operation!='Q');
return 0;
}
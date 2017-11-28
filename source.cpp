#include <iostream>
#include "symbol.h"
#include "ordinalnumber.h"
#include <string>
#include <cmath>
#include <vector>
#include <boost/algorithm/string/classification.hpp>
#include <boost/algorithm/string/split.hpp>
#include <iostream>
#include <string>
using std::vector;
using namespace std;

int main( )
{
//int n;
//cout<<"please enter the number of element: "<<endl;
//cin>>n;
vector <string> SSymbol;
vector <double> number;
string buf;
double buff;
string buffer1,buffer2;
int textname;
long double total=0;int i;string input;long double Input;long double Total;

cout<<"please enter the  element: "<<endl;
getline(cin,buffer1);
vector<string> vStr;
boost::split( vStr, buffer1, boost::is_any_of( " " ), boost::token_compress_on );
  for( vector<string>::iterator it = vStr.begin(); it != vStr.end(); ++ it )
   SSymbol.push_back(*it);
cout<<"please enter the  stoichiometric number: "<<endl;
//cout<<"The molarmass of "<<SSymbol[i]<<" is "<<molarmass(SSymbol[i])<<endl;
for(i=0;i!=SSymbol.size();++i)
{
cin>>buff;
number.push_back(buff);
}
for(i=0;i!=SSymbol.size();++i)
total=total+number[i]*molarmass(SSymbol[i]);
//cout<<"The total molarmass of ";
//for(i=0;i!=n;++i)
//{
//cout<<SSymbol[i]<<number[i];
//}
//cout<<" is: "<<total<<endl;
cout<<"please enter the element and mass: "<<endl;
cin>>input>>Input;
if(input=="total")
Total=Input/total;
else
{
for(i=0;input!=SSymbol[i];++i)
{
}
//cout<<i<<endl;
Total=Input/(molarmass(SSymbol[i])*number[i]);
}
for(i=0;i!=SSymbol.size();++i)
{
cout<<"The mass of "<<SSymbol[i]<<" is: "<<endl;
cout<<molarmass(SSymbol[i])*Total*number[i]<<endl;
}
return 0;
}

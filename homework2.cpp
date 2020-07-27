#include <iostream>
#include <string>
using namespace std;
int main()
{
   string Name;
   float Salary;
   float Sale;
   float Commisspercent;
   float Revenue;

 /*****input*****/
   cout << "Enter Name : ";
   cin >> Name ;
   cout << "Enter Salary : ";
   cin >> Salary ;
   cout << "Enter Sale : ";
   cin >> Sale ;
   cout << "Enter Commisssion Percent : ";
   cin >> Commisspercent ;

 /*****output*****/
   Revenue = (Commisspercent/100) * Sale + Salary ;

   cout << "Your name = " << Name << endl;
   cout << "Total Revenue " << Revenue << "Bath " << endl;
   return 0;
}
#include<iostream>
using namespace std;
int main ()
{
   int marks;
   cout << "Enter marks" << endl;
   cin >> marks;
   if(marks < 33 ) {
    cout << "F" ;
   }
   //else if (marks >33 && marks < 40) if > 33 then it goes to next statement and if that also true then the no. must lie bw them
   else if (marks < 40){
    cout << "E" ;
   }
   else if ( marks < 50){
    cout << "D" ;
   }
   else if ( marks < 60){
    cout << "C" ;
   }
   else if (marks < 70){
    cout << "C+" ;
   }
   else if ( marks < 80){
    cout << "B" ;
   }
   else if ( marks < 80){
    cout << "B+" ;
   }
   else if (marks < 90){
    cout << "A" ;
   }
   else if (marks >95 && marks < 100){
    cout << "A+" ;
   }
    return 0;
}
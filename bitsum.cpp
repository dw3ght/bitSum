#include <iostream>
#include "bitsum.h"
using namespace std;

int numberOfOnes(unsigned long int value) {

  int sum=0;
while(value > 0)
{
if(value%2==1){
sum=sum + 1;
}
value=value/2;
}
 return sum;
}

int main() {
  bool playAgain = true;
  string answer;
  int returned;
 while (playAgain == true) {
  int temp;
  cout<<"Input n (decimal) : \n";
 cin>>temp;
 returned = numberOfOnes(temp);
   cout<<"Return value (number of ones) : \n"<<returned<<endl;
 
cout<<"Do you have another decimal number? \n";
 cin>>answer;
 if (answer.compare("no") == 0) {
     return 1;
 }
}
  
}

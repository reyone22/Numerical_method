
#include<iostream>
#include<math.h>
#define f(x) pow(x,3)+1
using namespace std;
int main()
{
 float lower, upper, integration=0.0, stepSize;
 cout<<"Enter lower limit of integration: ";
 cin>>lower;
 cout<<"Enter upper limit of integration: ";
 cin>>upper;

 stepSize = (upper - lower);
 
 integration = stepSize/2 *( f(lower) + f(upper));

 cout<< endl<<"Required value of integration is: "<< integration;

 return 0;
}


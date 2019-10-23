#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int pol()
{
   int n;
   cin>>n;
   if (n) pol();
   if (n>0)
   cout<<n<<' ';
   
 }

 main() {
 	pol();

return 0;

}

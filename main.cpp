#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;

  int n =argc-1;
  pa=new int[n];

  for(i=0;i<n;i++){
   // cout<<"Input no."<<i<<":";
    //cin>> *pa;
    *pa=atoi(argv[i+1]);
    pa++;
  }

pa-=n;

cout<<"Original: ";
for (i=0; i<n-1; i++ ,pa++){
   cout<<setw(3)<<*pa;
}
cout<<setw(3)<<*pa<<endl;


pb = pa;  
pa-=(n-1);
for (i=0; i<n/2; i++)
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}
pa-=(n/2);

cout<<"Reversed: ";
for (i=0; i<n-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;
}
cout<<setw(3)<<*pa<<endl;

pa-=(n-1);
delete []pa;
return 0;

}

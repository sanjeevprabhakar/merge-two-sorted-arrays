/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
   int arrone [4] = {3,10,15,17};
   int arrtwo [4] = {2,7,20,24};
   
   int arrthree[8];
   
   
   int fptr = 0;
   int sptr = 0;
   
   int i = 0 ;
   
   
   
   while(fptr != 4 && sptr != 4)
   {
       if(arrone[fptr] < arrtwo[sptr]){
       arrthree[i] = arrone[fptr];
       i++;
       fptr++;
       }
       
       else {
           
            arrthree[i] = arrtwo[sptr];
            sptr++;
            i++;
       }
       
       
   }
   
   
    while(fptr != 4){
       arrthree[i] = arrone[fptr];
       fptr++;
       
   }
  
   
   while(sptr != 4){
       arrthree[i] = arrtwo[sptr];
       sptr++;
       
   }
   
   cout << "here is your sorted merged array"<<endl;
   
   for(int j =0 ; j < 8 ; j++ ){
       
       
       cout << arrthree[j]<<endl;
   }
   
   
   
   
   
   
   return 0 ;
   

}
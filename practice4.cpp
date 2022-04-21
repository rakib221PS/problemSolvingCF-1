#include <iostream>
#include <vector>
using namespace std;

int main(){
     string sum = "1+3+4+5+6";
     char array[] = {'1'};
     int j = 0;
     for (int i = 0; sum[i]!='\0'; i++)
     {
         if (sum[i]!='+')
         {
             array[j] = sum[i];
             j++;
         }
         
     }
     for (int i = 0; i < array[i]!='\0'; i++)
     {
         cout<<array[i]<<" ";
     }
     
     
}
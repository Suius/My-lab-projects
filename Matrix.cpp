#include <iostream>
#include <cstdlib>
#include <malloc.h>
using namespace std;

int main()
{
   int m = ((rand()%10))+3;
   int n = ((rand()%10)+4);
   double temp, temp_line, temp_sas;
   int Mat[m][n];

   for (int i = 0 ; i < m ; i++)
   {
       for (int j = 0 ; j < n ; j++)
       {
           Mat [i][j]=rand()%100;
           cout<<Mat[i][j]<<" ";
       }
       cout<<endl;
   }

   cout<<endl<<"NEXT"<<endl<<endl;
      for (int i = 0 ; i < m ; i++)
   {
       for (int j = 0 ; j < n ; j++)
       {
        if (i==0)
        {
            temp = Mat[i][j];
            Mat[i][j]=Mat[m-1][n-j-1];
            Mat[m-1][n-j-1]=temp;
        }
        cout<<Mat[i][j]<<" ";
       }
       cout<<endl;
   }
   temp = 101;
   cout<<"NEXT"<<endl<<endl;
       for (int i = 0 ; i < m ; i++)
   {
       for (int j = 0 ; j < n ; j++)
       {
           if (temp>Mat[i][j])
           {
               temp = Mat[i][j];
               temp_line = i;
               temp_sas = j;
           }
       }
   }
   for (int i = 0 ; i < m ; i++)
   {
       for (int j = 0 ; j < n ; j++)
       {
          if (i == temp_line || j==temp_sas)
          {
              Mat[i][j]=0;
          }
       }
   }
      for (int i = 0 ; i < m ; i++)
   {
       for (int j = 0 ; j < n ; j++)
       {
          if (Mat[i][j]!=0)
          {
              cout<<Mat[i][j]<<" ";
          }
       }
       cout<<endl;
   }
    return 0;
}

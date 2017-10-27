#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char* argv[])
{
   srand(time(NULL));
   int m = ((rand()%10))+3;
   int n = ((rand()%10)+4);
   double temp, temp_line, temp_sas;
   int Mat[m][n];
   int condition;
   int Phase_1[m][n-1];
   condition = 0;
   int Mat_Del[m-1][n-1];
   int rdm = ((rand()%10))+1;
   int Matrix [n-1][rdm];
   int Result[m-1][rdm];
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
   temp = 101123;
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
    for (int j = 0 ; j < n-1 ; j++)
    {
        if (j == temp_sas)
        {
            condition = 1;
        }
        if (condition== 1)
        {
            Phase_1[i][j]=Mat[i][j+1];
        }
        else
        {
            Phase_1[i][j]=Mat[i][j];
        }
    }
}
condition = 0;
for (int i = 0 ; i < m-1 ; i++)
{
    for (int j = 0 ; j < n-1 ; j++)
    {
        if (i == temp_line)
        {
            condition = 1;
        }
        if (condition== 1)
        {
            Mat_Del[i][j]=Phase_1[i+1][j];
        }
        else
        {
            Mat_Del[i][j]=Phase_1[i][j];
        }
        cout<<Mat_Del[i][j]<<" ";
    }
    cout<<endl;
    }


    cout<<endl<<"NEXT"<<endl<<endl;

    cout<<"Your matrix is "<<n-1<<"X"<<rdm<<endl;
    for (int i = 0 ; i < n-1 ; i++)
    {
        for (int j = 0 ; j < rdm ; j++)
        {
            cin>>Matrix[i][j];
        }
    }

for(int i = 0; i < m-1; i++)
{
    for(int j = 0; j < rdm; j++)
      {
      Result[i][j] = 0;
      for(int k = 0; k < n-1; k++)
      {
        Result[i][j] += Mat_Del[i][k] * Matrix[k][j];
      }
      }
}


for (int i = 0 ; i < m-1 ; i++)
{
    for (int j = 0 ; j < rdm ; j++)
    {
        cout<<Result[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}

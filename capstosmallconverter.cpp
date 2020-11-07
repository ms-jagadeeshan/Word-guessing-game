   #include<iostream>
#include<string.h>
using namespace std;
 int main()
{  int k,m;
   char flag[5000];
   cout<<"Enter the paragraph:"<<endl;
   cin.getline(flag,5000);
   k=strlen(flag);
   cout<<"press 1 to change capital letters to small letters "<<endl;
   cout<<"press 2 to change  small letters to  capital letters "<<endl;
   cin>>m;
   if(m==1)
   { 
     for(int i=0;i<k;i++)
      {
       if(flag[i]>='A'&& flag[i]<='Z')
        {
           flag[i]+=32;
        }
          cout<<flag[i];
      }
   }
   if(m==2)
   { 
     for(int j=0;j<k;j++)
      {
       if(flag[j]>='a'&& flag[j]<='z')
        {
           flag[j]-=32;
        }
          cout<<flag[j];
      }
   }
}
#include<iostream>
#include<string.h>
using namespace std;
void wordschecker(char[600],int &,int);
int main()
{
   char flag[600];
   for(int i=0;i<600;i++)
   {
       flag[i]=' ';
   }
   cout<<"enter the paragraph"<<endl;
   cin.getline(flag,600);
   int no_char=strlen(flag);
   int no_words=1;
   wordschecker(flag,no_words,no_char);
   int no_letter=no_char-no_words+1;
   printf("Analysis Report\n");
   printf("Given paragraph contains %d words\n",no_words);
   printf("And contains  %d letters\n",no_letter);
   printf("On an average %.2f letters present in a word\n",no_letter/(float)no_words);
}
void wordschecker(char chr[600],int &no_words,int no_char)
{  
    for(int i=0;i<no_char;i++)
    {
        if(chr[i]==' ')
        {
            no_words++;
        }
    }
}
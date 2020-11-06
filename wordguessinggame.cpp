#include<iostream>
#include<cstring>
using namespace std;
int issame(string ,string );      //fucncton to check both words are same
void analyse(string,string,int &,int &);   //function to give cow and goat values

int main()
{
    string words[]={"life","love","near","ring","wolf","fish","five","king","over","time",
                   "able","have","sing","star","city","soul","rich","duck","film","lion",
                   "live","safe","pain","rain","iron","once","with","fire","care","cake","back",
                    "lady","away","work","self","mole","golf"};
    printf("\t\tINSTRUCTIONS\n");
    cout<<"1.You shoud give the four letters word\n"<<"2.All the four letters in the word should be distinct\n" ;
    cout<<"3.terminologies involved\n"<<"     GOAT=n: n letter in your word is correct and lies in correct place\n" ;
    cout<<"     COW=n:  n letters in your word are correct and lie in wrong plcce\n";
    cout<<"\t    eg.if your word is love\n"<<"\t       if answer is wolf \n"<< "\t       goat=1  cow=1";
      
    srand((unsigned) time(0));
     int randomNumber = rand();
     int nthelement=(int)randomNumber%37;

    string assigned=words[nthelement];
    string playerinput;
    int goat=0,cow=0;
    int flag1=0;
    while(flag1==0)
    {
        cin>>playerinput;
        int flag2;
        flag2=issame(assigned,playerinput);
        if(flag2==1)
        {
            break;
        }
        else
        {
            analyse(assigned,playerinput,goat,cow);
            printf("cow=%d,goat=%d\n\n",cow,goat);
            cow=0;
            goat=0;
        }
       
    }
}

int issame(string s1,string s2)     
{   
    int rvalue=1;
    for(int i=0;i<4;i++)
    {
       if(s1[i]!=s2[i])
       {
           rvalue=0;
           break;
       }
    }
    return rvalue;

    //if both strings are not same returns f and incase of same returns 1

}

void analyse(string s1,string s2,int &goat,int &cow)
{
    for(int i=0;i<4;i++)
    {
        if(s1[i]==s2[i])
        {
            goat++;
        }
       
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(s1[i]==s2[j])
            {
                cow++;

          }

        }
    }
}






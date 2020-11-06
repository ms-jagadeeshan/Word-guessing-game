#include<iostream>
#include<cstring>
using namespace std;
int issame(string ,string );      //fucncton to check both words are same
void analyse(string,string,int &,int &);   //function to give cow and goat values

int main()
{
    top:
    string words[]={"able","acid","aged","also","area","army","away","back",
    "band","bank","base","bath","bear","beat","belt","best",
    "bird","blow","blue","boat","body","bond","bone","born",
    "both","bowl","bulk","burn","bush","busy","calm","came","camp","card","care",
    "case","cash","cast","chat","chip","city","club","coal","coat","code","cold",
    "come","cope","copy","core","cost","crew","crop","dark","date",
    "dawn","days","deal","dean","dear","debt","deny","desk","dial","dick",
    "diet","disc","disk","does","done","dose","down","draw","drew","drop","drug",
    "dual","duke","dust","duty","each","earn","east","easy",
    "evil","exit","face","fact","fail","fair","farm","fast","fate","fear",
    "felt","file","film","find","fine","fire","firm",
    "fish","five","flat","flow","ford","form","fort","four","from",
    "fuel","fund","gain","game","gate","gave","gear","gift","girl","give",
    "glad","goal","goes","gold","golf","gone","gray","grew","grey","grow","gulf",
    "hair","half","hand","hang","hard","harm","hate","have","head","hear","heat",
    "held","help","hero","hire","hold","hole","holy","home",
    "hope","host","hour","huge","hung","hunt","hurt","idea","inch","into","iron","item",
    "jack","jane","jean","john","join","jump","jury","just","keen","keep","kent","kept",
    "kick","kill","kind","king","knee","knew","know","lack","lady","laid","lake","land",
    "lane","last","late","lead","left","less","life","lift","like","line","link","list",
    "live","load","loan","lock","logo","long","look","lord","lose","loss","lost","love",
    "luck","made","mail","main","make","male","many","Mark","mass","matt","meal","mean",
    "meat","meet","menu","mere","mike","mile","milk","mill","mind","mine","mode",
    "more","most","move","much","must","name","navy","near","neck",
    "news","next","nice","nick","nose","note","okay","once","only",
    "open","oral","over","pace","pack","page","paid","pain","pair","palm","park","part",
    "past","path","peak","pick","pink","pipe","plan","play","plot","plug","plus",
    "rate","read","real","rely","rent","rest","rice","rich","ride","ring",
    "rise","risk","road","rock","role","rose","rule","rush",
    "ruth","safe","said","sake","sale","salt","same","sand","save","seat",
    "self","send","sent","sept","ship","shop","shot","show","shut",
    "sick","side","sign","site","size","skin","slip","slow","snow","soft","soil","sold",
    "sole","some","song","sort","soul","spot","star","stay","step","stop","such",
    "suit","sure","take","tale","talk","tank","tape","task","team","tech",
    "tend","term","test","text","than","them","then","they","thin","this","thus"
    ,"time","tiny","told","tone","tony","tour","town",
    "trip","true","tune","turn","twin","type","unit","upon","used","user","vary","vast",
    "very","vice","view","vote","wage","wait","wake","walk","want","ward","warm",
    "wash","wave","ways","weak","wear","went","west","what","when",
    "whom","wide","wife","wild","wind","wine","wing","wire","wise","wish","with",
    "word","wore","work","yard","yeah","year","your","zero","zone"};


    printf("\t\tINSTRUCTIONS\n");
    cout<<"1.You shoud give the four letters word\n";
    cout<<"2.All the four letters in the word should be distinct\n";
    cout<<"3.Terminologies involved\n";
    cout<<"     =>if GOAT=n, then n letter in your word is correct and lies in correct place\n";
    cout<<"     =>if COW=n, then n letters in your word are correct and lie in wrong place\n";
    cout<<"\t    eg.if your word is love\n";
    cout<<"\t       if answer is wolf \n";
    cout<< "\t       goat=1  cow=1\n";
    cout<<"4.Press 'q' to quit the game\n";
    cout<<"5.Press 'n' for enter into new game\n";
    cout<<"6.Press Enter key to enter into the game\n";
    cin.get();
    cout<<"\t\t    WELCOME!\n"<<"\t         Enter the word\n";
    srand((unsigned) time(0));
     int randomNumber = rand();
     int nthelement=(int)randomNumber%500;
    int i=0;
    string assigned=words[nthelement];
    string playerinput;
    int goat=0,cow=0;
    int flag1=0;
    while(flag1==0)
    {       
        i++;  
        cout<<i<<'.';
        cin>>playerinput;
        if(playerinput[0]=='q')
        {
            break; 
        }
        if(playerinput[0]=='n')
        { 
            cout << "\033[2J\033[1;1H";
            goto top;
        }
        int flag2;
        flag2=issame(assigned,playerinput);
        if(flag2==1)
        {  
            cout<<"\tCONGRADULATIONS! YOU WON !!!!!\n";

            break;
        }
        else
        {
            analyse(assigned,playerinput,goat,cow);
            printf("goat=%d,cow=%d\n\n",goat,cow);
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






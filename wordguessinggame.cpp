#include<iostream>
#include<cstring>
using namespace std;
int issame(string ,string );      //fucncton to check both words are same
void analyse(string,string,int &,int &);   //function to give cow and goat values
void isvalid(string);
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
    //s1 is what we assigned and s2 is what user given
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
    //s1 is what we assigned and s2 is what user given
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

void isvalid(string s1)
{
       string validwords [][500]={
           {"aahs","aals","abac","abas","abba","abbe","abbs","abed","abet","abid","able","ably","abos","abri","abut","abye","abys","acai","acca","aced","acer","aces","ache","achy","acid","acme","acne","acre","acta","acts","acyl","adaw","adds","addy","adit","ados","adry","adze","aeon","aero","aery","aesc","afar","affy","afro","agar","agas","aged","agee","agen","ager","ages","agha","agin","agio","aglu","agly","agma","agog","agon","ague","ahed","ahem","ahis","ahoy","aias","aide","aids","aiga","ails","aims","aine","ains","airn","airs","airt","airy","aits","aitu","ajar","ajee","aked","akee","akes","akin","alae","alan","alap","alar","alas","alay","alba","albe","albs","alco","alec","alee","alef","ales","alew","alfa","alfs","alga","alif","alit","alko","alky","alls","ally","alma","alme","alms","alod","aloe","alow","alps","also","alto","alts","alum","amah","amas","ambo","amen","amia","amid","amie","amin","amir","amis","amla","ammo","amok","amps","amus","amyl","anal","anan","anas","ance","ands","anes","anew","anga","anil","anis","ankh","anna","anno","anns","anoa","anon","anow","ansa","anta","ante","anti","ants","anus","apay","aped","aper","apes","apex","apod","apos","apps","apse","apso","apts","aqua","arak","arar","arba","arbs","arch","arco","arcs","ards","area","ared","areg","ares","aret","arew","arfs","aria","arid","aril","aris","arks","arle","arms","army","arna","arow","arpa","arse","arsy","arti","arts","arty","arum","arvo","aryl","asar","asci","asea","ashy","asks","asps","atap","ates","atma","atoc","atok","atom","atop","atua","aufs","auks","aula","auld","aune","aunt","aura","auto","aval","avas","avel","aver","aves","avid","avos","avow","away","awdl","awed","awee","awes","awls","awns","awny","awol","awry","axal","axed","axel","axes","axil","axis","axle","axon","ayah","ayes","ayin","ayre","ayus","azan","azon","azym"},
           {"baal","baas","baba","babe","babu","baby","bach","back","bacs","bade","bads","bael","baff","baft","bagh","bags","baht","bail","bait","baju","bake","bald","bale","balk","ball","balm","bals","balu","bams","banc","band","bane","bang","bani","bank","bans","bant","baps","bapu","barb","bard","bare","barf","bark","barm","barn","barp","bars","base","bash","bask","bass","bast","bate","bath","bats","batt","baud","bauk","baur","bawd","bawl","bawn","bawr","baye","bays","bayt","bead","beak","beam","bean","bear","beat","beau","beck","bede","beds","bedu","beef","been","beep","beer","bees","beet","bego","begs","bein","bell","bels","belt","bema","bend","bene","beni","benj","bens","bent","bere","berg","berk","berm","best","beta","bete","beth","bets","bevy","beys","bhat","bhel","bhut","bias","bibb","bibs","bice","bide","bidi","bids","bien","bier","biff","biga","bigg","bigs","bike","bile","bilk","bill","bima","bind","bine","bing","bink","bins","bint","biog","bios","bird","birk","birl","biro","birr","bise","bish","bisk","bist","bite","bito","bits","bitt","bize","blab","blad","blae","blag","blah","blam","blat","blaw","blay","bleb","bled","blee","blet","blew","bley","blin","blip","blob","bloc","blog","blot","blow","blub","blue","blur","boab","boak","boar","boas","boat","boba","bobs","bock","bode","bods","body","boep","boet","boff","bogs","bogy","boho","bohs","boil","bois","boke","boko","boks","bola","bold","bole","boll","bolo","bolt","boma","bomb","bona","bond","bone","bong","bonk","bony","boob","booh","book","bool","boom","boon","boor","boos","boot","bops","bora","bord","bore","bork","borm","born","bors","bort","bosh","bosk","boss","bota","both","bots","bott","bouk","boun","bout","bowl","bowr","bows","boxy","boyf","boyg","boyo","boys","bozo","brad","brae","brag","brak","bran","bras","brat","braw","bray","bred","bree","brei","bren","brer","brew","brey","brie","brig","brik","brim","brin","brio","bris","brit","brod","brog","broo","bros","brow","brrr","brus","brut","brux","buat","buba","bubo","bubs","bubu","buck","buda","budi","budo","buds","buff","bufo","bugs","buhl","buhr","buik","buke","bulb","bulk","bull","bumf","bump","bums","buna","bund","bung","bunk","bunn","buns","bunt","buoy","bura","burb","burd","burg","burk","burl","burn","burp","burr","burs","bury","bush","busk","buss","bust","busy","bute","buts","butt","buys","buzz","byde","byes","byke","byre","byrl","byte"}
           
       };
}
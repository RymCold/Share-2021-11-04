#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define MOD 1145
int myrand() {
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist2(1,100000);
    return dist2(rng);
}
LL base=1,now;
inline LL read(){
    LL x=0,y=1; char c=getchar();
    while(c<'0'||c>'9') {if(c=='-')y=-y;c=getchar();}
    while(c>='0'&&c<='9') {x=x*10+c-'0';c=getchar();}
    return x*y;
}
inline void solve3() {
    puts("V 0.0.1 : Basic functions added;");
    puts("V 0.0.2 : Solve the problem that random number doesn't random;");
    puts("V 0.0.3 : Added Infinity mode; ");
    puts("          You can see the changelog now!");
    puts("V 0.0.4 : Remove random numbers Summon By mt19937;");
    puts("V 0.0.5 : Changed the number for module;");
    puts("          Changed some details of the texts;");
    exit(0);
}
inline void solve2() {
    puts("press '5' to exit;");
    while(1) {
        now=read();
        if(now==5) {puts("Thank you for your trying our beta release.");exit(0);}
        if(now==1) {LL cur=base%MOD*(rand()*rand())%6920+1001;printf("P%lld\n",cur);}
        else if(now==2) {LL cur=base%MOD*(rand()*rand())%6000+1;printf("AT%lld\n",cur); }
        else if(now==3) {LL cur=base%MOD*(rand()*rand())%1510+1,tik=rand()%4+1;printf("CF%lld%c\n",cur,(char)(tik+'A'-1));}
        else { LL cur=base%MOD*(rand()*rand())%5600+1;printf("LOJ #%lld\n",cur);}       
    }
}
inline void init() {
    puts("Random Task Number Summon System V0.0.5.");
    puts("All rights reversed.");    
    puts("/--------------------------------------/");
}
int main(){
    srand(time(0)); init();
    puts("Pls choose ur mode first:");
    puts("1 : Simple Mode;");
    puts("2 : Infinity Mode;");
    puts("3 : Display the changelog and exit;");
    puts("/--------------------------------------/");
    LL op=read();
    if(op==1||op==2) puts("1:lg 2:AT 3:CF 4:LOJ");
    if(op==2) solve2();
    if(op==3) solve3();
    now=read();
    if(now==1) {LL cur=base%MOD*(rand()*rand())%6920+1001;printf("P%lld\n",cur);}
    else if(now==2) {LL cur=base%MOD*(rand()*rand())%6000+1;printf("AT%lld\n",cur); }
    else if(now==3) {LL cur=base%MOD*(rand()*rand())%1510+1,tik=rand()%4+1;printf("CF%lld%c\n",cur,(char)(tik+'A'-1));}
    else { LL cur=base%MOD*(rand()*rand())%5600+1;printf("LOJ #%lld\n",cur);}     
    return puts("Thank you for your trying our beta release."),0;
}
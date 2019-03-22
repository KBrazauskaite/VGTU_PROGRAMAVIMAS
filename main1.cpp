
#include<iostream>

using namespace std;
struct studentai
{
       char var[20];

};
int main()
{
       struct studentai s[100];
       int n, i;
       cout<<"\n iveskite studentu skaiciu : ";
       cin>>n;
       for(i=0; i<=n-1; i++)
       {
              cout<<"\n sudento vardas :  ";
              cin>>s[i].var;
              cout<<"\n iveskite pazymi ";
              cout<<"\n ---------------------";

       }

       return 0;
}

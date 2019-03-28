<<<<<<< HEAD
#include <iostream>
#include <string>

using namespace std;
struct stud
{
       string var, pav;
=======

#include<iostream>

using namespace std;
struct studentai
{
       char var[20];
>>>>>>> 0dbf0823a85125ef111258c8fe1bbf813c37bdba

};
int main()
{
<<<<<<< HEAD
       int studsk;
       cout<<"iveskite studentu skaiciu : ";
       cin>>studsk;
       stud studentas[100];
       return 0;
}
=======
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
>>>>>>> 0dbf0823a85125ef111258c8fe1bbf813c37bdba

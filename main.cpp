<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
using namespace std;
struct studentai
{
       char sname[20];
       int rollno;
       int english, maths, science;
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
              cin>>s[i].sname;
              cout<<"\n iveskite pazymi ";
              cout<<"\n ---------------------";

       }

       return 0;
}

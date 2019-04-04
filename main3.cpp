#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

struct irasas { //ivedama struktura
    string var, pav;
    int egz, sk;
    vector <int> paz;
    double vid, med, rez;
    void Vid();
    void Med();
    void Rez();
};

int main(){
    vector <irasas> duomenubaze; //sukuriamas vektorius duomenu ivedimui
    irasas temp;
    string temp_var, temp_pav;
    int temp_nd, temp_egz;
    char paklausimas;
    do {
    cout<<"Iveskite studento varda: "<<endl;
    cin>>temp_var;
    cout<<"Iveskite studento pavarde: "<<endl;
    cin>>temp_pav;
    cout<<"Iveskite pazymius: "<<endl;
    cin>>temp_nd;
    while (temp_nd !=0){
        if (temp_nd>0 && temp_nd<11)
        {
            temp.paz.push_back(temp_nd);
        }
        else {cout<<"netinkamas pazymys, bandykite dar karta: ";}
        cin>>temp_nd;
    }

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

struct irasas { // sukuriama programos struktura
    string var, pav;
    int egz, sk;
    vector <int> paz;
    double vid, med, rez;
    void Vid();
    void Med();
    void Rez();
};

int main(){
    vector <irasas> duomenubaze; // sukuriamas vektorius duomenu ivedimui
    irasas temp; //sukuriamas laikinas kintamasis
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
        if (temp_nd>0 && temp_nd<11) // sukuriamas ciklas kad butu tikrinama ar pazymys yra tinkamas
        {
            temp.paz.push_back(temp_nd);
        }
        else {cout<<"netinkamas pazymys, bandykite dar karta: ";}
        cin>>temp_nd;
    }
     temp.Vid(); temp.Med(); temp.Rez();
    duomenubaze.push_back (temp);
    cout<<"Iveskite egzamino bala: "<<endl;
    cin>>temp_egz;
    cout<<"ar ivesite dar? t/ kitoks kl: ";
    cin>>paklausimas;
    } while (paklausimas == 't');

    for (auto a: duomenubaze){
        cout<<"Vardas\t"<<"Pavarde\t"<<"Galutinis(Med.)/Galutinis(Vid.)"<<endl; 
        cout<<temp_var<<"    "<<temp_pav<<"       "<<a.med<<"        "<<a.vid<<endl;
        cout<<"---------------------------------"<<endl;

    }
}

 void irasas::Vid(){
        vid=0;
        for (int a : paz)
            vid+=a;
        vid=double(vid)/paz.size();
    }
    void irasas::Med(){
        sort(paz.begin(), paz.end());
        paz.size()%2==0 ? med=(paz[paz.size()/2-1]+paz[paz.size()/2])/2 : med=paz[paz.size()/2];
    }
    void irasas::Rez(){
        rez=0.4*vid+0.6*egz;
    }


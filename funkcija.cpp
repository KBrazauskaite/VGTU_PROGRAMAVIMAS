#include "funkcija.h"
#include "struktura.h"

void meniu (){
vector <irasas> duomenubaze; // sukuriamas vektorius duomenu ivedimui
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

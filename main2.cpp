#include <iostream>
#include <string>

using namespace std;
using std::list;
using std::deque;

struct stud {
    string var, pav;
};

void tikrinimas(string &pavadinimas){ //funkcijos prototipas;
    const x=pavadinimas.length();   // ivedama konstanta vardo ilgiui; pirmoji didzioji raide, visos kitos mazosios
    for (int i=(pavadinimas[0]>=65 && pavadinimas[0]<=90; i<n; i++){ //pagal ASCII lentele uzduodama reiksme pirmajam masyvo nariui nuo A (65) iki Z (90)        if (pavdinimas[i]>=97 &&pavadinimas[i]<=122 && pavadinimas[0]>=65 && pavadinimas[0]<=90
       if (pavadinimas[i]>=97 && pavadinimas[i]<=122 && pavadinimas[0]>=65 && pavadinimas[0]<=90) // tikrinama kad sekantys masyvo nariai butu mazosios raides nuo a (97) iki z (122)
            {
                continue; // jei salyga tenkinama, ivedami kiti punktai;
            }
        else
                {
                    cout<<"neteisingai ivestas vardas!"<<endl; // jei salyga netinka i ekrana isvedama klaida ir kartojamas vardo ivedimas
                    cout<<"iveskite studento varda: "<<endl;
                    cin>>pavadinimas;
                }
            }
        }
if (sk>=0 && sk<=10)
{

}

int main();
    int studsk;
    cout<<"iveskite studentu skaiciu: "; // ivedamas studentu skaicius, naudojant struktura
    cin>>studsk;
    stud studentas[100];
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct stud {
    string var, pav;
    double vid=0;
    int egz=0;
};

void tikrinimas(string &pavadinimas){ //funkcijos prototipas;
    const int x=pavadinimas.length();   // ivedama konstanta vardo ilgiui; pirmoji didzioji raide, visos kitos mazosios
    for (int i=(pavadinimas[0]>=65 && pavadinimas[0]<=90; i<n; i++){ //pagal ASCII lentele uzduodama reiksme pirmajam masyvo nariui nuo A (65) iki Z (90)
       if (pavadinimas[i]>=97 && pavadinimas[i]<=122 && pavadinimas[0]>=65 && pavadinimas[0]<=90) // tikrinama kad sekantys masyvo nariai butu mazosios raides nuo a (97) iki z (122)
            {
                continue; // jei salyga tenkinama, ivedami kiti punktai;
            }
        else
                {
                    cout<<"neteisingai ivestas vardas!"<<endl; // jei salyga netinka i ekrana isvedama klaida ir kartojamas vardo ivedimas
                    cout<<"iveskite studento varda: "<<endl;
                    cin>>pavadinimas;
                }
            }
        }
int skaicius(){
    string n;
    cin>>n;
    while (n.find_first_not_off("0123456789") !=string::npos){ // tikrinama ar argumentas nesusideda is skaiciu
        cout<<"blogai ivestas skaicius"<<endl; //jei yra raidziu isvedama klaida
        cout<<"iveskite skaiciu: "<<endl; //ir prasoma ivesti nauja argumenta
        cin>>n;
    }
    if (!cin){ //jei false
        return 1; //griztama i funkcija
    }
    return stoi(n);
}
int main();
    int studsk;
    cout<<"iveskite studentu skaiciu: "; // ivedamas studentu skaicius, naudojant struktura
    cin>>studsk;
    stud studentas[100];
    for (int i=0; i<s; i++){
        cout<<"iveskite sudento varda: "<<endl;
        cin>>studentas[i].var; //ivedamas studento vardas
        tikrinimas(studentas[i].var); //tikrinama ar vardas susideda is pirmos didziosios raides ir sekanciu mazuju raidziu, ir ar nera skaiciu
        cout<<"iveskite studento pavarde: "<<endl;//tikrinama ar teisingai ivesta pavarde
        cin>>studentas[i].pav
        vector<int>pazymiai;
        int k;
        while(cin){
            cout<<"iveskite pazymi: "<<endl;
            k=skaicius();
            while (k<1 || k>10){ //tikrinamas pazymys, ar jis nera mazesnis uz 0 ir didesnis uz 10
                cout<<"netinkamas pazymys!"<<endl;
                cout<<"iveskite pazymi: "<<endl;
                k=skaicius();
            }
        if (cin){
            pazymiai.push_back(k);
            }
        }
        cin.clear();
        int x=pazymiai.size();
        inf(x){
        int sum=0
        for (int j=0; j<x; j++){
            sum+=pazymiai[i];
            if(x%2 && j==(n/2+1)){
                studentas[i].med=pazymiai[i];
            else if (!(n%2) && (j==(n/2)))
            }
        }
    }

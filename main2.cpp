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

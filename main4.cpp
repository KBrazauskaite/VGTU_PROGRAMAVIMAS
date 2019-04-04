#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "struktura.h"
#include "funcija.h"

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


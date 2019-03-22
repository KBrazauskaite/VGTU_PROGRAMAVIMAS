
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

struct Studentas {
    string vardas;
    string pavarde;
    double vid = 0;
    double med = 0;
    int egz = 0;
};

void TikrintiPavadinima( string &pav ) {
    const int n = pav.length();

    for ( int i = ( pav[ 0 ] >= 65 && pav[ 0 ] <= 90 ); i < n; i++ ) {
        if ( pav[ i ] >= 97 && pav[ i ] <= 122 && pav[ 0 ] >= 65 && pav[ 0 ] <= 90 ) {
            continue;
        } else {
            cout << "Blogai ivestas vardas" << endl;
            cout << "Bandykite dar karta: ";
            cin >> pav;

            i = 0;
        }
    }
}

int GautiSkaiciu() {
    string input;
    cin >> input;

    while ( input.find_first_not_of( "0123456789" ) != string::npos ) {
        cout << "Blogai ivestas skaicius" << endl;
        cout << "Bandykite dar karta: ";
        cin >> input;
    }

    if ( !cin ) {
        return 1;
    }

    return stoi( input );
}

int main() {


    int s;

    cout << "Iveskite studentu skaiciu: ";
    cin >> s;

    Studentas studentai[ 100 ];

    for ( int i = 0; i < s; i++ ) {
        cout << "Iveskite studento:" << endl << "Varda: ";
        cin >> studentai[ i ].vardas;
        TikrintiPavadinima( studentai[ i ].vardas );

        cout << "Pavarde: ";
        cin >> studentai[ i ].pavarde;
        TikrintiPavadinima( studentai[ i ].pavarde );

        vector<int> pazymiai;
        int k;

        cout << "Ivesti galite uzbaigti paspaude CTRL + Z." << endl;

        while ( cin ) {
            cout << "Iveskite pazymi: ";
            k = GautiSkaiciu();

            while ( k < 1 || k > 10 ) {
                cout << "Ivestas skaicius yra per mazas/didelis." << endl;
                cout << "Bandykite dar karta: ";
                k = GautiSkaiciu();
            }

            if ( cin ) {
                pazymiai.push_back( k );
            }
        }

        cin.clear();

        int n = pazymiai.size();

        if ( n ) {
            int suma = 0;

            for ( int j = 0; j < n; j++ ) {
                suma += pazymiai[ i ];

                if ( n % 2 && j == ( n / 2 + 1 ) ) {
                    studentai[ i ].med = pazymiai[ i ];
                } else if ( !( n % 2 ) && ( j == ( n / 2 ) || j == ( n / 2 + 1 ) ) ) {
                    studentai[ i ].med += pazymiai[ i ];
                }
            }

            if ( !( n % 2 ) ) {
                studentai[ i ].med /= 2;
            }

            studentai[ i ].vid = suma / n;

            cout << "Iveskite egzamino rezultata: ";
            studentai[ i ].egz = GautiSkaiciu();
        }
    }

    cout << "Isvesti mediana (T) ar vidurki (N): ";
    char ats;
    cin >> ats;

    bool mediana = false;

    if ( ats == 'T' || ats == 't' ) {
        mediana = true;
        cout << "Vardas\t" << "Pavardë\t" << "Galutinis (Med.)" << endl;
    } else {
        cout << "Vardas\t" << "Pavardë\t" << "Galutinis (Vid.)" << endl;
    }

    cout << "--------------------------------" << endl;

    double gal = 0;

    for ( int i = 0; i < s; i++, gal = 0 ) {
        cout << studentai[ i ].vardas << "\t" << studentai[ i ].pavarde << "\t";

        if ( mediana ) {
            gal = 0.4 * studentai[ i ].med;
        } else {
            gal = 0.4 * studentai[ i ].vid;
        }

        gal += 0.6 * studentai[ i ].egz;

        cout << fixed << setprecision( 2 ) << gal << endl;
    }

    return 0;
}

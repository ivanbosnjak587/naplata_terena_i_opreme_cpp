#include <iostream>
using namespace std;

// Funkcija za izračun cijene
float izracunajCijenu(float trajanje, float cijena_po_satu) {
    return trajanje * cijena_po_satu;
}

// Funkcija za iznajmljivanje terena
float iznajmiTeren(float cijena_po_satu) {
    float trajanje;
    cout << "Unesite trajanje najma terena u satima: ";
    cin >> trajanje;
    return izracunajCijenu(trajanje, cijena_po_satu);
}

// Funkcija za iznajmljivanje opreme
float iznajmiOpremu(float cijena_po_satu) {
    float trajanje;
    cout << "Unesite trajanje najma opreme u satima: ";
    cin >> trajanje;
    return izracunajCijenu(trajanje, cijena_po_satu);
}

int main() {
    cout << "Dobrodošli! Molimo odaberite uslugu iznajmljivanja:" << endl;
    cout << "1. Najam terena" << endl;
    cout << "2. Najam opreme" << endl;

    int opcija;
    cin >> opcija;

    float ukupna_cijena;

    if (opcija == 1) {
        float cijena_po_satu_teren;
        cout << "Unesite cijenu najma terena po satu: ";
        cin >> cijena_po_satu_teren;
        ukupna_cijena = iznajmiTeren(cijena_po_satu_teren);
    } else if (opcija == 2) {
        float cijena_po_satu_oprema;
        cout << "Unesite cijenu najma opreme po satu: ";
        cin >> cijena_po_satu_oprema;
        ukupna_cijena = iznajmiOpremu(cijena_po_satu_oprema);
    } else {
        cout << "Pogrešan odabir." << endl;
        return 1;
    }

    cout << "Ukupna cijena za naplatu iznosi: " << ukupna_cijena << " kn" << endl;

    return 0;
}

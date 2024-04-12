#include <iostream>
#include <string>
using namespace std;

class GullarSifat {
private:
    string nomi;
    string rangi;
    string kelibChiqishi;
    float boyi; // Metrlarda
    float narxi; // So'mda

public:
    void show() {
        static int k = 0;
        cout << ++k << " - Gullar Sifati:" << endl << endl;
        cout << "Nomi: " << nomi << endl;
        cout << "Rangi: " << rangi << endl;
        cout << "Kelib chiqishi: " << kelibChiqishi << endl;
        cout << "Bo'yi: " << boyi << " metr" << endl;
        cout << "Narxi: " << narxi << " so'm" << endl << endl;
    }

    void input() {
        static int k = 0;
        cout << ++k << " - Gullar Sifatini kiriting:" << endl << endl;
        cout << "Nomi: "; cin >> nomi;
        cout << "Rangi: "; cin >> rangi;
        cout << "Kelib chiqishi: "; cin >> kelibChiqishi;
        cout << "Bo'yi: "; cin >> boyi;
        cout << "Narxi: "; cin >> narxi;
        cout << endl;
    }

    void qidir() {
        int k;
        cout << "Izlash turini kiriting: " << endl;
        cout << "Nomi: 1" << endl;
        cout << "Rangi: 2" << endl;
        cout << "Kelib chiqishi: 3" << endl;
        cout << "Bo'yi: 4" << endl;
        cout << "Narxi: 5" << endl;
        cin >> k;

        if(k == 1) {
            string s;
            cout << "Qidirilayotgan nom: "; cin.ignore(); getline(cin, s);
            if(nomi == s) {
                cout << "Bunday nomli gul mavjud:" << endl;
                show();
            }
        }

        if(k == 2) {
            string s;
            cout << "Qidirilayotgan rang: "; cin.ignore(); getline(cin, s);
            if(rangi == s) {
                cout << "Bunday rangdagi gul mavjud:" << endl;
                show();
            }
        }

        if(k == 3) {
            string s;
            cout << "Qidirilayotgan kelib chiqishi: "; cin.ignore(); getline(cin, s);
            if(kelibChiqishi == s) {
                cout << "Bunday kelib chiqish mamlakatidan gullar mavjud:" << endl;
                show();
            }
        }

        if(k == 4) {
            float s;
            cout << "Qidirilayotgan bo'yi: "; cin >> s;
            if(boyi == s) {
                cout << "Bunday bo'yidagi gul mavjud:" << endl;
                show();
            }
        }

        if(k == 5) {
            float s;
            cout << "Qidirilayotgan narxi: "; cin >> s;
            if(narxi == s) {
                cout << "Bunday narxdagi gul mavjud:" << endl;
                show();
            }
        }
    }
};

int main() {
    GullarSifat g[100];
    int N;
    cout << "Gullar sifatlari sonini kiriting: "; cin >> N; cin.ignore(); // ignore() ni qo'shish kerak edi, chunki getline() dan oldin cin dan keyin qoldirilgan newline belgisini tozalash uchun
    for(int i = 0; i < N; i++) {
        g[i].input();
    }

    for(int i = 0; i < N; i++) {
        g[i].qidir();
    }
}
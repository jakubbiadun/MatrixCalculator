#include <iostream>

using namespace std;

int main()
{
    int choice;
    bool jestok = 1;
    do{
        cout << "Wybierz operacje:" << endl
             << "1 - Dodaj 2 macierze" << endl
             << "2 - Mnozenie 2 macierzy" << endl
             << "3 - Transpozycja macierzy" << endl
             << "4 - Wyjscie z programu" << endl;
        cin >> choice;
        switch(choice){
        case 1:{
            int a[10][10], b[10][10], wynik[10][10], w, k; // wymiary musza byc takie same !!!
            cout << "Podaj liczbe wierszy i kolumn" << endl;
            cin >> w >> k;


            // dane macierzy A
            cout << "Wprowadz dane dla macierzy A" << endl;
            for(int i = 0; i<w; ++i){
                for(int j=0; j<k; ++j){
                    cout << "Wprowadz element A" << i+1 << j+1<< " : " << endl;
                    cin >> a[i][j];
                }
            }
            // dane macierzy B
            cout << "Wprowadz dane dla macierzy B" << endl;
            for(int i = 0; i<w; ++i){
                for(int j=0; j<k; ++j){
                    cout << "Wprowadz element B" << i+1 << j+1<< " : " << endl;
                    cin >> b[i][j];
                }
            }
            // dodanie macierzy
            for(int i =0;i<w;++i){
                for(int j=0; j<k; ++j){
                    wynik[i][j] = a[i][j] + b[i][j];
                }
            }
            cout << "Wynik sumy macierzy" << endl;
            for(int i=0; i<w;++i){
                for(int j=0;j<k; ++j){
                    cout << wynik[i][j] << " ";
                    if(j == k-1) cout << endl;
                }
            }
            system("pause");
            system("cls");
            break;
            }
        case 2:{
            int a[10][10], b[10][10], wynik[10][10], w1, w2, k1, k2;
            cout << "Podaj liczbe wierszy i kolumn dla 1 macierzy" << endl;
            cin >> w1 >> k1;
            cout << "Podaj liczbe wierszy i kolumn dla 2 macierzy" << endl;
            cin >> w2 >> k2;
            // sprawdzenie czy liczba kolumn macierzy a == liczba wierszy macierzy b
            while(k1!=w2){
                cout << "Liczba kolumn macierzy A nie zgadza sie z liczba wierszy macierzy B" << endl;
                cout << "Podaj liczbe wierszy i kolumn dla 1 macierzy" << endl;
                cin >> w1 >> k1;
                cout << "Podaj liczbe wierszy i kolumn dla 2 macierzy" << endl;
                cin >> w2 >> k2;
            }
            // dane macierzy A
            cout << "Wprowadz dane dla macierzy A" << endl;
            for(int i = 0; i<w1; ++i){
                for(int j=0; j<k1; ++j){
                    cout << "Wprowadz element A" << i+1 << j+1<< " : " << endl;
                    cin >> a[i][j];
                }
            }
            // dane macierzy B
            cout << "Wprowadz dane dla macierzy B" << endl;
            for(int i = 0; i<w2; ++i){
                for(int j=0; j<k2; ++j){
                    cout << "Wprowadz element B" << i+1 << j+1<< " : " << endl;
                    cin >> b[i][j];
                }
            }
            for(int i =0; i<w1; ++i){
                for(int j=0; j<k2; ++j){
                    wynik[i][j]=0;
                }
            }
            for(int i=0; i<w1; ++i){
                for(int j=0; j<k2; ++j){
                    for(int k = 0; k < k1; ++k){
                        wynik[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            // wynik
            cout << "Wynik mnozenia " << endl;
            for(int i=0;i<w1;++i){
                for(int j=0; j<k2; ++j){
                    cout << " " << wynik[i][j];
                    if(j == k2-1) cout << endl;
                }
            }
            system("pause");
            system("cls");
            break;
        }
        case 3:{
            int a[10][10], transpozycja[10][10], w, k;
            cout << "Podaj liczbe wierszy i kolumn macierzy" << endl;
            cin >> w >> k;
            cout << "Wprowadz dane do macierzy" << endl;
            for(int i=0; i< w;++i){
                for(int j=0; j<k; ++j){
                    cout << "Wprowadz element A" << i+1 << j+1 << ": " << endl;
                    cin >> a[i][j];
                }
            }
            // wypisanie macierzy
            cout << "Wprowadzona macierz: " << endl;
            for(int i=0; i<w;++i){
                for(int j=0; j<k; ++j){
                    cout << " " << a[i][j];
                    if(j == k-1) cout << endl;
                }
            }
            // transpozycja macierzy
            for(int i=0; i<w;++i){
                for(int j=0; j<k; ++j){
                    transpozycja[j][i] = a[i][j];
                }
            }
            // wypisanie macierzy transponowanej
            cout << "Macierz transponowana" << endl;
            for(int i =0; i< k;++i){
                for(int j=0; j<w; ++j){
                    cout << " " << transpozycja[i][j];
                    if(j == w-1) cout << endl;
                }
            }
            system("pause");
            system("cls");
            break;
        }
        case 4: {
            jestok = 0;
            break;
        }
        }

    }while(jestok != 0);
}

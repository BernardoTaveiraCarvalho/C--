#include "Chave.h"
#include <time.h>  
void Chave::gerarChaveAleatoria(int* ch) {
	for (int i = 0; i < 6; i++) {		
            int flag;
            for (int i = 0; i < 6; i++) {
                do {
                    flag = 0;
                    ch[i] = rand() % 10 + 1;
                    for (int j = i - 1; j >= 0; j--) {
                        if (ch[i] == ch[j]) {
                            flag = 1;
                            break;
                        }
                    }

                } while (flag == 1);

            }
        }
}
void Chave::lerChave(int* ch) {
    cout << "Chave ......."<<endl;
    int flag;
    for (int i = 0; i < 6; i++) {
        do {
            flag = 0;
            cout << "Numero " << i + 1 << ":";
            cin >> ch[i];

            for (int j = i - 1; j >= 0; j--) {
                if (ch[i] == ch[j]) {
                    flag = 1;
                    break;
                }
            }

        } while (flag == 1);

    }

}
void Chave::imprimirChave(int n, int* ch) {
    cout << "Chave ......."<<endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ":" << ch[i] << endl;
    }
}
int Chave::verifPremio(int* ch1, int* ch2) {
    int acert = 0;
    int premio;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (ch1[i] == ch2[j]) {
                cout << "Ch1[" << i << "] " << ch1[i] << "Ch2[" << i << "]" << ch2[j]<< endl;
                acert++;
            }
        }
    }
    
    if (acert == 0) {
        premio = 0;
    }
    else if (acert == 4) {
        premio = 3;
    }else if (acert == 5 && ch1[5]!=ch2[5]) {
        premio = 1;
    } else if(acert>0 &&acert<4) {
        premio = -1;
    }
    else {
        premio = 2;
    }
    return premio;
}
void Chave::ordenaChave(int* ch) {
    int troca;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <5; j++) {
            if (ch[i] < ch[j]) {
                troca = ch[j];
                ch[j] = ch[i];
                ch[i] = troca;
            }
        }
    }
}
void Chave::imprimirPremio(int resultado) {
    switch (resultado)
    {
    case -1:
        cout << "Acertou alguns mas n foi o suficiente";
        break;
    case 0:
        cout << "Nao acertou qualquer numero";
        break;
    case 1:
        cout << "Acertou os 5 primeiros numeros";
        break;
    case 2:
        cout << "Acertou os 5 primeiros numeros(de total dos 6 numeros)";
        break;
    case 3:
        cout << "Acertou os 4 primeiros numeros(de total de 6 numeros)";
        break;
    }
}
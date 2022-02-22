#include "Vetores.h"
#include <iostream>
using namespace std;
void  Vetores::lerVetor(int n, int* vec) {
	for (int i = 0; i < n; i++) {
		cout << "vec[" << i << "]=";
		cin >> vec[i];
	}
}
void  Vetores::lerVetor(int n, double* vec) {
	for (int i = 0; i < n; i++) {
		cout << "vec[" << i << "]=";
		cin >> vec[i];
	}
}
void  Vetores::lerVetor(int n, float* vec) {
	for (int i = 0; i < n; i++) {
		cout << "vec[" << i << "]=";
		cin >> vec[i];
	}
}
void  Vetores::lerVetor(int n, string* vec) {
	for (int i = 0; i < n; i++) {
		cout << "vec[" << i << "]=";
		cin >> vec[i];
	}
}
double Vetores::mediaVector(int n, int* vec) {
	double soma = 0, media;
	for (int i = 0; i < n; i++) {
		soma += vec[i];
	}
	media = soma / n;
	return media;
}
void Vetores::mostrarVetor(int n, int* vec) {
		for (int i = 0; i < n; i++) {
			cout << "vec[" << i << "]=" << vec[i] << "\n";
		}
}
int  Vetores::PosVetormaior(int n, int vet[]) {
	int maior = 0;
	for (int i = 1; i < n; i++) {
		if (vet[i] > vet[maior]) {	
			maior = i;
		}
	}
	return maior;
}
int  Vetores::PosVetormenor(int n, int vet[]) {
	int menor = 0;
	for (int i = 1; i < n; i++) {
		if (vet[i] < vet[menor]) {
			menor = i;
		}
	}
	return menor;
}
int* Vetores::CriarVetorint(int tamanho) {
	int* vet = new int[tamanho];
	return vet;
}
string* Vetores::CriarVetorstring(int tamanho) {
	string* vet = new string[tamanho];
	return vet;
}
void Vetores::OrdenarVetordecrescente(int tamanho, int* vet) {
	int troca;
		for (int i = 1; i < tamanho; i++) {
			if (vet[i] > vet[i - 1]) {
				troca = vet[i];
				vet[i - 1] = vet[i];
				vet[i] = troca;
			}
	}
}
void Vetores::OrdenarVetorascendente(int tamanho, int* vet) {
	int troca;
	for (int i = 1; i < tamanho; i++) {
		if (vet[i] < vet[i - 1]) {
			troca = vet[i];
			vet[i - 1] = vet[i];
			vet[i] = troca;
		}
	}
}
int  Vetores::VetorModa(int tamanho, int vet[]) {
	int flag;
	for (int i = 0; i < tamanho; i++) {
		do {
			flag = 0;
			cout << "vet[" << i << "] ";
			cin >> vet[i];
			for (int j = i - 1; j >= 0; j--) {
				if (vet[i] == vet[j]) {
					flag = 1;
					break;
				}
			}

		} while (flag == 1);

	}
	return 0;
}
void Vetores::PreencherVetor(int tamanho, int vet[]){
	for (int i = 0; i < tamanho; i++) {
		cout << "Vet[" << i << "] ";
		cin >> vet[i];
}


}
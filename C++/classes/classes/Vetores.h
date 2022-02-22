#pragma once
#include <iostream>
#include <string>
class Vetores {
public:
	static int* CriarVetorint(int tamanho);
	static string* CriarVetorstring(int tamanho);
	static void lerVetor(int tamanho, int* vec);
	static void lerVetor(int tamanho, float* vec);
	static void lerVetor(int tamanho, double* vec);
	static void lerVetor(int tamanho, string* vec);
	static double mediaVector(int tamanho, int* vec);
	static void mostrarVetor(int tamanho, int* vec);
	static int PosVetormenor(int tamanho, int vet[]);
	static int PosVetormaior(int tamanho, int vet[]);
	static void OrdenarVetordecrescente(int tamanho, int* vet);
	static void	OrdenarVetorascendente(int tamanho, int* vet);
	static int VetorModa(int tamanho, int vet[]);
	static void PreencherVetor(int tamanho, int vet[]);
	
};

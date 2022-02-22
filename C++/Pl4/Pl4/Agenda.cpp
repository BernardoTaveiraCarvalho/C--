#include <iostream>
#include "Agenda.h"
#include "Pessoa.h"
using namespace std;
void Agenda::armazenaPessoa(string nome, int idade, float altura) {
	if (QuantPessoa < 10) {
		Povo[QuantPessoa]=Pessoa(nome, idade, altura);
		//Pessoa(Povo[QuantPessoa].nome, idade, altura);
		QuantPessoa++;
	}
}
int Agenda::buscaPessoa(string nome) {
	for (int i = 0; i < 10;i++) {
		if (Povo[i].getNome()== nome) {
			return i;
		}
	}
	return -1;
}
void Agenda::imprimePovo() {
	for (int i = 0; i < 10; i++) {
		imprimePessoa(i);
	}
}
void Agenda::imprimePessoa(int i){
	if (i >= 0) {
	cout<<"Pessoa: "<<Povo[i].Pessoa::getNome()<<" Idade: "<<Povo[i].Pessoa::getIdade()<<" Altura: "<< Povo[i].Pessoa::getAltura()<<endl;
	}
}
void Agenda::removePessoa(string nome) {
	int i=buscaPessoa(nome);
	if (i!= - 1) {
		Povo[i].Pessoa::Pessoa();
	}
}



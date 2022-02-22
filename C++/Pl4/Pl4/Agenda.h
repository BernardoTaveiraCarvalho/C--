#pragma once
#include <iostream>
#include "Pessoa.h"
using namespace std;

class Agenda:public Pessoa
{
	Pessoa Povo[10];
private:
	int QuantPessoa=0;
public:


	void armazenaPessoa(string nome, int idade, float altura);
	int buscaPessoa(string nome); // informa em que posição da agenda está a pessoa 
	void imprimePovo(); // imprime todos os dados de todas as pessoas da agenda 
	void imprimePessoa(int i); // imprime os dados da pessoa que está na posição 'i' da agenda 
	void removePessoa(string nome);

};
#pragma once
#include <iostream>
using namespace std;
class Pessoa{
int idade;
string nome;
double altura;
public:
	Pessoa();
	Pessoa(const Pessoa &p);
	Pessoa(string nome, int idade, double altura);
	void setIdade(int idade);
	void setAltura(double altura);
	void setNome(string nome);
	string getNome();
	int getIdade();
	double getAltura();
	string toString();

};


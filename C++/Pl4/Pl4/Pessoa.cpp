#include "Pessoa.h"
#include <iostream>
#include <string>
Pessoa::Pessoa() {
	this->nome = "Pessoa"; this->idade = 18; this->altura = 1.80;
}
Pessoa::Pessoa(const Pessoa& p) {
	this->nome = p.nome;
	this->altura = p.altura;
	this->idade = p.idade;
}
Pessoa::Pessoa(string nome, int idade, double altura) {
	this->nome = nome; this->idade = idade; this->altura=altura;
}
void Pessoa::setNome(string nome) {
	this->nome = nome;
}
void Pessoa::setIdade(int idade){
	this->idade = idade;
}
void Pessoa::setAltura(double altura) {
	 this->altura = altura;
}
string Pessoa::getNome() {
	return nome ;
}
int Pessoa::getIdade() {
	return idade;
}
double Pessoa::getAltura() {
	return altura;
}
string Pessoa::toString() {
	return "O/a, " + this->nome + " idade: " +to_string(this->idade) + " altura: " + to_string(this->altura);
}

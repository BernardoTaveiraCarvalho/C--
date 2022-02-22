#include "Chave.h" 



int main() {
	int* chAle = new int[6];
	Chave::gerarChaveAleatoria(chAle);
	int* chUs = new int[6];
	Chave::lerChave(chUs);
	int result=Chave::verifPremio(chAle, chUs);
	Chave::ordenaChave(chAle);
	Chave::ordenaChave(chUs);
	Chave::imprimirChave(6,chAle);
	Chave::imprimirChave(6,chUs);
	Chave::imprimirPremio(result);
	
	return 0;

}
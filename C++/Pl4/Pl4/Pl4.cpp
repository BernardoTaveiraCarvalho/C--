// Pl4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Pessoa.h"
#include "Agenda.h"
using namespace std;
int main() {
    char linha[] = "------------------------------------------------\n";
    Pessoa P("A",18,1.80);
    cout<<P.toString();
    
    Agenda A;
    A.armazenaPessoa("Abel", 22, 1.78);
    A.armazenaPessoa("Tiago", 20, 1.80);
    A.imprimePovo();
    cout << linha;
    int posicao = A.buscaPessoa("Tiago");
    if (posicao > 0)
        A.imprimePessoa(posicao);
    cout << linha;
    A.removePessoa("Tiago");
    A.imprimePovo();
    cout << linha;
    
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

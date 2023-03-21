/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: aluno
 *
 * Created on 14 de fevereiro de 2023, 10:51
 */

#include <cstdlib>

#include "Arvore.h"
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Arvore obj;
    obj.insere(10);
    obj.insere(20);
    obj.insere(22);
    obj.insere(8);
    cout << "Maior elemento: ";
    obj.maiorelemento(obj.raiz);
    cout << endl << "Soma elementos: ";
    cout << obj.somaelementos2(obj.raiz);
    cout << endl << "Busca Recursiva: ";
    cout << obj.buscarecursiva(obj.raiz, 10);
    cout << endl << "Busca Recurisva endereço: ";
    cout << obj.buscarecursivaend(obj.raiz, 10);
    
    cout << endl << "Filho a direita do valor encontrado: ";
    if (obj.buscarecursivaend(obj.raiz, 10)->direita != NULL)
        cout << obj.buscarecursivaend(obj.raiz, 10)->direita->dado;
    else
        cout << "Filho não encontrado";
    
    cout << endl << "Filho a esquerda do valor encontrado: ";
    if (obj.buscarecursivaend(obj.raiz, 10)->esquerda->dado != NULL)
        cout << obj.buscarecursivaend(obj.raiz, 10)->esquerda->dado;
    else
        cout << "Filho não encontrado";
    
    cout << endl << "Nível do elemento: ";
    cout << obj.nivelelemento(obj.raiz, 10, 0);
    return 0;
}


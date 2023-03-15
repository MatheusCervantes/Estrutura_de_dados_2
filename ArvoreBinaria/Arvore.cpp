/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Arvore.cpp
 * Author: aluno
 * 
 * Created on 14 de fevereiro de 2023, 08:39
 */

#include <stddef.h>

#include "Arvore.h"
#include <iostream>

using namespace std;

Arvore::Arvore() {
}

Arvore::Arvore(const Arvore& orig) {
}

Arvore::~Arvore() {
}

noArvore* Arvore::insererecursivo(noArvore *arvore, int valor) {
    if (arvore == NULL) {
        arvore = new noArvore;
        arvore->esquerda = NULL;
        arvore->direita = NULL;
        arvore->dado = valor;
    }
    else if (valor < arvore->dado)
        arvore->esquerda = insererecursivo(arvore->esquerda, valor);
    else
        arvore->direita = insererecursivo(arvore->direita, valor);
    return(arvore);
}

void Arvore::emordem (noArvore *raiz) {
    if(raiz != NULL) {
        emordem(raiz->esquerda);
        cout << raiz->dado << " ";
        emordem(raiz->direita);
    }
}
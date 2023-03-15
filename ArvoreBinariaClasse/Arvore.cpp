/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Arvore.cpp
 * Author: aluno
 * 
 * Created on 14 de fevereiro de 2023, 10:52
 */

#include "Arvore.h"
#include "noArvore.h"
#include <iostream>

using namespace std;

Arvore::Arvore() {
}

Arvore::Arvore(const Arvore& orig) {
}

Arvore::~Arvore() {
}

void Arvore::insere (int valor) {
    noArvore *tmp = this->raiz;
    noArvore *ant = NULL;
    
    while(tmp != NULL) {
        ant = tmp;
        if (tmp->dado < valor)
            tmp = tmp->direita;
        else
            tmp = tmp->esquerda;
    }
    if (this->raiz == NULL)
        this->raiz = new noArvore(valor);
    else if (ant->dado < valor) 
        ant->direita = new noArvore(valor);
    else
        ant->esquerda = new noArvore(valor);
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

void Arvore::preordem (noArvore *raiz) {
    if(raiz != NULL) {
        cout << raiz->dado << " ";
        preordem(raiz->esquerda);
        preordem(raiz->direita);
    }
}

void Arvore::posordem (noArvore *raiz) {
    if(raiz != NULL) {
        posordem(raiz->esquerda);
        posordem(raiz->direita);
        cout << raiz->dado << " ";
    }
}

void Arvore:: maiorelemento (noArvore *raiz) {
    if (raiz->direita == NULL)
        cout << raiz->dado;
    else
        maiorelemento(raiz->direita);
}

int Arvore::somaelementos (noArvore *raiz) {
    static int soma=0;
    if(raiz != NULL) {
        somaelementos(raiz->esquerda);
        somaelementos(raiz->direita);
        soma = (soma + raiz->dado); 
    }
    return soma;
}

int Arvore::somaelementos2 (noArvore *raiz) {
    int soma=0;
    if(raiz != NULL) {
        soma = raiz->dado + somaelementos2(raiz->esquerda) + somaelementos2(raiz->direita);
    }
    return soma;
}
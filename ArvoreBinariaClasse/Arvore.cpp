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

void Arvore::insere(int valor) {
    noArvore *tmp = this->raiz;
    noArvore *ant = NULL;

    while (tmp != NULL) {
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
        arvore = new noArvore(valor);
        arvore->esquerda = NULL;
        arvore->direita = NULL;
    } else {
        if (valor < arvore->dado)
            arvore->esquerda = insererecursivo(arvore->esquerda, valor);
        else
            arvore->direita = insererecursivo(arvore->direita, valor);
    }
    return (arvore);
}

void Arvore::emordem(noArvore *raiz) {
    if (raiz != NULL) {
        emordem(raiz->esquerda);
        cout << raiz->dado << " ";
        emordem(raiz->direita);
    }
}

void Arvore::preordem(noArvore *raiz) {
    if (raiz != NULL) {
        cout << raiz->dado << " ";
        preordem(raiz->esquerda);
        preordem(raiz->direita);
    }
}

void Arvore::posordem(noArvore *raiz) {
    if (raiz != NULL) {
        posordem(raiz->esquerda);
        posordem(raiz->direita);
        cout << raiz->dado << " ";
    }
}

void Arvore::maiorelemento(noArvore *raiz) {
    if (raiz->direita == NULL)
        cout << raiz->dado;
    else
        maiorelemento(raiz->direita);
}

int Arvore::somaelementos(noArvore *raiz) {
    static int soma = 0;
    if (raiz != NULL) {
        somaelementos(raiz->esquerda);
        somaelementos(raiz->direita);
        soma = (soma + raiz->dado);
    }
    return soma;
}

int Arvore::somaelementos2(noArvore *raiz) {
    int soma = 0;
    if (raiz != NULL) {
        soma = raiz->dado + somaelementos2(raiz->esquerda) + somaelementos2(raiz->direita);
    }
    return soma;
}

int Arvore::buscarecursiva(noArvore *inicio, int valor) {
    if (inicio != NULL) {
        if (valor == inicio->dado)
            return inicio->dado;
        else {
            if (valor < inicio->dado)
                valor = this->buscarecursiva(inicio->esquerda, valor);
            else
                valor = this->buscarecursiva(inicio->direita, valor);
        }
    } else
        return 0;
}

noArvore* Arvore::buscarecursivaend(noArvore *inicio, int valor) {
    if (inicio != NULL) {
        if (valor == inicio->dado)
            return inicio;
        else {
            if (valor < inicio->dado)
                inicio = this->buscarecursivaend(inicio->esquerda, valor);
            else
                inicio = this->buscarecursivaend(inicio->direita, valor);
        }
    } else
        return NULL;
}

int Arvore::nivelelemento(noArvore *inicio, int valor, int nivel) {
    if (!inicio)
        return -1;
    else {
        if (valor == inicio->dado)
            return nivel;
        else {
            nivel++;

            if (valor < inicio->dado)
                nivel = nivelelemento(inicio->esquerda, valor, nivel);
            else if (valor > inicio->dado)
                nivel = nivelelemento(inicio->direita, valor, nivel);
        }

        return nivel;
    }
}

noArvore* Arvore::remover(noArvore *raiz, int valorRem) {

    if (raiz == NULL)
        return NULL;
    else
        if (raiz->dado > valorRem)
        raiz->esquerda = remover(raiz->esquerda, valorRem);
    else if (raiz->dado < valorRem)
        raiz->direita = remover(raiz->direita, valorRem);
    else {
        /* Situação 1: O nó não possui filhos = FOLHA */
        if ((raiz->esquerda == NULL) && (raiz->direita == NULL)) {
            free(raiz);
            raiz = NULL;
        }/* Situação 2: O nó possui somente um filho à direita */
        else if (raiz->esquerda == NULL) {
            noArvore *temp = raiz;
            raiz = raiz->direita;
            free(temp);
        }/* Situação 3: O nó possui somente um filho à esquerda */
        else if (raiz->direita == NULL) {
            noArvore *temp = raiz;
            raiz = raiz->esquerda;
            free(temp);
        }/* Situação 4: O nó possui dois filhos */
        else {
            noArvore *aux = raiz->esquerda;
            while (aux->direita != NULL) {
                aux = aux->direita;
            }
            raiz->dado = aux->dado; /* troca os valores */
            aux->dado = valorRem;
            raiz->esquerda = remover(raiz->esquerda, valorRem);
        }
    }
    return raiz;
}


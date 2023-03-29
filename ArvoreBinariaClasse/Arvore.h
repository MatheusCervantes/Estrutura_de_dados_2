/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Arvore.h
 * Author: aluno
 *
 * Created on 14 de fevereiro de 2023, 10:52
 */

#ifndef ARVORE_H
#define ARVORE_H

#include <stddef.h>
#include "noArvore.h"

class Arvore {
public:
    Arvore();
    Arvore(const Arvore& orig);
    virtual ~Arvore();
    void insere(int valor);
    noArvore *raiz = NULL;
    noArvore* insererecursivo(noArvore *arvore, int valor);
    int buscarecursiva(noArvore *inicio, int valor);
    noArvore* buscarecursivaend(noArvore *inicio, int valor);
    int nivelelemento(noArvore *inicio, int valor, int nivel);
    void emordem(noArvore *raiz);
    void preordem(noArvore *raiz);
    void posordem(noArvore *raiz);
    void maiorelemento(noArvore *raiz);
    int somaelementos(noArvore *raiz);
    int somaelementos2(noArvore *raiz);
    noArvore* remover(noArvore *raiz, int valorRem);
private:

};

#endif /* ARVORE_H */


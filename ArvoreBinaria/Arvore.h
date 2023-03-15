/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Arvore.h
 * Author: aluno
 *
 * Created on 14 de fevereiro de 2023, 08:39
 */

#ifndef ARVORE_H
#define ARVORE_H
struct noArvore {
    int dado;
    noArvore *esquerda;
    noArvore *direita;
};

class Arvore {
public:
    Arvore();
    Arvore(const Arvore& orig);
    virtual ~Arvore();
    noArvore* insererecursivo(noArvore *arvore, int valor); 
    noArvore *raiz=NULL;
    void emordem (noArvore *raiz);
private:

};

#endif /* ARVORE_H */


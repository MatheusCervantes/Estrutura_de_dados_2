/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   noArvore.h
 * Author: aluno
 *
 * Created on 14 de fevereiro de 2023, 10:51
 */

#ifndef NOARVORE_H
#define NOARVORE_H

#include <stddef.h>


class noArvore {
public:
    noArvore();
    noArvore(int valor);
    virtual ~noArvore();
    int dado;
    noArvore *esquerda=NULL;
    noArvore *direita=NULL;
private:

};

#endif /* NOARVORE_H */


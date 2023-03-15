/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   noArvore.cpp
 * Author: aluno
 * 
 * Created on 14 de fevereiro de 2023, 10:51
 */

#include "noArvore.h"

noArvore::noArvore() {
    this->direita = this->esquerda = NULL;
}

noArvore::noArvore(int valor) {
    this->dado = valor;
    this->direita = this->esquerda = NULL;
}

noArvore::~noArvore() {
}


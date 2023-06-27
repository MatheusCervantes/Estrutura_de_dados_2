/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Algoritmo.cpp
 * Author: aluno
 * 
 * Created on 9 de maio de 2023, 11:00
 */

#include "Algoritmo.h"
#include <iostream>

using namespace std;

Algoritmo::Algoritmo() {
}

Algoritmo::Algoritmo(const Algoritmo& orig) {
}

Algoritmo::~Algoritmo() {
}

void Algoritmo::inicializa() {
    this->N = 10;
    this->V[0] = 7;
    this->V[1] = 3;
    this->V[2] = 8;
    this->V[3] = 4;
    this->V[4] = 9;
    this->V[5] = 10;
    this->V[6] = 1;
    this->V[7] = 6;
    this->V[8] = 2;
    this->V[9] = 5;
}

void Algoritmo::inicializaOrdenado() {
    this->N = 10;
    this->V[0] = 1;
    this->V[1] = 2;
    this->V[2] = 3;
    this->V[3] = 4;
    this->V[4] = 5;
    this->V[5] = 6;
    this->V[6] = 7;
    this->V[7] = 8;
    this->V[8] = 9;
    this->V[9] = 10;
}

void Algoritmo::bubbleSort(int *V, int N) {
    int i, continua, aux;
    do {
        continua = 0;
        for (i= 0; i< N-1; i++) {
            if (V[i] > V[i+1]) {
                aux = V[i];
                V[i] = V[i+1];
                V[i+1] = aux;
                continua = 1;
            }
        }
    } while(continua);
}

void Algoritmo::bubbleSor2(int *V, int N) {
    int i, continua, aux, fim = N;
    do {
        continua = 0;
        for (i= 0; i< fim-1; i++) {
            if (V[i] > V[i+1]) {
                aux = V[i];
                V[i] = V[i+1];
                V[i+1] = aux;
                continua = i;
                this->listar();
            }
        }
        fim --;
    } while(continua != 0);
}

void Algoritmo::insertionSort(int *V, int N) {
    int i, j, aux;
    for(i=1; i<N; i++) {
        aux = V[i];
        for (j=1; (j>0) && (aux < V[j-1]); j--)
            V[j] = V[j-1];
        V[j] = aux;
    }
}

void Algoritmo::insertionSort2(int *V, int N) {

}

void Algoritmo::selectionSort(int *V, int N) {

}

void Algoritmo::listar () {
    for (int n=0; n<10; n++) {
        cout << this->V[n];
    }
}
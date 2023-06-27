/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Algoritmo.h
 * Author: aluno
 *
 * Created on 9 de maio de 2023, 11:00
 */

#ifndef ALGORITMO_H
#define ALGORITMO_H

class Algoritmo {
public:
    Algoritmo();
    Algoritmo(const Algoritmo& orig);
    virtual ~Algoritmo();
    int N, V[10];
    void inicializa();
    void inicializaOrdenado();
    void bubbleSort (int *V, int N);
    void bubbleSor2 (int *V, int N);
    void insertionSort (int *V, int N);
    void insertionSort2 (int *V, int N);
    void selectionSort (int *V, int N);
    void listar();
private:

};

#endif /* ALGORITMO_H */


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
    //obj.maiorelemento(obj.raiz);
    cout << obj.somaelementos2(obj.raiz);
    return 0;
}


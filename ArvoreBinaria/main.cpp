/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: aluno
 *
 * Created on 14 de fevereiro de 2023, 08:39
 */

#include <cstdlib>

#include "Arvore.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Arvore obj;
    
    obj.raiz = obj.insererecursivo(obj.raiz, 10);
    obj.raiz = obj.insererecursivo(obj.raiz, 20);
    obj.emordem(obj.raiz);
    return 0;
}


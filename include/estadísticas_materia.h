#pragma once

#include <iostream>
#include <iomanip>
#include <string>

#include "utilerias.h"
#include "registro.h"



void mostrarEstadisticas(const std::string nombres[],
    const double espanol[],
    const double matematicas[],
    const double disenoProgramas[],
    int total) {
    (void)nombres;

    if (total == 0) {
        std::cout << "No hay alumnos registrados.\n";
        return;
    }

    double sumaEspanol = 0.0;
    double sumaMatematicas = 0.0;
    double sumaDiseno = 0.0;
    double mayorEspanol = espanol[0];
    double menorEspanol = espanol[0];
    double mayorMatematicas = matematicas[0];
    double menorMatematicas = matematicas[0];
    double mayorDiseno = disenoProgramas[0];
    double menorDiseno = disenoProgramas[0];

    for (int i = 0; i < total; ++i) {
        sumaEspanol += espanol[i];
        sumaMatematicas += matematicas[i];
        sumaDiseno += disenoProgramas[i];

        if (espanol[i] > mayorEspanol) mayorEspanol = espanol[i];
        if (espanol[i] < menorEspanol) menorEspanol = espanol[i];
        if (matematicas[i] > mayorMatematicas) mayorMatematicas = matematicas[i];
        if (matematicas[i] < menorMatematicas) menorMatematicas = matematicas[i];
        if (disenoProgramas[i] > mayorDiseno) mayorDiseno = disenoProgramas[i];
        if (disenoProgramas[i] < menorDiseno) menorDiseno = disenoProgramas[i];
    }

    std::cout << "Mas alta: Espanol (" << mayorEspanol << ")\n";
std::cout << "Mas alta: Matematicas (" << mayorMatematicas << ")\n";
std::cout << "Mas alta: Diseno de Programas (" << mayorDiseno << ")\n";

std::cout << "Mas baja: Espanol (" << menorEspanol << ")\n";
std::cout << "Mas baja: Matematicas (" << menorMatematicas << ")\n";
std::cout << "Mas baja: Diseno de Programas (" << menorDiseno << ")\n";

}
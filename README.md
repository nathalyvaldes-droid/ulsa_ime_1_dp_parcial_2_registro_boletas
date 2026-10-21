# Proyecto Parcial 2: Sistema de Registro y Boletas de un Grupo Escolar

> **Importante:** este README es del equipo y debe tener aportaciones de todos los integrantes. La guía completa está en [`PROYECTO.md`](PROYECTO.md).

## 1. Integrantes

| Bloque | Matrícula | Nombre | Usuario de GitHub | Opción elegida |
| --- | --- | --- | --- | --- |
| 1 | [26146] | [Oliver Fernando López Pineda] | [oliverlopez-svg] | estadisticas materia |
| 2 | [26162] | [Nathaly Valdes] | [nathalyvaldes-droid] | [AprobadoYReprobados] |
| 3 | [Captura_alumnos] | [26166] | [Roberto E. Velazquez Ibarra] | [robertovelazquez-ui] |
| 4 | [26164] | [Maximiliano Muñoz Solís] | [MaximilianoM08] | [Boleta Individual] |
| 5 | [26321] | [Ian Silva] | [silvaian29] | [Lista de alumnos] |
| 6 | [26209] | [Emilio Gonzalez Viesca] | [emiliogonzalez-max] | [Salida] |

<!-- Si el equipo es de seis integrantes, agreguen una fila para el bloque 6. -->

## 2. Opciones del menú

Escriban las opciones del menú en el orden en que aparecen en el programa.

1. Capturar alumno
2. Mostrar lista
3. Estadisticas por materia
4. Aprobados y reprobados
5. Boleta individual
6. Materias reprobadas por alumno
7. Salir

## 3. Cómo compilar y ejecutar

Desde la carpeta del proyecto:

```
g++ -Wall -Wextra -std=c++17 -Iinclude src/main.cpp -o boletas
./boletas
```

## 4. Reglas del programa

Escriban las reglas que su programa sigue y que el cálculo a mano necesita. Por ejemplo: qué pasa cuando hay un empate, cómo se busca un nombre, con cuántos decimales se imprime.

[maximo de 6 Alumnos 
Cada alumno tiene un nombre y 3 calificaciones: Espanol, Matemáticas y Diseno de Programas.
El nombre no puede quedar vacío.
Las calificaciones deben estar entre 0 y 10.
Los datos se guardan en arreglos paralelos.
El ejemplo de la plantilla usa 7 como mínimo aprobatorio, pero eso es solo un ejemplo; confirma en PROYECTO.md cuál es el criterio real.]

## 5. Datos del escenario

Los 6 alumnos que capturan en el escenario obligatorio.

| # | Nombre | Espanol | Matemáticas | Diseno de Programas |
| --- | --- | --- | --- | --- |
| 1 | [emilio gonzalez] | [7] | [6] | [9] |
| 2 | [nathaly valdes] | [9] | [10] | [9] |
| 3 | [oliver lopez] | [10] | [7] | [8] |
| 4 | [maximiliano muñoz] | [9] | [8] | [7] |
| 5 | [ian silva] | [8] | [9] | [9] |
| 6 | [roberto velzquez] | [10] | [8] | [7] |

## 6. Cálculo a mano

Predigan la salida del escenario antes de ejecutarlo. Una fila por bloque individual. Lo que imprime el programa debe coincidir.

| Bloque | Valores elegidos | Resultado esperado |
| --- | --- | --- |
| 1 | [Registrar los 6 alumnos] | [Los 6 alumnos son registrados correctamente] |
| 2 | [Opcion 2] | [Se muestran los nombres y calificaciones de los 6 alumnos] |
| 3 | [Opcion 3] | [Promedios. Espanol: 8.8333. Matematicas: 8. Diseno de Programas: 
8.1667. Mas alta: Espanol. Mas baja: Matematicas.] |
| 4 | [Opcion 4] | [Español: 6 aprobados y 0 reprobados. Matemáticas: 5 aprobados y 1 reprobado. Diseño de Programas: 6 aprobados y 0 reprobados. emilio gonzalez aparece como reprobado en general.] |
| 5 | [Opcion 5, se busca a emilio gonzalez] | [Alumno: emilio gonzalez. Espanol: 7, Matematicas: 6. Diseno de Programas: 9. Promedio: 7.33. Materias Reprobadas: 1. Estado: Reprobado.] |
| 6 | [Opcion 6] | [emilio gonzalez 1. Alumnos con materias reprobadas: 1] |

<!-- Si el equipo es de seis integrantes, agreguen una fila para el bloque 6. -->

**¿La salida del programa coincidió con el cálculo a mano? Si no, ¿qué corrigieron?**

si

## 7. Receta del menú

Receta en pseudocódigo del programa principal: el menú y cómo se conecta con cada bloque.

```
[1. Crear los arreglos de nombres y calificaciones y poner total en 0
2. Repetir:
   2.1 Mostrar el menú
   2.2 Leer la opción
   2.3 Según la opción:
       1: capturar alumno (bloque de Captura) y actualizar total
       2: mostrar lista de alumnos
       3: mostrar estadísticas por materia
       4: mostrar aprobados y reprobados
       5: mostrar boleta individual
       6: mostrar materias reprobadas por alumno
       7: despedirse y salir
       cualquier otra: avisar que la opción no es válida
3. Hasta que la opción sea 7]
```

## 8. Documentación individual

Enlace a la documentación y a la propuesta de mejora de cada integrante.

| Bloque | Documentación | Propuesta de mejora |
| --- | --- | --- |
| 1 | [Oliver Fernando Lopez Pineda] | [26146] | en lugar de escribir todo el nombre completo del alumno, usar métodos de cadenas para usar solo las primeras tres iniciales del nombre y del apellido o incluso un numero de lista por orden alfabético e introducir unicamente este dato.
| 2 | [Nathaly Valdes] | [26162] |mi propuesta se basa en un programa que le avisara a los maestros el promedio de sus alumnos pero no solo el promedio si no su desempeño, la idea es que el programa sume los promedios de todas sus materias y le mande un aviso a su profesor diciendo si su desempeño es bueno o esta en riesgo de recursar, esta yo lo veo como un abuena mejora ya que puede tanto como ayudar a los alumnos como a los profesores cuando califiquen|
| 3 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 4 | [Maximiliano Muñoz Solís] | [26164] | [docs/26164_bloque.md] | [docs/mejoras/26164_mejora.md] |
| 5 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |

<!-- Si el equipo es de seis integrantes, agreguen una fila para el bloque 6. -->

## 9. Cambios a la interfaz

Si cambiaron algo de la interfaz de `include/registro.h` (una constante, un parámetro, una función), expliquen qué cambiaron y por qué. Si no cambiaron nada, escriban "Sin cambios".

[Sin cambios]
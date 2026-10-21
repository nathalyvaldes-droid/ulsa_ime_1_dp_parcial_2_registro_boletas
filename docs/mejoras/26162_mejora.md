# Propuesta de mejora

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/mejoras/<matrícula>/mejora.md (por ejemplo, docs/mejoras/123456/mejora.md)
y llena tu copia.

La propuesta es solo diseño: no se programa.
Puede tocar cualquier parte de la solución del equipo y se resuelve con los temas del parcial.
Dentro de un equipo no puede haber dos propuestas iguales.
-->

Propuesta de mejora elaborada por: Nathaly Valdes

**Matrícula:** 26162
**Título de la propuesta:** Sistema de desempeño de los alumnos

## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?
mi propuesta se basa en un programa que le avisara a los maestros el promedio de sus alumnos pero no solo el promedio si no su desempeño, la idea es que el programa sume los promedios de todas sus materias y le mande un aviso a su profesor diciendo si su desempeño es bueno o esta en riesgo de recursar, esta yo lo veo como un abuena mejora ya que puede tanto como ayudar a los alumnos como a los profesores cuando califiquen

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.
funciones: mostrarAprobadosYReprobados cambia la forma de evaluar, ya no revisa materia por materia, sino que saca el promedio general de cada alumno 
variables basicamente quitamos los contadores de cada materia y agregamos algo mas simple uy al punto como bien, aprobado, en riesgo
al usar el promedio general, el codigo hace menso operaciones, la logica se entiende mucho mas rapido y nos da informacion mas util sobre como va el grupo o el alumno 

## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

```
1. Si no hay alumnos, mostrar mensaje y salir.
2. Poner los contadores (Bien, Aprobados y EnRiesgo) en 0. [cambia]
3. Para cada alumno:
3.1 Calcular el promedio de sus 3 materias. [nuevo]
3.2 si le promedio es >=9.0: guardar como ¨BIEN¨ y sumar a bien. [nuevo]
3.3 si le promedio es >=7.0: guardar como ¨APROBADO¨ y sumar a aprobados. [nuevo]
3.4 si le promedio es menor a 7.0: guardar como ¨EnRiesgo¨ y sumar a EnRiesgo. [nuevo]
3.5 Imprimir nombre, promedio y resultado. [cambia]
4.Imprimir los totales de cada categoria. [cambia]


```

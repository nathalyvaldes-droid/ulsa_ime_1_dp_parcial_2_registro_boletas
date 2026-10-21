# Documentación del bloque

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/<matrícula>/bloque.md (por ejemplo, docs/123456/bloque.md)
y llena tu copia.
-->

## 1. Autor

**Nombre:** Nathaly Valdes
**Matrícula:** 26162
**Bloque y opción elegida:** AprobadosyReprobados
**Archivo de código:** [Inserta aquí tu respuesta]

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?

este bloque procesa las calificaciones de los alumnos y su propositoe es mostrar un resumen general de cuantos alumnos aprobaron o reprobaron por cada materia y ademas hace una lista  de forma individual a cada alumno indicando si reprobo o aprobo todas sus materias que en este caso son 3 

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

entrada recibe arreglso constantes como los nombres de los alumnos, sus calificaciones e indica el total de alumnos registrados y mis salidas son std:: cout con el conteo total de ya sea aprobados o reprobados

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**

la funcion es mostrarAprobadosyReprobados la cual se encarga de recorrer los datos, realizar los conteos condicionales y mostrar los resultados formateados en la consola 

**¿Qué ciclo usaste y por qué ese?**

For porque sabemos cuantos alumnos hay [total] y eso permite recorrer los arreglos desde la posicion 0 hasta el total -1 de manera exacta y controlada

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

use uno para cada materia pero fue estos: aprobadosEspanol,aprobadosMatematicas, aprobadosDiseno y reprobadosEspanol, reprobadosMatematicas y reprobadosDiseno. todos inician en 0 para llevar un conteo real dese cero 

**¿Dónde está tu decisión múltiple y qué casos cubre?**

son las de if else dnetro de todo y pues estas evaluan si la calificacion es mayor o menor o igual a la aprobatoria para decidir si suma al contaodr de aprobados o al de reprobados

**¿Qué constantes definiste y por qué son constantes?**

use la de CALIFIACION_APROBATORIA para que sea mas facil evaluarlo y es facil de modificar

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

lo rechaza cuando no hay ningun alumno registrado

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.
1.Poner contador en 0
2.Para cada alumno, si su calificacion es 7 o mas, sumar uno al contador 
3.Devolver el contador

1. Validar si el total de alumnos es 0; si es así, mostrar mensaje de que no hay registros y salir.
2. Inicializar en 0 los contadores de aprobados y reprobados para cada una de las tres materias.
3. Repetir con un ciclo for desde i = 0 hasta total - 1:
 3.1. Evaluar si la calificación de español es aprobatoria para sumar al contador correspondiente.
3.2. Evaluar si la calificación de matemáticas es aprobatoria para sumar al contador correspondiente.
3.3. Evaluar si la calificación de diseño es aprobatoria para sumar al contador correspondiente.
4. Imprimir los totales de aprobados y reprobados por materia.
5. Repetir otro ciclo for para revisar el estado individual de cada alumno:
 5.1. Si el alumno pasó todas las materias, imprimir su información con estatus de aprobado; si no, con estatus de reprobado.
     
```

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

si solo que cuando la estaba haciendo me asegure de que empezara en 0 para que las sumas me salieran bien

## 6. Bitácora de dudas y errores
en realidad no tuve tantas dudas con mi parte de este proyecto ya que me base de lo que habiamos echo con lo de la calculadora pero lo modifique para adecuarlo a este proyecto al igual que me base de un proyecto que habia visto en python, pero aun asi estaba dificil que compilara bien ya que cada . o , era un error  

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 2 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 3 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |

## 1. Autor

*Nombre:* [Ian rodrigo silva cazarin]
*Matrícula:* [26321]
*Bloque y opción elegida:* [lista de alumnos]
*Archivo de código:* [Inserta aquí tu respuesta]

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?

[Mi bloque forma parte de un programa para registrar y consultar una lista de alumnos. Permite capturar los datos y calificaciones de los estudiantes, mostrar la lista completa, consultar estadísticas por materia, identificar aprobados y reprobados, generar una boleta individual y conocer las materias que ha reprobado cada alumno. Su propósito es organizar la información escolar y facilitar la consulta de las calificaciones.]

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

[El programa recibe datos, como el nombre del alumno y sus calificaciones en las diferentes materias. También permite que el usuario seleccione una opción del menú para indicar qué operación desea realizar.

Como salida, muestra en la pantalla, la lista de alumnos registrados, las estadísticas de las materias, los resultados de aprobados y reprobados, las boletas individuales y las materias reprobadas por cada alumno.]

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

*¿Qué funciones tiene tu bloque y qué hace cada una?*

[La función mostrarMenu() presenta las opciones que el usuario puede seleccionar. Las opciones del menú permiten capturar alumnos, mostrar la lista, consultar estadísticas por materia, revisar aprobados y reprobados, generar una boleta individual, consultar materias reprobadas y salir del programa. Los archivos utilerias.h y registro.h contienen declaraciones o herramientas que pueden utilizarse para organizar otras operaciones del programa.]

*¿Qué ciclo usaste y por qué ese?*

[Para recorrer la lista de alumnos y procesar sus calificaciones, se puede utilizar un ciclo for, porque permite repetir una operación para cada alumno registrado. También puede utilizarse un ciclo while para mantener el menú activo hasta que el usuario seleccione la opción de salir. El ciclo exacto depende de la implementación completa del programa.]

*¿Qué acumuladores o contadores usaste y con qué valor inician?*

[Se pueden utilizar contadores que inicien en 0 para registrar cuántos alumnos aprobaron o reprobaron una materia. También se pueden utilizar acumuladores que comiencen en 0 para sumar calificaciones y calcular promedios. Cada contador aumenta cuando se cumple la condición correspondiente y los acumuladores suman los valores que se necesitan para obtener los resultados.]

*¿Dónde está tu decisión múltiple y qué casos cubre?*

[La decisión múltiple puede estar en la selección de opciones del menú, mediante una estructura switch. Esta estructura permite ejecutar una operación diferente según la opción elegida: 1 para capturar alumno, 2 para mostrar la lista, 3 para consultar estadísticas por materia, 4 para mostrar aprobados y reprobados, 5 para generar una boleta individual, 6 para consultar materias reprobadas y 7 para salir del programa. También puede incluirse un caso default para manejar opciones no válidas.]

*¿Qué constantes definiste y por qué son constantes?*

[En el fragmento compartido no aparecen constantes definidas. ]

*¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?*

[El programa puede rechazar una opción del menú que no esté entre 1 y 7, mostrando un mensaje como: «Opción no válida. Intenta nuevamente». También puede validar que las calificaciones estén dentro del rango permitido y mostrar un mensaje como: «Calificación inválida». Si se intenta consultar un alumno que no está registrado, puede mostrar: «Alumno no encontrado».]

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.
1.Poner contador en 0
2.Para cada alumno, si su calificacion es 7 o mas, sumar uno al contador 
3.Devolver el contador
[Iniciar el programa.
Mostrar el menú con las siete opciones.
Leer la opción seleccionada por el usuario.
Si la opción es 1, solicitar los datos y las calificaciones del alumno y registrarlos.
Si la opción es 2, mostrar la lista de alumnos registrados.
Si la opción es 3, calcular y mostrar las estadísticas de cada materia.
Si la opción es 4, contar y mostrar los alumnos aprobados y reprobados.
Si la opción es 5, solicitar el alumno y mostrar su boleta individual.
Si la opción es 6, identificar y mostrar las materias reprobadas por cada alumno.
Si la opción es 7, finalizar el programa.
Si la opción no es válida, mostrar un mensaje de error.
Repetir el menú mientras el usuario no elija salir.]
```

*¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?*

[Sí, probé la receta manualmente utilizando ejemplos de alumnos con diferentes calificaciones. Revisé que los alumnos con calificaciones aprobatorias se clasificaran correctamente y que los alumnos con calificaciones reprobatorias se identificaran de manera adecuada. También consideré qué debía ocurrir si el usuario seleccionaba una opción incorrecta. .]

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | [Tenía dudas sobre cómo mostrar las diferentes opciones del menú.] | [Utilicé la función mostrarMenu() y varias instrucciones std::cout para presentar cada opción por separado.] |
| 2 | [No sabía cómo organizar las diferentes operaciones del programa.] | [Separé las responsabilidades del programa en funciones y archivos, para facilitar su organización y mantenimiento.] |
| 3 | [Podía haber errores si el usuario seleccionaba una opción incorrecta o ingresaba una calificación inválida.] | [Consideré la necesidad de validar las entradas y mostrar mensajes de error cuando los datos no fueran válidos.] 
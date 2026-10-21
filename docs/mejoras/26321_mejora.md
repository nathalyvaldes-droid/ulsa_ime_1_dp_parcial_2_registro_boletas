propuesta de mejora elaborada por: [Ian rodrigo silva cazarin]
*Matrícula:* [26321]
*Título de la propuesta:* [validacion de calificaciones]

## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?

[agregar una validación de calificaciones para evitar que se registren valores fuera del rango permitido.

Es una mejora porque agrega una validación de datos al programa. Su objetivo es evitar que se registren calificaciones menores que 0 o mayores que 100, suponiendo que se utiliza una escala de 0 a 100. Esto beneficia tanto a los alumnos como a la persona que utiliza el programa, ya que permite obtener resultados y estadísticas más confiables. Si se ingresa una calificación fuera del rango permitido, el programa mostrará un mensaje de error y solicitará que se capture nuevamente.]

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.

[Funciones: se agregaría una función para validar que cada calificación esté dentro del rango permitido, de 0 a 100. De esta manera, la validación se puede reutilizar al capturar las calificaciones de diferentes alumnos.
Arreglos: no sería necesario modificar los arreglos existentes, ya que se seguirían almacenando los mismos datos de los alumnos y sus calificaciones.
Constantes: se definirían las constantes CALIFICACION_MINIMA = 0 y CALIFICACION_MAXIMA = 100 para establecer los límites permitidos y facilitar su modificación futura.
Menú: no sería necesario cambiar las siete opciones, porque la mejora se aplicaría durante la captura de las calificaciones.
Validaciones: antes de guardar cada calificación, el programa comprobaría si se encuentra dentro del rango permitido. Si no cumple la condición, mostraría un mensaje de error y solicitaría el dato nuevamente.

Estos cambios mejorarían la calidad de los datos sin modificar el funcionamiento principal del programa.]

## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con [NUEVO] y cada paso que cambia con [CAMBIA]. Los pasos sin marca son los que ya existen.


[Iniciar el programa.
2. Mostrar el menú con las siete opciones.
3. Leer la opción seleccionada por el usuario.
4. Si la opción es 1, solicitar los datos del alumno.
5. Capturar la calificación de cada materia.
6. [NUEVO] Definir la calificación mínima permitida: 0.
7. [NUEVO] Definir la calificación máxima permitida: 100.
8. [NUEVO] Comprobar si la calificación está entre 0 y 100.
9. [CAMBIA] Si la calificación es válida, guardarla y continuar.
10. [CAMBIA] Si la calificación no es válida, mostrar
   "Calificación inválida. Ingresa un valor entre 0 y 100"
   y solicitarla nuevamente.
11. Registrar al alumno cuando sus datos sean válidos.
12. Mostrar la lista de alumnos cuando se seleccione la opción 2.
13. Calcular las estadísticas por materia cuando se seleccione la opción 3.
14. Mostrar aprobados y reprobados cuando se seleccione la opción 4.
15. Generar la boleta individual cuando se seleccione la opción 5.
16. Mostrar las materias reprobadas cuando se seleccione la opción 6.
17. Finalizar el programa cuando se seleccione la opción 7.
18. Repetir el menú mientras el usuario no elija salir.]
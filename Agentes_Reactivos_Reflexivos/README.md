#Agentes Reactivos / Reflexivos

Un agente reactivo, establece una relación funcional directa entre la infromación que el robot percibe a través de sus sensores y una reacción.  Se puede establecer esa relación como una relación de proporcionalidad.

Para este ejercicio utilizaremos solamente el sensor de luz. El sensor da una lectura alta cuando hay poca luz, y una baja cuando la luz es intensa.  El sensor de luz del kit se conecta directamente en los conectores analógicos o digitales del controlador.  En principio, la placa del sensor, tiene un divisor de voltaje como el que se [muestra acá](http://www.instructables.com/id/Sensor-de-luz-y-divisor-de-voltaje/).

##Reto

Construir un robot que con un sensor de luz, después de un tiempo razonable, se matenga o dirija hacia la luz  Se supone que el movimiento debe ser inversamente proporcional a la cantidad de luz, es decir se mueve mucho cuando hay poca luz y se mueve poco cuando hay mucha luz.

###Sugerencias

* Que el robot haga movimiento ondulatorios para medir la luz y a partir de allí moverse
* Hacer una relación inversa entre la lectura del sensor de luz y la respuesta de los motores

###Preguntas

¿Cómo sería el algoritmo si siguiera el paradigma jerárquivo?, es decir, que primero mida la luz, ñuego construya un plan y luego lo ejecute.



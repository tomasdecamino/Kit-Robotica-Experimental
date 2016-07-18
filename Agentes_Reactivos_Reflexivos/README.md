#Agentes Reactivos / Reflexivos

Un agente reactivo, establece una relación funcional directa entre la infromación que el robot percibe a través de sus sensores y una reacción.  Se puede establecer esa relación como una relación de proporcionalidad.

<img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/Agentes_Reactivos_Reflexivos/Reactive.JPG" width="600">

Básicamente estos robots muestran patrones de comportamiendo ordenados y no obedecen directamente a algoritmos.  Un robot complejo, puede tener una colección de comportameintos independientes que lo gobiernan, así como nosotros los humanos tenemos un sistema simpático que funciona de manera independiente y no requiere de aprendizaje o accinamiento conciente.  [Acá hay un video](https://www.youtube.com/watch?v=9u0CIQ8P_qk) interesante que explica el funcionamiento de algunos de estsos robots.

Para este ejercicio utilizaremos solamente el sensor de luz. El sensor da una lectura alta cuando hay poca luz, y una baja cuando la luz es intensa.  El sensor de luz del kit se conecta directamente en los conectores analógicos o digitales del controlador.  En principio, la placa del sensor, tiene un divisor de voltaje como el que se [muestra acá](http://www.instructables.com/id/Sensor-de-luz-y-divisor-de-voltaje/).



##Reto

Construir un robot que con un sensor de luz, después de un tiempo razonable, se matenga o dirija hacia la luz  Se supone que el movimiento debe ser inversamente proporcional a la cantidad de luz, es decir se mueve mucho cuando hay poca luz y se mueve poco cuando hay mucha luz.

###Sugerencias

* Que el robot haga movimiento ondulatorios para medir la luz y a partir de allí moverse
* Hacer una relación inversa entre la lectura del sensor de luz y la respuesta de los motores

###Preguntas

¿Cómo sería el algoritmo si siguiera el paradigma jerárquivo?, es decir, que primero mida la luz, ñuego construya un plan y luego lo ejecute.

###Ejemplo para empezar

Un ejemplo de còdigo lo encuentran en la carpeta `RobotKit_LightReflex`. En ese código, la rotación y movimiento hacia adelanta estproporcionalmente relacionado con la cantidad de luz que recibe el sensor.  Mientras más luz, mayor movimiento hacia adelante y menor el movimiento de rotaciones. En contraste, comparen con el código `RobotKit_LightPlan` donde se lee el sensor, y luego se revisa el plan, para luego ejecutar una acción.



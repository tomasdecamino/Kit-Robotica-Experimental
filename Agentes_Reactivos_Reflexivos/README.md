#Robots!

¿Qué es un robot? Todos piensan que un robot tiene forma humana, o que de alguna manera reemplaza a los seres vivos. La realidad es que un robot es cualquier máquina artificial que realiza un trabajo.  Inicialmente eran simplemente artefactos mecánicos, luego electromecánicos y ahora, en general son electromecánicos controlados por alguna computadora.

Básicamente en un robot debemos:

1. Mover motores o servos
2. Leer sensores analógicos y digitales
3. Controlar el movimiento de motores
4. Navegación en medio
5. Acciones estímulo respuesta
6. Análisis y cálculo de acciones del robot

Hay varios paradigmas, o filosofías de robótica: jerárquico, reactivo e inteligentes. Pero en todas este un robot debe `SENSAR`, `PLANEAR` y `ACTUAR`. Es decir un robto de alguna manera si es una idea mecánica de un ser vivo, en el sentido de que es una máquina que percibe un entornoo y reacciona ante él de manera "instintiva" o inteligente, o combinciones de ella.

El modelo jerárquico se complen las tareas del robot estrictametne en el siguiente orden:

<img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/Agentes_Reactivos_Reflexivos/Hierarchical.JPG" width="500">

En el modelo reactivo-reflexivo, el PLANEAR constituye una especie de plan genético de funcionamiento, que está "hardwired" en el robot

<img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/Agentes_Reactivos_Reflexivos/Reactive.JPG" width="500">

El modelo inteligente el robot funciona casic como reactivo, sin embargo va aprendiendo y creando un plan en el proceso. También puede tener acciones reflexivas y otras donde existe un plan que se va creando de manera dinámica.

<img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/Agentes_Reactivos_Reflexivos/Intelligent.JPG" width="500">

#Agentes Reactivos / Reflexivos

Un agente reactivo, establece una relación funcional directa entre la infromación que el robot percibe a través de sus sensores y una reacción.  Se puede establecer esa relación como una relación de proporcionalidad.

##Reto

Construir un robot que con un sensor de luz, después de un tiempo razonable, se matenga o dirija hacia la luz  Se supone que el movimiento debe ser inversamente proporcional a la cantidad de luz, es decir se mueve mucho cuando hay poca luz y se mueve poco cuando hay mucha luz.

###Sugerencias

* Que el robot haga movimiento ondulatorios para medir la luz y a partir de allí moverse
* Hacer una relación inversa entre la lectura del sensor de luz y la respuesta de los motores

###Preguntas

¿Cómo sería el algoritmo si siguiera el paradigma jerárquivo?, es decir, que primero mida la luz, ñuego construya un plan y luego lo ejecute.



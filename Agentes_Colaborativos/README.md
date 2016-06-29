#Agentes Colaborativos

Los agentes o robots colaborativos, realizan tareas  comunicandose con otros robots para poder resolver un problema.  EL resultado se optioene por colaboración de las actividades de los robots. Para lograr esto, por lo general los robos deben comunicarse de alguna manera.

EL kit trae un bluetooth lo cul permitiría hacerlo, y este proyecto se publicará más adelante. Otra forma de comunicacion , se le llama estigmergia, y es una forma de comunicación donde los robots obtienen información de lo que están haciendo otros, a través de señales en el medio.

#Retos

##Estigmergia

Cnstruya el robot y agreguele el colector, el switch y el sensor infrarojo, como se explica en este instructable.  Ahora tratarémos de resolver lo siguiente:  ¿Como agrupar en clusters ordenados las velas?, intentemos las siguientes acciones.

1. Mover en línea recta si no hay ningún obstáculo, o la cantidad de velas no activa el switch
2. SI hay un obstáculo, entonces cambiar el ángulo aleatoriamente, sin perder las velas que ya tiene recolectadas
3. SI se activa el switch, echar para atrás el tiempo suficiente para liberar las velas, y moverse en ángulo aleatorio.

¿Cual es el resultado final? Este ejercicio está basado en la investigación de [Beckers et al 1994](http://www.eecs.harvard.edu/~rad/courses/cs266/papers/beckers-alife94.pdf)

##Sigamos la luz

Los robots tienen un sensor de luz hacia adelante, y un led en la parte de atrás.  El robot simplemente sigue la luz.  ¿Cúal es el resultado final?

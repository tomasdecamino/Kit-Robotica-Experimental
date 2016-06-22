<img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/DSC_1220.jpg" width="350"><img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/DSC_1222.jpg" width="350">

#Kit Robótica Experimental

El kit de robótica experimental es un kit de bajo costo desarrollado por la [Fundación Costa Rica para la Innovación](http://funcostarica.org/), para sus programas de enseñanza de tencología.  Este contenido se utiliza en particuloar para los programas de [Inventoría](https://www.facebook.com/inventoria/) y de [Makernel](https://www.facebook.com/MaKernel-121047394904445/)

##Contenido del Kit

El kit contiene:

1. Controlador S4A EDU
2. Dos motores DC
3. Motor servo pequeño
4. 1 x neopixel
5. Sensor de luz
6. Sensor de gas
7. Bluetooth
8. Chasis y ruedas MDF
9. Tiras de plástico
10. Tornillos y tuercas
11. Switch 

<img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/Componentes_Images/BT.JPG" width="200"><img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/Componentes_Images/BT.JPG" width="200"><img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/Componentes_Images/BT.JPG" width="200"><img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/DSC_1220.jpg" width="200"><img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/Componentes_Images/BT.JPG" width="200"><img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/Componentes_Images/BT.JPG" width="200"><img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/Componentes_Images/BT.JPG" width="200"><img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/Componentes_Images/BT.JPG" width="200"><img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/Componentes_Images/BT.JPG" width="200"><img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/Componentes_Images/BT.JPG" width="200"><img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/Componentes_Images/BT.JPG" width="200"><img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/Componentes_Images/BT.JPG" width="200"><img src="https://github.com/tomasdecamino/Kit-Robotica-Experimental/blob/master/Componentes_Images/BT.JPG" width="200">

##Intrucciones de armado

Las instrucciones de construcción están publicadas en [Instructables.com](http://www.instructables.com/id/KIt-Robot-Arduino-De-Inventoria-Ensamblado/)

##Comunicación bluetooth

En este [instructable](http://www.instructables.com/id/Kit-Robotica-Experimental-Bluetooth/) se dan detalles para conectar el módulo bluetooth al robot

##Temas de desarrollo

1. [Agentes reactivos y reflexivos](https://github.com/tomasdecamino/Kit-Robotica-Experimental/tree/master/Agentes_Reactivos_Reflexivos)
2. [Agnetes colectivos (estigmergia)](https://github.com/tomasdecamino/Kit-Robotica-Experimental/tree/master/Agentes_Colaborativos)
3. [Agentes Inteligentes](https://github.com/tomasdecamino/Kit-Robotica-Experimental/tree/master/Agentes_Inteligentes)


# Librería RobotKit

This library allows is just simplifies writting code for teh S4A EDU controller, so students can quickly use motor movement funcions.

In Costa Rica, you can purchase the controller at [CrCibernetica.com](http://www.crcibernetica.com/s4a-edu-robotic-controller/)

##Functions

- forward(int mSpeed, int t).  Makes both DC motors move forward with speed mSpped for t milliseconds
- forward(int lSpeed, int rSpeed, int t) , moves with different left and right speed
- backward(int mSpeed, int t).  Makes both DC motors move backward with speed mSpped for t milliseconds
- backward(int lSpeed, int rSpeed, int t), backward with different left and right speed
- pivotLeft(int mSpeed, int t), turns left with mSpeed for t milliseconds
- pivotRight(int mSpeed, int t), turns left with mSpeed for t milliseconds
- stopMotors(), this function just stop the motors.

##Usage

Inside the setup() section  include the command setMotors(), this will setup all motor pins. Then use movement functions described above in the loop() section of the code

##Instalation

Download ZIP file and [follow Arduino instalation instructions](http://www.arduino.cc/en/Guide/Libraries)

##Fundación Costa Rica para la Innovación

This is part of educational projects made by [Fundación Costa Rica para la Innovación](http://funcostarica.org/)

#Más proyectos de robótica

Pueden encontrar más proyectos en esta [colección de Instructables](http://www.instructables.com/id/Rob%C3%B3tica-Experimental/).


#Sobre este GitHub

El material creado en este repositorio, corresponden a desarrollos y notas del clase del Profesor Dr. Tomás de Camino Beck, y serán modificados de forma dinámica, y adaptados por todos aquellos que quieran contribuir.

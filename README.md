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

##Intrucciones de armado

Las instrucciones de construcción están publicadas en [Instructables.com](http://www.instructables.com/id/KIt-Robot-Arduino-De-Inventoria-Ensamblado/)

##Temas de desarrollo

1. Agentes reactivos y reflexivos
2. Agnetes colectivos (estigmergia)
3. Agentes Inteligentes


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

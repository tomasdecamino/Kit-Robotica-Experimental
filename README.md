# RobotKit

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


##Fundación Costa Rica para la Innovación

This is part of educational projects made by [Fundación Costa Rica para la Innovación](http://funcostarica.org/)

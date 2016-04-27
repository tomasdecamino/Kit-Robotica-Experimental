# RobotKit

This library allows is just simplifies writting code for teh S4A EDU controller, so students can quickly use motor movement funcions.

##Functions

- forward(int mSpeed, int t).  Makes both DC motors move forward with speed mSpped for t milliseconds
- forward(int lSpeed, int rSpeed, int t) , moves with different left and right speed
- backward(int mSpeed, int t).  Makes both DC motors move backward with speed mSpped for t milliseconds
- backward(int lSpeed, int rSpeed, int t), backward with different left and right speed
- pivotLeft(int mSpeed, int t), turns left with mSpeed for t milliseconds
- pivotRight(int mSpeed, int t), turns left with mSpeed for t milliseconds
- stopMotors(), this function just stop the motors.

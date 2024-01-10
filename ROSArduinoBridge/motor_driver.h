/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #ifdef ARDUINO_MKR
    #define RIGHT_MOTOR_BACKWARD 5
    #define LEFT_MOTOR_BACKWARD  3
    #define RIGHT_MOTOR_FORWARD  4
    #define LEFT_MOTOR_FORWARD   2
    #define RIGHT_MOTOR_ENABLE 1
    #define LEFT_MOTOR_ENABLE 0
  #else
    #define RIGHT_MOTOR_BACKWARD 10
    #define LEFT_MOTOR_BACKWARD  6
    #define RIGHT_MOTOR_FORWARD  9
    #define LEFT_MOTOR_FORWARD   5
    #define RIGHT_MOTOR_ENABLE 8
    #define LEFT_MOTOR_ENABLE 4
  #endif
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);

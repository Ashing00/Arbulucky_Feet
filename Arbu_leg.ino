//*****************************************************************************
//Arbulucky Leg V1.0
//阿布拉機的3D列印與機器人
//http://arbu00.blogspot.tw/
//
//2016/06/09 Writen By Ashing Tsai
//
//
//******************************************************************************
#include <Servo.h>
Servo servo7; 
Servo servo6;
Servo servo5;
Servo servo4;
Servo servo3;
Servo servo2;
//==============================
int angle7=90;
int angle6=90;
int angle5=90;
int angle4=90;
int angle3=90;
int angle2=90;

int angle=90;

int time3, time4,time27;


void setup() 
{ 
 
  Serial.begin(115200);

   servo7.attach(7,500,2500);
   servo6.attach(6,500,2500);
   servo5.attach(5,500,2500);
   servo4.attach(4,500,2500);
   servo3.attach(3,500,2500);
   servo2.attach(2,500,2500);

         time3=5;  //Joystick delay time
         time4=4;  //Automode delay time.

    Middle();


         Servoangle234567(90,85,80,100,95,90);   //mid   3:big=>front  6:small =>front//4:small=>front  5:big==>front
         delay(100);


//forward +++++++++++++++++++++++++++++++++
for (int i=0;i<=10;i++){
        Servoangle234567(95,angle3,angle4,angle5,angle6,95);   
       delay(50);
         Servoangle234567(angle2,55,50,70,65,angle7);
         delay(50);
         Servoangle234567(85,angle3,angle4,angle5,angle6,85);   
         delay(50);
         Servoangle234567(angle2,115,110,130,125,angle7);   
         delay(50);
         
}
//forward ------------------------------------       



        
    
} 
void loop() 
{

 
} 


void AutoMode() 
{
    

}

void Middle()
{

      Servoangle234567(90,90,90,90,90,95);   
      delay(200);
         
}

void forward()
{
//forward +++++++++++++++++++++++++++++++++
for (int i=0;i<=10;i++){
        Servoangle234567(95,angle3,angle4,angle5,angle6,95);   
       delay(100);
         Servoangle234567(angle2,55,50,70,65,angle7);
         delay(100);
         Servoangle234567(85,angle3,angle4,angle5,angle6,85);   
         delay(100);
         Servoangle234567(angle2,115,110,130,125,angle7);   
         delay(100);
         
}
//forward ------------------------------------     
}


void Servoangle2A(int angle)
{

                 servo2.write(angle);
                 delay(200);   //100ms

}

void Servoangle234567(int anglea2,int anglea3,int anglea4,int anglea5,int anglea6,int anglea7)
{


         while ((angle2>anglea2)||(angle3>anglea3)||(angle4>anglea4)||(angle5>anglea5)||(angle6>anglea6)||(angle7>anglea7))
     {
             if (angle2!=anglea2){
                angle2=angle2-1;
                servo2.write(angle2);
                  delay(time4);   //7ms  
            }
            if (angle3!=anglea3){
                angle3=angle3-1;
                servo3.write(angle3);
                  delay(time4);   //7ms  
            }

           if (angle4!=anglea4){
                angle4=angle4-1;
                servo4.write(angle4);
                  delay(time4);   //7ms  
            }
              if (angle5!=anglea5){
                angle5=angle5-1;
                servo5.write(angle5);
                  delay(time4);   //7ms  
            }
            if (angle6!=anglea6){
                angle6=angle6-1;
                servo6.write(angle6);
                  delay(time4);   //7ms  
            }

           if (angle7!=anglea7){
                angle7=angle7-1;
                servo7.write(angle7);
                  delay(time4);   //7ms  
            }
 
      }


       while ((angle2<anglea2)||(angle3<anglea3)||(angle4<anglea4)||(angle5<anglea5)||(angle6<anglea6)||(angle7<anglea7))
     {
            if (angle2!=anglea2){
                angle2=angle2+1;
                servo2.write(angle2);
                  delay(time4);   //7ms  
            }
            if (angle3!=anglea3){
                angle3=angle3+1;
                servo3.write(angle3);
                  delay(time4);   //7ms  
            }
           if (angle4!=anglea4){
                angle4=angle4+1;
                servo4.write(angle4);
                  delay(time4);   //7ms  
            }
           if (angle5!=anglea5){
                angle5=angle5+1;
                servo5.write(angle5);
                  delay(time4);   //7ms  
            }
            if (angle6!=anglea6){
                angle6=angle6+1;
                servo6.write(angle6);
                  delay(time4);   //7ms  
            }
           if (angle7!=anglea7){
                angle7=angle7+1;
                servo7.write(angle7);
                  delay(time4);   //7ms  
            }

            
      }

}
void Servoangle2(int angle)
{

  if  (angle2!=angle){
         while (angle2>angle)
     {
             angle2=angle2-2;
                 servo2.write(angle2);
                 delay(time4);  //50ms
      }
      while (angle2<angle)
     {
             angle2=angle2+2;
                 servo2.write(angle2);
                 delay(time4);  //50ms
      }
  }else
    {
                 servo2.write(angle2);
                 delay(time4);   //50ms
  } 
    
}
void Servoangle3(int angle)
{

  if  (angle3!=angle){
         while (angle3>angle)
     {
             angle3=angle3-1;
                 servo3.write(angle3);
                 delay(time4);  //50ms
      }
      while (angle3<angle)
     {
             angle3=angle3+1;
                 servo3.write(angle3);
                 delay(time4);  //50ms
      }
  }else
    {
                 servo3.write(angle3);
                 delay(30);   //50ms
  } 
    
}
void Servoangle4(int angle)
{

  if  (angle4!=angle){
         while (angle4>angle)
     {
             angle4=angle4-2;
                 servo4.write(angle4);
                 delay(time4);  //50ms
      }
      while (angle4<angle)
     {
             angle4=angle4+2;
                 servo4.write(angle4);
                 delay(time4);  //50ms
      }
  }else
    {
                 servo4.write(angle4);
                 delay(time4);   //50ms
  } 
    
}
void Servoangle5(int angle)
{

  if  (angle5!=angle){
         while (angle5>angle)
     {
             angle5=angle5-2;
                 servo5.write(angle5);
                 delay(time4);  //50ms
      }
      while (angle5<angle)
     {
             angle5=angle5+2;
                 servo5.write(angle5);
                 delay(time4);  //50ms
      }
  }else
    {
                 servo5.write(angle5);
                 delay(time4);   //50ms
  } 
    
}
void Servoangle6(int angle)
{

  if  (angle6!=angle){
         while (angle6>angle)
     {
             angle6=angle6-2;
                 servo6.write(angle6);
                 delay(time4);  //50ms
      }
      while (angle6<angle)
     {
             angle6=angle6+2;
                 servo6.write(angle6);
                 delay(time4);  //50ms
      }
  }else
    {
                 servo6.write(angle6);
                 delay(time4);   //50ms
  } 
    
}

void Servoangle7(int angle)
{

  if  (angle7!=angle){
         while (angle7>angle)
     {
             angle7=angle7-2;
                 servo7.write(angle7);
                 delay(time4);  //50ms
      }
      while (angle7<angle)
     {
             angle7=angle7+2;
                 servo7.write(angle7);
                 delay(time4);  //50ms
      }
  }else
    {
                 servo7.write(angle7);
                 delay(time4);   //50ms
  } 
    
}



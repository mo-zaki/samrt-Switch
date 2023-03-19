#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>
#include "DFRobot_CH423.h"

#define KEY_0 0xFFC03F
#define KEY_1 0xFF7A85
#define KEY_2 0xFFB847
#define KEY_3 0xFF9A65
#define KEY_4 0xFF5AA5
#define KEY_5 0xFF4AB5
#define KEY_6 0xFF8A75
#define KEY_7 0xFF42BD
#define KEY_8 0xFF807F

const uint16_t kRecvPin = 14;
DFRobot_CH423 ch423;


 uint8_t flag_BOTTUM_0 = 0;
 uint8_t flag_BOTTUM_1 = 0;
 uint8_t flag_BOTTUM_2 = 0;
 uint8_t flag_BOTTUM_3 = 0;
 uint8_t flag_BOTTUM_4 = 0;
 uint8_t flag_BOTTUM_5 = 0;
 uint8_t flag_BOTTUM_6 = 0;
 uint8_t flag_BOTTUM_7 = 0;
 uint8_t flag_BOTTUM_8 = 0;
 
IRrecv irrecv(kRecvPin);
decode_results results;


void setup() {
  Serial.begin(115200);
  irrecv.enableIRIn();  
  while (!Serial)  
    delay(50);
    
  ch423.begin();
  ch423.pinMode(ch423.eGPO, ch423.ePUSH_PULL);
  
     ch423.digitalWrite(ch423.eGPO0, HIGH);
     ch423.digitalWrite(ch423.eGPO1, HIGH);
     ch423.digitalWrite(ch423.eGPO2, HIGH);
     ch423.digitalWrite(ch423.eGPO3, HIGH);
     ch423.digitalWrite(ch423.eGPO4, HIGH);
     ch423.digitalWrite(ch423.eGPO5, HIGH);
     ch423.digitalWrite(ch423.eGPO6, HIGH);
     ch423.digitalWrite(ch423.eGPO7, HIGH);
  
  Serial.println();
  Serial.print("IRrecvDemo is now running and waiting for IR message on Pin ");
  Serial.println(kRecvPin);
}


void loop() {
  if (irrecv.decode(&results)) {
  switch (results.value)
  {
    case KEY_0 :
    if (0==flag_BOTTUM_0)
    {
                      ch423.digitalWrite(ch423.eGPO0, LOW);
                      flag_BOTTUM_0 = 1;
                delay(1000);
    }
    else
    {
              ch423.digitalWrite(ch423.eGPO0, HIGH);
              flag_BOTTUM_0 = 0;
        delay(1000);
    }
    break ;

       case KEY_1 :
    if (0==flag_BOTTUM_1)
    {
                      ch423.digitalWrite(ch423.eGPO1, LOW);
                      flag_BOTTUM_1 = 1;
                delay(1000);
    }
    else
    {
              ch423.digitalWrite(ch423.eGPO1, HIGH);
              flag_BOTTUM_1 = 0;
        delay(1000);
    }
    break ;
  
         case KEY_2 :
    if (0==flag_BOTTUM_2)
    {
                      ch423.digitalWrite(ch423.eGPO2, LOW);
                      flag_BOTTUM_2 = 1;
                delay(1000);
    }
    else
    {
              ch423.digitalWrite(ch423.eGPO2, HIGH);
              flag_BOTTUM_2 = 0;
        delay(1000);
    }
    break ;
  
         case KEY_3 :
    if (0==flag_BOTTUM_3)
    {
                      ch423.digitalWrite(ch423.eGPO3, LOW);
                      flag_BOTTUM_3 = 1;
                delay(1000);
    }
    else
    {
              ch423.digitalWrite(ch423.eGPO3, HIGH);
              flag_BOTTUM_3 = 0;
        delay(1000);
    }
    break ;
    ////////////////////////////////////////////////////////
    
       case KEY_4 :
    if (0==flag_BOTTUM_4)
    {
                      ch423.digitalWrite(ch423.eGPO4, LOW);
                      flag_BOTTUM_4 = 1;
                delay(1000);
    }
    else
    {
              ch423.digitalWrite(ch423.eGPO4, HIGH);
              flag_BOTTUM_4 = 0;
        delay(1000);
    }
    break ;

       case KEY_5 :
    if (0==flag_BOTTUM_5)
    {
                      ch423.digitalWrite(ch423.eGPO5, LOW);
                      flag_BOTTUM_5 = 1;
                delay(1000);
    }
    else
    {
              ch423.digitalWrite(ch423.eGPO5, HIGH);
              flag_BOTTUM_5 = 0;
        delay(1000);
    }
    break ;
  
         case KEY_6 :
    if (0==flag_BOTTUM_6)
    {
                      ch423.digitalWrite(ch423.eGPO6, LOW);
                      flag_BOTTUM_6 = 1;
                delay(1000);
    }
    else
    {
              ch423.digitalWrite(ch423.eGPO6, HIGH);
              flag_BOTTUM_6 = 0;
        delay(1000);
    }
    break ;
  
         case KEY_7 :
    if (0==flag_BOTTUM_7)
    {
                      ch423.digitalWrite(ch423.eGPO7, LOW);
                      flag_BOTTUM_7 = 1;
                delay(1000);
    }
    else
    {
              ch423.digitalWrite(ch423.eGPO7, HIGH);
              flag_BOTTUM_7 = 0;
        delay(1000);
    }
    break ;
    /////////////////////////////////////////////////////////

  }
   
   serialPrintUint64(results.value, HEX);
    Serial.println("");d
    irrecv.resume();  // Receive the next value
    }
       delay(100);                                                   
  
  }


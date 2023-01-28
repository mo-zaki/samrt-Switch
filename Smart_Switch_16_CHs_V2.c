#include <IRremote.h>
#include "DFRobot_CH423.h"


IRrecv irrecv(RECV_PIN);
decode_results results;

int toggleState_1 = 0; //Define integer to remember the toggle state for switch
int select_Channels (byte channel)

//Define IR receiver and Result Objects


void setup()
{
	 Serial.begin(115200);
	 ch423.begin();
	 ch423.pinMode(ch423.eGPO, ch423.ePUSH_PULL);


}
void loop() {
  if (irrecv.decode(&results)) {

    switch(results.value){
      case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 0 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO0, /* level= */HIGH);  // turn on switch 0
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO0, /* level= */LOW); // turn off switch 0
                  }
                  delay(100);
      break;
	  
	        case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 1 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO1, /* level= */HIGH);  // turn on switch 1
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO1, /* level= */LOW); // turn off switch 1
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
	  
	        case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 2 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO2, /* level= */HIGH);  // turn on switch 2
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO2, /* level= */LOW); // turn off switch 2
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
	  
	        case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 3 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO3, /* level= */HIGH);  // turn on switch 3
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO3, /* level= */LOW); // turn off switch 3
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
	  
	        case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 4 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO4, /* level= */HIGH);  // turn on switch 4
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO4, /* level= */LOW); // turn off switch 4
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
	  
	        case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 5 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO5, /* level= */HIGH);  // turn on switch 5
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO5, /* level= */LOW); // turn off switch 5
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
	  
	        case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 6 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO6, /* level= */HIGH);  // turn on switch 6
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO6, /* level= */LOW); // turn off switch 6
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
         case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 7 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO7, /* level= */HIGH);  // turn on switch 7
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO7, /* level= */LOW); // turn off switch 7
                  }
                  delay(100);
      break;
	  
	        case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 8 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO8, /* level= */HIGH);  // turn on switch 8
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO8, /* level= */LOW); // turn off switch 8
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
	  
	        case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 9 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO9, /* level= */HIGH);  // turn on switch 9
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO9, /* level= */LOW); // turn off switch 9
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
	  
	        case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 10 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO10, /* level= */HIGH);  // turn on switch 10
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO10, /* level= */LOW); // turn off switch 10
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
	  
	        case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 11 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO11, /* level= */HIGH);  // turn on switch 11
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO11, /* level= */LOW); // turn off switch 11
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
	  
	        case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 12 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO12, /* level= */HIGH);  // turn on switch 12
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO12, /* level= */LOW); // turn off switch 12
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
	  
	        case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 13 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO13, /* level= */HIGH);  // turn on switch 13
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO13, /* level= */LOW); // turn off switch 13
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
	        case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 14 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO14, /* level= */HIGH);  // turn on switch 14
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO14, /* level= */LOW); // turn off switch 14
                  }
                  delay(100);
      break;
	  
	        case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 15 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO15, /* level= */HIGH);  // turn on switch 15
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO15, /* level= */LOW); // turn off switch 15
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
	  
	        case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 16 (change this)
      

                if(toggleState_1 == 0){
                   ch423.digitalWrite(/* gpo= */ch423.eGPO16, /* level= */HIGH);  // turn on switch 16
                  toggleState_1 = 1;
                  }
                else{
                   ch423.digitalWrite(/* gpio= */ch423.eGPO16, /* level= */LOW); // turn off switch 16
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
      default : break;      
      }    
    irrecv.resume(); // Receive the next value
  }  
}
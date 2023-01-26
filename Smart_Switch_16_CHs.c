#include <IRremote.h>
//Define PIN constant
const int S0 = 0;
const int S1 = 1;
const int S2 = 2;
const int S3 = 3;
///////////////////////////
const int S_seg = 0;
/////////////////////////
int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);
decode_results results;

int toggleState_1 = 0; //Define integer to remember the toggle state for switch
int select_Channels (byte channel)
{
  digitalWrite (S0,bitRead (channel,0));
  digitalWrite (S1,bitRead (channel,1));
  digitalWrite (S2,bitRead (channel,2));
  digitalWrite (S3,bitRead (channel,3));
}

//Define IR receiver and Result Objects


void setup()
{
 pinMode(S0,OUTPUT);
 pinMode(S1,OUTPUT);
 pinMode(S2,OUTPUT);
 pinMode(S3,OUTPUT);
 pinMode(S_seg,OUTPUT);
 Serial.begin(9600);
 delay(1000);
}
void loop() {
  if (irrecv.decode(&results)) {

    switch(results.value){
      case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 1 (change this)
      select_Channels (0);

                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 1
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 1
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
      case 0x10EF9966:          // 10EF9966 = Hex code for IR remote button 2 (change this)
    select_Channels (1);
                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 2
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 2
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
        case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 1 (change this)
      select_Channels (2);

                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 1
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 1
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
      case 0x10EF9966:          // 10EF9966 = Hex code for IR remote button 2 (change this)
    select_Channels (3);
                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 2
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 2
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
      case 0x10EFB946: //(change this)
    select_Channels (4);
                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 3
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 3
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
          case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 1 (change this)
      select_Channels (5);

                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 1
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 1
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
      case 0x10EF9966:          // 10EF9966 = Hex code for IR remote button 2 (change this)
    select_Channels (6);
                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 2
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 2
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
      case 0x10EFB946: //(change this)
    select_Channels (7);
                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 3
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 3
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
          case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 1 (change this)
      select_Channels (8);

                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 1
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 1
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
      case 0x10EF9966:          // 10EF9966 = Hex code for IR remote button 2 (change this)
    select_Channels (9);
                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 2
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 2
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
      case 0x10EFB946: //(change this)
    select_Channels (10);
                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 3
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 3
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
          case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 1 (change this)
      select_Channels (11);

                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 1
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 1
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
      case 0x10EF9966:          // 10EF9966 = Hex code for IR remote button 2 (change this)
    select_Channels (12);
                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 2
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 2
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
      case 0x10EFB946: //(change this)
    select_Channels (13);
                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 3
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 3
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
          case 0x10EFA956:        // 10EFA956 = Hex code for IR remote button 1 (change this)
      select_Channels (14);

                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 1
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 1
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
      case 0x10EF9966:          // 10EF9966 = Hex code for IR remote button 2 (change this)
    select_Channels (15);
                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 2
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 2
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
      case 0x10EFB946: //(change this)
    select_Channels (16);
                if(toggleState_1 == 0){
                  digitalWrite(S_seg, HIGH); // turn on switch 3
                  toggleState_1 = 1;
                  }
                else{
                  digitalWrite(S_seg, LOW); // turn off switch 3
                  toggleState_1 = 0;
                  }
                  delay(100);
      break;
      default : break;      
      }    
    irrecv.resume(); // Receive the next value
  }  
}
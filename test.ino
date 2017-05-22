#include <IRremote.h>
 const int irReceiverPin = 2; 
 IRrecv irrecv(irReceiverPin); 
 decode_results results; 
  
 void setup()
 {
  Serial.begin(9600);
//irrecv.blink13(true); 
irrecv.enableIRIn(); 
}
 
void loop() {
if (irrecv.decode(&results)) {
//Serial.print("results value is "); 
Serial.print("irCode: ");
Serial.print(results.value, HEX);
Serial.print(", bits: ");
Serial.println(results.bits);
//Serial.print(", decode_type is ");
//Serial.println(results.decode_type);
irrecv.resume(); 
}
}


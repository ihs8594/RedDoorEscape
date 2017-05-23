 // pin assignments
 int LDR1 = 4;
 int LDR2 = 2;
 int LDR3 = 0;
 int relay= 8;

 
 // initialize the serial port
 // and declare inputs and outputs
 void setup() 
 {
   pinMode(LDR1, INPUT);
   pinMode(LDR2, INPUT);
   pinMode(LDR3, INPUT);
   pinMode(relay, OUTPUT);
   Serial.begin(9600);
   
 }
 
 void loop() {
   
   //Reset device and relay
   Serial.println("Reset");
   digitalWrite(relay, HIGH);
 
   int light1 = analogRead(LDR1);
   Serial.println("Light1");
   Serial.println(light1);
  
 

   int light2 = analogRead(LDR2);
   Serial.println("Light2");
   Serial.println(light2);

   

 int light3 = analogRead(LDR3);
   Serial.println("Light3");
   Serial.println(light3);

  
delay(1000);
   
  if(light1>25 && light2>25 && light3>25)
  {
   Serial.println("Unlock");
   digitalWrite(relay, LOW);
   delay(5000);
   digitalWrite(relay,HIGH);
  }
 

}

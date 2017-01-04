//#define R1 10000
//#define R2 2200

//#define R1 9790
//#define R2 2174

#define R1 9790
#define R2 4700
#define VREF 1.1 //Verificato perimentalmente


void setup() {
  Serial.begin(115200); //Baud rate: 9600
}
void loop() {
  int sensorValue = analogRead(A0);// read the input on analog pin 0:
  Serial.println(sensorValue);
  float voltage = (sensorValue*VREF/1024)*((R1+R2)/R2)
  ; // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  Serial.println(voltage); // print out the value you read:
  delay(2000);
}


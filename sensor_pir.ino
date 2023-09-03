int sensor_pir=7; //output sensor PIR ke pin7 Arduino
int sensor_value; //variable untuk menyimpan nilai pembacaan sensor
const int LED = 4; //pin 3 koneksi ke LED
 
void setup()
{
  pinMode(sensor_pir,INPUT); // pin 7 sebagai input
  Serial.begin(9600); // menginisiasi komunikasi serial dengan laptop
    pinMode(LED, OUTPUT); 
}
 
void loop()
{
  sensor_value=digitalRead(sensor_pir); // membaca nilai dari pin 7
  if(sensor_value == HIGH){ //jika ada gerakan
  digitalWrite (LED, HIGH);  
Serial.println("Gerakan terdeteksi!");
  delay(2000);
}
else{ //jika tidak ada gerakan
  digitalWrite(LED, LOW);
  Serial.println("Tidak ada Gerakan"); // print output sensor ke serial monitor
  delay(2000);
}
}
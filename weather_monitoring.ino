#include <SoftwareSerial.h> //include the software serial library
#include<dht.h> // include the dht library
dht DHT; // initiate the DHT object
int a; // a variable to store the raw sensor value
String temp; // Variable to store the temperature
String humid; // Variable to store the humidity
void setup()
{
  Serial.begin(9600);// begin the serial communication with baud of 9600
} 

void loop(){
  /// put your main code here, to run repeatedly:
  a=DHT.read11(5); // read the sensor data and store it in variable a
  temp=DHT.temperature; // store the temperature values in temp variable
  humid=DHT.humidity;// store the humidity values in humid variable
  Serial.print("Temperature :"); // print the temperature on serial monitor
  Serial.println(temp); // Print the temperature value
  Serial.print("Humidity : ");//Print Humidity on serial monitor
  Serial.print(humid); // Print the humidity value on serial monitor
  Serial.print(" \n "); 
 
  delay(3000);
}

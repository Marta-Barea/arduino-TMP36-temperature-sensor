// Temperature Sensor TMP36 //

// Analog pin A0 has a TMP36 sensor conected to it:

int tmp36Input = A0;

// Set on the specified pin whether it should behave as an input or an output:

void setup() {
  
  Serial.begin(9600); // Initialize serial communication at 9600 bits per second
  pinMode(tmp36Input, INPUT); // Make the TMP36's pin an input
  
}

// The loop routine that runs on and on:

void loop() {

  // Analog output reading:

  int tmp36Status = analogRead(tmp36Input); // Read the analog output (ADC) of the TMP36 sensor
  
  Serial.print("ADC:");
  Serial.print(tmp36Status);

  // Voltage output reading:
  
  float voltage = tmp36Status * (5.0 / 1023); // Convert the readout to voltage value

  Serial.print(", Volts:");
  Serial.print(voltage);
  
  // Temperature output reading:
  
  float temp = (voltage - 0.5) * 100; // Convert the voltage to temperature in Celsius (ºC);
  
  Serial.print(", ºC
  ºº:");
  Serial.println(temp);
  
  delay(100); // Delay in between reads

}

/* The goal of this program is to monitor an analog sensor connected to A0, convert readings to voltage, and display results.
the main theme is an Analog Input Processing */
void setup() {

// Initialize serial communication at 9600 bits per second for debugging and data output.
Serial.begin(9600);

}

void loop() {
// Read the analog value from pin A0, ranging from 0 to 1023.
int sensorValue = analogRead (A0);

// Convent the analog reading to a voltage value between 0 and 5V
float voltage = sensorValue * (5.0 / 1023.0);

// Print the raw analog reading and the calculated voltage to the serial monitor.
Serial.print("bitvalue");
Serial.print(sensorValue);
Serial.print(" voltage "):
Serial.println(voltage);

}

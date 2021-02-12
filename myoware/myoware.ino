int EMGsig;           // Store the EMG signal value
float voltage;        // Store the voltage value
void setup() {
 Serial.begin(9600); // Starting the communication with the computer
}
void loop() {
 EMGsig = analogRead(A0); // Read the analog values of the rectified+integrated EMG signal (0–1023)
 Serial.print("Raw EMG Signal: ");Serial.println(EMGsig);
 voltage = EMGsig * (5.0 / 1023.0);
 Serial.print("Voltage (V): ");Serial.println(voltage);
 delay(500); 
  // 1 second (1000ms) delay to not cause it to move as frantically. But this can be adjusted as you like.
}

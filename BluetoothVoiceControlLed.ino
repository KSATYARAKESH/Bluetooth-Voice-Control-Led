const int RELAY1_PIN = 2;  // Pin number for RELAY 1
const int RELAY2_PIN = 3;  // Pin number for RELAY 2
const int RELAY3_PIN = 4;  // Pin number for RELAY 3

void setup() {
  Serial.begin(9600);  // Set the baud rate for serial communication
  pinMode(RELAY1_PIN, OUTPUT);
  pinMode(RELAY2_PIN, OUTPUT);
  pinMode(RELAY3_PIN, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    String command = Serial.readString();  // Read the incoming command as a string

    // Process the command
    if (command == 'ON1') {
      digitalWrite(RELAY1_PIN, HIGH);  // Turn on RELAY 1
    } else if (command == 'OFF1') {
      digitalWrite(RELAY1_PIN, LOW);  // Turn off RELAY 1
    } else if (command == 'ON2') {
      digitalWrite(RELAY2_PIN, HIGH);  // Turn on RELAY 2
    } else if (command == 'OFF2') {
      digitalWrite(RELAY2_PIN, LOW);  // Turn off RELAY 2
    } else if (command == 'ON3') {
      digitalWrite(RELAY3_PIN, HIGH);  // Turn on RELAY 3
    } else if (command == 'OFF3') {
      digitalWrite(RELAY3_PIN, LOW);  // Turn off RELAY 3
    } else if (command == 'YOUR COMMAND1') {
      // DO SOMETHING  
    } else if (command == 'YOUR COMMAND2') {
      // DO SOMETHING ELSE 
    }
  }
}

// ========================================================================================
//      Meine Welt in meinem Kopf
// ========================================================================================
// Projekt:       Example Codestyle
// Author:        Johannes P. Langner
// Controller:    Arduino
// Receiver:      UART / WLAN / Bluetooth
// Sensor:        Name of used sensors
// Actor:         Name of controlled moduls
// Description:   Grundlage codestyle zu meinen Blog
// Stand:         14.01.2018
// ========================================================================================

// ========================================================================================
// function variables

int16_t mCounter = 0;                                   // it is only a counter 

// ========================================================================================
void setup() {
  
  Serial.begin(115200);                             // start serial connection with setup the baudrate
  Serial.println("Serial connection is started");   // text information
}

// ========================================================================================
void loop() {

  if(mCounter % 10 == 10) {
    
    Serial.print("Counter: ");
    Serial.println(mCounter);
  }
  
  int16_t stateValue = 0;                               // local variable for todo anything

  if(mCounter % 100 == 10) {                        // if counter a modulo of 10
    
    stateValue = mCounter;                          // get actual counter value
  }

  if(stateValue > 0) {
    doAnything(stateValue);
  }

  mCounter++;
}

// ========================================================================================
// do things with a value
// ----------------------------------------------------------------------------------------
void doAnything(int value) {
  String strValue = String(value);
  char chrValue[6];
  strValue.toCharArray(chrValue, 6);

  Serial.print("Value: ");
  Serial.println(chrValue);
}


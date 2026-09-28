const byte buttonPin = 2;
const byte ledPin = 13;

byte ledState = 0;
byte lastButtonState = 1;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  byte buttonState = digitalRead(buttonPin);

  // Detect HIGH → LOW transition
  byte buttonPressed = lastButtonState & !buttonState;

  // Toggle LED only when button is pressed
  ledState ^= buttonPressed;

  digitalWrite(ledPin, ledState);

  lastButtonState = buttonState;

  delay(50);
}


















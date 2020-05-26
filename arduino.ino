
const int buttonPin = 2;    
const int ledPin =  13;      


int buttonState = 0;         

void setup() {
  // Define o led de aviso como saida
  pinMode(ledPin, OUTPUT);
  // Define o sensor como entrada
  pinMode(ledPin, INPUT);
}

void loop() {
  // lê o sensor
  buttonState = digitalRead(buttonPin);

  // Checa se o sensor está ativado ou não
  if (buttonState == HIGH) {
    // Vai acionar o led que o sensor está ligado
    digitalWrite(ledPin, HIGH);
  } else {
    // Desliga o led que o sensor está desligado
    digitalWrite(ledPin, LOW);
  }
}

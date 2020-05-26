
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
  // l� o sensor
  buttonState = digitalRead(buttonPin);

  // Checa se o sensor est� ativado ou n�o
  if (buttonState == HIGH) {
    // Vai acionar o led que o sensor est� ligado
    digitalWrite(ledPin, HIGH);
  } else {
    // Desliga o led que o sensor est� desligado
    digitalWrite(ledPin, LOW);
  }
}

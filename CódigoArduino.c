const int botonPin = 0; 
const int pinLedRojo = 2; 
const int pinLedAmarillo = 3;
const int pinLedVerde = 4;

int estadoAnteriorBoton;          
int estadoActualBoton;  

void setup() {
  Serial.begin(115200);                 
  pinMode(botonPin, INPUT_PULLUP);    
  pinMode(pinLedRojo, OUTPUT);         
  pinMode(pinLedAmarillo, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);
  estadoActualBoton = digitalRead(botonPin);
}

void loop() {
  estadoAnteriorBoton = estadoActualBoton;
  estadoActualBoton = digitalRead(botonPin); 
    digitalWrite(pinLedRojo, HIGH);
    if(estadoAnteriorBoton == HIGH && estadoActualBoton == LOW) { 
      digitalWrite(pinLedRojo, LOW);   
      digitalWrite(pinLedAmarillo, HIGH);
      delay(500);
      digitalWrite(pinLedAmarillo, LOW);
      digitalWrite(pinLedVerde, HIGH);
      delay(1500);
      digitalWrite(pinLedVerde, LOW);
      digitalWrite(pinLedAmarillo, HIGH);
      delay(500);
      digitalWrite(pinLedAmarillo, LOW);
      digitalWrite(pinLedRojo, HIGH);
   }
    
}


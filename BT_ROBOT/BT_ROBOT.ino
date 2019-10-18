// Motor 1 (Esquerda)
#define m1A_pin 5
#define m1B_pin 6

// Motor 2 (Direita)
#define m2A_pin 10
#define m2B_pin 11

const int trigPin(2);
const int echoPin(4);
// Potencias do motor:  
// Este parametro define quao abrupto a robo realiza as curvas
#define potS 6

// Potencia quando o robo anda para frente
#define potF 125

#define potH 255

#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
// variável auxiliar para o controle de modo de execução 
int  i = 0,x = 0, y = 0, k = 0,z = 0, l = 0;
int  j = LOW;
void setup() {
  pinMode(m1A_pin, OUTPUT);
  pinMode(m1B_pin, OUTPUT);
  pinMode(m2A_pin, OUTPUT);
  pinMode(m2B_pin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}
void loop() 
{
//  myservo2.write(40);
//  myservo1.write(90);
  if(dist() <= 20)
  {
    control('p');
    delay(1000);
    control('w');
    delay(500);
    control('p');
    delay(1000);
    control('d');
    delay(500);
    control('p');
    delay(1000);
  }
  else
  {
    control('x');
  }
  int dado = Serial.read();
  if(dado  == '5' )
  {
    i=1;
    control('p');
    while (i == 1)
    {
     int dado = Serial.read();
     if(dado == '1')
     {
      Serial.println("frente");
      control('w');
     }
     else if(dado == '5')
     {
      i=0;
     }
     else if(dado == '2')
     { 
      Serial.println("re");
      control('x');
     }
     else if(dado == '3')
     {
      Serial.println("direita");
       control('d');
     }
     else if(dado == '4')
     {
       Serial.println("esquerda");
       control('a');
     }
     else if (dado == '7')
     {
        Serial.println("parado");
        control('p'); 
     }
     else if (dado == '8')
     {
        sing(1);
     }
     else if (dado == '9')
     {
        sing(2);
     }
   }
  }
}

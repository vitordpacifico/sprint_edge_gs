// definindo as bibliotecas usadas
#include <OneWire.h>
#include <DallasTemperature.h>

// definindo os pinos do sensor ultrassônico
const int trigPin = 9;
const int echoPin = 10;

// definindo o pino do sensor de temperatura
const int oneWireBus = 2;

// configuração das bibliotecas
OneWire oneWire(oneWireBus);
DallasTemperature sensors(&oneWire);

void setup() {
  // inicia o código projeto
  Serial.begin(9600);

  // inicia os pinos do sensor ultrassônico
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // inicialização do sensor DS18B20
  sensors.begin();
}

void loop() {
  // medição da distancia feita pelo sensor ultrassônico
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  float distance = (duration * 0.034) / 2;

  // leitura do sensor de temperatura
  sensors.requestTemperatures();
  float temperature = sensors.getTempCByIndex(0);

  // print no monitor serial da distancia e da temperatura 
  Serial.print("distância do objeto: ");
  Serial.print(distance);
  Serial.println("cm");

  Serial.print("temperatura do mar: ");
  Serial.print(temperature);
  Serial.println("ºC");

  // delay para fazer leitura do código
  delay(1000);
}

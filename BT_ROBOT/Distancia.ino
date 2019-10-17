int dist()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  unsigned long duracao = pulseIn(echoPin, HIGH);
  int distancia = duracao/58;
  Serial.print("DISNTANCIA: ");
  Serial.println(distancia);
  return distancia;
}

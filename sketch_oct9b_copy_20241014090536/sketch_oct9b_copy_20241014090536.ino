const int buzzerPin = 9;
const int fireSensorPin = 8;
const int bulbPin = 13; // Define the pin for the bulb

void setup()
{
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(fireSensorPin, INPUT);
  pinMode(bulbPin, OUTPUT); // Set the bulb pin as an output
}

void loop()
{
  int fireValue = digitalRead(fireSensorPin);
  Serial.println(fireValue);
  if (fireValue == 0)
  {
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(bulbPin, HIGH); // Turn on the bulb
    delay(5000);
  }
  else
  {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(bulbPin, LOW); // Turn off the bulb
  }
  delay(500);
}

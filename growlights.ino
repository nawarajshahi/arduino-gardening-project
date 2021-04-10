
//control the grow lights
#define RELAY2 6
void setup()

{

  Serial.begin(9600);
  pinMode(RELAY2, OUTPUT);
}

void loop()

{

  digitalWrite(RELAY2, 0); // Turns ON Relays 1
  Serial.println("Light ON");
  delay(5000); // Wait 5 seconds

  digitalWrite(RELAY2, 1); // Turns Relay Off
  Serial.println("Light OFF");
  delay(2160000);
}

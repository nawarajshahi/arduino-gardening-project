const int VAL_PROBE = A0;       //Analog pin 0
const int MOISTURE_LEVEL = 450; // the value after the LED goes on

//control watering system based on moisture level in the soil
//make sure that moisture sensor is connected to A-0
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);
}

void LedState(int state)
{
  digitalWrite(13, state);
}

void loop()
{

  int moisture = analogRead(VAL_PROBE);

  Serial.print("Moisture = ");
  Serial.println(moisture);

  if (moisture < MOISTURE_LEVEL)
  {
    // Enough moisture, so water off
    LedState(HIGH);
    digitalWrite(7, HIGH);
  }
  else
  {
    Serial.println("water on");
    LedState(LOW);
    digitalWrite(7, LOW);
    delay(2000);
    Serial.println("water off");
    LedState(HIGH);
    digitalWrite(7, HIGH);
  }

  delay(20000);
}

#define TRIG 9
#define ECHO 10

long duration;
long distance;
float tankdepth = 150;
float waterlevel;

void setup()
{
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH);
  distance = duration * 0.034 / 2.0;
  waterlevel = tankdepth - distance;

  if (waterlevel < 0) waterlevel = 0;
  if (waterlevel > tankdepth) waterlevel = tankdepth;

  Serial.print("water level: ");
  Serial.print(waterlevel);
  Serial.print(" cm / depth: ");
  Serial.print(tankdepth);
  Serial.println(" cm");

  delay(1000);
}

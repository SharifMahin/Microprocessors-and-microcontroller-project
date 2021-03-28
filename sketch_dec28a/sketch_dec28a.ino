String voice;
void setup() {
Serial.begin(9600);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
pinMode(3, OUTPUT);
}

void loop() {
while(Serial.available()){
  delay(4);
  char c = Serial.read();
  voice+=c;}

if(voice.length() >0){
  Serial.println(voice);
  if(voice == "light on")
  {digitalWrite(6, HIGH);}
  else if(voice == "light off")
  {digitalWrite(6, LOW);}
  else if(voice == "fan on")
  {digitalWrite(5, HIGH);}
  else if(voice == "fan off")
  {digitalWrite(5, LOW);}
  else if(voice == "night lamp on")
  {digitalWrite(4, HIGH);}
  else if(voice == "night lamp off")
  {digitalWrite(4, LOW);}
 else if(voice == "green light on")
  {digitalWrite(3, HIGH);}
  else if(voice == "green light off")
  {digitalWrite(3, LOW);}


  else if(voice == "all on")
  {digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);}
  else if(voice == "all off")
  {digitalWrite(3, LOW);
   digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  digitalWrite(6, LOW);}
  voice = "";}
}

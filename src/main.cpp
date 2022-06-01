#include <Arduino.h>

void menu(String);

void setup()
{
  const String date = __DATE__;
  const String time = __TIME__;
  Serial.begin(115200);
  while(Serial.available() == 0);
  Serial.println("Build Date"+ date +" "+time);
  Serial.print("> ");
}

void loop()
{

  if (Serial.available() > 0)
  {
    String s;
    s = Serial.readStringUntil('\n');
    Serial.println(s);
    menu(s);
  }
}

void menu(String s)
{
  if (s.equals("?"))
  {
    Serial.println("Hello world");
  }
  else if (s.equals("ver"))
  {
    Serial.println("0.0.1");
  }else{
    Serial.println("Input :"+s);
  }
  Serial.print("ESP32 > ");
}
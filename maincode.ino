// Libraries used
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
// #include <EEPROM.h>
#include <Arduino.h>

// blynk connection configuration
#define BLYNK_TEMPLATE_ID "TMPL2lB8pw9B8"
#define BLYNK_TEMPLATE_NAME "smart fire alert"
#define BLYNK_AUTH_TOKEN "beePxq5lRMQ0ySK604d0j2kqFbvJr_nd"

const char *auth = BLYNK_AUTH_TOKEN;
BlynkTimer timer;

// Pinout
#define LED 2
#define LED_WIFI 4
#define BUZZER 5

#define MOVE 18
#define FIRE 21
#define SMOKE 22 

// variables
int count = 0;
unsigned long previousMillis = 0;
const unsigned long interval = 1000;

int move;
int fire;
int smoke;

const char *ssid = "NNET-46022";
const char *pass = "L@serJ&t2022";

void setup() {
  Serial.begin(9600); // Baud rate
  Serial.println("Initial System!");
  ledcSetup(0, 5000, 8);

  pinMode(LED, OUTPUT);
  pinMode(LED_WIFI, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  pinMode(MOVE, INPUT);
  pinMode(FIRE, INPUT);
  pinMode(SMOKE, INPUT);

  // Wifi connection 
  detect_wifi();

}

void loop() {
  // Blynk Execution
  Blynk.run();
  timer.run();

  if (timer_count() == 60){
    detect_wifi();
    move = digitalRead(MOVE);
    timer_reset();
  }
  

  // reset variables
  digitalWrite(LED, HIGH);
  digitalWrite(LED_WIFI, LOW);
  noTone(BUZZER);
  fire = LOW;
  smoke = HIGH;

  // start measuring
  detect_fire();

}

void detect_fire(){
  
  fire = digitalRead(FIRE);
  smoke = digitalRead(SMOKE);

  if(fire == HIGH && smoke == LOW){
    Serial.println("fire: " + String(fire) + " and smoke: " + String(smoke));
    Serial.println("FIRE DETECTION!!!!");
    Serial.println("notify building management");
    //Blynk.logEvent("fire_alert_adm");
    detect_move();
    delay(10000); // 10 segundo
  }

  else if (smoke == LOW){
    Serial.println("smoke: " + String(smoke)); //event Smoke
    delay(5000); // 5 segundos
  }

  else if (fire == HIGH){
    Serial.println("Fire: " + String(fire));
    delay(5000); // 5 segundos
  }

  else {
    Serial.println("No Problem!");
    delay(5000); // 20 segundos, no projeto final fica 1 minuto
  }

}

void detect_move(){
  if (move == HIGH){
    // Play alarm for 10 times
    for (int i = 0; i< 10; i++){
    alert_sound();
    }
    Serial.println("There are people in the building, tell everyone.");
    // Blynk.logEvent("fire_alert_all");
  }else{
    Serial.println("Notify fire department");
    Serial.println("No people in the building, just notify the brigade");
    // Blynk.logEvent("fire_alert_brigada");
    delay(5000);

  }
}

void alert_sound(){
  tone(BUZZER, 250, 200);
  tone(BUZZER, 550, 300);
  tone(BUZZER, 750, 250);
  tone(BUZZER, 50, 200);
}

void detect_wifi(){
  Serial.println("Connecting!");
  WiFi.begin(ssid, pass);
    digitalWrite(LED_WIFI, LOW);
  while(WiFi.status() != WL_CONNECTED){
    delay(750);
    Serial.print(".");
    digitalWrite(LED_WIFI, HIGH);

  }
  Serial.println("Connected WIFI!");

  detect_blynk();

}

void detect_blynk(){
  Blynk.begin(auth, ssid, pass, "blynk.cloud",80);
  Serial.println("Connected blynk!");
}

long timer_count(){
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    count++;
    previousMillis = currentMillis;
  }
  return count;

}

void timer_reset(){
  count = 0;
}


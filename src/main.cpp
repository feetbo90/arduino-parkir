#include <Arduino.h>

const int pinTiket = 8;
const int pinAktif = 3; 
const int pinMobil = 6;
const int pinMotor = 5;

int delayWaktuAktif = 1000;
int lamaAktif = 5000;
int delayWaktuKendaraan = 1000;
int lamaAktifKendaraan = 5000;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinTiket, INPUT);
  pinMode(pinAktif, OUTPUT);
  pinMode(pinMobil, INPUT);
  pinMode(pinMotor, INPUT);

Serial.begin(9600); //BAUD RATE ke golang

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(pinTiket) == HIGH)
  {
    int nilaiTiket = 1;
    //Serial.print("Tiket,");
    Serial.print(nilaiTiket);
    delay(delayWaktuAktif);
    digitalWrite(pinAktif, HIGH);
    delay(lamaAktif);
    digitalWrite(pinAktif, LOW);
  }

  if (digitalRead(pinMobil) == HIGH){
    int nilaiMobil = 2;
    //Serial.print("Mobil,");
    Serial.print(nilaiMobil);
    delay(delayWaktuKendaraan);
    delay(lamaAktifKendaraan);
  }
    if (digitalRead(pinMotor) == HIGH){
    int nilaiMotor = 3;
    //Serial.print("Motor,");
    Serial.print(nilaiMotor);
    delay(delayWaktuKendaraan);
    delay(lamaAktifKendaraan);
  }
}
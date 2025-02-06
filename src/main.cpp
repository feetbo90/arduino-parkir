#include <Arduino.h>

const int pinTiket = 8;
const int pinAktif = 3; 
const int pinMobil = 6;
const int pinMotor = 5;

int delayWaktuAktif = 50;
int lamaAktif = 1000;
int delayWaktuKendaraan = 1000;
int lamaAktifKendaraan = 5000;
int kendaraanAktif = 0;

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
  if ((digitalRead(pinTiket) == HIGH) && (kendaraanAktif == 1)) 
  {
    Serial.print("ini tiket");
    Serial.print(kendaraanAktif);
    // delay(delayWaktuAktif);
    digitalWrite(pinAktif, HIGH);
    kendaraanAktif = 0;
    delay(delayWaktuAktif);
    // digitalWrite(pinAktif, LOW); 
    delay(lamaAktifKendaraan);

  }

  if (digitalRead(pinMobil) == HIGH){
    int nilaiMobil = 2;
    Serial.print("ini nilai kosong");

    //Serial.print("Mobil,");
    Serial.print(nilaiMobil);
    // digitalWrite(pinMobil, HIGH);
    // digitalWrite(pinAktif, HIGH);
    kendaraanAktif = 1;
    // digitalWrite(pinAktif, HIGH);
    // delay(delayWaktuKendaraan);
    delay(delayWaktuAktif);
    // digitalWrite(pinAktif, LOW);
    delay(lamaAktifKendaraan);
    Serial.print("ini nilai kosong II");

  }
  if (digitalRead(pinMotor) == HIGH){
    // Serial.print("ini motor");

    int nilaiMotor = 3;
    //Serial.print("Motor,");
    // Serial.print(nilaiMotor);
    kendaraanAktif = 1;
    // digitalWrite(pinAktif, HIGH);
    // digitalWrite(pinMotor, HIGH);
    // delay(delayWaktuKendaraan);
    // delay(lamaAktifKendaraan);
  } 
  // Serial.print("ini kendaraan aktif");
  // Serial.println("ini kendaraan : " + String(kendaraanAktif));
  digitalWrite(pinAktif, LOW); 
  // kendaraanAktif = 0;
  
}
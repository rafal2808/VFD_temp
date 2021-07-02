#include <OneWire.h>
#include <DallasTemperature.h>
#include <Wire.h>
#include "RTClib.h"
RTC_DS1307 rtc;

//char daysOfTheWeek[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
 
OneWire oneWire(4); //Podłączenie do A5
DallasTemperature sensors(&oneWire); //Przekazania informacji do biblioteki
int temp;
int h; 
void setup(void) {
 // Serial.begin(9600);
  sensors.begin(); //Inicjalizacja czujnikow

   if (! rtc.begin()) {
    //Serial.println("Couldn't find RTC");
    while (1);
  }

  if (!rtc.isrunning()) {
   // Serial.println("RTC lost power, lets set the time!");
  
  // Comment out below lines once you set the date & time.
    // Following line sets the RTC to the date & time this sketch was compiled
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  
    // Following line sets the RTC with an explicit date & time
    // for example to set January 27 2017 at 12:56 you would call:
    // rtc.adjust(DateTime(2017, 1, 27, 12, 56, 0));
  }

  pinMode(0, OUTPUT);//c
  pinMode(1, OUTPUT);//b
  pinMode(2, OUTPUT);//d
  pinMode(3, OUTPUT);//a

  pinMode(12, OUTPUT);//c
  pinMode(11, OUTPUT);//b
  pinMode(10, OUTPUT);//d
  pinMode(9, OUTPUT);//a

  pinMode(7, OUTPUT);//minus
  pinMode(8, OUTPUT);//e
}
 
void loop(void) { 
  DateTime now = rtc.now();
  h=now.hour();
  
  sensors.requestTemperatures(); //Pobranie temperatury czujnika
  temp=sensors.getTempCByIndex(0);  //Wyswietlenie informacji
  //temp=-5;
  if(temp<0){
    digitalWrite(7, HIGH);
  }
  else{
    digitalWrite(7, LOW);
  }

  if(h>=5 && h<22){
    digitalWrite(8, HIGH);
  }
  else{
    digitalWrite(8, LOW);
  }

  if(temp>=0 && temp<1){
    vfd2_0();
    vfd3_0();
  }
  if(temp>=1 && temp<2){
    vfd2_0();
    vfd3_1();
  }
  if(temp>=2 && temp<3){
    vfd2_0();
    vfd3_2();
  }
  if(temp>=3 && temp<4){
    vfd2_0();
    vfd3_3();
  }
  if(temp>=4 && temp<5){
    vfd2_0();
    vfd3_4();
  }
  if(temp>=5 && temp<6){
    vfd2_0();
    vfd3_5();
  }
  if(temp>=6 && temp<7){
    vfd2_0();
    vfd3_6();
  }
  if(temp>=7 && temp<8){
    vfd2_0();
    vfd3_7();
  }
  if(temp>=8 && temp<9){
    vfd2_0();
    vfd3_8();
  }
  if(temp>=9 && temp<10){
    vfd2_0();
    vfd3_9();
  }
  if(temp>=10 && temp<11){
    vfd2_1();
    vfd3_0();
  }
  if(temp>=11 && temp<12){
    vfd2_1();
    vfd3_1();
  }
  if(temp>=12 && temp<13){
    vfd2_1();
    vfd3_2();
  }
  if(temp>=13 && temp<14){
    vfd2_1();
    vfd3_3();
  }
  if(temp>=14 && temp<15){
    vfd2_1();
    vfd3_4();
  }
  if(temp>=15 && temp<16){
    vfd2_1();
    vfd3_5();
  }
  if(temp>=16 && temp<17){
    vfd2_1();
    vfd3_6();
  }
  if(temp>=17 && temp<18){
    vfd2_1();
    vfd3_7();
  }
  if(temp>=18 && temp<19){
    vfd2_1();
    vfd3_8();
  }
  if(temp>=19 && temp<20){
    vfd2_1();
    vfd3_9();
  }
  if(temp>=20 && temp<21){
    vfd2_2();
    vfd3_0();
  }
  if(temp>=21 && temp<22){
    vfd2_2();
    vfd3_1();
  }
  if(temp>=22 && temp<23){
    vfd2_2();
    vfd3_2();
  }
  if(temp>=23 && temp<24){
    vfd2_2();
    vfd3_3();
  }
  if(temp>=24 && temp<25){
    vfd2_2();
    vfd3_4();
  }
  if(temp>=25 && temp<26){
    vfd2_2();
    vfd3_5();
  }
  if(temp>=26 && temp<27){
    vfd2_2();
    vfd3_6();
  }
  if(temp>=27 && temp<28){
    vfd2_2();
    vfd3_7();
  }
  if(temp>=28 && temp<29){
    vfd2_2();
    vfd3_8();
  }
  if(temp>=29 && temp<30){
    vfd2_2();
    vfd3_9();
  }
  if(temp>=30 && temp<31){
    vfd2_3();
    vfd3_0();
  }
  if(temp>=31 && temp<32){
    vfd2_3();
    vfd3_1();
  }
  if(temp>=32 && temp<33){
    vfd2_3();
    vfd3_2();
  }
  if(temp>=33 && temp<34){
    vfd2_3();
    vfd3_3();
  }
  if(temp>=34 && temp<35){
    vfd2_3();
    vfd3_4();
  }
  if(temp>=35 && temp<36){
    vfd2_3();
    vfd3_5();
  }
  if(temp>=36 && temp<37){
    vfd2_3();
    vfd3_6();
  }
  if(temp>=37 && temp<38){
    vfd2_3();
    vfd3_7();
  }
  if(temp>=38 && temp<39){
    vfd2_3();
    vfd3_8();
  }
  if(temp>=39 && temp<40){
    vfd2_3();
    vfd3_9();
  }
  
  
  if(temp>=-1 && temp<0){
    vfd2_0();
    vfd3_1();
  }
  if(temp>=-2 && temp<-1){
    vfd2_0();
    vfd3_2();
  }
  if(temp>=-3 && temp<-2){
    vfd2_0();
    vfd3_3();
  }
  if(temp>=-4 && temp<-3){
    vfd2_0();
    vfd3_4();
  }
  if(temp>=-5 && temp<-4){
    vfd2_0();
    vfd3_5();
  }
  if(temp>=-6 && temp<-5){
    vfd2_0();
    vfd3_6();
  }
  if(temp>=-7 && temp<-6){
    vfd2_0();
    vfd3_7();
  }
  if(temp>=-8 && temp<-7){
    vfd2_0();
    vfd3_8();
  }
  if(temp>=-9 && temp<-8){
    vfd2_0();
    vfd3_9();
  }
  if(temp>=-10 && temp<-9){
    vfd2_1();
    vfd3_0();
  }
  if(temp>=-11 && temp<-10){
    vfd2_1();
    vfd3_1();
  }
  if(temp>=-12 && temp<-11){
    vfd2_1();
    vfd3_2();
  }
  if(temp>=-13 && temp<-12){
    vfd2_1();
    vfd3_3();
  }
  if(temp>=-14 && temp<-13){
    vfd2_1();
    vfd3_4();
  }
  if(temp>=-15 && temp<-14){
    vfd2_1();
    vfd3_5();
  }
  if(temp>=-16 && temp<-15){
    vfd2_1();
    vfd3_6();
  }
  if(temp>=-17 && temp<-16){
    vfd2_1();
    vfd3_7();
  }
  if(temp>=-18 && temp<-17){
    vfd2_1();
    vfd3_8();
  }
  if(temp>=-19 && temp<-18){
    vfd2_1();
    vfd3_9();
  }
  if(temp>=-20 && temp<-19){
    vfd2_2();
    vfd3_0();
  }
  if(temp>=-21 && temp<-20){
    vfd2_2();
    vfd3_1();
  }
  if(temp>=-22 && temp<-21){
    vfd2_2();
    vfd3_2();
  }
  if(temp>=-23 && temp<-22){
    vfd2_2();
    vfd3_3();
  }
  if(temp>=-24 && temp<-23){
    vfd2_2();
    vfd3_4();
  }
  if(temp>=-25 && temp<-24){
    vfd2_2();
    vfd3_5();
  }


delay(1000);  
}

void vfd3_0(){
 digitalWrite(10, LOW);//cyfra 3
 digitalWrite(12, LOW);
 digitalWrite(11, LOW);
 digitalWrite(9, LOW);
}
void vfd3_1(){
 digitalWrite(10, LOW);//cyfra 3
 digitalWrite(12, LOW);
 digitalWrite(11, LOW);
 digitalWrite(9, HIGH);
}
void vfd3_2(){
 digitalWrite(10, LOW);//cyfra 3
 digitalWrite(12, LOW);
 digitalWrite(11, HIGH);
 digitalWrite(9, LOW);
}
void vfd3_3(){
 digitalWrite(10, LOW);//cyfra 3
 digitalWrite(12, LOW);
 digitalWrite(11, HIGH);
 digitalWrite(9, HIGH);
}
void vfd3_4(){
 digitalWrite(10, LOW);//cyfra 3
 digitalWrite(12, HIGH);
 digitalWrite(11, LOW);
 digitalWrite(9, LOW);
}
void vfd3_5(){
 digitalWrite(10, LOW);//cyfra 3
 digitalWrite(12, HIGH);
 digitalWrite(11, LOW);
 digitalWrite(9, HIGH);
}
void vfd3_6(){
 digitalWrite(10, LOW);//cyfra 3
 digitalWrite(12, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(9, LOW);
}
void vfd3_7(){
 digitalWrite(10, LOW);//cyfra 3
 digitalWrite(12, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(9, HIGH);
}
void vfd3_8(){
 digitalWrite(10, HIGH);//cyfra 3
 digitalWrite(12, LOW);
 digitalWrite(11, LOW);
 digitalWrite(9, LOW);
}
void vfd3_9(){
 digitalWrite(10, HIGH);//cyfra 3
 digitalWrite(12, LOW);
 digitalWrite(11, LOW);
 digitalWrite(9, HIGH);
}
 
void vfd2_0(){
  digitalWrite(2, LOW);//cyfra 2
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(3, LOW);
}

void vfd2_1(){
  digitalWrite(2, LOW);//cyfra 2
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(3, HIGH);
}

void vfd2_2(){
  digitalWrite(2, LOW);//cyfra 2
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(3, LOW);
}

void vfd2_3(){
  digitalWrite(2, LOW);//cyfra 2
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(3, HIGH);
}

#include <LiquidCrystal.h>  
LiquidCrystal lcd(10, 9, 8, 5, 4, 3, 2); //(RS, RW, E, D4,D5, D6, D7)
const int s0 = 6;
const int s1 = 7;
const int s2 = 13; //Inicializamos las conexiones del sensor de colores
const int s3 =12;
const int out = 11;
int rojo = 0;
int verde = 0; //Creamos variables que luegos nos serviran para almacenar los valores reconocidos por el sensor
int azul = 0;
void setup() {

  lcd.begin(16, 2);            // Inicia el LCD 16x02 (columnas, filas)   
  lcd.setCursor(0, 0);         // Coloca el cursor en las coordenadas (0,0)   
  lcd.print("Sensor"); // Escribe no LCD   
  lcd.setCursor(3, 1);         // Coloca el cursor en las coordenadas (3,1) 
  lcd.print("Colores");
   
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(out, INPUT);
   
  digitalWrite(s0, HIGH);
  digitalWrite(s1, LOW);

  Serial.begin(9600);
}
void loop() {

    lcd.noCursor();
    delay(500);
 //Encender el cursor
    lcd.cursor();
    delay(500);

  digitalWrite(s2,LOW);
  digitalWrite(s3,LOW);
  delay(100);
  rojo=pulseIn(out,LOW);
  Serial.print("R="); Serial.print(rojo);
  Serial.print("");
  delay(100);

  digitalWrite(s2,HIGH);
  digitalWrite(s3,HIGH);
  delay(100);
  verde=pulseIn(out,LOW);
  Serial.print("V="); Serial.print(verde);
  Serial.print("");
  delay(100);

  digitalWrite(s2,LOW);
  digitalWrite(s3,HIGH);
  delay(100);
  azul=pulseIn(out,LOW);
  Serial.print("A="); Serial.println(azul);
  Serial.print("");
  delay(100);


if(rojo<80 && verde>110 && azul >100){
    lcd.clear();
    lcd.print ("Color Rojo");
    delay(7000);
    lcd.clear();
    lcd.setCursor(0, 0);         // Coloca el cursor en las coordenadas (0,0)   
    lcd.print("Sensor"); // Escribe no LCD   
    lcd.setCursor(3, 1);         // Coloca el cursor en las coordenadas (3,1) 
    lcd.print("Colores"); 

}else if(rojo>60 && verde<170 && azul <100){
    lcd.clear();
    lcd.print ("Color Azul");
    delay(7000);
    lcd.clear();
    lcd.setCursor(0, 0);         // Coloca el cursor en las coordenadas (0,0)   
    lcd.print("Sensor"); // Escribe no LCD   
    lcd.setCursor(3, 1);         // Coloca el cursor en las coordenadas (3,1) 
    lcd.print("Colores"); 

}else if(rojo>150 && (verde>185 && verde <220) && azul >80){
    lcd.clear();
    lcd.print ("Color Verde Oscuro");
    delay(7000);
    lcd.clear();
    lcd.setCursor(0, 0);         // Coloca el cursor en las coordenadas (0,0)   
    lcd.print("Sensor"); // Escribe no LCD   
    lcd.setCursor(3, 1);         // Coloca el cursor en las coordenadas (3,1) 
    lcd.print("Colores"); 

}else if((rojo>17 && rojo<37) && (verde>18 && verde <39) && (azul >14 && azul<38)){
    lcd.clear();
    lcd.print ("Color Blanco");
    delay(7000);
    lcd.clear();
    lcd.setCursor(0, 0);         // Coloca el cursor en las coordenadas (0,0)   
    lcd.print("Sensor"); // Escribe no LCD   
    lcd.setCursor(3, 1);         // Coloca el cursor en las coordenadas (3,1) 
    lcd.print("Colores"); 

}else if((rojo>180 && rojo<265) && (verde>270 && verde <345) && (azul >220 && azul<275)){
    lcd.clear();
    lcd.print ("Color Negro");
    delay(7000);
    lcd.clear();
    lcd.setCursor(0, 0);         // Coloca el cursor en las coordenadas (0,0)   
    lcd.print("Sensor"); // Escribe no LCD   
    lcd.setCursor(3, 1);         // Coloca el cursor en las coordenadas (3,1) 
    lcd.print("Colores"); 

}else if((rojo>70 && rojo<90) && (verde>93 && verde <102) && (azul >100 && azul<111)){
    lcd.clear();
    lcd.print ("Color Verde Claro");
    delay(7000);
    lcd.clear();
    lcd.setCursor(0, 0);         // Coloca el cursor en las coordenadas (0,0)   
    lcd.print("Sensor"); // Escribe no LCD   
    lcd.setCursor(3, 1);         // Coloca el cursor en las coordenadas (3,1) 
    lcd.print("Colores"); 

}else if((rojo>24 && rojo<35) && (verde>45 && verde <55) && (azul >33 && azul<45)){
    lcd.clear();
    lcd.print ("Color Rosa");
    delay(7000);
    lcd.clear();
    lcd.setCursor(0, 0);         // Coloca el cursor en las coordenadas (0,0)   
    lcd.print("Sensor"); // Escribe no LCD   
    lcd.setCursor(3, 1);         // Coloca el cursor en las coordenadas (3,1) 
    lcd.print("Colores"); 

}else if((rojo>110 && rojo<124) && (verde>120 && verde <138) && (azul >100 && azul<120)){
    lcd.clear();
    lcd.print ("Color Gris");
    delay(7000);
    lcd.clear();
    lcd.setCursor(0, 0);         // Coloca el cursor en las coordenadas (0,0)   
    lcd.print("Sensor"); // Escribe no LCD   
    lcd.setCursor(3, 1);         // Coloca el cursor en las coordenadas (3,1) 
    lcd.print("Colores"); 

}else if((rojo>15&& rojo<25) && (verde>22 && verde <33) && (azul >50 && azul<62)){
    lcd.clear();
    lcd.print ("Color Amarillo");
    delay(7000);
    lcd.clear();
    lcd.setCursor(0, 0);         // Coloca el cursor en las coordenadas (0,0)   
    lcd.print("Sensor"); // Escribe no LCD   
    lcd.setCursor(3, 1);         // Coloca el cursor en las coordenadas (3,1) 
    lcd.print("Colores"); 

}else if((rojo>30&& rojo<50) && (verde>65 && verde <79) && (azul >70 && azul<85)){
    lcd.clear();
    lcd.print ("Color Piel");
    delay(7000);
    lcd.clear();
    lcd.setCursor(0, 0);         // Coloca el cursor en las coordenadas (0,0)   
    lcd.print("Sensor"); // Escribe no LCD   
    lcd.setCursor(3, 1);         // Coloca el cursor en las coordenadas (3,1) 
    lcd.print("Colores"); 
  }
}

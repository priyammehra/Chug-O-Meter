#include <LiquidCrystal.h>
#include <LedControl.h>
#include "poc.h"


const int rs = 5,
          en = 4,
          d4 = 3, d5 = 2, d6 = 1,d7 = 0;
          
const int DIN =13 , CLK =11 , CS =12 ;     
     
const int fsr =A1;
//const int btn =8;
//const int rst =7;
//const int msc = 9;


unsigned char s1[]= {0xff,0x81,0x81,0x81,0x81,0x81,0x81,0xff};
unsigned char s2[]= {0x00,0x7e,0x42,0x42,0x42,0x42,0x7e,0x00};
unsigned char s3[]= {0x00,0x00,0x3c,0x24,0x24,0x3c,0x00,0x00};
unsigned char s4[]= {0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00};
unsigned char smile[]= {0x3C,0x42,0xA5,0x81,0xA5,0x99,0x42,0x3C};
unsigned char sad[]= {0x3C,0x42,0xA5,0x81,0x99,0xA5,0x42,0x3C};

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
/*
LedControl lc(DIN, CLK, CS, 1);


void glow(char x[]){
  for (int i=0; i<8; i++)
  {
    lc.setColumn(0, i, x[i]);
    
    }
  }





void matrix(int x)
{ 
  glow(s1); delay(100);
  glow(s2); delay(100);
  glow(s3); delay(100);
  glow(s4); delay(100);
  
  glow(s4); delay(100);
  glow(s3); delay(100);
  glow(s2); delay(100);
  glow(s1); delay(100);

  if(x==1)
  {
  glow(smile);  delay(1000);
  }

  else if(x==0)
  {
      glow(sad);  delay(1000);

    }
  }
  
  
void play_music(int x){
    
    if (x==1)
    {
      tone(msc, 330, 250);
      delay(300);
      tone(msc, 311, 250);
      delay(300);
      tone(msc, 322, 250);
      delay(600);
    }
    
    else if (x==0)
    {
      tone(msc, 150, 250);
      delay(1000);
      noTone(msc);
      delay(1000);
    }
   
 } 

*/
void setup() {

  Serial.begin(9600);
  //digitalWrite(rst, HIGH);
  //pinMode(btn, INPUT_PULLUP);
  //pinMode(fsr, INPUT);
  //pinMode(msc, OUTPUT);
  
  lcd.begin(16, 2);
  //lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("****************************************");
  lcd.setCursor(0,1);
  lcd.print("Lets see how fast you can CHUG! :)");


  //lc.shutdown(0,false);       
  //lc.setIntensity(0,5);
  //lc.clearDisplay(0);


}


void loop() {
  
int x =0;
  /*
  int x =0, y =0;
  int mugw =120;

  while(analogRead(fsr) > mugw)
  */  
  while(1)
  {
      //Serial.println(analogRead(fsr));
      lcd.setCursor(0,1);
      lcd.scrollDisplayLeft();
      delay(200);
      x=millis();
    }
  /*
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Timer");
  
  while(analogRead(fsr) <= 5 )
  {
      //Serial.println(analogRead(fsr));

  lcd.setCursor(0,1);   
  y = (millis() - x)/1000;
  lcd.print(y);
  play_music(1);
  
  }

 if (analogRead(fsr) <= mugw  ){
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("OH MY GOD!!!");
  
   lcd.setCursor(1,1);
   lcd.print("You took ");
   lcd.print(y);
   lcd.print(" sec");
   
   while(1){
   matrix(1);
   poc_music(msc, 1);
   }

  
 }
 else{
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("YOU DIDN'T CHUG!");
  
  while(1){
  matrix(0);
  play_music(0);
  
  }  
   
 }
*/


}

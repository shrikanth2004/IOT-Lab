#include<Keypad.h>
const byte ROW=4;
const byte COL=4;

char keys[ROW][COL]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowpins[ROW]={9,8,7,6};
byte colpins[COL]={5,4,3,2};

Keypad keypad=Keypad(makeKeymap(keys),rowpins,colpins,ROW,COL);

void setup(){
  Serial.begin(9600);
}
void loop(){
  char key=keypad.getKey();
  
  if(key){
    Serial.println(key);
  }
}

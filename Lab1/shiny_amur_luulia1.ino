// C++ code
//
const int ledpins[]={1,2,3,4,5};
const int numleds=5;

void setup()
{
  for(int i=0;i<numleds;i++){
  pinMode(ledpins[i], OUTPUT);
}
}

void loop()
{
    for(int i=0;i<numleds;i++){
      if(ledpins[i]%2==0){
      

  digitalWrite(ledpins[i], HIGH);
  delay(250); 
  digitalWrite(ledpins[i], LOW);
  delay(250);
    }
    }
  for(int i=0;i<numleds;i++){
          if(ledpins[i]%2!=0){

    digitalWrite(ledpins[i], HIGH);
  delay(250);
  digitalWrite(ledpins[i], LOW);
          

  delay(250);
          }
  }
}
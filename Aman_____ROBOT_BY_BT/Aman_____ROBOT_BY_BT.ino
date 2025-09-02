#define LDP 25
#define RDP 26
#define LSP 31
#define RSP 32
#define LPWM 35
#define RPWM 36
void setup() {
pinMode(LDP,OUTPUT);
pinMode(RDP,OUTPUT);
digitalWrite(LSP,HIGH);
digitalWrite(RSP,HIGH);
Serial.begin(9600);
Serial1.begin(9600);
}
char x[10];
void loop() {
  if(Serial1.available())
  {
 Serial1.readBytes(x,9);
   x[9]='\0';
  switch(x[0])
  {
    case 'f' : digitalWrite(LDP,LOW);
               digitalWrite(RDP,LOW);
               analogWrite(LPWM,50);
               analogWrite(RPWM,50);
               delay(1000);
               break;

                
     case 'b' : digitalWrite(LDP,HIGH);
               digitalWrite(RDP,HIGH);
               analogWrite(LPWM,50);
               analogWrite(RPWM,50);
               delay(1000); 
               break;

      case 'r' : digitalWrite(LDP,LOW);
               digitalWrite(RDP,LOW);
               analogWrite(LPWM,50);
               analogWrite(RPWM,0);
               delay(1000);
               break; 

      case 'l' : digitalWrite(LDP,LOW);
               digitalWrite(RDP,LOW);
               analogWrite(LPWM,0);
               analogWrite(RPWM,50);
               delay(1000);
               break; 

      case 's' : digitalWrite(LDP,LOW);
               digitalWrite(RDP,LOW);
               analogWrite(LPWM,0);
               analogWrite(RPWM,0);
               delay(1000);
               break; 
  }
}
}

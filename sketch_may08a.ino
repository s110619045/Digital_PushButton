const int inputBtn=2;
const int ledPin=13;
int btnInput=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(inputBtn,INPUT);
  pinMode(ledPin,OUTPUT);
  digitalWrite(inputBtn,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  btnInput=digitalRead(inputBtn);
  if(btnInput == HIGH){
    digitalWrite(ledPin,HIGH);
    }
    else{
     digitalWrite(ledPin,LOW); 
      }
}



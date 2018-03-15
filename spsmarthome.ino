// nhận điện vào , ra cho quạt 1
int fanIn1 = 6;
int fanOut1 = 13;
int checkFan1 = 0;
// nhận điện vào , ra cho quạt 2
int fanIn2 = 5;
int fanOut2 = 12;
int checkFan2 = 0;
//truyền 5v cho máy bơm
int inPutPump = 3;

int moveInput = 8;// lấy 5v để chạy cảm biến chuyển động;
int checkMove = 2;// nếu có điện thì ko cần thiết

void setup() {

  // put your setup code here, to run once:
  
  //pump
  pinMode(inPutPump,OUTPUT);
  digitalWrite(inPutPump,HIGH);
  
  //fan 1
  pinMode(fanIn1,INPUT);
  pinMode(fanOut1,OUTPUT);
  //fan 2
  pinMode(fanIn2,INPUT);
  pinMode(fanOut2,OUTPUT);
  // move
  pinMode(moveInput,OUTPUT);
  digitalWrite(moveInput,HIGH);
  Serial.begin(115200);
  digitalWrite(fanOut1,LOW);
  digitalWrite(fanOut2,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Fan 1
  checkFan1 = digitalRead(fanIn1);
  if(checkFan1  > 0)
  {
    digitalWrite(fanOut1,HIGH);
    Serial.println(digitalRead(fanIn1));
  }
  else
  {
    checkFan1 = 0;
    digitalWrite(fanOut1,LOW);
  }
  checkFan2 = digitalRead(fanIn2);
  //Fan2
  if(checkFan2  > 0)
  {
    digitalWrite(fanOut2,HIGH);
    Serial.println(digitalRead(fanIn2));
  }
  else
  {
    checkFan2 = 0;
    digitalWrite(fanOut2,LOW);
  }
  
  delay(1000);
}

void setup()
{
  pinMode(13, OUTPUT);//verde1
  pinMode(12, OUTPUT);//amarelo1
  pinMode(11, OUTPUT);//vermelho1
  pinMode(10, OUTPUT);//verdeped1
  pinMode(9, OUTPUT);//vermelhoped1
  pinMode(8, OUTPUT);//verde2
  pinMode(7, OUTPUT);//amarelo2
  pinMode(6, OUTPUT);//vermelho2
  pinMode(5, OUTPUT);//verdeped2
  pinMode(4, OUTPUT);//vermelhoped2
  int buzzer = 3;
  int buzzer2 = 4;
}

void loop()
{
 digitalWrite(13, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(6, HIGH);
 digitalWrite(5, HIGH);
 tone(3, 262, 7000);
 delay(5000);
 digitalWrite(13, LOW);
 digitalWrite(12, HIGH);
 delay(2000);
 digitalWrite(12, LOW);
 digitalWrite(9, LOW);
 digitalWrite(6, LOW);
 digitalWrite(5, LOW);
 digitalWrite(11, HIGH);
 digitalWrite(10, HIGH);
 tone(2, 235, 7000);
 digitalWrite(8, HIGH);
 digitalWrite(4, HIGH);
 delay(5000);
 digitalWrite(8, LOW);
 digitalWrite(7, HIGH);
 delay(2000);
 digitalWrite(11, LOW);
 digitalWrite(10, LOW);
 digitalWrite(7, LOW);
 digitalWrite(4, LOW);
}

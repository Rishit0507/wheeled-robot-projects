int lmt1 = 5;
int lmt2 = 3;
int rmt1 = 6;
int rmt2 = 11;
int ls = 7;
int cs = 8;
int rs = 9;
int ds = 10;

void setup() {
  // put your setup code here, to run once:
pinMode(lmt1,OUTPUT);
pinMode(lmt2,OUTPUT);
pinMode(rmt1,OUTPUT);
pinMode(rmt2,OUTPUT);
pinMode(ls,INPUT);
pinMode(cs,INPUT);
pinMode(rs,INPUT);
pinMode(ds,INPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly
ls = digitalRead(7);
cs = digitalRead(8);
rs = digitalRead(9);
ds = digitalRead(10);


 if(ls == HIGH && cs == LOW && rs ==LOW)
{
 stp();
}
else if(ls == LOW && cs == LOW && rs ==HIGH)
{
 stp();
}
else if(ls == LOW && cs == HIGH && rs ==LOW)
{
  stp();
}
else if(ls == HIGH && cs == HIGH && rs ==LOW)
{
 stp();
}
else if(ls == LOW && cs == HIGH && rs ==HIGH)
{
 stp();
}
else if(ls == HIGH && cs == LOW && rs ==HIGH)
{
 
  stp();
}
else if(ls == HIGH && cs == HIGH && rs == HIGH)
{
 
  stp();
}

else if(ds==LOW)
{
  stpright();

}
else if(ds==HIGH)
{
  stpleft();
}
   }
void forward()
{
analogWrite(lmt1,150);
analogWrite(lmt2,0);
analogWrite(rmt1,150);
analogWrite(rmt2,0);
}

void reverse()
{
analogWrite(lmt1,0);
analogWrite(lmt2,150);
analogWrite(rmt1,0);
analogWrite(rmt2,150);
}

void left()
{
analogWrite(lmt1,0);
analogWrite(lmt2,150);
analogWrite(rmt1,150);
analogWrite(rmt2,0);
}

void right()
{
analogWrite(lmt1,150);
analogWrite(lmt2,0);
analogWrite(rmt1,0);
analogWrite(rmt2,150);
}

void stpleft()
{
analogWrite(lmt1,0);
analogWrite(lmt2,0);
analogWrite(rmt1,245);
analogWrite(rmt2,0);  
}

void stpright()
{
analogWrite(lmt1,245);
analogWrite(lmt2,0);
analogWrite(rmt1,0);
analogWrite(rmt2,0);  
}

void stp()
{
analogWrite(lmt1,0);
analogWrite(lmt2,0);
analogWrite(rmt1,0);
analogWrite(rmt2,0);
}

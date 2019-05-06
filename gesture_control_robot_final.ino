
int xPin=A0;
int yPin=A1;

int out1=8;     //output1 for HT12E IC
int out2=9;     //output1 for HT12E IC
int out3=10;    //output1 for HT12E IC
int out4=11;    //output1 for HT12E IC

void setup(){
  
  pinMode(xPin,INPUT);
  pinMode(yPin,INPUT);
  Serial.begin(9600);
  pinMode(out1,OUTPUT);
  pinMode(out2,OUTPUT);
  pinMode(out3,OUTPUT);
  pinMode(out4,OUTPUT);
}


void loop() 
{
  int xval=analogRead(xPin);
  int yval=analogRead(yPin);
  Serial.print(xval);
  Serial.print("\t");
  Serial.println(yval);


  if ((xval>360 && xval<380) && (yval>360 && yval<380)) //stop
  {
    digitalWrite(out1,LOW);  
    digitalWrite(out2,LOW);   
    digitalWrite(out3,LOW);   
    digitalWrite(out4,LOW);
    Serial.println("1");
  } 

  else if ((xval<365) && (yval>360 && yval<380)) //forward
   {
     digitalWrite(out1,HIGH);  
     digitalWrite(out2,LOW);   
     digitalWrite(out3,HIGH);  
     digitalWrite(out4,LOW);
     Serial.println("5");
      
    }
   else if ((xval>380) && (yval>360 && yval<380)) //backward
  {
   digitalWrite(out1,LOW);   
   digitalWrite(out2,HIGH);  
   digitalWrite(out3,LOW);   
   digitalWrite(out4,HIGH);
   Serial.println("2");
      
    }   

   else if ((xval>360 && xval<380) && (yval<365)) //left
    {
      digitalWrite(out1,HIGH);  
      digitalWrite(out2,LOW);   
      digitalWrite(out3,LOW);   
      digitalWrite(out4,HIGH);
      Serial.println("4");
     }


   else if ((xval>360 && xval<380) && (yval>380))//right
    {
      digitalWrite(out1,LOW);  
      digitalWrite(out2,HIGH);   
      digitalWrite(out3,HIGH);   
      digitalWrite(out4,LOW);
      Serial.println("3");
      
    }
    else 
    {
     digitalWrite(out1,LOW);  
    digitalWrite(out2,LOW);   
    digitalWrite(out3,LOW);   
    digitalWrite(out4,LOW);
    Serial.println("1");
    }
  

  delay(2);
}

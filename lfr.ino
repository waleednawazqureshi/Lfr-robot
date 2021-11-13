int left_motor_forward = 3;
int left_motor_reverse = 5;
int right_motor_forward = 6;
int right_motor_reverse = 9;

int left_sensor = A0;
int right_sensor = A1;

void setup() {
  // put your setup code here, to run once:

pinMode(left_motor_forward,OUTPUT);
pinMode(left_motor_reverse,OUTPUT);
pinMode(right_motor_forward,OUTPUT);
pinMode(right_motor_reverse,OUTPUT);
pinMode(left_sensor,INPUT);
pinMode(right_sensor,INPUT);

}

void loop() {
 if(analogRead(left_sensor)<500 && analogRead(right_sensor)<500)
 {
  digitalWrite(left_motor_forward,HIGH);
  digitalWrite(right_motor_forward,HIGH);
 }

else if(analogRead(left_sensor)<500 && analogRead(right_sensor)>=500)
 {
  digitalWrite(left_motor_forward,HIGH);
  digitalWrite(right_motor_forward,LOW);
 }

 
 else if(analogRead(left_sensor)>=500 && analogRead(right_sensor)<500)
 {
  digitalWrite(left_motor_forward,LOW);
  digitalWrite(right_motor_forward,HIGH);
 }


else
{
   digitalWrite(left_motor_forward,LOW);
  digitalWrite(right_motor_forward,LOW);
}
delay(10);
}

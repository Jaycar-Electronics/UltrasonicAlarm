
#define trigPin 12
#define echoPin 13
int Buzzer = 8;
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(Buzzer, OUTPUT);
  }
  
void loop() {
  int duration, distance;
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if (distance >= 80 || distance <= 0){
    Serial.println("no object detected");
    digitalWrite(Buzzer, LOW);
    }else {
      Serial.println("object detected");
      tone(Buzzer, 400); // play 400 Hz tone for 500 
      delay(500);
      tone(Buzzer, 800); // play 800Hz tone for 500
      delay(500);
  }


tone(Buzzer, 400); // play 400 Hz tone for 500 
delay(500);
tone(Buzzer, 800); // play 800Hz tone for 500
delay(500);
tone(Buzzer, 400); // play 400 Hz tone for 500 
delay(500);
tone(Buzzer, 800); // play 800Hz tone for 500
delay(500);
noTone(Buzzer);

delay(300);

}
/*More info on the code THE CODE !!!!(......)!!!!i will be breaking down the code and explaining it in details, again any questions are welcome, code is attached in this page!!CODE:-#define trigPin 12#define echoPin 13int Buzzer = 8;void setup() {Serial.begin (9600);pinMode(trigPin, OUTPUT);pinMode(echoPin, INPUT);pinMode(Buzzer, OUTPUT);}
EXPLANATION: -we define the trigger pin as pin 12, the echo pin as pin 13 and the piezo (buzzer) as pin 8, Then we define the trigger and piezo (buzzer) pins as output, the echo pin as input.CODE: -

void loop() {
int duration, distance; digitalWrite(trigPin, HIGH); delayMicroseconds(1000); digitalWrite(trigPin, LOW); duration = pulseIn(echoPin, HIGH); distance = (duration / 2) / 29.1; EXPLANATION: -so the way this ultrasonic sensor works is: when we flash the trigger pin high for a small amount of time (in this case 1000 microseconds), the sensor would send an ultrasonic wave at a known time (let's say t1), the wave will reach the object and reflect back to the sensor at another known time (t2) , lets assume t3 =t2 - t1, (t3 is equal to the time taken for the wave to reach the object and comeback, so t3/2 is the time needed for the wave to reach the object) we know the speed of sound which is 340 m/s or 29.1cm/ms so we are able to get the distance in cmCODE:-if (distance >= 80 || distance <= 0){Serial.println("no object detected");digitalWrite(Buzzer, LOW);]EXPLANATION:-my doors length is 80 cm (use ur own value) so as long as there is nothing less than 80 cm away the buzzer is off onc something passes this will cause the buzzer to soundCODE:-else {
          Serial.println("object detected");tone(Buzzer, 400); // play 400 Hz tone for 500 msdelay(500);tone(Buzzer, 800); // play 800Hz tone for 500msdelay(500);tone(Buzzer, 400); // play 400 Hz tone for 500 msdelay(500);tone(Buzzer, 800); // play 800Hz tone for 500msdelay(500);tone(Buzzer, 400); // play 400 Hz tone for 500 msdelay(500);tone(Buzzer, 800); // play 800Hz tone for 500msdelay(500);noTone(Buzzer);}delay(300);}EXPLANATION:-this is just a tone similar to a police siren !!
          ULTRASONIC SENSOR DOOR ALARM code here.docx */

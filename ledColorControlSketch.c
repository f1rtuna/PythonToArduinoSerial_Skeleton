const int greenPin = 2;
const int bluePin = 3;
const int redPin = 4;
bool greenOn = false;
bool blueOn = false;
bool redOn = false;

String input;
void setup() {
  // put your setup code here, to run once:
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // loop until serial msg/object recieved from python
  while (Serial.available() == 0) {
  }

  input = Serial.readStringUntil('\r');
  if (input.equals("1")){
    if (greenOn){
      digitalWrite(greenPin, LOW);
    } else{
      digitalWrite(greenPin, HIGH);
    }
    greenOn = !(greenOn);
  }
  else if (input.equals("2")){
    if (blueOn){
      digitalWrite(bluePin, LOW);
    } else{
      digitalWrite(bluePin, HIGH);
    }
    blueOn = !(blueOn);
  }
  else if (input.equals("3")){
    if (redOn){
      digitalWrite(redPin, LOW);
    } else{
      digitalWrite(redPin, HIGH);
    }
    redOn = !(redOn);
  }
}

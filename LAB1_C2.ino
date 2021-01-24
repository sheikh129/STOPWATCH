
unsigned long start, finished, elapsed;
const int  buttonPin = 2;    // the pin that the pushbutton is attached to      // the pin that the LED is attached to

// Variables will change:
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin, INPUT);
  // initialize the LED as an output:
  // initialize serial communication:
  Serial.begin(9600);
}


void loop() {
  Serial.println("Start...");
  start=millis();
  delay(1000);
  finished=millis();
  Serial.println("Finished");
  elapsed=finished-start;
  Serial.print(elapsed);
  Serial.println(" milliseconds elapsed");
  Serial.println();
  delay(500);
  
  buttonState = digitalRead(buttonPin);
   if (buttonState != lastButtonState){
    if(buttonState==HIGH){
      buttonPushCounter++;
     Serial.println("on");
     Serial.println("Number of button pushes:");
     Serial.println(buttonPushCounter);
    } else {
      
      Serial.println("off");
    }
    
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState = buttonState;
  
  if (buttonState != lastButtonState){
    if(buttonState==HIGH){
      Serial.println("on");
     Serial.println("Stopwatch is paused");
     Serial.println(buttonPushCounter);
    }
    else {
      Serial.println("Off");
    }
    delay(50);
    }
    lastButtonState= buttonState;
    
    if (buttonState != lastButtonState){
    if(buttonState==HIGH){
      buttonPushCounter++;
     Serial.println("on");
     Serial.println("Number of button pushes:");
     Serial.println(buttonPushCounter);
    }
    else {
      Serial.println("Off");
   
    delay(50);
    }
  }
}

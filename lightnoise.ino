int Buzzer = 10; // The buzzer is connected to the digital pin 10
int LDR = 0; // The photoresistor is connected to the analog pin 0
int Note; // Variable in which the note value is saved

void setup () {
   pinMode (Buzzer, OUTPUT); // The pin to which the buzzer is connected is set as an output
   Serial.begin(9600);
   }
  
void loop () {
   Note = 3 * (analogRead (LDR)) + 500; // Calculation of the note
   tone (Buzzer, Note); // Writing the note on pin 10
   Serial.print(Note);
   Serial.println();
   delay (5); // Wait 5 ms before changing the note
   }

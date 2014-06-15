/*
  the benJammin toy built by the Dales!
  on startup, plays the default melody from the toneMelody tutorial.
  accepts button presses to play different tones.
 */
 #include "pitches.h"

float TEMPO = 1.3;

void playAMelody(int* aMelody, int* theNoteDurations, int length){
    for (int thisNote = 0; thisNote < length; thisNote++) {

    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/theNoteDurations[thisNote];
    tone(12, aMelody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * TEMPO;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(12);
  }
}
//played on startup...
//Shave and a haircut, two bits rhythm/melody
int melody[] = {
  NOTE_C4, NOTE_G3,NOTE_G3, NOTE_A3, NOTE_G3,0, NOTE_B3, NOTE_C4};
// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4,4,4,4,4 };
void playMelody(){
  playAMelody(melody, noteDurations, 8);
}

//PLayed when Button 1 is pressed
//Arrpegio
int melody0[] = {
NOTE_C4, NOTE_E4, NOTE_G4, NOTE_E4
};
int noteDurations0[] = {
4,4,4,4
};
void playMelody0(){
  playAMelody(melody0, noteDurations0, 4);
}

//PLayed when Button 2 is pressed
//fast 1/8 notes
int melody2[] = {
  NOTE_C4, NOTE_B3, NOTE_C4};
int noteDurations2[] = {
  8, 8, 8};
void playMelody2(){
  playAMelody(melody2, noteDurations2, 3);
}

//Played when Button 3 is pressed
// 3-2 clave rhythm
int melody3[] = {
NOTE_C4,0,0,NOTE_C4,0,0,NOTE_C4,0,0,0,NOTE_C4,0,NOTE_C4,0,0,0};
int noteDurations3[] = {
8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8
};
void playMelody3(){
  playAMelody(melody3, noteDurations3, 16);
}

//played when button 4 is pressed
//Charge!
int melody4[] = {
  NOTE_C4, NOTE_E4, NOTE_F4, NOTE_G4, 0, NOTE_E4, NOTE_G4
};
int noteDurations4[] = {
 8,8,8,8,8,8,4
};
void playMelody4(){
  playAMelody(melody4, noteDurations4, 7);
}
//played when Button 1 and 2 are pressed at the same time
int melody1and2[] = {
NOTE_C4, NOTE_E4, NOTE_E4, NOTE_G4, NOTE_E4, NOTE_F3, NOTE_A3, NOTE_A3, NOTE_C4, NOTE_A3
};
int noteDurations1and2[] = {
4,8,8,4,4,4,8,8,4,4
};
void playMelody1and2(){
  playAMelody(melody1and2, noteDurations1and2, 10);
};
//played when Button 1 and 3 are pressed at the same time
int melody1and3[] = {
NOTE_C4, NOTE_C4, NOTE_G3, NOTE_C4, NOTE_C4, NOTE_G3
};
int noteDurations1and3[] = {
8,8,8,8,4,4
};
void playMelody1and3(){
  playAMelody(melody1and3, noteDurations1and3, 6);
};

//played when Button 1 and 4 are pressed at the same time
int melody1and4[] = {
  NOTE_C4, NOTE_E4, NOTE_F4, NOTE_G4, 0, NOTE_E4, NOTE_G4, NOTE_C4, NOTE_E4, NOTE_G4, NOTE_E4
};
int noteDurations1and4[] = {
 8,8,8,8,8,8,4,4,4,4,4
};
void playMelody1and4(){
  playAMelody(melody1and4, noteDurations1and4, 11);
};

//played when Button 3 and 2 are pressed at the same time
int Melody2and3[] = {
NOTE_C4,NOTE_C2,NOTE_C2,NOTE_C4,NOTE_C2,NOTE_C2,NOTE_C4,NOTE_C2,NOTE_C2,NOTE_C2,NOTE_C4,NOTE_C2,NOTE_C4,NOTE_C2,NOTE_C2,NOTE_C2};
int noteDurations2and3[] = {
8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8
};
void playMelody2and3(){
  playAMelody(Melody2and3, noteDurations2and3, 16);
}

//played when Button 2 and 4 are pressed at the same time
int melody2and4[] = {
NOTE_C4, NOTE_C4, NOTE_B3, NOTE_C4, 0,NOTE_A3, NOTE_A3, NOTE_A3, NOTE_G3,0
};
int noteDurations2and4[] = {
  8,8,4,4,4,4,8,4,4,8
};
void playMelody2and4(){
  playAMelody(melody2and4, noteDurations2and4, 10);
}

//played when buttons 3 and 4 are pressed at the same time
int melody3and4[] = {
  NOTE_C4,NOTE_E4,NOTE_F4,NOTE_G4,0,NOTE_G4,0,0,0,NOTE_G4,0,NOTE_C4,0,0,0,0
};
int noteDurations3and4[] = {
  8,8,8,8,8,8,8,8,8,8,8,8,8,8,8
};
void playMelody3and4(){
  playAMelody(melody3and4, noteDurations3and4, 15);
}

//played when buttons 1,2&3 are all pressed at once
int melody1and2and3[] = {
  NOTE_C4, NOTE_E4, NOTE_G4, NOTE_E4, NOTE_C4, 0, NOTE_E4, NOTE_G4, 0, NOTE_E4
};
int noteDurations1and2and3[] = {
  4,4,4,4,4,8,8,8,8,4
};
void playMelody1and2and3(){
  playAMelody(melody1and2and3, noteDurations1and2and3, 10);
}

//played when buttons 1,2&4 are all pressed at once
int melody1and2and4[]= {

  };
int noteDurations1and2and4[] = {
  };
void playMelody1and2and4(){
    for (int thisNote = 0; thisNote < 10; thisNote++) {
      int noteDuration = 1000/noteDurations1and2and4[thisNote];
      tone(12, melody1and2and4[thisNote],noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      noTone(12);
    }
}

//play POPCORN when all buttons are pressed!
int popcorn[] = {
NOTE_A4,NOTE_G4,NOTE_A4,NOTE_E4,NOTE_C4,NOTE_E4,NOTE_A3,0,
NOTE_A4,NOTE_G4,NOTE_A4,NOTE_E4,NOTE_C4,NOTE_E4,NOTE_A3,0,
NOTE_A4,NOTE_B4,NOTE_C5,NOTE_B4,NOTE_C5,NOTE_A4,NOTE_B4,NOTE_A4,NOTE_B4,NOTE_G4,
NOTE_A4,NOTE_B4,NOTE_A4,NOTE_F4,NOTE_A4,0
};
int popcornDurations[] = {
  8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8
};

void playPopcorn() {
  playAMelody(popcorn, popcornDurations, 32);
}

// INPUT: 
//  Potentiometer should be connected to 5V and GND the wiper is connected to the analog input
int potPin1 = 3; // Potentiometer output connected to analog pin 3
int potPin2 = 5;
const int buttonPin1 = 2; // the number of the pushbutton pin
const int buttonPin2 = 4;
const int buttonPin3 = 7;
const int buttonPin4 = 8;

// define variables
int buttonState1 = 0; // variable for reading the pushbutton status
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int redVal = 0;   // Variables to store the values to send to the pins
int grnVal = 0;
int bluVal = 0;
int potVal1 = 0; // Variable to store the input from the potentiometer
int potVal2 = 0;

// OUTPUT: Use digital pins 9-11, the Pulse-width Modulation (PWM) pins
// LED's cathodes should be connected to digital GND
// speaker + should be connected to pin 13
int redPin = 9;   // Red LED,   connected to digital pin 9
int grnPin = 10;  // Green LED, connected to digital pin 10
int bluPin = 11;  // Blue LED,  connected to digital pin 11

void setup() {
  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  playMelody();
}

void loop() {
  // read the state of the pushbutton values:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  
  if (buttonState1 == LOW && buttonState2 == LOW && buttonState3 == LOW && buttonState4 == LOW){
    //playMelodyAllButtonsPressed();
    playPopcorn();
  }
  //Three Buttons Pressed
  else if (buttonState1 == LOW && buttonState2 == LOW && buttonState3 == LOW){
    playMelody1and2and3();
  }
  else if (buttonState1 == LOW && buttonState2 == LOW && buttonState4 == LOW){
    playMelody1and2and4();
  }
  else if (buttonState2 == LOW && buttonState3 == LOW && buttonState4 == LOW){
    //playMelody2and3and4();
  }
  //two buttons pressed
  else if (buttonState1 == LOW && buttonState2 == LOW){
    playMelody1and2();
  }
   else if (buttonState1 == LOW && buttonState3 == LOW){
    playMelody1and3();
  }
  else if (buttonState1 == LOW && buttonState4 == LOW){
    playMelody1and4();
  }
  else if (buttonState2 == LOW && buttonState3 == LOW){
    playMelody2and3();
  }
  else if (buttonState2 == LOW && buttonState4 == LOW){
    playMelody2and4();
  }
  else if (buttonState3 == LOW && buttonState4 == LOW){
    playMelody3and4();
  }
  // check if the pushbutton is pressed.
  // if it is, the buttonState is LOW:
  else if (buttonState1 == LOW) {
      playMelody0();
  }
  else if (buttonState2 == LOW) {
    playMelody2();
  }
  else if (buttonState3 == LOW){
    playMelody3();
  }
  else if (buttonState4 == LOW) {
    playMelody4();
  }
  
}//end loop

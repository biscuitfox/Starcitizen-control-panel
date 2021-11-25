//change the button const to be the correct pin.
//this code does not work on any board that cant emulate a keyboard (ex: arduino uno, unless firmware flashed)
//meant to be used by a board with 10 plus pins availible.
//change names of functions at own risk


#define KEY_LEFT_CTRL 1
#define KEY_LEFT_SHIFT 2

uint8_t buf[8] = {
  0
}; //Keyboard buffer bit rate

#include "Keyboard.h"

const int LED = 13;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(LED, OUTPUT);
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT); // ADALOGGER DOES NOT HAVE A PIN #4. THIS IS FOR THE TRINKET
  pinMode(6, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  

  Keyboard.begin();
}



//3 position toggle switches ------------------------------------------------------------------- 




void checkButton1() {
  const int BUTTON = 0; // what pin
  static int old_value = LOW;
  int val = digitalRead(BUTTON);
  if (val == old_value) {
    return;
  }

  old_value = val;

  if (val == HIGH) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('j'); 
    delay(10);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release('j');
  }
  
}

void checkButton3() {
  const int BUTTON = 1; // what pin
  static int old_value = LOW;
  int val = digitalRead(BUTTON);
  if (val == old_value) {
    return;
  }

  old_value = val;

  if (val == HIGH) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('g'); 
    delay(10);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release('g');
  }
  
}

void checkButton4() {
  const int BUTTON = 2; // what pin
  static int old_value = LOW;
  int val = digitalRead(BUTTON);
  if (val == old_value) {
    return;
  }

  old_value = val;

  if (val == HIGH) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('f'); 
    delay(10);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release('f');
  }
  
}

void checkButton5() {
  const int BUTTON = 3; // what pin
  static int old_value = LOW;
  int val = digitalRead(BUTTON);
  if (val == old_value) {
    return;
  }

  old_value = val;

  if (val == HIGH) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('k'); 
    delay(10);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release('k');
  }
  
}

void checkButton6() {
  const int BUTTON = 5; // what pin
  static int old_value = LOW;
  int val = digitalRead(BUTTON);
  if (val == old_value) {
    return;
  }

  old_value = val;

  if (val == HIGH) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('n'); 
    delay(10);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release('n');
  }
  
}

void checkButton7() {
  const int BUTTON = 6; // what pin
  static int old_value = LOW;
  int val = digitalRead(BUTTON);
  if (val == old_value) {
    return;
  }

  old_value = val;

  if (val == HIGH) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('b'); 
    delay(10);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release('b');
  }
  
}

void checkButton8() {
  const int BUTTON = 9; // what pin
  static int old_value = LOW;
  int val = digitalRead(BUTTON);
  if (val == old_value) {
    return;
  }

  old_value = val;

  if (val == HIGH) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('v'); 
    delay(10);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release('v');
  }
  
}

void checkButton9() {
  const int BUTTON = 10; // what pin
  static int old_value = LOW;
  int val = digitalRead(BUTTON);
  if (val == old_value) {
    return;
  }

  old_value = val;

  if (val == HIGH) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('m'); 
    delay(10);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release('m');
  }
  
}

// 2 position toggle switches ------------------------------------------------------------------------------

void checkButton10() {
  const int BUTTON = 11;
  static int old_value = LOW;
  int val = digitalRead(BUTTON);
  if (val == old_value) {
    return;
  }

  old_value = val;
 
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press('p');
  delay(10);
  Keyboard.release('p');
  Keyboard.release(KEY_LEFT_CTRL);
  Keyboard.release(KEY_LEFT_SHIFT);
}


void checkButton2() {
  const int BUTTON = 12;
  static int old_value = LOW;
  int val = digitalRead(BUTTON);
  if (val == old_value) {
    return;
  }

  old_value = val;
 
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press('l');
  delay(10);
  Keyboard.release('l');
  Keyboard.release(KEY_LEFT_CTRL);
  Keyboard.release(KEY_LEFT_SHIFT);
}


//add checkButtonX here in relation to every checkButtonX function
// the loop function runs over and over again forever
void loop() {
  checkButton1();
  checkButton2();
  checkButton3();
  checkButton4();
  checkButton5();
  checkButton6();
  checkButton7();
  checkButton8();
  checkButton9();
  checkButton10();
  delay(50);
}

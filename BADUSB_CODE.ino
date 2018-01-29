int EnterDelay = 750;
int DefaultDelay = 250;

#include <Keyboard.h>
void setup() {
  pinMode(9, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
  /*Place Code Here To Be Run Once*/
}
void loop(){
  WaitForButtonPress();
  /*This Is Where You Put Code That You Want Ran When The Button Is Pressed*/
}




/*
############## CUSTOM COMMANDS ###############
#TypeString:Types A String                   #
#EnterString:Types String And Terminates Line#
#PressKey:Presses A Key On The Keyboard      #
#ChangeLED:Changes LED State 1 = ON | 0 = OFF#
#BlinkLED:Blinks The LED On And Off In 100 ms#
#DelayDefault:Delays For The DefaultDelay    #
#SetDefaultDelay:Sets The DefaultDelay       #
#SetEnterDelay:Sets The EnterDelay           #
#WaitForButtonPress:Waits For Button         #
##############################################
*/









void SetEnterDelay(int DELAYTIME)
{
  EnterDelay = DELAYTIME;
}
void SetDefaultDelay(int DELAYTIME)
{
  DefaultDelay = DELAYTIME;
}
void BlinkLED(int blinktimes, int blinkdelay)
{
  for (int i=0; i < blinktimes; i++){
      digitalWrite(LED_BUILTIN, 1);
      delay(blinkdelay);
      digitalWrite(LED_BUILTIN, 0);
      delay(DefaultDelay);
   }
}

void TypeString(String MyString)
{
    Keyboard.print(MyString);
    delay(DefaultDelay);
}

void EnterString(String MyVar1)
{
    Keyboard.print(MyVar1);
    delay(EnterDelay);
    Keyboard.press(KEY_RETURN);
    delay(100);
    Keyboard.releaseAll();
    delay(DefaultDelay);
}

void ChangeLED(int hrl){
    digitalWrite(LED_BUILTIN, hrl);
    delay(DefaultDelay);
}

void PressKey(char KEYNAME){
  Keyboard.press(KEYNAME);
  delay(100);
  Keyboard.release(KEYNAME);
  delay(DefaultDelay);
}
void WaitForButtonPress()
{
  while (digitalRead(9) == HIGH) {
  }
}
void DelayDefault()
{
  delay(DefaultDelay);
}

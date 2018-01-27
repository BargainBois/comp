#include <Keyboard.h>
void setup() {
  pinMode(5, INPUT_PULLUP);
  #PLACE CODE HERE TO BE RUN BEFORE PRESSING THE BUTTON
}
void loop(){
  while (digitalRead(5) == HIGH) {
  }
  #PLACE CODE HERE TO BE USED AFTER PRESSING BUTTON
}




/*
############## CUSTOM COMMANDS ###############
#TypeString:Types A String                   #
#EnterString:Types String And Terminates Line#
#PressKey:Presses A Key On The Keyboard      #
#ChangeLED:Changes LED State 1 = ON | 0 = OFF#
##############################################
*/










void TypeString(String MyString)
{
    Keyboard.print(MyString);
}
void EnterString(String MyVar1)
{
    Keyboard.println(MyVar1);
}

void ChangeLED(int hrl){
  digitalWrite(LED_BUILTIN, hrl);
};

void PressKey(char KEYNAME){
  Keyboard.press(KEYNAME);
  delay(250);
  Keyboard.release(KEYNAME);
};

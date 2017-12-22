
BLYNK_WRITE(V4)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    mySwitch.send( "0100011001011010000011110" ); // gniazdko 1 on
  }
}


BLYNK_WRITE(V5)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    mySwitch.send( "0100011001011010000001110" ); // gniazdko 1 off
  }
}


BLYNK_WRITE(V6)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    mySwitch.send( "0100011001011010000010110" ); // gniazdko 2 on
  }
}


BLYNK_WRITE(V7)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    mySwitch.send( "0100011001011010000000110" ); // gniazdko 2 off
  }
}


BLYNK_WRITE(V8)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    mySwitch.send( "0100011001011010000011010" ); // gniazdko 3 on
  }
}


BLYNK_WRITE(V9)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    mySwitch.send( "0100011001011010000001010" ); // gniazdko 3 off
  }
}


BLYNK_WRITE(V12)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    mySwitch.send( "0100011001011010000011110" ); // gniazdko 1 on
    mySwitch.send( "0100011001011010000010110" ); // gniazdko 2 on
    mySwitch.send( "0100011001011010000011010" ); // gniazdko 3 on
  }
}


BLYNK_WRITE(V13)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    mySwitch.send( "0100011001011010000001110" ); // gniazdko 1 off
    mySwitch.send( "0100011001011010000000110" ); // gniazdko 2 off
    mySwitch.send( "0100011001011010000001010" ); // gniazdko 3 off
  }
}

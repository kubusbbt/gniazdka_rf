
BLYNK_WRITE(V0)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    mySwitch.send( "010001010101011100000011" ); // gniazdko 3 - on
  }
}


BLYNK_WRITE(V1)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    mySwitch.send( "010001010101011100001100" ); // gniazdko 3 - off
  }
}


BLYNK_WRITE(V2)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    mySwitch.send( "010001010101010111000011" ); // gniazdko 2 - on
  }
}


BLYNK_WRITE(V3)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    mySwitch.send( "010001010101010111001100" ); // gniazdko 2 - off
  }
}


BLYNK_WRITE(V10)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    mySwitch.send( "010001010101011100000011" ); // gniazdko 3 - on
    mySwitch.send( "010001010101010111000011" ); // gniazdko 2 - on      
  }
}


BLYNK_WRITE(V11)
{
  int pinValue = param.asInt();

  if(pinValue == 1){
    mySwitch.send( "010001010101011100001100" ); // gniazdko 3 - off
    mySwitch.send( "010001010101010111001100" ); // gniazdko 2 - off    
  }
}

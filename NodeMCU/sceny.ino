
// tv
// włącza tv, włącza home
BLYNK_WRITE(V33){
  bulb_on();

  if(param.asInt() == 1){
    mySwitch.send( "010001010101010111000011" ); // gniazdko 2 - on
  }
}


// sypialnia
// wyłącza żarówkę, gasi home, zapala sypialnię
BLYNK_WRITE(V35){
  bulb_off();

  if(param.asInt() == 1){
    mySwitch.send( "010001010101010111001100" ); // clarus gniazdko 2 - off
    mySwitch.send( "010001010101011100000011" ); // gniazdko 3 - on
  }
}


// spać
// wyłącza wszystko
BLYNK_WRITE(V34){
  bulb_off();

  if(param.asInt() == 1){
    mySwitch.send( "0100011001011010000001110" ); // dpm gniazdko 1 off
    mySwitch.send( "0100011001011010000000110" ); // dpm gniazdko 2 off
    mySwitch.send( "0100011001011010000001010" ); // dpm gniazdko 3 off

    mySwitch.send( "010001010101011100001100" ); // clarus gniazdko 3 - off
    mySwitch.send( "010001010101010111001100" ); // clarus gniazdko 2 - off
  }
}

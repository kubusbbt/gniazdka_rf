
// włącza żarówkę
BLYNK_WRITE(V30){
  bulb_on();
}

// wyłącza żarówkę
BLYNK_WRITE(V31){
  bulb_off();
}


// włącza żarówkę
int bulb_on(){
  HTTPClient http;
  http.begin("http://cod3r.pl/bulb/?hash=kuba123&mode=on");
  http.GET();
}

// wyłącza żarówkę
int bulb_off(){
  HTTPClient http;
  http.begin("http://cod3r.pl/bulb/?hash=kuba123&mode=off");
  http.GET();
}


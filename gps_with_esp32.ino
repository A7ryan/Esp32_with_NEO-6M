#include <TinyGPS++.h>

#define GPS_BAUDRATE 9600  // The default baudrate of NEO-6M is 9600

TinyGPSPlus gps;  // the TinyGPS++ object

void setup() {
  Serial.begin(9600);
  Serial2.begin(GPS_BAUDRATE);

  Serial.println(F("ESP32 - GPS module"));
}

void loop() {
  if (Serial2.available() > 0) {
    if (gps.encode(Serial2.read())) {
      if (gps.location.isValid()) {
        double latitude = gps.location.lat();
        double longitude = gps.location.lng();

        Serial.print(F("- latitude: "));
        Serial.println(latitude,6);

        Serial.print(F("- longitude: "));
        Serial.println(longitude,6);

      } else {
        Serial.println(F("- location: INVALID"));
      }

      Serial.println();
    }
  }

  if (millis() > 5000 && gps.charsProcessed() < 10)
    Serial.println(F("No GPS data received: check wiring"));
}

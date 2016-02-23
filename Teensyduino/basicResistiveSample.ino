  int switchPin = PIN_D7; // Bouton connecté à la pin 2 (pull-up, LOW=bouton pressé)
  int led1Pin = PIN_D6; // pin de diode pour l'esp8266


  int val; // variable pour lire l'état de l'entrée
  int buttonState; // variable pour mémoriser l'état du bouton
  int val2; // variable pour lire l'état de l'entrée (après un delai)
  int lightMode = 0; // La lampe est elle allumée?



  void setup() {
      pinMode(led1Pin, OUTPUT);
      pinMode(switchPin, INPUT);
  }

  void loop() {

      val = digitalRead(switchPin); // Lecture de la valeur d'entrée
      delay(10); // 10 millisecondes
      val2 = digitalRead(switchPin);


      if (val == val2) {
          digitalWrite(led1Pin, HIGH);
      }

      if (val == 0) {
          digitalWrite(led1Pin, LOW);
      }


      Serial.println(val);
      //delay(200);


      val = digitalRead(switchPin); // Lecture de la valeur d'entrée
      delay(10); // 10 millisecondes
      val2 = digitalRead(switchPin); // Relecture de l'entrée pour vérification de parasitage

      if (val == val2) { // S'assurer que l'on a 2 lectures successives consistante!

          if (val != buttonState) { // Le bouton a changer d'état!
              if (val == LOW) { // Le bouton est il pressé?
                  if (lightMode == 0) { // La lumière est-elle éteinte?
                      lightMode = 1; // Allumer la lumière!
                      digitalWrite(led1Pin, HIGH);


                  } else {
                      lightMode = 0; // Éteindre la lumière!
                      digitalWrite(led1Pin, LOW);


                  }
              }
          }
          buttonState = val; // Sauver le nouvel état du bouton dans une variable
      }
      if (val == 0) {
          Keyboard.press(KEY_SPACE);
      } else {
          Keyboard.release(KEY_SPACE);
      }
  }
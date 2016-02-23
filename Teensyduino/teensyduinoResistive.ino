  int switchPin0 = PIN_D7; // Bouton connecté à la pin 2 (pull-up, LOW=bouton pressé)
    keyD7 = Key_A;         // Touche retournée lors de l'appuis du bouton

  int switchPin1 = PIN_B6; // Bouton connecté à la pin 2 (pull-up, LOW=bouton pressé)
    keyB6 = KEY_Z;         // Touche retournée lors de l'appuis du bouton
        
  int switchPin2 = PIN_B5; // Bouton connecté à la pin 2 (pull-up, LOW=bouton pressé)
    keyB5 = KEY_UP;        // Touche retournée lors de l'appuis du bouton
    
  int switchPin3 = PIN_C7; // Bouton connecté à la pin 2 (pull-up, LOW=bouton pressé)
    keyC7 = KEY_Z;         // Touche retournée lors de l'appuis du bouton

  int switchPin4 = PIN_C6; // Bouton connecté à la pin 2 (pull-up, LOW=bouton pressé)
    keyC6 = Key_UP;        // Touche retournée lors de l'appuis du bouton


  int led1Pin = PIN_D6; // pin de diode pour l'esp8266



  int val0; // variable pour lire l'état de l'entrée
  int val02; // variable pour lire l'état de l'entrée (après un delai)


  int val1; // variable pour lire l'état de l'entré
  int val12; // variable pour lire l'état de l'entrée (après un delai)
  int val2; // variable pour lire l'état de l'entrée
  int val22; // variable pour lire l'état de l'entrée (après un delai)
  int val3; // variable pour lire l'état de l'entrée
  int val32; // variable pour lire l'état de l'entrée (après un delai)
  int val4; // variable pour lire l'état de l'entrée
  int val42; // variable pour lire l'état de l'entrée (après un delai)


  int buttonState0; // variable pour mémoriser l'état du bouton
  int buttonState1; // variable pour mémoriser l'état du bouton
  int buttonState2; // variable pour mémoriser l'état du bouton
  int buttonState3; // variable pour mémoriser l'état du bouton
  int buttonState4; // variable pour mémoriser l'état du bouton

  int lightMode = 0; // La lampe est elle allumée?



  void setup() {
      
      pinMode(led1Pin, OUTPUT);
      
      pinMode(switchPin1, INPUT);
      pinMode(switchPin2, INPUT);
      pinMode(switchPin3, INPUT);
      pinMode(switchPin4, INPUT);
      pinMode(switchPin0, INPUT);
  }

  void loop() {
      

      val0 = digitalRead(switchPin0); // Lecture de la valeur d'entrée
      delay(10); // 10 millisecondes
      val02 = digitalRead(switchPin0);


      if (val0 == val02) {
          digitalWrite(led1Pin, HIGH);
      }

      if (val0 == 0) {
          digitalWrite(led1Pin, LOW);
      }


      Serial.println(val0);
      //delay(200);


      val0 = digitalRead(switchPin0); // Lecture de la valeur d'entrée
      delay(10); // 10 millisecondes
      val02 = digitalRead(switchPin0); // Relecture de l'entrée pour vérification de parasitage

      if (val0 == val02) { // S'assurer que l'on a 2 lectures successives consistante!

          if (val0 != buttonState0) { // Le bouton a changer d'état!
              if (val0 == LOW) { // Le bouton est il pressé?
                  if (lightMode == 0) { // La lumière est-elle éteinte?
                      lightMode = 1; // Allumer la lumière!
                      digitalWrite(led1Pin, HIGH);


                  } else {
                      lightMode = 0; // Éteindre la lumière!
                      digitalWrite(led1Pin, LOW);


                  }
              }
          }
          buttonState0 = val0; // Sauver le nouvel état du bouton dans une variable
      }
      if (val0 == 0) {
          Keyboard.press(keyD7);
      } else {
          Keyboard.release(keyD7);
      }


      val1 = digitalRead(switchPin1); // Lecture de la valeur d'entrée
      delay(10); // 10 millisecondes
      val12 = digitalRead(switchPin1);


      if (val1 == val12) {
          digitalWrite(led1Pin, HIGH);
      }

      if (val1 == 0) {
          digitalWrite(led1Pin, LOW);
      }


      Serial.println(val1);
      //delay(200);


      val1 = digitalRead(switchPin1); // Lecture de la valeur d'entrée
      delay(10); // 10 millisecondes
      val12 = digitalRead(switchPin1); // Relecture de l'entrée pour vérification de parasitage

      if (val1 == val12) { // S'assurer que l'on a 2 lectures successives consistante!

          if (val1 != buttonState1) { // Le bouton a changer d'état!
              if (val1 == LOW) { // Le bouton est il pressé?
                  if (lightMode == 0) { // La lumière est-elle éteinte?
                      lightMode = 1; // Allumer la lumière!
                      digitalWrite(led1Pin, HIGH);


                  } else {
                      lightMode = 0; // Éteindre la lumière!
                      digitalWrite(led1Pin, LOW);


                  }
              }
          }
          buttonState1 = val1; // Sauver le nouvel état du bouton dans une variable
      }
      if (val1 == 0) {
          Keyboard.press(keyB6);
      } else {
          Keyboard.release(keyB6);
      }


      val2 = digitalRead(switchPin2); // Lecture de la valeur d'entrée
      delay(10); // 10 millisecondes
      val22 = digitalRead(switchPin2);


      if (val2 == val22) {
          digitalWrite(led1Pin, HIGH);
      }

      if (val2 == 0) {
          digitalWrite(led1Pin, LOW);
      }


      Serial.println(val2);
      //delay(200);


      val2 = digitalRead(switchPin2); // Lecture de la valeur d'entrée
      delay(10); // 10 millisecondes
      val22 = digitalRead(switchPin2); // Relecture de l'entrée pour vérification de parasitage

      if (val2 == val22) { // S'assurer que l'on a 2 lectures successives consistante!

          if (val2 != buttonState2) { // Le bouton a changer d'état!
              if (val2 == LOW) { // Le bouton est il pressé?
                  if (lightMode == 0) { // La lumière est-elle éteinte?
                      lightMode = 1; // Allumer la lumière!
                      digitalWrite(led1Pin, HIGH);


                  } else {
                      lightMode = 0; // Éteindre la lumière!
                      digitalWrite(led1Pin, LOW);


                  }
              }
          }
          buttonState2 = val2; // Sauver le nouvel état du bouton dans une variable
      }
      if (val2 == 0) {
          Keyboard.press(keyB5);
      } else {
          Keyboard.release(keyB5);
      }



      val3 = digitalRead(switchPin3); // Lecture de la valeur d'entrée
      delay(10); // 10 millisecondes
      val32 = digitalRead(switchPin3);


      if (val3 == val32) {
          digitalWrite(led1Pin, HIGH);
      }

      if (val3 == 0) {
          digitalWrite(led1Pin, LOW);
      }


      Serial.println(val3);
      //delay(200);


      val3 = digitalRead(switchPin3); // Lecture de la valeur d'entrée
      delay(10); // 10 millisecondes
      val32 = digitalRead(switchPin3); // Relecture de l'entrée pour vérification de parasitage

      if (val3 == val32) { // S'assurer que l'on a 2 lectures successives consistante!

          if (val3 != buttonState3) { // Le bouton a changer d'état!
              if (val3 == LOW) { // Le bouton est il pressé?
                  if (lightMode == 0) { // La lumière est-elle éteinte?
                      lightMode = 1; // Allumer la lumière!
                      digitalWrite(led1Pin, HIGH);


                  } else {
                      lightMode = 0; // Éteindre la lumière!
                      digitalWrite(led1Pin, LOW);


                  }
              }
          }
          buttonState3 = val3; // Sauver le nouvel état du bouton dans une variable
      }
      if (val3 == 0) {
          Keyboard.press(keyC7);
      } else {
          Keyboard.release(keyC7);
      }


      val4 = digitalRead(switchPin4); // Lecture de la valeur d'entrée
      delay(10); // 10 millisecondes
      val42 = digitalRead(switchPin4);


      if (val4 == val42) {
          digitalWrite(led1Pin, HIGH);
      }

      if (val4 == 0) {
          digitalWrite(led1Pin, LOW);
      }


      Serial.println(val4);
      //delay(200);


      val4 = digitalRead(switchPin4); // Lecture de la valeur d'entrée
      delay(10); // 10 millisecondes
      val42 = digitalRead(switchPin4); // Relecture de l'entrée pour vérification de parasitage

      if (val4 == val42) { // S'assurer que l'on a 2 lectures successives consistante!

          if (val4 != buttonState4) { // Le bouton a changer d'état!
              if (val4 == LOW) { // Le bouton est il pressé?
                  if (lightMode == 0) { // La lumière est-elle éteinte?
                      lightMode = 1; // Allumer la lumière!
                      digitalWrite(led1Pin, HIGH);


                  } else {
                      lightMode = 0; // Éteindre la lumière!
                      digitalWrite(led1Pin, LOW);


                  }
              }
          }
          buttonState4 = val4; // Sauver le nouvel état du bouton dans une variable
      }
      if (val4 == 0) {
          Keyboard.press(keyC6);
      } else {
          Keyboard.release(keyC6);
      }


  }
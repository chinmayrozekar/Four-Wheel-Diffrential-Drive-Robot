
# Differential Drive Robot with Infrared Sensor Control Project

This project involves controlling a **four-wheel differential drive robot** using an **Arduino Uno** and an **infrared (IR) distance sensor**. The project focuses on implementing tasks such as motor control, obstacle avoidance, and error testing for linear and square navigation.

---

## **Files Overview**

### **1. accelaration, deccleration.txt** *(Arduino C/C++ code)*
- **Purpose:** 
  - Demonstrates motor acceleration and deceleration using PWM control.
  - Uses ramp-up and ramp-down functions to control motor speeds.

- **Key Functions:** 
  - `rampup()`: Gradually increases motor speed.
  - `rampdown()`: Gradually decreases motor speed.
  - `loop()`: Executes acceleration and deceleration cycles.

---

### **2. avoidance.txt** *(Arduino C/C++ code)*
- **Purpose:** 
  - Implements obstacle avoidance using an analog IR sensor.
  - The robot adjusts its direction based on sensor readings.

- **Key Functions:** 
  - `straight()`: Moves the robot forward.
  - `turn()`: Rotates the robot when an obstacle is detected.
  - `loop()`: Continuously reads sensor data and adjusts movement.

---

### **3. IR raw.txt** *(Arduino C/C++ code)*
- **Purpose:** 
  - Reads and prints raw analog data from an IR sensor.
  - Demonstrates basic data acquisition from the sensor.

- **Key Function:** 
  - `loop()`: Reads sensor data and outputs it to the serial monitor.

---

### **4. linearerrortest.txt** *(Arduino C/C++ code)*
- **Purpose:** 
  - Tests the robot's ability to move forward and backward while measuring positional error.
  - Repeats acceleration and deceleration cycles for a defined number of iterations.

- **Key Functions:** 
  - `rampup()`, `rampdown()`: Control motor speeds.
  - `loop()`: Executes multiple forward-backward cycles and calculates error.

---

### **5. squareerror.txt** *(Arduino C/C++ code)*
- **Purpose:** 
  - Tests the robot's ability to complete a square path and measure positional error.
  - Incorporates turning, forward movement, and repeated square path execution.

- **Key Functions:** 
  - `square()`: Executes a full square path.
  - `loop()`: Repeats the square path test for a defined number of iterations.

---

## **Programming Language**
- The project uses **Arduino C/C++**, compatible with the **Arduino Uno** microcontroller.
- The code manages motor control through PWM signals and handles sensor input through analog pins.

---

## **Robot Information**
- **Robot:** Custom-built four-wheel differential drive robot.
- **Drive System:** Two independent wheel groups controlled by PWM signals.
- **Sensor:** Sharp GP2D12 analog infrared distance sensor.
- **Microcontroller:** Arduino Uno.
- **Motor Controller:** Pololu Dual MC33926 board.

---

## **Project Tasks**
1. **Motor Control (Acceleration/Deceleration):** Adjusts motor speeds smoothly using ramp functions.
2. **Obstacle Avoidance:** Uses an IR sensor to detect and avoid obstacles.
3. **Linear Error Test:** Measures positional error after repeated forward-backward movements.
4. **Square Error Test:** Measures error after completing a square path.
5. **Raw IR Data Collection:** Reads and logs raw IR sensor data for analysis.

---

## **How to Use**
1. Upload the code files to an Arduino Uno using the Arduino IDE.
2. Connect the robot's motors, sensors, and motor controller to the Arduino as specified.
3. Monitor the serial output to observe sensor readings and test results.
4. Adjust code parameters to optimize motor control and obstacle avoidance.

---

## **Sample Code Snippet**
Here's an example snippet from the obstacle avoidance code:

```cpp
void straight() {
    digitalWrite(M1DIR, HIGH);
    digitalWrite(M2DIR, LOW);
    analogWrite(M1PWM, 150);
    analogWrite(M2PWM, 150);
}

void turn() {
    digitalWrite(M1DIR, HIGH);
    digitalWrite(M2DIR, HIGH);
    analogWrite(M1PWM, 150);
    analogWrite(M2PWM, 150);
}

void loop() {
    int var = analogRead(analogpin);
    Serial.println(var);

    if (var > 200) {
        turn();
        delay(500);
    } else {
        straight();
    }
}
```

---

## **References**
- [Pulse Width Modulation (PWM) Tutorial](https://learn.sparkfun.com/tutorials/pulse-width-modulation)
- [Pololu Dual MC33926 Motor Controller](https://www.pololu.com/product/1213)

---

# Smart Dustbin Using Arduino Uno

This project demonstrates a **Smart Dustbin** system using an ultrasonic sensor (HC-SR04), a servo motor, and an Arduino Uno. The system enables a touchless waste disposal mechanism by automatically opening the dustbin lid when a user’s hand is detected nearby, promoting hygiene and convenience.

## Working Principle

The system uses an ultrasonic sensor to detect the distance between the dustbin and an object (e.g., a hand). When the distance falls below a certain threshold (typically around 15–20 cm), it indicates the presence of a user, and the servo motor opens the lid. After a short delay, the lid automatically closes.

### Components Used:
- **Arduino Uno**: To control the logic of the system.
- **HC-SR04 Ultrasonic Sensor**: To detect the presence of a hand or object.
- **Servo Motor**: To open and close the dustbin lid.

## Project
![Smart Dustbin Circuit](https://drive.google.com/uc?export=view&id=1eTDBf4Iayb76b66AaI7VMhFUIFVUclcQ)

## Code Explanation

1. **Pin Configuration**:
   - `trig`: Pin connected to the Trigger of the ultrasonic sensor.
   - `echo`: Pin connected to the Echo of the ultrasonic sensor.
   - `servo`: Pin connected to the servo motor.

2. **Distance Measurement**:
   - The ultrasonic sensor sends a pulse and calculates the distance based on the echo time.

3. **Servo Control**:
   - If the detected distance is less than the threshold (e.g., 15 cm), the servo motor rotates (e.g., 90–100 degrees) to open the lid.
   - After a short delay, the servo returns to its original position (e.g., 0–10 degrees) to close the lid.

## Working

1. The system continuously monitors distance using the ultrasonic sensor.
2. When a hand is detected within the threshold range, the lid opens automatically.
3. After a few seconds, the lid closes, ensuring a touch-free and hygienic experience.

## Future Enhancements

- **Automatic Sanitizer Integration**: Add a sanitizer dispenser for improved hygiene.
- **Waste Level Detection**: Use additional sensors to monitor bin fill level.
- **IoT Integration**: Send alerts when the bin is full using Wi-Fi or Bluetooth.
- **Voice Alerts**: Add a buzzer or speaker for user feedback.

## Acknowledgments

- Thanks to the **HC-SR04 Ultrasonic Sensor**, **Servo Motor**, and **Arduino Uno** for enabling the core functionality of this project.

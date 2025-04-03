# Car Parking Slot Identifier Using Ultrasonic Sensor and Servo Motor

This project demonstrates a **Car Parking Slot Identifier** system that uses an ultrasonic sensor (HC-SR04) and a servo motor to detect the occupancy of parking spaces. The ultrasonic sensor measures the distance to detect if a vehicle is parked in the slot. Based on the distance measured, the servo motor moves to show the parking slot's availability.

## Working Principle

The system uses an ultrasonic sensor to detect the distance between the sensor and the vehicle. When the distance is below a certain threshold (in this case, 15 cm), it indicates that a vehicle is present, and the servo motor moves to a position indicating that the slot is occupied. When the slot is empty, the servo moves to another position showing the slot is available.

### Components Used:
- **HC-SR04 Ultrasonic Sensor**: To measure the distance between the sensor and the vehicle.
- **Servo Motor**: To visually indicate parking slot availability.
- **Arduino**: To control the logic of the system.

## Project
![Car Parking Slot Circuit](https://drive.google.com/uc?export=view&id=1eTDBf4Iayb76b66AaI7VMhFUIFVUclcQ)

## Code Explanation

1. **Pin Configuration**:
   - `trig`: Pin connected to the Trigger of the ultrasonic sensor.
   - `echo`: Pin connected to the Echo of the ultrasonic sensor.
   - `servo`: Pin connected to the servo motor.

2. **Distance Measurement**:
   - The ultrasonic sensor sends a pulse to measure the distance. The distance is calculated based on the duration of the pulse.

3. **Servo Control**:
   - If the distance is less than 15 cm (indicating the presence of a vehicle), the servo motor is positioned at 100 degrees to indicate the slot is occupied.
   - If the distance is greater than 15 cm, the servo motor is positioned at 10 degrees to show the slot is available.

## Working

1. The system continuously checks the distance using the ultrasonic sensor.
2. If a vehicle is detected (distance < 15 cm), the servo moves to a position indicating the slot is occupied.
3. If no vehicle is detected (distance > 15 cm), the servo moves to indicate the slot is available.

## Future Enhancements

- **Multiple Slots**: The system can be expanded to handle multiple parking slots.
- **LED Indicators**: Integrate LEDs to indicate availability (Green for available, Red for occupied).
- **Mobile App Integration**: Use Bluetooth or Wi-Fi to display parking slot availability on a mobile app.

## Acknowledgments

- Thanks to the **HC-SR04** and **Servo motor** for providing the core functionalities in this project.

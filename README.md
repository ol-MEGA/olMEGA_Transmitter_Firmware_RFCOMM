# RFCOMM PHANTOM PROTOCOL

In theory, all current midclass (or above) Android Smartphones should fulfill the requirements. Smartphones without bloatware should be preferred, like Andoid One Phones. Best results were achieved with Motorola phones.

## Successfully tested Smartphones ##
**Android 9**
- Motorola Moto G8+
- Nokia 7+

**Android 8.1**
- Honor 8X

**Android 8**
- Motorola Moto G6+
- Samsung Galaxy A6+

## Unsuccessfully tested Smartphones ##
**Android 9**
- Samsung Galaxy S10 (~ 5 % data loss) 

## Boot Sequence

1. continuously blue LED: Bluetooth-Device System Initialisation (~5 seconds)
2. slow blinking blue LED: Bluetooth-Device waits to activate the configuration mode (max. 7.5 seconds)
3. continuously red LED? ERROR: No Smartphone-MAC is stored! Restart Bluetooth-Device and activate configuration mode to store MAC (see "Configuration Mode")
4. very slow blinking green LED: Bluetooth-Device tries to connect to linked Smartphone

## Configuration Mode
Bluetooth-Device is able to store one Smartphone-MAC. If device has a stored Smartphone-MAC, Bluetooth-Device will automatically connect to this Smartphone after boot sequence.
1. (re)start Bluetooth device
2. in Smartphone Bluetooth Settings: establish pairing with Bluetooth-Device (e.g. with BC-09445B) (pairing is only possible in Steps 1-2 of normal boot sequence!)
3. (re)start Bluetooth device
4. when Bluetooth-Device waits for configuration mode (see 2. in "Normal Boot Sequence"): link to the Bluetooth-Device using IHAB-App oder IHABBluetoothAudio-App
7. In Configuration Mode blue: LED blinks fast (max. 10 seconds). Normally, Smartphone-MAC will be stored automatically.
8. If Smartphone-MAC is stored, green LED blinks fast 5 times. Finally, normal boot sequence step 4 will start. If storing of Smartphone-MAC fails, blue LED will blink continuously (see step 7). Please redo step 6 quick OR restart at step 3.

## Troubleshoot
**Datatransmission fails** 

Reset "Restore Network Settings":
1. Open the Android Settings App 
2. Tap "System"
3. Tap "Reset"
4. Tap "Restore Network Settings"
5. Confirm

**Avoiding package loss**
- disable WIFI or 
- enable FlightMode + enable Bluetooth

## Smartphone Issues

### Motorola Moto G8+
- high datapackage loss when display gets activated (solution in  "Troubleshoot: Avoiding package loss")

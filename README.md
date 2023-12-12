# PythonToArduinoSerial_Skeleton
Skeleton Code provided to allow communication directionally from Python -> Arduino. Users should be able to now be able to send directly to arduino's serial port via python. 
I've provided a simple Example application utilizing this concept, ledColorControl.py also provided along with sketch ledColorControlSketch.c to illustrate potential useage.

# Potential Usage control LED lights via python terminal!
https://github.com/f1rtuna/PythonToArduinoSerial_Skeleton/assets/59737277/96280bba-bb9f-496f-a514-20e17044b61c


# Necessary Tools
1. Arduino Uno R3
2. Python Environment (really any computer with python ex. Raspberry Pi, Desktop, etc.)
3. Any further components you would like to utilize

# Schematic for example application Led Controller via Python
![Screenshot 2023-12-11 at 9 41 12 PM](https://github.com/f1rtuna/PythonToArduinoSerial_Skeleton/assets/59737277/65bdcdd9-3e3e-411c-a022-a7c691242385)


# Python
1. First as with any python program crete a virtual environment to house the libraries we will need (ex. serial, vpython):
   
   ```python -m venv /path/to/new/virtual/environment```

2. install the libraries from the requirements.txt file after the virtual environment you created has been activated:

   ```pip install requirements.txt```

3. utilize skeleton script to begin sending commands via serial port to Arduino.

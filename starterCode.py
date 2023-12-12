import serial
arduinoData = serial.Serial('/dev/cu.usbmodem1201', 9600)

while True:
    cmd = input()

    #add return character to the end of the command
    cmd = cmd + '\r'

    #send command to arduino
    arduinoData.write(cmd.encode())
    
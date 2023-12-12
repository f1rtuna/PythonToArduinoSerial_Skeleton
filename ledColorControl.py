import serial
arduinoData = serial.Serial('/dev/cu.usbmodem1201', 9600)

while True:
    print("led color controller script")
    cmd = print("TOGGLE BETWEEN LED COLORS GREEN(1), BLUE(2): RED(3) and input -1 to quit")
    cmd = input("color: ")
    if cmd == "-1":
        break
    cmd = cmd + '\r'
    arduinoData.write(cmd.encode())
    
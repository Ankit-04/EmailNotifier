import gmail as mail
from serial import Serial
import time 

port = Serial('COM3', 9600)

while True:
    amount = mail.get_number()

    if amount > 0:
        port.write(str.encode('h'))
    else:
        port.write(str.encode('l'))
    
    time.sleep(2)
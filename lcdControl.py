import gmail as mail
from serial import Serial
import time 

port = Serial('COM3', 9600)

while True:
    amount = str(mail.get_number())
    port.write(str.encode(amount))
    time.sleep(2)




import RPi.GPIO as GPIO 
from time import sleep

PIN_BLK = 10

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)
GPIO.setup(PIN_BLK, GPIO.OUT, initial=GPIO.LOW)

while True:
	GPIO.output(PIN_BLK, GPIO.HIGH)
	sleep(1)
	GPIO.output(PIN_BLK, GPIO.LOW)
	sleep(1)

#!/usr/bin/env python

import RPi.GPIO as GPIO
from time import sleep

Relay_channel = [17, 18]

def setup():
	GPIO.setmode(GPIO.BCM)
	GPIO.setup(Relay_channel, GPIO.OUT, initial=GPIO.LOW)

def main():
	while True:
		for i in range(0, len(Relay_channel)):
			print '...Relay channel %d on' % (i+1)
			GPIO.output(Relay_channel[i], GPIO.HIGH)
			sleep(0.5)
			print '...Relay channel %d off' % (i+1)
			GPIO.output(Relay_channel[i], GPIO.LOW)
			sleep(0.5)

def destroy():
	GPIO.output(Relay_channel, GPIO.LOW)
	GPIO.cleanup()

if __name__ == '__main__':
	setup()
	try:
		main()
	except KeyboardInterrupt:
		destroy()


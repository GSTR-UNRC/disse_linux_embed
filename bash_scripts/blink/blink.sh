#!/bin/ash

while true
do
   echo -n "1" > /sys/class/gpio/gpio3/value
   $(sleep 0.1)
   echo -n "0" > /sys/class/gpio/gpio3/value
   $(sleep 0.1)

done

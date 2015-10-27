#!/bin/ash

# Configuramos el GPIO 28 como entrada
echo -n "28" > /sys/class/gpio/export
echo -n "in" > /sys/class/gpio/gpio28/direction


# Configuramos el GPIO 3 como salida
echo -n "3" > /sys/class/gpio/export
echo -n "out" > /sys/class/gpio/gpio3/direction

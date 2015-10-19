#!/bin/ash

local variable1

variable1="texto"

while true
do
	echo $(date -u)
	$(sleep 1s)
	echo ${variable1}
	$(sleep 1s)
done

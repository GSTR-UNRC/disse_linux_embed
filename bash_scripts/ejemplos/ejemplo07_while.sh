#!/bin/ash

local hora
hora=$(date)
$(sleep 10)
while true
do
	echo ${hora}
	$(sleep 1s)
	hora=$(date)
done

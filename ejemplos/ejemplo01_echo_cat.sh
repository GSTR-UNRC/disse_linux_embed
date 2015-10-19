#!/bin/ash

echo "Se muestra en pantalla esta línea"

$(echo "Contenido a colocar en" > archivo.txt)

echo "Se escribio el archivo..."

cat archivo.txt

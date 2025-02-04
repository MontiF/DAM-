#!/bin/bash

ps aux | awk '{print $2}' > processes.txt

for PROC in $(cat processes.txt)

do
  if ps aux | awk '{print $2}'| grep -q "$PROC"; then
  	echo "El proceso con PID $PROC está en ejecución"
  else
   	echo "El proceso con PID $PROC no está en ejecución"
  fi
done


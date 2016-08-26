#!/bin/sh
ip_nb=$(ifconfig|grep 'inet [0-9]*\.[1-9]'|cut -d " " -f2|wc -l|tr -d " ")
find_ip=$(ifconfig|grep 'inet [0-9]*\.[1-9]'|cut -d " " -f2)
if [[ $ip_nb -gt 0 ]]; then
	echo $find_ip
else
	echo "Je suis perdu!\n"
fi

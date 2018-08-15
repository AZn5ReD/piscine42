#/bin/bash
if output=$(ifconfig | grep "inet" | sed '/inet6/d' | cut -d ' ' -f 5)  &&  [ -z "$output" ]
then
	echo "I am lost!"
else
	ifconfig | grep "inet" | sed '/inet6/d' | cut -d ' ' -f 2
fi

#!/bin/sh
#Write a shell script that takes pairs of parameters (a filename and a number 
#n) and outputs for each pair the name of the file, 
#the number n and the nth 
#word from each file
#
while [ $# -ne 0 ]; do
	file=$1
	n=$2

	#Test if the file exists
	if [ -f $file ]; then

		#Test if the second argument is really a number
		if [ `echo $n | grep -c "[^0-9]"` -gt 0 ]
			echo Invalid number !
		else
			words=`cat $file | wc -c`
			if [ $n -lt words]; then
				echo There are not that many words in the file
			else
				
			fi
		fi
	else 
		echo File does not exist !
	fi

	

	#We delete the first argument
	shift 2
done

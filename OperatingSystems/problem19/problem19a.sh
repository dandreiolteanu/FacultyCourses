#!/bin/sh
#
#Write a shell script that will monitor all the folders given in the command 
#and notify the user if a certain file will be created inside them (the name of 
#the file will be read from keyboard)
#
le [ $# -ne 0 ]; do
	#Find all the files and subdirectories from the directory
	aux=`find $1`

	#Keep all the ASCII files
	aux=`file $aux | grep -v "directory" | cut -d":" -f1`
	
	#We read the file from the keyboard
	read file

	#We test if the file aready exists in the current directory
	if [ grep -c "\<$file\>" -eq 0 ]; then
		echo The file was created.
		touch $1/$file
	else
		echo The file does already exists
	fi

	shift
done

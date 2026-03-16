#!/bin/bash

cat $0
echo EOF/

# Piping

echo "hello world" | wc -w
ls /data/data/com.termux/files/usr/ | grep t	

# Redirection

echo "hello world" > newfile.txt
# > writesover
echo " This line has been appended by redirection" >> newfile.txt
# >> appends
cat newfile.txt

wc -w newfile.txt
wc -w < newfile.txt
#left redirection
#echo Hello << EOF
# << take user input until 'EOF' comes again as argument
wc <<< "Nice to meetcha"
#take one line user input



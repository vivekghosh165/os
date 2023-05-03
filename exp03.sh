# By default .sh files do not have permission to run 
# to run type 'chmod 777 exp3.sh'
lsb_release -a && uname -re
ps aux --sort=-%cpu | head -n 11
top -o %MEM -b | head -n 1
whoami
uname
pwd
ls -al
mkdir Vivek
cd Vivek
touch a1.txt,a2.c
cd..
pwd
rm Vivek/a1.txte
ls Vivek
cd Downloads
rmdir Vivek
date
cal 2023
cd Desktop
touch sample
ls -l sample
chmod o+w sample
ls -l sample
chmode a+x sample
ls -l sample

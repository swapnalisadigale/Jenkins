all:
	/usr/bin/arm-linux-gnueabi-g++ -o server_dummy server1.c
        sshpass -p \'priyanka@26\' scp server_dummy pi@10.110.7.66:/home/pi

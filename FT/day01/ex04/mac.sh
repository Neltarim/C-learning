ifconfig | awk "/ether/" | cut -c5- | cut -d ' ' -f 2

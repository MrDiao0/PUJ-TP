user=$1
pasw=$1
useradd -s /bin/bash -d /home/tc/$1 -m $1
echo "$user:$pasw" | chpasswd

SLOCK
============================
Personal SLOCK Setup


Requirements
------------
In order to build slock you need the Xlib header files.


## Installation
* Create a folder for the source files in /etc:
  * `sudo mkdir /etc/slock`
* Enter the newly created folder:
  * `cd /etc/slock`
* Clone the repository:
  * `sudo git clone https://github.com/b-o-g-r/slock.git .`
* Compile:
  * `sudo make clean install`
* Set autolock (requires [xautolock](https://linux.die.net/man/1/xautolock))
  * `xautolock -time 10 -locker slock`


Running slock
-------------
Simply invoke the 'slock' command. To get out of it, enter your password.

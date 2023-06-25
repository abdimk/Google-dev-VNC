# python setup for chrome remote desktop

import os
import time

def install():
    commands = ["sudo apt-get upadte",
    "sudo apt-get install --assume-yes ./chrome-remote-desktop_current_amd64.deb",
    "sudo apt install --assume-yes xfce4 desktop-base dbus-x11 xscreensaver",
    "sudo apt install xfce4-terminal -y",
    "sudo apt install firefox-esr -y",
    "sudo apt-get install geany -y",
    "sudo apt-get install vim-gtk3 -y",
    "sudo apt install iputils-ping -y"
    ]

    for i in range(len(commands)):
        time.sleep(2)
        os.system(commands[i])

    print("VNC is Running...")

install()


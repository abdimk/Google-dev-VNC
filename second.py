##  olny if you want to set up for second time

import os
import time

def insall():
    commands = ["sudo apt install xfce4-terminal -y",
    "sudo apt-get install --assume-yes ./chrome-remote-desktop_current_amd64.deb",
    "sudo apt install --assume-yes xfce4 desktop-base dbus-x11 xscreensaver",
    ]

    for i in range(len(commands)):
        os.system(commands[i])

insall()

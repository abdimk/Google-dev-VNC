#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>


/*
   ______                  __        _    ___   ________
  / ____/___  ____  ____ _/ /__     | |  / / | / / ____/
 / / __/ __ \/ __ \/ __ `/ / _ \    | | / /  |/ / /     
/ /_/ / /_/ / /_/ / /_/ / /  __/    | |/ / /|  / /___   
\____/\____/\____/\__, /_/\___/     |___/_/ |_/\____/   
                 /____/                                 

*/

// packages that need to be installed 

/*
sudo apt update
sudo apt-get install --assume-yes ./chrome-remote-desktop_current_amd64.deb
sudo apt install --assume-yes xfce4 desktop-base dbus-x11 xscreensaver
sudo apt install xfce4-terminal -y
sudo apt install firefox-esr -y
sudo apt-get install geany -y
sudo apt-get install vim-gtk3 -y
sudo apt install iputils-ping -y


Install the Chrome browser on your instance:
curl -L -o google-chrome-stable_current_amd64.deb \
https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb
sudo apt install --assume-yes ./google-chrome-stable_current_amd64.deb
*/






/*
std::string package_name = "cron";
    //std:: string package_name = "cron"
    int status = system(("dpkg-query -W -f='${Status}' " + package_name + " 2>/dev/null | grep -c \"ok installed\"").c_str());

    if (status == 0) {
        std::cout << "Package " << package_name << " is installed." << std::endl;
    } else {
        std::cout << "Package " << package_name << " is not installed. Installing..." << std::endl;
        system(("sudo apt-get install " + package_name).c_str());
    }

    return 0;

*/



void install()
{
    try
    {
        // the installation should start on the home dir
        std::cout<<"cd ~"<<std::endl;
        system("cd ~");

        std::cout<<"Updating the system ..."<<std::endl;
        system("sudo apt-get update -y"); 

        std::ifstream file("google-chrome-stable_current_amd64.deb");

        if(file.good())
        {
            std::cout<<"the file exists"<<std::endl;
        }else{
            std::cout<<"\nDownloading the Chrome browser on your instance"<<std::endl;
            system("wget https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb");
        }

        system("sudo apt-get install --assume-yes ./chrome-remote-desktop_current_amd64.deb");
        system("sudo apt install --assume-yes xfce4 desktop-base dbus-x11 xscreensaver");
        system("sudo apt install xfce4-terminal -y");
        system("sudo apt install firefox-esr -y");
        system("sudo apt-get install geany -y");
        system("sudo apt-get install vim-gtk3 -y");
        system("sudo apt install iputils-ping -y");


        std::cout<<"installation completed..."<<std::endl;




    }
    catch (const std::exception&)
    {
        std::cout<<"Some thing went wrong"<<std::endl;
    }
}

int main() 
{
    /*
    std::string package_name = "cron";
    std::cout << "Package " << package_name << " Installing..." << std::endl;
    system(("sudo apt-get install " + package_name).c_str());
    */
    install();
    return 0;
}
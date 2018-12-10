# youbot BT
https://github.com/BTIRAI/youbot
- Examples in folder `./TREES`

You need to have installed `LUA` language:

`sudo apt-get install lua5.2 liblua5.2-dev libluabind-dev`


Installation in Unix
--------------------
1) Install Dependencies:

`sudo apt-get install build-essential libgl1-mesa-dev python3-tk qtdeclarative5-dev`

2) Download the repository:

`git clone https://github.com/miccol/pacmanBT.git`

3) Build the Software:

Run in a terminal the following commands:

`cd youbot` <br/>
`mkdir build` <br/>
`cd build` <br/>
`cmake ..` <br/>
`make`

Run in Unix
------------

Run in a terminal the following commands (you have to be inside the folder, since the executable calls another files in the same folder:

`cd youbot/build`

`./youbot_behavior_tree_editor`
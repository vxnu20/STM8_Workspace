**STM8 development with sdcc compiler and stm8flash for flashing**

stm8flash [link](https://github.com/vdudouyt/stm8flash)

sdcc install - `brew install sdcc`

**stm8flash install** - 

- tool need to compile by our self
- libusb is required
- for mac two additional packages need to be installed 

    `brew install libusb pkg-config`

- commands required to set the path of header file and lib 

    `export CPATH=/opt/homebrew/include`

    `export LIBRARY_PATH=/opt/homebrew/lib`

**Compiling and flashing**

- compile the code using sdcc

    `sdcc -mstm8 --out-fmt-ihx --std-sdcc11 main.c`

- convert from intel hex format to hex (optional)

    `packihx main.ihx > main.hex`

- flash the hex using stm8flash

    `stm8flash -c stlinkv2 -p stm8s003f3 -w main.ihx`
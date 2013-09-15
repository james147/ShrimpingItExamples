#=============================================================================#
# Author: QueezyTheGreat                                                      #
# Date:   26.04.2011                                                          #
#                                                                             #
# Description: Arduino CMake example                                          #
#                                                                             #
#=============================================================================#
set(CMAKE_TOOLCHAIN_FILE cmake/cmake/ArduinoToolchain.cmake) # Arduino Toolchain


cmake_minimum_required(VERSION 2.8)
#====================================================================#
#  Setup Project                                                     #
#====================================================================#
project(ArduinoExample C CXX)

print_board_list()
print_programmer_list()

set(ARDUINO_DEFAULT_BOARD uno) # Default Board ID, when not specified
set(ARDUINO_DEFAULT_PORT /dev/ttyUSB0) # Default Port, when not specified

generate_arduino_firmware(blink
    SKETCH "Blink"
)

generate_arduino_firmware(pwmblink
    SKETCH "PWMBlink"
)

generate_arduino_firmware(blinkserial
    SKETCH "BlinkSerial"
)

generate_arduino_firmware(echo
    SKETCH "Echo"
)

generate_arduino_firmware(i2cmaster
    SKETCH "I2CMaster"
)

generate_arduino_firmware(i2cslave
    SKETCH "I2CSlave"
)

generate_arduino_firmware(arduinoisp
    SKETCH "${ARDUINO_SDK_PATH}/examples/ArduinoISP"
    PROGRAMMER "arduinoisp"
)


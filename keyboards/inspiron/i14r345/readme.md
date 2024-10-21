# i14r345

![i14r345](https://i.imgur.com/8eJ4liU.jpg)

* A laptop keyboard Dell model Inspiron I14R345 with stm32

* Keyboard Maintainer: [Luciano](https://github.com/bt66)
* Hardware Supported: handwired, STM32
* Hardware Availability: anywhere

Make example for this keyboard (after setting up your build environment):

On root qmk_firmware run:
    make inspiron/i14r345:default
    or
    qmk compile -kb inspiron/i14r345 -km default

Flashing example for this keyboard:
    dfu-util -d 1eaf:0003 -a 2 -D inspiron_i14r345_default.bin

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).


To prepare STM32 to receive this firmware, first all install stm32ino bootloader on controller.
On tests dont need change boot0 junp position to record the bootloader.
To install/update firmware reboot or disconnect/connect keyboard, has 3sec to start flash process.

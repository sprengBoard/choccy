These are the default QMK files that the Choccy comes pre-flashed with. By default, the Choccy is configured for *MacOS and two encoders*; you may need to modify the keymap to suit your use.

## How to flash new QMK files (such as keymaps) to the Choccy:

The Choccy is configured to use QMK's bootmagic lite feature for easy flashing. The flashing process is as follows:

### Step 1
>Ensure QMK is installed on your computer (see the [QMK Getting Started documentation](https://github.com/qmk/qmk_firmware/blob/master/docs/newbs_getting_started.md)).
  
### Step 2
>With the Choccy unplugged press and hold the outer thumb key on one half, then plug a USB-C data cable connected to the host computer into the controller on that half of the Choccy.
  
### Step 3
>Continue to hold the thumb key down for 3-5 seconds after the controller is plugged in and the green LED on the controller illuminates. Release the thumb key; the controller should now be in bootloader mode (it should be visible as a drive in your file explorer or Finder on MacOS).
  
### Step 4
>Open the Command Line Interface (CLI) on your computer, navigate to the same directory where you've saved the Choccy QMK files, and type in the following command

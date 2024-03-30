These are the default QMK files that the Choccy comes pre-flashed with. By default, the Choccy is configured for **MacOS and two encoders**; you may need to modify the keymap to suit your use.

# How to modify the Choccy's keymap using VIA:

### Step 1
>Open a new browser tab to go to the [VIA web application](https://usevia.app/)

### Step 2
>Click on the gear ([settings](https://usevia.app/settings)) icon at the top of the VIA page.

### Step 3
>Click the slider next to ```Show Design tab```, then click the paintbrush ([design](https://usevia.app/design)) icon that appears at the top of the page next to the gear ([settings](https://usevia.app/settings)) icon.

### Step 4
>Click the ```Load``` button next to ```Load Draft Definition``` then navigate to the ```via.json``` file in the Choccy's QMK files and click ```Open```.

### Step 5
>Choose whether or not you have encoders on your Choccy by clicking the drop-down menus next to ```Left half``` and ```Right half``` then click the keyboard ([configure](https://usevia.app/)) icon at the top of the page.

### Step 6
>Click the ```Authorize device +``` button, then select ```sprengBoard Choccy``` in the popup and click ```Connect```

### Step 7
>Modify the Choccy's keymap to your heart's content!




# How to flash new QMK firmware directly to the Choccy's controllers:

The Choccy is configured to use QMK's bootmagic lite feature for easy flashing. After you've modified the QMK files and are ready to flash them to the Choccy, follow these steps:

### Step 1
>Ensure QMK is installed and up to date on your computer (see the [QMK Getting Started documentation](https://github.com/qmk/qmk_firmware/blob/master/docs/newbs_getting_started.md)).
  
### Step 2
>With the Choccy unplugged from the computer and the TRRS from each half, press and hold the thumb key below the controller on one half, then plug a USB-C data cable that is connected to the host computer into the controller on that half of the Choccy.
  
### Step 3
>Continue to hold the thumb key down for 3-5 seconds after the controller is plugged in and the green LED on the controller illuminates. Release the thumb key; the controller should now be in bootloader mode and should be visible as a drive in your file explorer (Finder on MacOS).
  
### Step 4
>Open the Command Line Interface (CLI) on your computer, navigate to the same directory where you've saved the Choccy QMK files, then run the following command:
>
>**For left half:**
```qmk flash -kb choccy -km via -bl uf2-split-left```
>
>**For right half:**
```qmk flash -kb choccy -km via -bl uf2-split-right```

### Step 5
>Repeat steps 2-4 for the other half of the Choccy, then enjoy typing!

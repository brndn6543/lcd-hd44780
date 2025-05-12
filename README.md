# LCD Display
Showing a Hitachi LCD display being powered by an Arduino, and delivering a unique message to display.

**Watch on YouTube**

[![Watch on YouTube](https://i.postimg.cc/WpyyNYcz/lcd.png)](https://youtu.be/e70xLRJLhgQ)

## Wiring
![](https://i.postimg.cc/YCsFKGsm/lcd-schematic.png)

|  LCD Pin  |     Function    | Wire Color |             Connects To            |
| :-------: | :-------------: | :--------: | :--------------------------------: |
| **1 VSS** |       GND       |    Black   |  Breadboard GND rail (Arduino GND) |
| **2 VDD** |       +5 V      |     Red    | Breadboard +5 V rail (Arduino 5 V) |
|  **3 VO** |  Contrast (pot) |   Orange   |    Wiper of 10 kΩ potentiometer    |
|  **4 RS** | Register select |    Green   |             Arduino D12            |
|  **5 RW** |    Read/Write   |    Blue    |         GND (tie directly)         |
|  **6 E**  |      Enable     |   Yellow   |             Arduino D11            |
| **11 D4** |    Data bit 4   |   Purple   |             Arduino D5             |
| **12 D5** |    Data bit 5   |    Cyan    |             Arduino D4             |
| **13 D6** |    Data bit 6   |   Magenta  |             Arduino D3             |
| **14 D7** |    Data bit 7   |    Brown   |             Arduino D2             |
| **15 A+** |   Backlight +   |    Pink    |              +5 V rail             |
| **16 K–** |   Backlight –   |    Grey    |              GND rail              |


## Code
The code requires the **LiquidCrystal** libary, this is inlcuded in the projects **include** folder.
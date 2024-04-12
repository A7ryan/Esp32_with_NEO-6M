There are many use cases where there is need of GPS Module (NEO-6M).

Recently, I worked for an Project where I faced some challenges interfacing GPS Module with ESP32 and while coding.

However, I made it after going through lots of resources.

There is an INO file which (here) contains (only) GPS Module Code.
(NOTE: I haven't uploaded my full project code but only for GPS Module)

Pre-requisites:

1. Hardware: 
	i.   ESP32
	ii.  NEO-6M (GPS Module)
	iii. Wires (for connection and power)

	Connection:
		i.   Connect VCC of GPS (to) -> 3V3 (Power of ESP32)
		ii.  Connect GND of GPS (to) -> GND (Ground of ESP32)
		
		Most IMP Step:
		iii. Connect TX of GPS (to) -> RX (of ESP32)
		iv.  COnnect RX of GPS (to) -> TX (of ESP32)

2. Software: 
	1. Arduino IDE.
	2. However I used Arduino Cloud for my Project.
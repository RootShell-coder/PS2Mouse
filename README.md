# PS2Mouse
library for connecting Synaptics TouchPad to arduino

## Интерфейс мыши PS/2
Стандартная мышь PS/2 отправляет информацию о движении (и кнопках) на хост, используя следующий 3-байтовый пакет 
|        | Bit 7 | Bit 6 | Bit 5 | Bit 4 | Bit 3 | Bit 2 | Bit 1 | Bit 0 |
|--------|-------|-------|-------|-------|-------|-------|-------|-------|
| Byte 1 | Y overflow | X overflow | Y sign bit | X sign bit | Always 1 | Middle Btn | Right Btn | Left Btn |
| Byte 2 | X Movement bit7 | X Movement bit6 | X Movement bit5 | X Movement bit4 | X Movement bit3 | X Movement bit2 |  X Movement bit1 | X Movement bit0 |
| Byte 3 | Y Movement bit7 | Y Movement bit6 | Y Movement bit5 | Y Movement bit4 | Y Movement bit3 | Y Movement bit2 | Y Movement bit1 | Y Movement bit0 |

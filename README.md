# PS2Mouse
library for connecting Synaptics TouchPad to arduino

## Интерфейс мыши PS/2
Стандартная мышь PS/2 отправляет информацию о движении (и кнопках) на хост, используя следующий 3-байтовый пакет
<table>
    <tr>
        <td></td>
        <td>Bit 7</td>
        <td>Bit 6</td>
        <td>Bit 5</td>
        <td>Bit 4</td>
        <td>Bit 3</td>
        <td>Bit 2</td>
        <td>Bit 1</td>
        <td>Bit 0</td>
    </tr>
    <tr>
        <td>Byte 1</td>
        <td>Y overflow</td>
        <td>X overflow</td>
        <td>Y sign bit</td>
        <td>X sign bit</td>
        <td>Always 1</td>
        <td>Middle Btn</td>
        <td>Right Btn </td>
        <td>Left Btn</td>
    </tr>
    <tr>
        <td>Byte 2</td>
        <td colspan="8" align="center">X Movement 7...0</td>
    </tr>
    <tr>
        <td>Byte 3</td>
        <td colspan="8" align="center">Y Movement 7...0</td>
    </tr>
</table>

Каждый byte состоит из 11 bit
![11 bit](https://github.com/RootShell-coder/PS2Mouse/blob/master/add/Byte%20transmission.png "11 bit")
Стартовый bit, 8 bit данных, bit контроля четности (нечетный) и стоповый бит. _Хост читает по спаду устройство по фронту._

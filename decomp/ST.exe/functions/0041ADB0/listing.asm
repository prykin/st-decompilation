FUN_0041adb0:
0041ADB0  55                        PUSH EBP
0041ADB1  8B EC                     MOV EBP,ESP
0041ADB3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0041ADB6  33 C0                     XOR EAX,EAX
0041ADB8  89 01                     MOV dword ptr [ECX],EAX
0041ADBA  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0041ADBD  66 89 41 08               MOV word ptr [ECX + 0x8],AX
0041ADC1  88 41 0A                  MOV byte ptr [ECX + 0xa],AL
0041ADC4  5D                        POP EBP
0041ADC5  C2 04 00                  RET 0x4

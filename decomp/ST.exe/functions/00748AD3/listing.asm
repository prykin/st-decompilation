FUN_00748ad3:
00748AD3  C7 01 48 11 7A 00         MOV dword ptr [ECX],0x7a1148
00748AD9  8B 49 3C                  MOV ECX,dword ptr [ECX + 0x3c]
00748ADC  85 C9                     TEST ECX,ECX
00748ADE  74 06                     JZ 0x00748ae6
00748AE0  51                        PUSH ECX
00748AE1  E8 6A 31 00 00            CALL 0x0074bc50
LAB_00748ae6:
00748AE6  C3                        RET

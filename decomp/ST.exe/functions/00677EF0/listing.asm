FUN_00677ef0:
00677EF0  55                        PUSH EBP
00677EF1  8B EC                     MOV EBP,ESP
00677EF3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00677EF6  8B 01                     MOV EAX,dword ptr [ECX]
00677EF8  FF 90 38 01 00 00         CALL dword ptr [EAX + 0x138]
00677EFE  8B 0D 80 19 81 00         MOV ECX,dword ptr [0x00811980]
00677F04  03 C8                     ADD ECX,EAX
00677F06  33 C0                     XOR EAX,EAX
00677F08  89 0D 80 19 81 00         MOV dword ptr [0x00811980],ECX
00677F0E  5D                        POP EBP
00677F0F  C3                        RET

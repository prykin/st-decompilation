FUN_006d5db0:
006D5DB0  56                        PUSH ESI
006D5DB1  8B F1                     MOV ESI,ECX
006D5DB3  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
006D5DB6  C7 06 1C DD 79 00         MOV dword ptr [ESI],0x79dd1c
006D5DBC  C7 46 0C F8 DC 79 00      MOV dword ptr [ESI + 0xc],0x79dcf8
006D5DC3  8B 88 10 03 00 00         MOV ECX,dword ptr [EAX + 0x310]
006D5DC9  85 C9                     TEST ECX,ECX
006D5DCB  75 14                     JNZ 0x006d5de1
006D5DCD  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006D5DD0  85 C0                     TEST EAX,EAX
006D5DD2  74 0D                     JZ 0x006d5de1
006D5DD4  8B 08                     MOV ECX,dword ptr [EAX]
006D5DD6  50                        PUSH EAX
006D5DD7  FF 51 08                  CALL dword ptr [ECX + 0x8]
006D5DDA  C7 46 64 00 00 00 00      MOV dword ptr [ESI + 0x64],0x0
LAB_006d5de1:
006D5DE1  8B CE                     MOV ECX,ESI
006D5DE3  E8 A9 32 07 00            CALL 0x00749091
006D5DE8  5E                        POP ESI
006D5DE9  C3                        RET

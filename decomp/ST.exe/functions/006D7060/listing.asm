FUN_006d7060:
006D7060  55                        PUSH EBP
006D7061  8B EC                     MOV EBP,ESP
006D7063  8B 81 E0 00 00 00         MOV EAX,dword ptr [ECX + 0xe0]
006D7069  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006D706F  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
006D7072  A9 00 00 00 01            TEST EAX,0x1000000
006D7077  74 08                     JZ 0x006d7081
006D7079  0D 00 00 80 00            OR EAX,0x800000
006D707E  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
LAB_006d7081:
006D7081  8B 91 E0 00 00 00         MOV EDX,dword ptr [ECX + 0xe0]
006D7087  8B 82 A0 00 00 00         MOV EAX,dword ptr [EDX + 0xa0]
006D708D  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006D7090  81 CA 00 00 00 01         OR EDX,0x1000000
006D7096  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006D7099  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D709C  50                        PUSH EAX
006D709D  E8 92 53 07 00            CALL 0x0074c434
006D70A2  5D                        POP EBP
006D70A3  C2 04 00                  RET 0x4

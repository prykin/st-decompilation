FUN_006cec40:
006CEC40  55                        PUSH EBP
006CEC41  8B EC                     MOV EBP,ESP
006CEC43  56                        PUSH ESI
006CEC44  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006CEC47  85 F6                     TEST ESI,ESI
006CEC49  74 52                     JZ 0x006cec9d
006CEC4B  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006CEC4E  85 C0                     TEST EAX,EAX
006CEC50  74 06                     JZ 0x006cec58
006CEC52  8B 08                     MOV ECX,dword ptr [EAX]
006CEC54  50                        PUSH EAX
006CEC55  FF 51 6C                  CALL dword ptr [ECX + 0x6c]
LAB_006cec58:
006CEC58  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006CEC5B  85 C0                     TEST EAX,EAX
006CEC5D  74 15                     JZ 0x006cec74
006CEC5F  8B 10                     MOV EDX,dword ptr [EAX]
006CEC61  50                        PUSH EAX
006CEC62  FF 52 6C                  CALL dword ptr [EDX + 0x6c]
006CEC65  3D 4B 02 76 88            CMP EAX,0x8876024b
006CEC6A  75 08                     JNZ 0x006cec74
006CEC6C  6A 01                     PUSH 0x1
006CEC6E  56                        PUSH ESI
006CEC6F  E8 3C 00 00 00            CALL 0x006cecb0
LAB_006cec74:
006CEC74  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
006CEC77  85 C0                     TEST EAX,EAX
006CEC79  74 15                     JZ 0x006cec90
006CEC7B  8B 08                     MOV ECX,dword ptr [EAX]
006CEC7D  50                        PUSH EAX
006CEC7E  FF 51 6C                  CALL dword ptr [ECX + 0x6c]
006CEC81  3D 4B 02 76 88            CMP EAX,0x8876024b
006CEC86  75 08                     JNZ 0x006cec90
006CEC88  6A 00                     PUSH 0x0
006CEC8A  56                        PUSH ESI
006CEC8B  E8 20 00 00 00            CALL 0x006cecb0
LAB_006cec90:
006CEC90  8B 76 48                  MOV ESI,dword ptr [ESI + 0x48]
006CEC93  85 F6                     TEST ESI,ESI
006CEC95  74 06                     JZ 0x006cec9d
006CEC97  8B 16                     MOV EDX,dword ptr [ESI]
006CEC99  56                        PUSH ESI
006CEC9A  FF 52 6C                  CALL dword ptr [EDX + 0x6c]
LAB_006cec9d:
006CEC9D  5E                        POP ESI
006CEC9E  5D                        POP EBP
006CEC9F  C2 04 00                  RET 0x4

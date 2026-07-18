FUN_0062e0f0:
0062E0F0  55                        PUSH EBP
0062E0F1  8B EC                     MOV EBP,ESP
0062E0F3  56                        PUSH ESI
0062E0F4  57                        PUSH EDI
0062E0F5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0062E0F8  8B F1                     MOV ESI,ECX
0062E0FA  8B 44 BE 70               MOV EAX,dword ptr [ESI + EDI*0x4 + 0x70]
0062E0FE  85 C0                     TEST EAX,EAX
0062E100  74 0E                     JZ 0x0062e110
0062E102  50                        PUSH EAX
0062E103  E8 08 00 08 00            CALL 0x006ae110
0062E108  C7 44 BE 70 00 00 00 00   MOV dword ptr [ESI + EDI*0x4 + 0x70],0x0
LAB_0062e110:
0062E110  5F                        POP EDI
0062E111  5E                        POP ESI
0062E112  5D                        POP EBP
0062E113  C2 04 00                  RET 0x4

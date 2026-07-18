FUN_0065e860:
0065E860  55                        PUSH EBP
0065E861  8B EC                     MOV EBP,ESP
0065E863  56                        PUSH ESI
0065E864  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0065E867  85 F6                     TEST ESI,ESI
0065E869  57                        PUSH EDI
0065E86A  74 6A                     JZ 0x0065e8d6
0065E86C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0065E86F  8B CF                     MOV ECX,EDI
0065E871  E8 29 6F DA FF            CALL 0x0040579f
0065E876  A8 10                     TEST AL,0x10
0065E878  75 5C                     JNZ 0x0065e8d6
0065E87A  A1 00 19 81 00            MOV EAX,[0x00811900]
0065E87F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0065E882  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0065E885  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0065E888  81 E1 FF FF 00 00         AND ECX,0xffff
0065E88E  C7 04 96 14 00 00 00      MOV dword ptr [ESI + EDX*0x4],0x14
0065E895  A1 00 19 81 00            MOV EAX,[0x00811900]
0065E89A  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0065E89D  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0065E8A0  89 4C 86 04               MOV dword ptr [ESI + EAX*0x4 + 0x4],ECX
0065E8A4  A1 00 19 81 00            MOV EAX,[0x00811900]
0065E8A9  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0065E8AC  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0065E8AF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0065E8B2  81 E1 FF FF 00 00         AND ECX,0xffff
0065E8B8  89 7C 96 0C               MOV dword ptr [ESI + EDX*0x4 + 0xc],EDI
0065E8BC  A1 00 19 81 00            MOV EAX,[0x00811900]
0065E8C1  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0065E8C4  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0065E8C7  89 4C 86 10               MOV dword ptr [ESI + EAX*0x4 + 0x10],ECX
0065E8CB  A1 00 19 81 00            MOV EAX,[0x00811900]
0065E8D0  40                        INC EAX
0065E8D1  A3 00 19 81 00            MOV [0x00811900],EAX
LAB_0065e8d6:
0065E8D6  5F                        POP EDI
0065E8D7  33 C0                     XOR EAX,EAX
0065E8D9  5E                        POP ESI
0065E8DA  5D                        POP EBP
0065E8DB  C3                        RET

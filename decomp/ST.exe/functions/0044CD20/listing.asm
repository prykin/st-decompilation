FUN_0044cd20:
0044CD20  55                        PUSH EBP
0044CD21  8B EC                     MOV EBP,ESP
0044CD23  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044CD26  56                        PUSH ESI
0044CD27  57                        PUSH EDI
0044CD28  33 F6                     XOR ESI,ESI
0044CD2A  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0044CD2D  85 FF                     TEST EDI,EDI
0044CD2F  76 4B                     JBE 0x0044cd7c
0044CD31  53                        PUSH EBX
0044CD32  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0044CD35  33 D2                     XOR EDX,EDX
LAB_0044cd37:
0044CD37  8D 4D 08                  LEA ECX,[EBP + 0x8]
0044CD3A  51                        PUSH ECX
0044CD3B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044CD3E  E8 2D FF 25 00            CALL 0x006acc70
0044CD43  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0044CD46  66 3D FF FF               CMP AX,0xffff
0044CD4A  74 22                     JZ 0x0044cd6e
0044CD4C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0044CD52  6A 01                     PUSH 0x1
0044CD54  50                        PUSH EAX
0044CD55  53                        PUSH EBX
0044CD56  E8 5F 5B FB FF            CALL 0x004028ba
0044CD5B  85 C0                     TEST EAX,EAX
0044CD5D  74 0F                     JZ 0x0044cd6e
0044CD5F  83 78 20 14               CMP dword ptr [EAX + 0x20],0x14
0044CD63  75 09                     JNZ 0x0044cd6e
0044CD65  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0044CD68  89 90 EA 07 00 00         MOV dword ptr [EAX + 0x7ea],EDX
LAB_0044cd6e:
0044CD6E  46                        INC ESI
0044CD6F  8B D6                     MOV EDX,ESI
0044CD71  81 E2 FF FF 00 00         AND EDX,0xffff
0044CD77  3B D7                     CMP EDX,EDI
0044CD79  72 BC                     JC 0x0044cd37
0044CD7B  5B                        POP EBX
LAB_0044cd7c:
0044CD7C  5F                        POP EDI
0044CD7D  5E                        POP ESI
0044CD7E  5D                        POP EBP
0044CD7F  C2 0C 00                  RET 0xc

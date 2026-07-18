FUN_00496140:
00496140  55                        PUSH EBP
00496141  8B EC                     MOV EBP,ESP
00496143  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0049614A  0F BF 4D 0C               MOVSX ECX,word ptr [EBP + 0xc]
0049614E  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
00496155  0F AF C1                  IMUL EAX,ECX
00496158  0F BF 4D 10               MOVSX ECX,word ptr [EBP + 0x10]
0049615C  0F AF D1                  IMUL EDX,ECX
0049615F  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
00496165  03 C2                     ADD EAX,EDX
00496167  0F BF 55 08               MOVSX EDX,word ptr [EBP + 0x8]
0049616B  03 C2                     ADD EAX,EDX
0049616D  66 83 3C 41 00            CMP word ptr [ECX + EAX*0x2],0x0
00496172  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00496175  75 07                     JNZ 0x0049617e
00496177  83 C8 FF                  OR EAX,0xffffffff
0049617A  5D                        POP EBP
0049617B  C2 10 00                  RET 0x10
LAB_0049617e:
0049617E  66 C7 00 00 00            MOV word ptr [EAX],0x0
00496183  33 C0                     XOR EAX,EAX
00496185  5D                        POP EBP
00496186  C2 10 00                  RET 0x10

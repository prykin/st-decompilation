FUN_004cca00:
004CCA00  55                        PUSH EBP
004CCA01  8B EC                     MOV EBP,ESP
004CCA03  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004CCA06  56                        PUSH ESI
004CCA07  8B F1                     MOV ESI,ECX
004CCA09  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004CCA0C  3B D0                     CMP EDX,EAX
004CCA0E  74 7B                     JZ 0x004cca8b
004CCA10  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
004CCA16  85 C9                     TEST ECX,ECX
004CCA18  74 05                     JZ 0x004cca1f
004CCA1A  83 F9 05                  CMP ECX,0x5
004CCA1D  75 6C                     JNZ 0x004cca8b
LAB_004cca1f:
004CCA1F  3B 86 3D 02 00 00         CMP EAX,dword ptr [ESI + 0x23d]
004CCA25  75 26                     JNZ 0x004cca4d
004CCA27  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CCA2D  8B 8E 39 02 00 00         MOV ECX,dword ptr [ESI + 0x239]
004CCA33  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004CCA36  03 C1                     ADD EAX,ECX
004CCA38  8B 0C 85 18 12 7E 00      MOV ECX,dword ptr [EAX*0x4 + 0x7e1218]
004CCA3F  85 C9                     TEST ECX,ECX
004CCA41  74 0A                     JZ 0x004cca4d
004CCA43  B8 03 00 00 00            MOV EAX,0x3
004CCA48  5E                        POP ESI
004CCA49  5D                        POP EBP
004CCA4A  C2 04 00                  RET 0x4
LAB_004cca4d:
004CCA4D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCA53  53                        PUSH EBX
004CCA54  52                        PUSH EDX
004CCA55  E8 5D 7F F3 FF            CALL 0x004049b7
004CCA5A  8B 96 39 02 00 00         MOV EDX,dword ptr [ESI + 0x239]
004CCA60  8A C8                     MOV CL,AL
004CCA62  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CCA68  81 E1 FF 00 00 00         AND ECX,0xff
004CCA6E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004CCA71  03 C2                     ADD EAX,EDX
004CCA73  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004CCA76  33 C0                     XOR EAX,EAX
004CCA78  8A 9C 11 87 19 7E 00      MOV BL,byte ptr [ECX + EDX*0x1 + 0x7e1987]
004CCA7F  84 DB                     TEST BL,BL
004CCA81  0F 95 C0                  SETNZ AL
004CCA84  5B                        POP EBX
004CCA85  40                        INC EAX
004CCA86  5E                        POP ESI
004CCA87  5D                        POP EBP
004CCA88  C2 04 00                  RET 0x4
LAB_004cca8b:
004CCA8B  33 C0                     XOR EAX,EAX
004CCA8D  5E                        POP ESI
004CCA8E  5D                        POP EBP
004CCA8F  C2 04 00                  RET 0x4

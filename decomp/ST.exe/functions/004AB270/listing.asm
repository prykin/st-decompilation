FUN_004ab270:
004AB270  55                        PUSH EBP
004AB271  8B EC                     MOV EBP,ESP
004AB273  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AB276  85 C0                     TEST EAX,EAX
004AB278  7C 61                     JL 0x004ab2db
004AB27A  83 F8 09                  CMP EAX,0x9
004AB27D  7F 5C                     JG 0x004ab2db
004AB27F  D9 05 D0 73 80 00         FLD float ptr [0x008073d0]
004AB285  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004AB288  D9 9C 80 65 74 80 00      FSTP float ptr [EAX + EAX*0x4 + 0x807465]
004AB28F  D9 05 D4 73 80 00         FLD float ptr [0x008073d4]
004AB295  D9 9C 80 69 74 80 00      FSTP float ptr [EAX + EAX*0x4 + 0x807469]
004AB29C  8B 0D D8 73 80 00         MOV ECX,dword ptr [0x008073d8]
004AB2A2  89 8C 80 6D 74 80 00      MOV dword ptr [EAX + EAX*0x4 + 0x80746d],ECX
004AB2A9  8B 15 DC 73 80 00         MOV EDX,dword ptr [0x008073dc]
004AB2AF  89 94 80 71 74 80 00      MOV dword ptr [EAX + EAX*0x4 + 0x807471],EDX
004AB2B6  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
004AB2BC  89 8C 80 75 74 80 00      MOV dword ptr [EAX + EAX*0x4 + 0x807475],ECX
004AB2C3  8A 15 3C 74 80 00         MOV DL,byte ptr [0x0080743c]
004AB2C9  88 94 80 79 74 80 00      MOV byte ptr [EAX + EAX*0x4 + 0x807479],DL
004AB2D0  C7 84 80 7A 74 80 00 01 00 00 00  MOV dword ptr [EAX + EAX*0x4 + 0x80747a],0x1
LAB_004ab2db:
004AB2DB  5D                        POP EBP
004AB2DC  C2 04 00                  RET 0x4

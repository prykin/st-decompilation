FUN_004acd30:
004ACD30  55                        PUSH EBP
004ACD31  8B EC                     MOV EBP,ESP
004ACD33  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004ACD37  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004ACD3A  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004ACD3D  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
004ACD40  85 C0                     TEST EAX,EAX
004ACD42  75 04                     JNZ 0x004acd48
004ACD44  5D                        POP EBP
004ACD45  C2 04 00                  RET 0x4
LAB_004acd48:
004ACD48  8B 00                     MOV EAX,dword ptr [EAX]
004ACD4A  5D                        POP EBP
004ACD4B  C2 04 00                  RET 0x4

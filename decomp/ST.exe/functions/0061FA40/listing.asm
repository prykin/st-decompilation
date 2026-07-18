FUN_0061fa40:
0061FA40  55                        PUSH EBP
0061FA41  8B EC                     MOV EBP,ESP
0061FA43  83 EC 0C                  SUB ESP,0xc
0061FA46  8B 81 B9 00 00 00         MOV EAX,dword ptr [ECX + 0xb9]
0061FA4C  53                        PUSH EBX
0061FA4D  83 CB FF                  OR EBX,0xffffffff
0061FA50  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0061FA53  85 C0                     TEST EAX,EAX
0061FA55  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0061FA58  0F 84 BB 00 00 00         JZ 0x0061fb19
0061FA5E  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0061FA61  48                        DEC EAX
0061FA62  0F 88 B1 00 00 00         JS 0x0061fb19
0061FA68  8B D0                     MOV EDX,EAX
0061FA6A  56                        PUSH ESI
0061FA6B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0061FA6E  57                        PUSH EDI
0061FA6F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0061FA72  EB 03                     JMP 0x0061fa77
LAB_0061fa74:
0061FA74  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0061fa77:
0061FA77  8B 89 B9 00 00 00         MOV ECX,dword ptr [ECX + 0xb9]
0061FA7D  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
0061FA80  73 7F                     JNC 0x0061fb01
0061FA82  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0061FA85  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
0061FA88  0F AF C2                  IMUL EAX,EDX
0061FA8B  03 C7                     ADD EAX,EDI
0061FA8D  85 C0                     TEST EAX,EAX
0061FA8F  74 70                     JZ 0x0061fb01
0061FA91  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0061FA94  8D 7A FD                  LEA EDI,[EDX + -0x3]
0061FA97  39 7D 0C                  CMP dword ptr [EBP + 0xc],EDI
0061FA9A  7C 4D                     JL 0x0061fae9
0061FA9C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0061FA9F  83 C2 03                  ADD EDX,0x3
0061FAA2  3B FA                     CMP EDI,EDX
0061FAA4  7F 43                     JG 0x0061fae9
0061FAA6  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0061FAA9  8D 5A FD                  LEA EBX,[EDX + -0x3]
0061FAAC  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
0061FAAF  7C 35                     JL 0x0061fae6
0061FAB1  8D 5A 03                  LEA EBX,[EDX + 0x3]
0061FAB4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0061FAB7  3B D3                     CMP EDX,EBX
0061FAB9  7F 2B                     JG 0x0061fae6
0061FABB  89 78 08                  MOV dword ptr [EAX + 0x8],EDI
0061FABE  8B 38                     MOV EDI,dword ptr [EAX]
0061FAC0  8B CE                     MOV ECX,ESI
0061FAC2  BB 01 00 00 00            MOV EBX,0x1
0061FAC7  2B CF                     SUB ECX,EDI
0061FAC9  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0061FACC  81 F9 94 11 00 00         CMP ECX,0x1194
0061FAD2  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
0061FAD5  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
0061FAD8  76 27                     JBE 0x0061fb01
0061FADA  BB 02 00 00 00            MOV EBX,0x2
0061FADF  89 30                     MOV dword ptr [EAX],ESI
0061FAE1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0061FAE4  EB 1B                     JMP 0x0061fb01
LAB_0061fae6:
0061FAE6  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0061fae9:
0061FAE9  8B 38                     MOV EDI,dword ptr [EAX]
0061FAEB  8B D6                     MOV EDX,ESI
0061FAED  2B D7                     SUB EDX,EDI
0061FAEF  81 FA 94 11 00 00         CMP EDX,0x1194
0061FAF5  76 0A                     JBE 0x0061fb01
0061FAF7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061FAFA  50                        PUSH EAX
0061FAFB  51                        PUSH ECX
0061FAFC  E8 6F 11 09 00            CALL 0x006b0c70
LAB_0061fb01:
0061FB01  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0061FB04  4A                        DEC EDX
0061FB05  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0061FB08  0F 89 66 FF FF FF         JNS 0x0061fa74
0061FB0E  5F                        POP EDI
0061FB0F  8B C3                     MOV EAX,EBX
0061FB11  5E                        POP ESI
0061FB12  5B                        POP EBX
0061FB13  8B E5                     MOV ESP,EBP
0061FB15  5D                        POP EBP
0061FB16  C2 10 00                  RET 0x10
LAB_0061fb19:
0061FB19  8B C3                     MOV EAX,EBX
0061FB1B  5B                        POP EBX
0061FB1C  8B E5                     MOV ESP,EBP
0061FB1E  5D                        POP EBP
0061FB1F  C2 10 00                  RET 0x10

FUN_00753ce0:
00753CE0  55                        PUSH EBP
00753CE1  8B EC                     MOV EBP,ESP
00753CE3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00753CE6  85 C0                     TEST EAX,EAX
00753CE8  0F 84 97 00 00 00         JZ 0x00753d85
00753CEE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00753CF1  3B 41 18                  CMP EAX,dword ptr [ECX + 0x18]
00753CF4  0F 83 8B 00 00 00         JNC 0x00753d85
00753CFA  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
00753CFD  53                        PUSH EBX
00753CFE  56                        PUSH ESI
00753CFF  57                        PUSH EDI
00753D00  8B 74 01 FC               MOV ESI,dword ptr [ECX + EAX*0x1 + -0x4]
00753D04  8D 54 01 FC               LEA EDX,[ECX + EAX*0x1 + -0x4]
00753D08  83 E6 FE                  AND ESI,0xfffffffe
00753D0B  8D 59 08                  LEA EBX,[ECX + 0x8]
00753D0E  8B FB                     MOV EDI,EBX
00753D10  8D 04 16                  LEA EAX,[ESI + EDX*0x1]
00753D13  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00753D16  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00753D19  03 C1                     ADD EAX,ECX
00753D1B  74 0E                     JZ 0x00753d2b
LAB_00753d1d:
00753D1D  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
00753D20  73 09                     JNC 0x00753d2b
00753D22  8B F8                     MOV EDI,EAX
00753D24  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00753D27  03 C1                     ADD EAX,ECX
00753D29  75 F2                     JNZ 0x00753d1d
LAB_00753d2b:
00753D2B  3B FB                     CMP EDI,EBX
00753D2D  74 13                     JZ 0x00753d42
00753D2F  8B 1F                     MOV EBX,dword ptr [EDI]
00753D31  03 DF                     ADD EBX,EDI
00753D33  3B DA                     CMP EBX,EDX
00753D35  75 0B                     JNZ 0x00753d42
00753D37  8B 0F                     MOV ECX,dword ptr [EDI]
00753D39  8B D7                     MOV EDX,EDI
00753D3B  03 F1                     ADD ESI,ECX
00753D3D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00753D40  EB 12                     JMP 0x00753d54
LAB_00753d42:
00753D42  8B DA                     MOV EBX,EDX
00753D44  2B D9                     SUB EBX,ECX
00753D46  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00753D49  89 5F 04                  MOV dword ptr [EDI + 0x4],EBX
00753D4C  8B F8                     MOV EDI,EAX
00753D4E  2B 79 34                  SUB EDI,dword ptr [ECX + 0x34]
00753D51  89 7A 04                  MOV dword ptr [EDX + 0x4],EDI
LAB_00753d54:
00753D54  85 C0                     TEST EAX,EAX
00753D56  74 28                     JZ 0x00753d80
00753D58  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
00753D5B  75 23                     JNZ 0x00753d80
00753D5D  8B 38                     MOV EDI,dword ptr [EAX]
00753D5F  03 F7                     ADD ESI,EDI
00753D61  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
00753D64  89 7A 04                  MOV dword ptr [EDX + 0x4],EDI
00753D67  8B 79 34                  MOV EDI,dword ptr [ECX + 0x34]
00753D6A  8B 59 18                  MOV EBX,dword ptr [ECX + 0x18]
00753D6D  2B C7                     SUB EAX,EDI
00753D6F  83 C0 08                  ADD EAX,0x8
00753D72  3B C3                     CMP EAX,EBX
00753D74  75 0A                     JNZ 0x00753d80
00753D76  8B C2                     MOV EAX,EDX
00753D78  2B C7                     SUB EAX,EDI
00753D7A  83 C0 08                  ADD EAX,0x8
00753D7D  89 41 18                  MOV dword ptr [ECX + 0x18],EAX
LAB_00753d80:
00753D80  89 32                     MOV dword ptr [EDX],ESI
00753D82  5F                        POP EDI
00753D83  5E                        POP ESI
00753D84  5B                        POP EBX
LAB_00753d85:
00753D85  5D                        POP EBP
00753D86  C2 08 00                  RET 0x8

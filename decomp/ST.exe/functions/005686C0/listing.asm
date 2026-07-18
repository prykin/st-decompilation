FUN_005686c0:
005686C0  55                        PUSH EBP
005686C1  8B EC                     MOV EBP,ESP
005686C3  83 EC 48                  SUB ESP,0x48
005686C6  8B 81 8B 0F 00 00         MOV EAX,dword ptr [ECX + 0xf8b]
005686CC  53                        PUSH EBX
005686CD  56                        PUSH ESI
005686CE  57                        PUSH EDI
005686CF  85 C0                     TEST EAX,EAX
005686D1  74 65                     JZ 0x00568738
005686D3  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005686D8  8D 55 BC                  LEA EDX,[EBP + -0x44]
005686DB  8D 4D B8                  LEA ECX,[EBP + -0x48]
005686DE  6A 00                     PUSH 0x0
005686E0  52                        PUSH EDX
005686E1  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005686E4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005686EA  E8 01 51 1C 00            CALL 0x0072d7f0
005686EF  83 C4 08                  ADD ESP,0x8
005686F2  85 C0                     TEST EAX,EAX
005686F4  75 39                     JNZ 0x0056872f
005686F6  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005686F9  33 F6                     XOR ESI,ESI
005686FB  BF 02 00 00 00            MOV EDI,0x2
LAB_00568700:
00568700  8D 45 FC                  LEA EAX,[EBP + -0x4]
00568703  6A 00                     PUSH 0x0
00568705  50                        PUSH EAX
00568706  56                        PUSH ESI
00568707  E8 F4 97 15 00            CALL 0x006c1f00
0056870C  83 7D FC 01               CMP dword ptr [EBP + -0x4],0x1
00568710  75 07                     JNZ 0x00568719
00568712  53                        PUSH EBX
00568713  56                        PUSH ESI
00568714  E8 C7 95 15 00            CALL 0x006c1ce0
LAB_00568719:
00568719  46                        INC ESI
0056871A  4F                        DEC EDI
0056871B  75 E3                     JNZ 0x00568700
0056871D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00568720  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568726  5F                        POP EDI
00568727  5E                        POP ESI
00568728  5B                        POP EBX
00568729  8B E5                     MOV ESP,EBP
0056872B  5D                        POP EBP
0056872C  C2 04 00                  RET 0x4
LAB_0056872f:
0056872F  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00568732  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_00568738:
00568738  5F                        POP EDI
00568739  5E                        POP ESI
0056873A  5B                        POP EBX
0056873B  8B E5                     MOV ESP,EBP
0056873D  5D                        POP EBP
0056873E  C2 04 00                  RET 0x4

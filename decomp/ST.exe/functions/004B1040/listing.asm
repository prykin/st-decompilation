FUN_004b1040:
004B1040  55                        PUSH EBP
004B1041  8B EC                     MOV EBP,ESP
004B1043  83 EC 58                  SUB ESP,0x58
004B1046  57                        PUSH EDI
004B1047  B9 15 00 00 00            MOV ECX,0x15
004B104C  33 C0                     XOR EAX,EAX
004B104E  8D 7D A8                  LEA EDI,[EBP + -0x58]
004B1051  F3 AB                     STOSD.REP ES:EDI
004B1053  66 AB                     STOSW ES:EDI
004B1055  AA                        STOSB ES:EDI
004B1056  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B1059  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B105C  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
004B105F  C7 45 B4 03 00 00 00      MOV dword ptr [EBP + -0x4c],0x3
004B1066  8B 14 85 68 1D 79 00      MOV EDX,dword ptr [EAX*0x4 + 0x791d68]
004B106D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B1070  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
004B1073  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004B1076  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
004B1079  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004B107C  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
004B107F  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004B1082  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
004B1085  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
004B1088  3D FF 00 00 00            CMP EAX,0xff
004B108D  C7 45 B0 01 00 00 00      MOV dword ptr [EBP + -0x50],0x1
004B1094  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
004B1097  C7 45 A8 E8 03 00 00      MOV dword ptr [EBP + -0x58],0x3e8
004B109E  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
004B10A1  5F                        POP EDI
004B10A2  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
004B10A5  74 03                     JZ 0x004b10aa
004B10A7  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_004b10aa:
004B10AA  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
004B10AD  85 C0                     TEST EAX,EAX
004B10AF  74 0F                     JZ 0x004b10c0
004B10B1  6A 0E                     PUSH 0xe
004B10B3  50                        PUSH EAX
004B10B4  8D 45 D4                  LEA EAX,[EBP + -0x2c]
004B10B7  50                        PUSH EAX
004B10B8  E8 83 D2 27 00            CALL 0x0072e340
004B10BD  83 C4 0C                  ADD ESP,0xc
LAB_004b10c0:
004B10C0  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
004B10C3  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
004B10C6  8D 45 A8                  LEA EAX,[EBP + -0x58]
004B10C9  6A 00                     PUSH 0x0
004B10CB  50                        PUSH EAX
004B10CC  6A 00                     PUSH 0x0
004B10CE  89 4D E7                  MOV dword ptr [EBP + -0x19],ECX
004B10D1  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004B10D7  6A 00                     PUSH 0x0
004B10D9  68 E8 03 00 00            PUSH 0x3e8
004B10DE  89 55 EF                  MOV dword ptr [EBP + -0x11],EDX
004B10E1  E8 DC 0A F5 FF            CALL 0x00401bc2
004B10E6  8B E5                     MOV ESP,EBP
004B10E8  5D                        POP EBP
004B10E9  C3                        RET

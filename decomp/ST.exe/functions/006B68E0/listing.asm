FUN_006b68e0:
006B68E0  55                        PUSH EBP
006B68E1  8B EC                     MOV EBP,ESP
006B68E3  83 EC 50                  SUB ESP,0x50
006B68E6  56                        PUSH ESI
006B68E7  57                        PUSH EDI
006B68E8  B9 14 00 00 00            MOV ECX,0x14
006B68ED  33 C0                     XOR EAX,EAX
006B68EF  8D 7D B0                  LEA EDI,[EBP + -0x50]
006B68F2  6A 01                     PUSH 0x1
006B68F4  F3 AB                     STOSD.REP ES:EDI
006B68F6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B68F9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B68FC  C7 45 B0 50 00 00 00      MOV dword ptr [EBP + -0x50],0x50
006B6903  8B 08                     MOV ECX,dword ptr [EAX]
006B6905  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006B6908  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006B690B  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
006B690E  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006B6911  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006B6914  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006B6917  8B 07                     MOV EAX,dword ptr [EDI]
006B6919  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006B691C  8D 55 B0                  LEA EDX,[EBP + -0x50]
006B691F  8B 08                     MOV ECX,dword ptr [EAX]
006B6921  52                        PUSH EDX
006B6922  50                        PUSH EAX
006B6923  FF 51 60                  CALL dword ptr [ECX + 0x60]
006B6926  8B F0                     MOV ESI,EAX
006B6928  85 F6                     TEST ESI,ESI
006B692A  75 0C                     JNZ 0x006b6938
006B692C  57                        PUSH EDI
006B692D  E8 3E 00 00 00            CALL 0x006b6970
006B6932  8B F0                     MOV ESI,EAX
006B6934  85 F6                     TEST ESI,ESI
006B6936  74 20                     JZ 0x006b6958
LAB_006b6938:
006B6938  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006B693D  68 42 02 00 00            PUSH 0x242
006B6942  68 C4 DB 7E 00            PUSH 0x7edbc4
006B6947  50                        PUSH EAX
006B6948  56                        PUSH ESI
006B6949  E8 F2 F4 FE FF            CALL 0x006a5e40
006B694E  8B C6                     MOV EAX,ESI
006B6950  5F                        POP EDI
006B6951  5E                        POP ESI
006B6952  8B E5                     MOV ESP,EBP
006B6954  5D                        POP EBP
006B6955  C2 08 00                  RET 0x8
LAB_006b6958:
006B6958  5F                        POP EDI
006B6959  33 C0                     XOR EAX,EAX
006B695B  5E                        POP ESI
006B695C  8B E5                     MOV ESP,EBP
006B695E  5D                        POP EBP
006B695F  C2 08 00                  RET 0x8

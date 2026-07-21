STAllPlayersC::FUN_005f68b0:
005F68B0  55                        PUSH EBP
005F68B1  8B EC                     MOV EBP,ESP
005F68B3  83 EC 24                  SUB ESP,0x24
005F68B6  53                        PUSH EBX
005F68B7  8B D9                     MOV EBX,ECX
005F68B9  56                        PUSH ESI
005F68BA  57                        PUSH EDI
005F68BB  85 DB                     TEST EBX,EBX
005F68BD  74 08                     JZ 0x005f68c7
005F68BF  8D BB 31 02 00 00         LEA EDI,[EBX + 0x231]
005F68C5  EB 02                     JMP 0x005f68c9
LAB_005f68c7:
005F68C7  33 FF                     XOR EDI,EDI
LAB_005f68c9:
005F68C9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F68CC  B9 30 00 00 00            MOV ECX,0x30
005F68D1  8B F0                     MOV ESI,EAX
005F68D3  6A 44                     PUSH 0x44
005F68D5  F3 A5                     MOVSD.REP ES:EDI,ESI
005F68D7  66 A5                     MOVSW ES:EDI,ESI
005F68D9  8D B0 C2 00 00 00         LEA ESI,[EAX + 0xc2]
005F68DF  C7 83 B7 02 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x2b7],0xffffffff
005F68E9  8B FE                     MOV EDI,ESI
005F68EB  83 C6 04                  ADD ESI,0x4
005F68EE  E8 7D 43 0B 00            CALL 0x006aac70
005F68F3  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
005F68F6  33 C0                     XOR EAX,EAX
LAB_005f68f8:
005F68F8  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
005F68FB  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
005F6901  89 0C 10                  MOV dword ptr [EAX + EDX*0x1],ECX
005F6904  83 C0 04                  ADD EAX,0x4
005F6907  83 F8 44                  CMP EAX,0x44
005F690A  7C EC                     JL 0x005f68f8
005F690C  33 C0                     XOR EAX,EAX
005F690E  56                        PUSH ESI
005F690F  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
005F6912  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005F6915  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005F6918  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005F691B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005F691E  8D 45 DC                  LEA EAX,[EBP + -0x24]
005F6921  50                        PUSH EAX
005F6922  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
005F6928  C7 45 F0 10 00 00 00      MOV dword ptr [EBP + -0x10],0x10
005F692F  E8 71 E3 E0 FF            CALL 0x00404ca5
005F6934  66 8B 8B C9 02 00 00      MOV CX,word ptr [EBX + 0x2c9]
005F693B  66 8B 93 C5 02 00 00      MOV DX,word ptr [EBX + 0x2c5]
005F6942  66 8B 83 C1 02 00 00      MOV AX,word ptr [EBX + 0x2c1]
005F6949  51                        PUSH ECX
005F694A  52                        PUSH EDX
005F694B  50                        PUSH EAX
005F694C  8B CB                     MOV ECX,EBX
005F694E  E8 B4 C7 E0 FF            CALL 0x00403107
005F6953  8D 4D DC                  LEA ECX,[EBP + -0x24]
005F6956  51                        PUSH ECX
005F6957  E8 04 47 0B 00            CALL 0x006ab060
005F695C  8B 07                     MOV EAX,dword ptr [EDI]
005F695E  8B CB                     MOV ECX,EBX
005F6960  03 F0                     ADD ESI,EAX
005F6962  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
005F6965  83 C6 04                  ADD ESI,0x4
005F6968  56                        PUSH ESI
005F6969  8D B8 C6 00 00 00         LEA EDI,[EAX + 0xc6]
005F696F  E8 AB EB E0 FF            CALL 0x0040551f
005F6974  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005F6977  8B 83 E6 02 00 00         MOV EAX,dword ptr [EBX + 0x2e6]
005F697D  8B 0A                     MOV ECX,dword ptr [EDX]
005F697F  03 F1                     ADD ESI,ECX
005F6981  8D 7C 0F 04               LEA EDI,[EDI + ECX*0x1 + 0x4]
005F6985  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005F6988  85 C0                     TEST EAX,EAX
005F698A  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
005F698D  0F 84 95 00 00 00         JZ 0x005f6a28
005F6993  6A 6C                     PUSH 0x6c
005F6995  E8 D6 42 0B 00            CALL 0x006aac70
005F699A  B9 1B 00 00 00            MOV ECX,0x1b
005F699F  8B F8                     MOV EDI,EAX
005F69A1  89 83 E6 02 00 00         MOV dword ptr [EBX + 0x2e6],EAX
005F69A7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005F69AA  F3 A5                     MOVSD.REP ES:EDI,ESI
005F69AC  8B 83 E6 02 00 00         MOV EAX,dword ptr [EBX + 0x2e6]
005F69B2  83 C2 6C                  ADD EDX,0x6c
005F69B5  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
005F69B8  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
005F69BE  8B 8B E6 02 00 00         MOV ECX,dword ptr [EBX + 0x2e6]
005F69C4  C7 41 04 FF FF FF FF      MOV dword ptr [ECX + 0x4],0xffffffff
005F69CB  8B 83 E6 02 00 00         MOV EAX,dword ptr [EBX + 0x2e6]
005F69D1  8B 48 58                  MOV ECX,dword ptr [EAX + 0x58]
005F69D4  85 C9                     TEST ECX,ECX
005F69D6  74 44                     JZ 0x005f6a1c
005F69D8  8B 70 5C                  MOV ESI,dword ptr [EAX + 0x5c]
005F69DB  C1 E6 02                  SHL ESI,0x2
005F69DE  56                        PUSH ESI
005F69DF  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005F69E2  E8 89 42 0B 00            CALL 0x006aac70
005F69E7  8B 93 E6 02 00 00         MOV EDX,dword ptr [EBX + 0x2e6]
005F69ED  8B CE                     MOV ECX,ESI
005F69EF  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005F69F2  89 42 58                  MOV dword ptr [EDX + 0x58],EAX
005F69F5  8B 83 E6 02 00 00         MOV EAX,dword ptr [EBX + 0x2e6]
005F69FB  8B D1                     MOV EDX,ECX
005F69FD  8B 78 58                  MOV EDI,dword ptr [EAX + 0x58]
005F6A00  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F6A03  C1 E9 02                  SHR ECX,0x2
005F6A06  F3 A5                     MOVSD.REP ES:EDI,ESI
005F6A08  8B CA                     MOV ECX,EDX
005F6A0A  83 E1 03                  AND ECX,0x3
005F6A0D  F3 A4                     MOVSB.REP ES:EDI,ESI
005F6A0F  8B CA                     MOV ECX,EDX
005F6A11  5F                        POP EDI
005F6A12  5E                        POP ESI
005F6A13  03 C1                     ADD EAX,ECX
005F6A15  5B                        POP EBX
005F6A16  8B E5                     MOV ESP,EBP
005F6A18  5D                        POP EBP
005F6A19  C2 04 00                  RET 0x4
LAB_005f6a1c:
005F6A1C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F6A1F  5F                        POP EDI
005F6A20  5E                        POP ESI
005F6A21  5B                        POP EBX
005F6A22  8B E5                     MOV ESP,EBP
005F6A24  5D                        POP EBP
005F6A25  C2 04 00                  RET 0x4
LAB_005f6a28:
005F6A28  8B C7                     MOV EAX,EDI
005F6A2A  5F                        POP EDI
005F6A2B  5E                        POP ESI
005F6A2C  5B                        POP EBX
005F6A2D  8B E5                     MOV ESP,EBP
005F6A2F  5D                        POP EBP
005F6A30  C2 04 00                  RET 0x4

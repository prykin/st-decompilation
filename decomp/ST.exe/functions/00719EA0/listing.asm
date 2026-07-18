FUN_00719ea0:
00719EA0  55                        PUSH EBP
00719EA1  8B EC                     MOV EBP,ESP
00719EA3  81 EC 8C 00 00 00         SUB ESP,0x8c
00719EA9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00719EAE  56                        PUSH ESI
00719EAF  57                        PUSH EDI
00719EB0  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
00719EB6  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
00719EBC  6A 00                     PUSH 0x0
00719EBE  52                        PUSH EDX
00719EBF  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00719EC6  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00719ECD  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
00719ED3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00719ED9  E8 12 39 01 00            CALL 0x0072d7f0
00719EDE  8B F0                     MOV ESI,EAX
00719EE0  83 C4 08                  ADD ESP,0x8
00719EE3  85 F6                     TEST ESI,ESI
00719EE5  0F 85 D5 00 00 00         JNZ 0x00719fc0
00719EEB  50                        PUSH EAX
00719EEC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00719EEF  50                        PUSH EAX
00719EF0  E8 8B 0F 00 00            CALL 0x0071ae80
00719EF5  83 C4 08                  ADD ESP,0x8
00719EF8  8D 4D B8                  LEA ECX,[EBP + -0x48]
00719EFB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00719EFE  50                        PUSH EAX
00719EFF  51                        PUSH ECX
00719F00  E8 3B 8F 03 00            CALL 0x00752e40
00719F05  66 8B 55 B8               MOV DX,word ptr [EBP + -0x48]
00719F09  8B 45 CA                  MOV EAX,dword ptr [EBP + -0x36]
00719F0C  66 4A                     DEC DX
00719F0E  66 F7 DA                  NEG DX
00719F11  1B D2                     SBB EDX,EDX
00719F13  83 E2 24                  AND EDX,0x24
00719F16  83 C2 1A                  ADD EDX,0x1a
00719F19  03 D0                     ADD EDX,EAX
00719F1B  52                        PUSH EDX
00719F1C  E8 EF 0C F9 FF            CALL 0x006aac10
00719F21  66 8B 4D B8               MOV CX,word ptr [EBP + -0x48]
00719F25  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00719F28  66 49                     DEC CX
00719F2A  8B F8                     MOV EDI,EAX
00719F2C  66 F7 D9                  NEG CX
00719F2F  1B C9                     SBB ECX,ECX
00719F31  8D 75 B8                  LEA ESI,[EBP + -0x48]
00719F34  83 E1 24                  AND ECX,0x24
00719F37  83 C1 1A                  ADD ECX,0x1a
00719F3A  8B C1                     MOV EAX,ECX
00719F3C  C1 E9 02                  SHR ECX,0x2
00719F3F  F3 A5                     MOVSD.REP ES:EDI,ESI
00719F41  8B C8                     MOV ECX,EAX
00719F43  83 E1 03                  AND ECX,0x3
00719F46  F3 A4                     MOVSB.REP ES:EDI,ESI
00719F48  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00719F4B  C7 41 16 00 00 00 00      MOV dword ptr [ECX + 0x16],0x0
00719F52  66 8B 7D B8               MOV DI,word ptr [EBP + -0x48]
00719F56  66 4F                     DEC DI
00719F58  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00719F5B  66 F7 DF                  NEG DI
00719F5E  1B FF                     SBB EDI,EDI
00719F60  8B 75 CE                  MOV ESI,dword ptr [EBP + -0x32]
00719F63  83 E7 24                  AND EDI,0x24
00719F66  83 C7 1A                  ADD EDI,0x1a
00719F69  03 F9                     ADD EDI,ECX
00719F6B  8B 4D CA                  MOV ECX,dword ptr [EBP + -0x36]
00719F6E  8B D1                     MOV EDX,ECX
00719F70  C1 E9 02                  SHR ECX,0x2
00719F73  F3 A5                     MOVSD.REP ES:EDI,ESI
00719F75  8B CA                     MOV ECX,EDX
00719F77  83 E1 03                  AND ECX,0x3
00719F7A  F3 A4                     MOVSB.REP ES:EDI,ESI
00719F7C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00719F7F  85 C0                     TEST EAX,EAX
00719F81  74 09                     JZ 0x00719f8c
00719F83  8D 45 F8                  LEA EAX,[EBP + -0x8]
00719F86  50                        PUSH EAX
00719F87  E8 D4 10 F9 FF            CALL 0x006ab060
LAB_00719f8c:
00719F8C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00719F8F  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
00719F95  85 C0                     TEST EAX,EAX
00719F97  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00719F9D  74 18                     JZ 0x00719fb7
00719F9F  66 8B 55 B8               MOV DX,word ptr [EBP + -0x48]
00719FA3  8B 4D CA                  MOV ECX,dword ptr [EBP + -0x36]
00719FA6  66 4A                     DEC DX
00719FA8  66 F7 DA                  NEG DX
00719FAB  1B D2                     SBB EDX,EDX
00719FAD  83 E2 24                  AND EDX,0x24
00719FB0  83 C2 1A                  ADD EDX,0x1a
00719FB3  03 D1                     ADD EDX,ECX
00719FB5  89 10                     MOV dword ptr [EAX],EDX
LAB_00719fb7:
00719FB7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00719FBA  5F                        POP EDI
00719FBB  5E                        POP ESI
00719FBC  8B E5                     MOV ESP,EBP
00719FBE  5D                        POP EBP
00719FBF  C3                        RET
LAB_00719fc0:
00719FC0  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
00719FC6  68 30 08 7F 00            PUSH 0x7f0830
00719FCB  68 CC 4C 7A 00            PUSH 0x7a4ccc
00719FD0  56                        PUSH ESI
00719FD1  6A 00                     PUSH 0x0
00719FD3  6A 61                     PUSH 0x61
00719FD5  68 00 08 7F 00            PUSH 0x7f0800
00719FDA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00719FDF  E8 EC 34 F9 FF            CALL 0x006ad4d0
00719FE4  83 C4 18                  ADD ESP,0x18
00719FE7  85 C0                     TEST EAX,EAX
00719FE9  74 01                     JZ 0x00719fec
00719FEB  CC                        INT3
LAB_00719fec:
00719FEC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00719FEF  85 C0                     TEST EAX,EAX
00719FF1  74 09                     JZ 0x00719ffc
00719FF3  8D 4D F8                  LEA ECX,[EBP + -0x8]
00719FF6  51                        PUSH ECX
00719FF7  E8 64 10 F9 FF            CALL 0x006ab060
LAB_00719ffc:
00719FFC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00719FFF  85 C0                     TEST EAX,EAX
0071A001  74 09                     JZ 0x0071a00c
0071A003  8D 55 FC                  LEA EDX,[EBP + -0x4]
0071A006  52                        PUSH EDX
0071A007  E8 54 10 F9 FF            CALL 0x006ab060
LAB_0071a00c:
0071A00C  6A 66                     PUSH 0x66
0071A00E  68 00 08 7F 00            PUSH 0x7f0800
0071A013  6A 00                     PUSH 0x0
0071A015  56                        PUSH ESI
0071A016  E8 25 BE F8 FF            CALL 0x006a5e40
0071A01B  5F                        POP EDI
0071A01C  33 C0                     XOR EAX,EAX
0071A01E  5E                        POP ESI
0071A01F  8B E5                     MOV ESP,EBP
0071A021  5D                        POP EBP
0071A022  C3                        RET

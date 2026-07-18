FUN_004f0c80:
004F0C80  55                        PUSH EBP
004F0C81  8B EC                     MOV EBP,ESP
004F0C83  83 EC 10                  SUB ESP,0x10
004F0C86  53                        PUSH EBX
004F0C87  8B D9                     MOV EBX,ECX
004F0C89  33 C0                     XOR EAX,EAX
004F0C8B  8A 83 78 02 00 00         MOV AL,byte ptr [EBX + 0x278]
004F0C91  8B 8C 83 7E 02 00 00      MOV ECX,dword ptr [EBX + EAX*0x4 + 0x27e]
004F0C98  85 C9                     TEST ECX,ECX
004F0C9A  0F 84 4D 01 00 00         JZ 0x004f0ded
004F0CA0  56                        PUSH ESI
004F0CA1  57                        PUSH EDI
004F0CA2  8D 8B BE 01 00 00         LEA ECX,[EBX + 0x1be]
004F0CA8  8D BB A1 01 00 00         LEA EDI,[EBX + 0x1a1]
004F0CAE  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004F0CB5  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004F0CB8  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004F0CBB  C7 45 F0 05 00 00 00      MOV dword ptr [EBP + -0x10],0x5
LAB_004f0cc2:
004F0CC2  C7 43 28 21 00 00 00      MOV dword ptr [EBX + 0x28],0x21
004F0CC9  8B 17                     MOV EDX,dword ptr [EDI]
004F0CCB  8D 73 18                  LEA ESI,[EBX + 0x18]
004F0CCE  8B CB                     MOV ECX,EBX
004F0CD0  56                        PUSH ESI
004F0CD1  52                        PUSH EDX
004F0CD2  6A 02                     PUSH 0x2
004F0CD4  E8 A7 53 1F 00            CALL 0x006e6080
004F0CD9  33 C0                     XOR EAX,EAX
004F0CDB  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
004F0CDE  8A 83 78 02 00 00         MOV AL,byte ptr [EBX + 0x278]
004F0CE4  8B 94 83 7E 02 00 00      MOV EDX,dword ptr [EBX + EAX*0x4 + 0x27e]
004F0CEB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004F0CEE  03 83 99 01 00 00         ADD EAX,dword ptr [EBX + 0x199]
004F0CF4  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
004F0CF7  1B C0                     SBB EAX,EAX
004F0CF9  F7 D8                     NEG EAX
004F0CFB  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
004F0CFE  0F 85 9B 00 00 00         JNZ 0x004f0d9f
004F0D04  85 C9                     TEST ECX,ECX
004F0D06  0F 85 9B 00 00 00         JNZ 0x004f0da7
LAB_004f0d0c:
004F0D0C  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
004F0D13  8B 17                     MOV EDX,dword ptr [EDI]
004F0D15  56                        PUSH ESI
004F0D16  52                        PUSH EDX
LAB_004f0d17:
004F0D17  6A 02                     PUSH 0x2
004F0D19  8B CB                     MOV ECX,EBX
004F0D1B  E8 60 53 1F 00            CALL 0x006e6080
004F0D20  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
004F0D23  85 C0                     TEST EAX,EAX
004F0D25  0F 84 9D 00 00 00         JZ 0x004f0dc8
004F0D2B  33 C0                     XOR EAX,EAX
004F0D2D  8A 83 78 02 00 00         MOV AL,byte ptr [EBX + 0x278]
004F0D33  8B 84 83 7E 02 00 00      MOV EAX,dword ptr [EBX + EAX*0x4 + 0x27e]
004F0D3A  85 C0                     TEST EAX,EAX
004F0D3C  0F 84 86 00 00 00         JZ 0x004f0dc8
004F0D42  8B 8B 99 01 00 00         MOV ECX,dword ptr [EBX + 0x199]
004F0D48  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004F0D4B  03 CA                     ADD ECX,EDX
004F0D4D  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
004F0D50  3B CA                     CMP ECX,EDX
004F0D52  73 74                     JNC 0x004f0dc8
004F0D54  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
004F0D57  0F AF F1                  IMUL ESI,ECX
004F0D5A  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
004F0D5D  85 F6                     TEST ESI,ESI
004F0D5F  74 67                     JZ 0x004f0dc8
004F0D61  8A 46 08                  MOV AL,byte ptr [ESI + 0x8]
004F0D64  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004F0D67  84 C0                     TEST AL,AL
004F0D69  0F 94 C0                  SETZ AL
004F0D6C  83 C0 03                  ADD EAX,0x3
004F0D6F  6A 00                     PUSH 0x0
004F0D71  88 41 F7                  MOV byte ptr [ECX + -0x9],AL
004F0D74  8A 56 09                  MOV DL,byte ptr [ESI + 0x9]
004F0D77  8B 06                     MOV EAX,dword ptr [ESI]
004F0D79  52                        PUSH EDX
004F0D7A  50                        PUSH EAX
004F0D7B  E8 04 29 F1 FF            CALL 0x00403684
004F0D80  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004F0D83  83 C4 0C                  ADD ESP,0xc
004F0D86  89 42 F8                  MOV dword ptr [EDX + -0x8],EAX
004F0D89  8A 46 08                  MOV AL,byte ptr [ESI + 0x8]
004F0D8C  84 C0                     TEST AL,AL
004F0D8E  74 27                     JZ 0x004f0db7
004F0D90  83 C6 0A                  ADD ESI,0xa
004F0D93  8B 0E                     MOV ECX,dword ptr [ESI]
004F0D95  89 0A                     MOV dword ptr [EDX],ECX
004F0D97  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
004F0D9A  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
004F0D9D  EB 29                     JMP 0x004f0dc8
LAB_004f0d9f:
004F0D9F  85 C9                     TEST ECX,ECX
004F0DA1  0F 85 65 FF FF FF         JNZ 0x004f0d0c
LAB_004f0da7:
004F0DA7  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
004F0DAE  8B 0F                     MOV ECX,dword ptr [EDI]
004F0DB0  56                        PUSH ESI
004F0DB1  51                        PUSH ECX
004F0DB2  E9 60 FF FF FF            JMP 0x004f0d17
LAB_004f0db7:
004F0DB7  B9 07 00 00 00            MOV ECX,0x7
004F0DBC  83 C6 12                  ADD ESI,0x12
004F0DBF  8B FA                     MOV EDI,EDX
004F0DC1  F3 A5                     MOVSD.REP ES:EDI,ESI
004F0DC3  66 A5                     MOVSW ES:EDI,ESI
004F0DC5  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_004f0dc8:
004F0DC8  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004F0DCB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004F0DCE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004F0DD1  46                        INC ESI
004F0DD2  83 C7 04                  ADD EDI,0x4
004F0DD5  83 C1 27                  ADD ECX,0x27
004F0DD8  48                        DEC EAX
004F0DD9  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004F0DDC  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004F0DDF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004F0DE2  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004F0DE5  0F 85 D7 FE FF FF         JNZ 0x004f0cc2
004F0DEB  5F                        POP EDI
004F0DEC  5E                        POP ESI
LAB_004f0ded:
004F0DED  5B                        POP EBX
004F0DEE  8B E5                     MOV ESP,EBP
004F0DF0  5D                        POP EBP
004F0DF1  C3                        RET

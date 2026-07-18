FUN_006b7e00:
006B7E00  55                        PUSH EBP
006B7E01  8B EC                     MOV EBP,ESP
006B7E03  83 EC 64                  SUB ESP,0x64
006B7E06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006B7E0B  53                        PUSH EBX
006B7E0C  56                        PUSH ESI
006B7E0D  57                        PUSH EDI
006B7E0E  8D 55 A0                  LEA EDX,[EBP + -0x60]
006B7E11  8D 4D 9C                  LEA ECX,[EBP + -0x64]
006B7E14  6A 00                     PUSH 0x0
006B7E16  52                        PUSH EDX
006B7E17  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
006B7E1A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B7E20  E8 CB 59 07 00            CALL 0x0072d7f0
006B7E25  83 C4 08                  ADD ESP,0x8
006B7E28  85 C0                     TEST EAX,EAX
006B7E2A  0F 85 A6 00 00 00         JNZ 0x006b7ed6
006B7E30  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006B7E33  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006B7E36  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B7E39  89 03                     MOV dword ptr [EBX],EAX
006B7E3B  89 07                     MOV dword ptr [EDI],EAX
006B7E3D  8B 71 30                  MOV ESI,dword ptr [ECX + 0x30]
006B7E40  85 F6                     TEST ESI,ESI
006B7E42  74 7F                     JZ 0x006b7ec3
006B7E44  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B7E47  25 FF 00 00 00            AND EAX,0xff
006B7E4C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006B7E4F  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
006B7E52  8A 44 C1 38               MOV AL,byte ptr [ECX + EAX*0x8 + 0x38]
006B7E56  A8 01                     TEST AL,0x1
006B7E58  74 69                     JZ 0x006b7ec3
006B7E5A  85 DB                     TEST EBX,EBX
006B7E5C  74 65                     JZ 0x006b7ec3
006B7E5E  85 FF                     TEST EDI,EDI
006B7E60  74 61                     JZ 0x006b7ec3
006B7E62  B9 06 00 00 00            MOV ECX,0x6
006B7E67  33 C0                     XOR EAX,EAX
006B7E69  8D 7D E0                  LEA EDI,[EBP + -0x20]
006B7E6C  6A 00                     PUSH 0x0
006B7E6E  F3 AB                     STOSD.REP ES:EDI
006B7E70  8B 4A 3C                  MOV ECX,dword ptr [EDX + 0x3c]
006B7E73  8B 52 44                  MOV EDX,dword ptr [EDX + 0x44]
006B7E76  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006B7E79  8D 4D E0                  LEA ECX,[EBP + -0x20]
006B7E7C  8D 45 F8                  LEA EAX,[EBP + -0x8]
006B7E7F  51                        PUSH ECX
006B7E80  56                        PUSH ESI
006B7E81  C7 45 E0 18 00 00 00      MOV dword ptr [EBP + -0x20],0x18
006B7E88  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006B7E8B  C7 45 F0 04 00 00 00      MOV dword ptr [EBP + -0x10],0x4
006B7E92  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006B7E95  FF 15 C8 BE 85 00         CALL dword ptr [0x0085bec8]
006B7E9B  85 C0                     TEST EAX,EAX
006B7E9D  74 17                     JZ 0x006b7eb6
006B7E9F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B7EA5  68 AB 00 00 00            PUSH 0xab
006B7EAA  68 E8 DB 7E 00            PUSH 0x7edbe8
006B7EAF  52                        PUSH EDX
006B7EB0  50                        PUSH EAX
006B7EB1  E8 8A DF FE FF            CALL 0x006a5e40
LAB_006b7eb6:
006B7EB6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B7EB9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B7EBC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B7EBF  89 03                     MOV dword ptr [EBX],EAX
006B7EC1  89 0A                     MOV dword ptr [EDX],ECX
LAB_006b7ec3:
006B7EC3  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
006B7EC6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006B7ECB  33 C0                     XOR EAX,EAX
006B7ECD  5F                        POP EDI
006B7ECE  5E                        POP ESI
006B7ECF  5B                        POP EBX
006B7ED0  8B E5                     MOV ESP,EBP
006B7ED2  5D                        POP EBP
006B7ED3  C2 10 00                  RET 0x10
LAB_006b7ed6:
006B7ED6  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
006B7ED9  68 B2 00 00 00            PUSH 0xb2
006B7EDE  68 E8 DB 7E 00            PUSH 0x7edbe8
006B7EE3  6A 00                     PUSH 0x0
006B7EE5  50                        PUSH EAX
006B7EE6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B7EEC  E8 4F DF FE FF            CALL 0x006a5e40
006B7EF1  5F                        POP EDI
006B7EF2  5E                        POP ESI
006B7EF3  83 C8 FF                  OR EAX,0xffffffff
006B7EF6  5B                        POP EBX
006B7EF7  8B E5                     MOV ESP,EBP
006B7EF9  5D                        POP EBP
006B7EFA  C2 10 00                  RET 0x10

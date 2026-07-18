FUN_00449a90:
00449A90  55                        PUSH EBP
00449A91  8B EC                     MOV EBP,ESP
00449A93  83 EC 14                  SUB ESP,0x14
00449A96  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
00449A9A  53                        PUSH EBX
00449A9B  56                        PUSH ESI
00449A9C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00449A9F  57                        PUSH EDI
00449AA0  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00449AA3  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
00449AA6  C1 E1 04                  SHL ECX,0x4
00449AA9  03 C8                     ADD ECX,EAX
00449AAB  8B 34 4D 16 58 7F 00      MOV ESI,dword ptr [ECX*0x2 + 0x7f5816]
00449AB2  85 F6                     TEST ESI,ESI
00449AB4  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00449AB7  74 5B                     JZ 0x00449b14
00449AB9  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00449ABC  85 C0                     TEST EAX,EAX
00449ABE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00449AC1  74 51                     JZ 0x00449b14
00449AC3  33 DB                     XOR EBX,EBX
00449AC5  85 C0                     TEST EAX,EAX
00449AC7  7E 4B                     JLE 0x00449b14
LAB_00449ac9:
00449AC9  8D 55 EC                  LEA EDX,[EBP + -0x14]
00449ACC  8B CE                     MOV ECX,ESI
00449ACE  52                        PUSH EDX
00449ACF  8B D3                     MOV EDX,EBX
00449AD1  E8 9A 31 26 00            CALL 0x006acc70
00449AD6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00449AD9  85 C9                     TEST ECX,ECX
00449ADB  74 2F                     JZ 0x00449b0c
00449ADD  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
00449AE0  85 FF                     TEST EDI,EDI
00449AE2  74 28                     JZ 0x00449b0c
00449AE4  33 F6                     XOR ESI,ESI
00449AE6  85 FF                     TEST EDI,EDI
00449AE8  7E 1F                     JLE 0x00449b09
00449AEA  EB 03                     JMP 0x00449aef
LAB_00449aec:
00449AEC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_00449aef:
00449AEF  8D 45 0A                  LEA EAX,[EBP + 0xa]
00449AF2  8B D6                     MOV EDX,ESI
00449AF4  50                        PUSH EAX
00449AF5  E8 76 31 26 00            CALL 0x006acc70
00449AFA  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
00449AFE  66 39 4D 0A               CMP word ptr [EBP + 0xa],CX
00449B02  74 1C                     JZ 0x00449b20
00449B04  46                        INC ESI
00449B05  3B F7                     CMP ESI,EDI
00449B07  7C E3                     JL 0x00449aec
LAB_00449b09:
00449B09  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00449b0c:
00449B0C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00449B0F  43                        INC EBX
00449B10  3B D8                     CMP EBX,EAX
00449B12  7C B5                     JL 0x00449ac9
LAB_00449b14:
00449B14  5F                        POP EDI
00449B15  5E                        POP ESI
00449B16  83 C8 FF                  OR EAX,0xffffffff
00449B19  5B                        POP EBX
00449B1A  8B E5                     MOV ESP,EBP
00449B1C  5D                        POP EBP
00449B1D  C2 08 00                  RET 0x8
LAB_00449b20:
00449B20  5F                        POP EDI
00449B21  8B C3                     MOV EAX,EBX
00449B23  5E                        POP ESI
00449B24  5B                        POP EBX
00449B25  8B E5                     MOV ESP,EBP
00449B27  5D                        POP EBP
00449B28  C2 08 00                  RET 0x8

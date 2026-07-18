FUN_00719d00:
00719D00  55                        PUSH EBP
00719D01  8B EC                     MOV EBP,ESP
00719D03  83 EC 4C                  SUB ESP,0x4c
00719D06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00719D0B  53                        PUSH EBX
00719D0C  56                        PUSH ESI
00719D0D  57                        PUSH EDI
00719D0E  8D 55 B8                  LEA EDX,[EBP + -0x48]
00719D11  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00719D14  6A 00                     PUSH 0x0
00719D16  52                        PUSH EDX
00719D17  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00719D1E  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00719D21  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00719D27  E8 C4 3A 01 00            CALL 0x0072d7f0
00719D2C  8B F0                     MOV ESI,EAX
00719D2E  83 C4 08                  ADD ESP,0x8
00719D31  85 F6                     TEST ESI,ESI
00719D33  75 70                     JNZ 0x00719da5
00719D35  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
00719D38  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00719D3B  24 04                     AND AL,0x4
00719D3D  56                        PUSH ESI
00719D3E  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
00719D41  74 06                     JZ 0x00719d49
00719D43  8D 45 F8                  LEA EAX,[EBP + -0x8]
00719D46  50                        PUSH EAX
00719D47  EB 02                     JMP 0x00719d4b
LAB_00719d49:
00719D49  6A 00                     PUSH 0x0
LAB_00719d4b:
00719D4B  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00719D4E  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00719D51  57                        PUSH EDI
00719D52  6A 02                     PUSH 0x2
00719D54  8B CB                     MOV ECX,EBX
00719D56  E8 85 7F FD FF            CALL 0x006f1ce0
00719D5B  85 C0                     TEST EAX,EAX
00719D5D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00719D60  74 30                     JZ 0x00719d92
00719D62  56                        PUSH ESI
00719D63  57                        PUSH EDI
00719D64  53                        PUSH EBX
00719D65  E8 86 00 00 00            CALL 0x00719df0
00719D6A  83 C4 0C                  ADD ESP,0xc
00719D6D  66 3D 01 00               CMP AX,0x1
00719D71  75 1F                     JNZ 0x00719d92
00719D73  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
00719D76  84 C0                     TEST AL,AL
00719D78  74 18                     JZ 0x00719d92
00719D7A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00719D7D  66 8B 08                  MOV CX,word ptr [EAX]
00719D80  66 49                     DEC CX
00719D82  66 F7 D9                  NEG CX
00719D85  1B C9                     SBB ECX,ECX
00719D87  83 E1 24                  AND ECX,0x24
00719D8A  83 C1 1A                  ADD ECX,0x1a
00719D8D  03 C8                     ADD ECX,EAX
00719D8F  89 48 16                  MOV dword ptr [EAX + 0x16],ECX
LAB_00719d92:
00719D92  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00719D95  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00719D98  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00719D9E  5F                        POP EDI
00719D9F  5E                        POP ESI
00719DA0  5B                        POP EBX
00719DA1  8B E5                     MOV ESP,EBP
00719DA3  5D                        POP EBP
00719DA4  C3                        RET
LAB_00719da5:
00719DA5  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00719DA8  68 14 08 7F 00            PUSH 0x7f0814
00719DAD  68 CC 4C 7A 00            PUSH 0x7a4ccc
00719DB2  56                        PUSH ESI
00719DB3  6A 00                     PUSH 0x0
00719DB5  6A 20                     PUSH 0x20
00719DB7  68 00 08 7F 00            PUSH 0x7f0800
00719DBC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00719DC1  E8 0A 37 F9 FF            CALL 0x006ad4d0
00719DC6  83 C4 18                  ADD ESP,0x18
00719DC9  85 C0                     TEST EAX,EAX
00719DCB  74 01                     JZ 0x00719dce
00719DCD  CC                        INT3
LAB_00719dce:
00719DCE  6A 22                     PUSH 0x22
00719DD0  68 00 08 7F 00            PUSH 0x7f0800
00719DD5  6A 00                     PUSH 0x0
00719DD7  56                        PUSH ESI
00719DD8  E8 63 C0 F8 FF            CALL 0x006a5e40
00719DDD  5F                        POP EDI
00719DDE  5E                        POP ESI
00719DDF  33 C0                     XOR EAX,EAX
00719DE1  5B                        POP EBX
00719DE2  8B E5                     MOV ESP,EBP
00719DE4  5D                        POP EBP
00719DE5  C3                        RET

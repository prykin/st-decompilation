FUN_0062dd80:
0062DD80  55                        PUSH EBP
0062DD81  8B EC                     MOV EBP,ESP
0062DD83  83 EC 5C                  SUB ESP,0x5c
0062DD86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0062DD8B  53                        PUSH EBX
0062DD8C  56                        PUSH ESI
0062DD8D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0062DD90  57                        PUSH EDI
0062DD91  8D 55 A8                  LEA EDX,[EBP + -0x58]
0062DD94  8D 4D A4                  LEA ECX,[EBP + -0x5c]
0062DD97  6A 00                     PUSH 0x0
0062DD99  52                        PUSH EDX
0062DD9A  C7 45 F4 FF FF FF FF      MOV dword ptr [EBP + -0xc],0xffffffff
0062DDA1  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0062DDA8  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0062DDAB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0062DDB1  E8 3A FA 0F 00            CALL 0x0072d7f0
0062DDB6  8B F0                     MOV ESI,EAX
0062DDB8  83 C4 08                  ADD ESP,0x8
0062DDBB  85 F6                     TEST ESI,ESI
0062DDBD  0F 85 BF 00 00 00         JNZ 0x0062de82
0062DDC3  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0062DDC6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0062DDC9  8B 44 BE 70               MOV EAX,dword ptr [ESI + EDI*0x4 + 0x70]
0062DDCD  85 C0                     TEST EAX,EAX
0062DDCF  75 12                     JNZ 0x0062dde3
0062DDD1  6A 0A                     PUSH 0xa
0062DDD3  6A 0C                     PUSH 0xc
0062DDD5  6A 0A                     PUSH 0xa
0062DDD7  50                        PUSH EAX
0062DDD8  E8 B3 04 08 00            CALL 0x006ae290
0062DDDD  89 44 BE 70               MOV dword ptr [ESI + EDI*0x4 + 0x70],EAX
0062DDE1  EB 42                     JMP 0x0062de25
LAB_0062dde3:
0062DDE3  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
0062DDE6  33 D2                     XOR EDX,EDX
0062DDE8  85 DB                     TEST EBX,EBX
0062DDEA  7E 39                     JLE 0x0062de25
LAB_0062ddec:
0062DDEC  8B 4C BE 70               MOV ECX,dword ptr [ESI + EDI*0x4 + 0x70]
0062DDF0  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
0062DDF3  73 0B                     JNC 0x0062de00
0062DDF5  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0062DDF8  0F AF C2                  IMUL EAX,EDX
0062DDFB  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0062DDFE  EB 02                     JMP 0x0062de02
LAB_0062de00:
0062DE00  33 C0                     XOR EAX,EAX
LAB_0062de02:
0062DE02  85 C0                     TEST EAX,EAX
0062DE04  74 1A                     JZ 0x0062de20
0062DE06  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062DE09  39 08                     CMP dword ptr [EAX],ECX
0062DE0B  75 13                     JNZ 0x0062de20
0062DE0D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0062DE10  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0062DE17  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0062DE1A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0062DE1D  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
LAB_0062de20:
0062DE20  42                        INC EDX
0062DE21  3B D3                     CMP EDX,EBX
0062DE23  7C C7                     JL 0x0062ddec
LAB_0062de25:
0062DE25  8B 44 BE 70               MOV EAX,dword ptr [ESI + EDI*0x4 + 0x70]
0062DE29  85 C0                     TEST EAX,EAX
0062DE2B  74 40                     JZ 0x0062de6d
0062DE2D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0062DE30  85 C9                     TEST ECX,ECX
0062DE32  75 39                     JNZ 0x0062de6d
0062DE34  33 D2                     XOR EDX,EDX
0062DE36  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062DE39  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0062DE3C  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0062DE3F  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0062DE42  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0062DE45  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0062DE48  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0062DE4B  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0062DE4E  8D 55 E8                  LEA EDX,[EBP + -0x18]
0062DE51  52                        PUSH EDX
0062DE52  50                        PUSH EAX
0062DE53  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0062DE56  E8 65 03 08 00            CALL 0x006ae1c0
0062DE5B  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0062DE5E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0062DE64  5F                        POP EDI
0062DE65  5E                        POP ESI
0062DE66  5B                        POP EBX
0062DE67  8B E5                     MOV ESP,EBP
0062DE69  5D                        POP EBP
0062DE6A  C2 10 00                  RET 0x10
LAB_0062de6d:
0062DE6D  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0062DE70  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0062DE73  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0062DE79  5F                        POP EDI
0062DE7A  5E                        POP ESI
0062DE7B  5B                        POP EBX
0062DE7C  8B E5                     MOV ESP,EBP
0062DE7E  5D                        POP EBP
0062DE7F  C2 10 00                  RET 0x10
LAB_0062de82:
0062DE82  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
0062DE85  68 64 14 7D 00            PUSH 0x7d1464
0062DE8A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0062DE8F  56                        PUSH ESI
0062DE90  6A 00                     PUSH 0x0
0062DE92  68 4D 02 00 00            PUSH 0x24d
0062DE97  68 EC 13 7D 00            PUSH 0x7d13ec
0062DE9C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0062DEA2  E8 29 F6 07 00            CALL 0x006ad4d0
0062DEA7  83 C4 18                  ADD ESP,0x18
0062DEAA  85 C0                     TEST EAX,EAX
0062DEAC  74 01                     JZ 0x0062deaf
0062DEAE  CC                        INT3
LAB_0062deaf:
0062DEAF  68 4F 02 00 00            PUSH 0x24f
0062DEB4  68 EC 13 7D 00            PUSH 0x7d13ec
0062DEB9  6A 00                     PUSH 0x0
0062DEBB  56                        PUSH ESI
0062DEBC  E8 7F 7F 07 00            CALL 0x006a5e40
0062DEC1  5F                        POP EDI
0062DEC2  5E                        POP ESI
0062DEC3  B8 FF FF 00 00            MOV EAX,0xffff
0062DEC8  5B                        POP EBX
0062DEC9  8B E5                     MOV ESP,EBP
0062DECB  5D                        POP EBP
0062DECC  C2 10 00                  RET 0x10

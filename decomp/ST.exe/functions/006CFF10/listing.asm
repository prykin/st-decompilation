FUN_006cff10:
006CFF10  55                        PUSH EBP
006CFF11  8B EC                     MOV EBP,ESP
006CFF13  83 EC 4C                  SUB ESP,0x4c
006CFF16  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006CFF19  56                        PUSH ESI
006CFF1A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006CFF1D  57                        PUSH EDI
006CFF1E  8B 00                     MOV EAX,dword ptr [EAX]
006CFF20  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006CFF27  74 0C                     JZ 0x006cff35
006CFF29  05 F0 04 00 00            ADD EAX,0x4f0
006CFF2E  50                        PUSH EAX
006CFF2F  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006cff35:
006CFF35  6A 69                     PUSH 0x69
006CFF37  E8 D4 AC FD FF            CALL 0x006aac10
006CFF3C  85 C0                     TEST EAX,EAX
006CFF3E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006CFF41  75 0A                     JNZ 0x006cff4d
006CFF43  BE FE FF FF FF            MOV ESI,0xfffffffe
006CFF48  E9 A1 00 00 00            JMP 0x006cffee
LAB_006cff4d:
006CFF4D  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CFF50  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CFF53  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006CFF56  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006CFF59  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
006CFF5C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CFF5F  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006CFF62  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
006CFF65  C7 40 14 50 00 00 00      MOV dword ptr [EAX + 0x14],0x50
006CFF6C  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006CFF71  8D 55 B8                  LEA EDX,[EBP + -0x48]
006CFF74  8D 4D B4                  LEA ECX,[EBP + -0x4c]
006CFF77  6A 00                     PUSH 0x0
006CFF79  52                        PUSH EDX
006CFF7A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006CFF7D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006CFF83  E8 68 D8 05 00            CALL 0x0072d7f0
006CFF88  8B F0                     MOV ESI,EAX
006CFF8A  83 C4 08                  ADD ESP,0x8
006CFF8D  85 F6                     TEST ESI,ESI
006CFF8F  75 4B                     JNZ 0x006cffdc
006CFF91  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006CFF94  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006CFF97  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CFF9A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CFF9D  57                        PUSH EDI
006CFF9E  50                        PUSH EAX
006CFF9F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006CFFA2  51                        PUSH ECX
006CFFA3  68 20 00 6D 00            PUSH 0x6d0020
006CFFA8  52                        PUSH EDX
006CFFA9  57                        PUSH EDI
006CFFAA  50                        PUSH EAX
006CFFAB  E8 80 23 FE FF            CALL 0x006b2330
006CFFB0  8B F0                     MOV ESI,EAX
006CFFB2  85 F6                     TEST ESI,ESI
006CFFB4  74 14                     JZ 0x006cffca
006CFFB6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006CFFBC  6A 3F                     PUSH 0x3f
006CFFBE  68 B4 E1 7E 00            PUSH 0x7ee1b4
006CFFC3  51                        PUSH ECX
006CFFC4  56                        PUSH ESI
006CFFC5  E8 76 5E FD FF            CALL 0x006a5e40
LAB_006cffca:
006CFFCA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006CFFCD  8B 17                     MOV EDX,dword ptr [EDI]
006CFFCF  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006CFFD2  89 10                     MOV dword ptr [EAX],EDX
006CFFD4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006CFFDA  EB 12                     JMP 0x006cffee
LAB_006cffdc:
006CFFDC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006CFFDF  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006CFFE2  50                        PUSH EAX
006CFFE3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006CFFE9  E8 A2 5E FD FF            CALL 0x006a5e90
LAB_006cffee:
006CFFEE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CFFF1  8B 01                     MOV EAX,dword ptr [ECX]
006CFFF3  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006CFFFA  74 0C                     JZ 0x006d0008
006CFFFC  05 F0 04 00 00            ADD EAX,0x4f0
006D0001  50                        PUSH EAX
006D0002  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006d0008:
006D0008  8B C6                     MOV EAX,ESI
006D000A  5F                        POP EDI
006D000B  5E                        POP ESI
006D000C  8B E5                     MOV ESP,EBP
006D000E  5D                        POP EBP
006D000F  C2 24 00                  RET 0x24

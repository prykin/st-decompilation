FUN_00709e10:
00709E10  55                        PUSH EBP
00709E11  8B EC                     MOV EBP,ESP
00709E13  83 EC 50                  SUB ESP,0x50
00709E16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00709E1B  56                        PUSH ESI
00709E1C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00709E1F  8D 4D B0                  LEA ECX,[EBP + -0x50]
00709E22  6A 00                     PUSH 0x0
00709E24  52                        PUSH EDX
00709E25  C7 45 F4 FC FF FF FF      MOV dword ptr [EBP + -0xc],0xfffffffc
00709E2C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00709E33  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00709E36  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00709E3C  E8 AF 39 02 00            CALL 0x0072d7f0
00709E41  8B F0                     MOV ESI,EAX
00709E43  83 C4 08                  ADD ESP,0x8
00709E46  85 F6                     TEST ESI,ESI
00709E48  0F 85 A1 00 00 00         JNZ 0x00709eef
00709E4E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00709E51  85 C0                     TEST EAX,EAX
00709E53  75 21                     JNZ 0x00709e76
00709E55  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00709E5A  68 E2 00 00 00            PUSH 0xe2
00709E5F  68 5C FF 7E 00            PUSH 0x7eff5c
00709E64  50                        PUSH EAX
00709E65  6A CC                     PUSH -0x34
00709E67  E8 D4 BF F9 FF            CALL 0x006a5e40
00709E6C  B8 CC FF FF FF            MOV EAX,0xffffffcc
00709E71  5E                        POP ESI
00709E72  8B E5                     MOV ESP,EBP
00709E74  5D                        POP EBP
00709E75  C3                        RET
LAB_00709e76:
00709E76  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00709E79  85 C9                     TEST ECX,ECX
00709E7B  75 22                     JNZ 0x00709e9f
00709E7D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00709E83  68 E3 00 00 00            PUSH 0xe3
00709E88  68 5C FF 7E 00            PUSH 0x7eff5c
00709E8D  51                        PUSH ECX
00709E8E  6A CC                     PUSH -0x34
00709E90  E8 AB BF F9 FF            CALL 0x006a5e40
00709E95  B8 CC FF FF FF            MOV EAX,0xffffffcc
00709E9A  5E                        POP ESI
00709E9B  8B E5                     MOV ESP,EBP
00709E9D  5D                        POP EBP
00709E9E  C3                        RET
LAB_00709e9f:
00709E9F  8D 55 F8                  LEA EDX,[EBP + -0x8]
00709EA2  8D 4D FC                  LEA ECX,[EBP + -0x4]
00709EA5  52                        PUSH EDX
00709EA6  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00709EA9  51                        PUSH ECX
00709EAA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00709EAD  52                        PUSH EDX
00709EAE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00709EB1  51                        PUSH ECX
00709EB2  52                        PUSH EDX
00709EB3  50                        PUSH EAX
00709EB4  E8 E7 F9 FF FF            CALL 0x007098a0
00709EB9  83 C4 18                  ADD ESP,0x18
00709EBC  85 C0                     TEST EAX,EAX
00709EBE  74 1E                     JZ 0x00709ede
00709EC0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00709EC3  8B 48 25                  MOV ECX,dword ptr [EAX + 0x25]
00709EC6  41                        INC ECX
00709EC7  89 48 25                  MOV dword ptr [EAX + 0x25],ECX
00709ECA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00709ECD  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00709ED0  8B 40 25                  MOV EAX,dword ptr [EAX + 0x25]
00709ED3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00709ED9  5E                        POP ESI
00709EDA  8B E5                     MOV ESP,EBP
00709EDC  5D                        POP EBP
00709EDD  C3                        RET
LAB_00709ede:
00709EDE  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00709EE1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00709EE4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00709EEA  5E                        POP ESI
00709EEB  8B E5                     MOV ESP,EBP
00709EED  5D                        POP EBP
00709EEE  C3                        RET
LAB_00709eef:
00709EEF  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00709EF2  68 7C FF 7E 00            PUSH 0x7eff7c
00709EF7  68 CC 4C 7A 00            PUSH 0x7a4ccc
00709EFC  56                        PUSH ESI
00709EFD  6A 00                     PUSH 0x0
00709EFF  68 EB 00 00 00            PUSH 0xeb
00709F04  68 5C FF 7E 00            PUSH 0x7eff5c
00709F09  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00709F0F  E8 BC 35 FA FF            CALL 0x006ad4d0
00709F14  83 C4 18                  ADD ESP,0x18
00709F17  85 C0                     TEST EAX,EAX
00709F19  74 01                     JZ 0x00709f1c
00709F1B  CC                        INT3
LAB_00709f1c:
00709F1C  68 ED 00 00 00            PUSH 0xed
00709F21  68 5C FF 7E 00            PUSH 0x7eff5c
00709F26  6A 00                     PUSH 0x0
00709F28  56                        PUSH ESI
00709F29  E8 12 BF F9 FF            CALL 0x006a5e40
00709F2E  8B C6                     MOV EAX,ESI
00709F30  5E                        POP ESI
00709F31  8B E5                     MOV ESP,EBP
00709F33  5D                        POP EBP
00709F34  C3                        RET

ccFntTy::operator:
0070DF00  55                        PUSH EBP
0070DF01  8B EC                     MOV EBP,ESP
0070DF03  83 EC 48                  SUB ESP,0x48
0070DF06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070DF0B  53                        PUSH EBX
0070DF0C  56                        PUSH ESI
0070DF0D  33 DB                     XOR EBX,EBX
0070DF0F  57                        PUSH EDI
0070DF10  8D 55 BC                  LEA EDX,[EBP + -0x44]
0070DF13  8D 4D B8                  LEA ECX,[EBP + -0x48]
0070DF16  53                        PUSH EBX
0070DF17  52                        PUSH EDX
0070DF18  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0070DF1B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0070DF1E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070DF24  E8 C7 F8 01 00            CALL 0x0072d7f0
0070DF29  8B F0                     MOV ESI,EAX
0070DF2B  83 C4 08                  ADD ESP,0x8
0070DF2E  3B F3                     CMP ESI,EBX
0070DF30  0F 85 A6 00 00 00         JNZ 0x0070dfdc
0070DF36  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0070DF39  3B FB                     CMP EDI,EBX
0070DF3B  74 08                     JZ 0x0070df45
0070DF3D  39 9F A0 00 00 00         CMP dword ptr [EDI + 0xa0],EBX
0070DF43  74 17                     JZ 0x0070df5c
LAB_0070df45:
0070DF45  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0070DF4A  68 DE 01 00 00            PUSH 0x1de
0070DF4F  68 90 01 7F 00            PUSH 0x7f0190
0070DF54  50                        PUSH EAX
0070DF55  6A CC                     PUSH -0x34
0070DF57  E8 E4 7E F9 FF            CALL 0x006a5e40
LAB_0070df5c:
0070DF5C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070DF5F  51                        PUSH ECX
0070DF60  E8 AB CC F9 FF            CALL 0x006aac10
0070DF65  8B F0                     MOV ESI,EAX
0070DF67  B8 01 00 00 00            MOV EAX,0x1
0070DF6C  B9 64 00 00 00            MOV ECX,0x64
0070DF71  56                        PUSH ESI
0070DF72  89 46 4C                  MOV dword ptr [ESI + 0x4c],EAX
0070DF75  89 4E 6C                  MOV dword ptr [ESI + 0x6c],ECX
0070DF78  89 4E 68                  MOV dword ptr [ESI + 0x68],ECX
0070DF7B  89 46 7E                  MOV dword ptr [ESI + 0x7e],EAX
0070DF7E  66 89 9E 9E 00 00 00      MOV word ptr [ESI + 0x9e],BX
0070DF85  8A 15 54 C8 7C 00         MOV DL,byte ptr [0x007cc854]
0070DF8B  88 96 9E 00 00 00         MOV byte ptr [ESI + 0x9e],DL
0070DF91  C7 86 82 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x82],0xffffffff
0070DF9B  89 9E 96 00 00 00         MOV dword ptr [ESI + 0x96],EBX
0070DFA1  89 86 A0 00 00 00         MOV dword ptr [ESI + 0xa0],EAX
0070DFA7  89 9E AC 00 00 00         MOV dword ptr [ESI + 0xac],EBX
0070DFAD  89 BE A8 00 00 00         MOV dword ptr [ESI + 0xa8],EDI
0070DFB3  8B 97 A4 00 00 00         MOV EDX,dword ptr [EDI + 0xa4]
0070DFB9  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0070DFBC  42                        INC EDX
0070DFBD  89 97 A4 00 00 00         MOV dword ptr [EDI + 0xa4],EDX
0070DFC3  E8 C8 27 00 00            CALL 0x00710790
0070DFC8  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0070DFCB  83 C4 04                  ADD ESP,0x4
0070DFCE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070DFD3  8B C6                     MOV EAX,ESI
0070DFD5  5F                        POP EDI
0070DFD6  5E                        POP ESI
0070DFD7  5B                        POP EBX
0070DFD8  8B E5                     MOV ESP,EBP
0070DFDA  5D                        POP EBP
0070DFDB  C3                        RET
LAB_0070dfdc:
0070DFDC  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0070DFDF  68 D0 01 7F 00            PUSH 0x7f01d0
0070DFE4  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070DFE9  56                        PUSH ESI
0070DFEA  53                        PUSH EBX
0070DFEB  68 EF 01 00 00            PUSH 0x1ef
0070DFF0  68 90 01 7F 00            PUSH 0x7f0190
0070DFF5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070DFFB  E8 D0 F4 F9 FF            CALL 0x006ad4d0
0070E000  83 C4 18                  ADD ESP,0x18
0070E003  85 C0                     TEST EAX,EAX
0070E005  74 01                     JZ 0x0070e008
0070E007  CC                        INT3
LAB_0070e008:
0070E008  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070E00B  3B C3                     CMP EAX,EBX
0070E00D  74 06                     JZ 0x0070e015
0070E00F  50                        PUSH EAX
0070E010  E8 7B 7E F9 FF            CALL 0x006a5e90
LAB_0070e015:
0070E015  68 F3 01 00 00            PUSH 0x1f3
0070E01A  68 90 01 7F 00            PUSH 0x7f0190
0070E01F  53                        PUSH EBX
0070E020  56                        PUSH ESI
0070E021  E8 1A 7E F9 FF            CALL 0x006a5e40
0070E026  5F                        POP EDI
0070E027  5E                        POP ESI
0070E028  33 C0                     XOR EAX,EAX
0070E02A  5B                        POP EBX
0070E02B  8B E5                     MOV ESP,EBP
0070E02D  5D                        POP EBP
0070E02E  C3                        RET

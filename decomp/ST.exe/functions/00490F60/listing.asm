FUN_00490f60:
00490F60  55                        PUSH EBP
00490F61  8B EC                     MOV EBP,ESP
00490F63  83 EC 08                  SUB ESP,0x8
00490F66  56                        PUSH ESI
00490F67  8B F1                     MOV ESI,ECX
00490F69  8B 86 5D 04 00 00         MOV EAX,dword ptr [ESI + 0x45d]
00490F6F  83 F8 14                  CMP EAX,0x14
00490F72  75 0A                     JNZ 0x00490f7e
00490F74  8B 8E C2 07 00 00         MOV ECX,dword ptr [ESI + 0x7c2]
00490F7A  85 C9                     TEST ECX,ECX
00490F7C  74 09                     JZ 0x00490f87
LAB_00490f7e:
00490F7E  83 BE 59 04 00 00 78      CMP dword ptr [ESI + 0x459],0x78
00490F85  75 28                     JNZ 0x00490faf
LAB_00490f87:
00490F87  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00490F8C  66 8B 56 30               MOV DX,word ptr [ESI + 0x30]
00490F90  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00490F96  8D 45 F8                  LEA EAX,[EBP + -0x8]
00490F99  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00490F9C  50                        PUSH EAX
00490F9D  6A 14                     PUSH 0x14
00490F9F  8B CE                     MOV ECX,ESI
00490FA1  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
00490FA5  E8 7C 11 F7 FF            CALL 0x00402126
00490FAA  5E                        POP ESI
00490FAB  8B E5                     MOV ESP,EBP
00490FAD  5D                        POP EBP
00490FAE  C3                        RET
LAB_00490faf:
00490FAF  83 F8 14                  CMP EAX,0x14
00490FB2  8B 86 C2 07 00 00         MOV EAX,dword ptr [ESI + 0x7c2]
00490FB8  74 66                     JZ 0x00491020
00490FBA  85 C0                     TEST EAX,EAX
00490FBC  75 5C                     JNZ 0x0049101a
00490FBE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00490FC4  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
00490FC8  57                        PUSH EDI
00490FC9  6A 01                     PUSH 0x1
00490FCB  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00490FD1  6A 02                     PUSH 0x2
00490FD3  6A 01                     PUSH 0x1
00490FD5  6A 00                     PUSH 0x0
00490FD7  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00490FDA  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
00490FDE  E8 AD D2 21 00            CALL 0x006ae290
00490FE3  8D 4E 32                  LEA ECX,[ESI + 0x32]
00490FE6  8B F8                     MOV EDI,EAX
00490FE8  51                        PUSH ECX
00490FE9  57                        PUSH EDI
00490FEA  E8 D1 D1 21 00            CALL 0x006ae1c0
00490FEF  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00490FF2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00490FF8  6A 00                     PUSH 0x0
00490FFA  57                        PUSH EDI
00490FFB  68 FE FF 00 00            PUSH 0xfffe
00491000  52                        PUSH EDX
00491001  E8 89 07 F7 FF            CALL 0x0040178f
00491006  57                        PUSH EDI
00491007  E8 04 D1 21 00            CALL 0x006ae110
0049100C  8D 45 F8                  LEA EAX,[EBP + -0x8]
0049100F  8B CE                     MOV ECX,ESI
00491011  50                        PUSH EAX
00491012  6A 14                     PUSH 0x14
00491014  E8 0D 11 F7 FF            CALL 0x00402126
00491019  5F                        POP EDI
LAB_0049101a:
0049101A  8B 86 C2 07 00 00         MOV EAX,dword ptr [ESI + 0x7c2]
LAB_00491020:
00491020  40                        INC EAX
00491021  89 86 C2 07 00 00         MOV dword ptr [ESI + 0x7c2],EAX
00491027  5E                        POP ESI
00491028  8B E5                     MOV ESP,EBP
0049102A  5D                        POP EBP
0049102B  C3                        RET

SoundClassTy::CheckFader:
00568C50  55                        PUSH EBP
00568C51  8B EC                     MOV EBP,ESP
00568C53  83 EC 4C                  SUB ESP,0x4c
00568C56  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00568C5B  56                        PUSH ESI
00568C5C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00568C5F  57                        PUSH EDI
00568C60  8D 55 B8                  LEA EDX,[EBP + -0x48]
00568C63  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00568C66  6A 00                     PUSH 0x0
00568C68  52                        PUSH EDX
00568C69  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00568C6C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568C72  E8 79 4B 1C 00            CALL 0x0072d7f0
00568C77  83 C4 08                  ADD ESP,0x8
00568C7A  85 C0                     TEST EAX,EAX
00568C7C  0F 85 BC 00 00 00         JNZ 0x00568d3e
00568C82  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00568C85  83 CF FF                  OR EDI,0xffffffff
00568C88  8B 86 FB 0D 00 00         MOV EAX,dword ptr [ESI + 0xdfb]
00568C8E  85 C0                     TEST EAX,EAX
00568C90  75 16                     JNZ 0x00568ca8
00568C92  8B 86 03 0E 00 00         MOV EAX,dword ptr [ESI + 0xe03]
00568C98  85 C0                     TEST EAX,EAX
00568C9A  7C 06                     JL 0x00568ca2
00568C9C  50                        PUSH EAX
00568C9D  E8 FE 8E 15 00            CALL 0x006c1ba0
LAB_00568ca2:
00568CA2  89 BE 03 0E 00 00         MOV dword ptr [ESI + 0xe03],EDI
LAB_00568ca8:
00568CA8  8B 86 03 0E 00 00         MOV EAX,dword ptr [ESI + 0xe03]
00568CAE  85 C0                     TEST EAX,EAX
00568CB0  7C 7D                     JL 0x00568d2f
00568CB2  8D 4D F8                  LEA ECX,[EBP + -0x8]
00568CB5  6A 00                     PUSH 0x0
00568CB7  51                        PUSH ECX
00568CB8  50                        PUSH EAX
00568CB9  E8 42 92 15 00            CALL 0x006c1f00
00568CBE  83 7D F8 01               CMP dword ptr [EBP + -0x8],0x1
00568CC2  75 65                     JNZ 0x00568d29
00568CC4  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
00568CCA  8B 8E FF 0D 00 00         MOV ECX,dword ptr [ESI + 0xdff]
00568CD0  8B BE FB 0D 00 00         MOV EDI,dword ptr [ESI + 0xdfb]
00568CD6  8B D0                     MOV EDX,EAX
00568CD8  2B D1                     SUB EDX,ECX
00568CDA  3B D7                     CMP EDX,EDI
00568CDC  76 1B                     JBE 0x00568cf9
00568CDE  8B 96 03 0E 00 00         MOV EDX,dword ptr [ESI + 0xe03]
00568CE4  52                        PUSH EDX
00568CE5  E8 B6 8E 15 00            CALL 0x006c1ba0
00568CEA  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00568CED  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568CF3  5F                        POP EDI
00568CF4  5E                        POP ESI
00568CF5  8B E5                     MOV ESP,EBP
00568CF7  5D                        POP EBP
00568CF8  C3                        RET
LAB_00568cf9:
00568CF9  8B 0D 0A 73 80 00         MOV ECX,dword ptr [0x0080730a]
00568CFF  8D 81 A0 0F 00 00         LEA EAX,[ECX + 0xfa0]
00568D05  0F AF C2                  IMUL EAX,EDX
00568D08  99                        CDQ
00568D09  F7 FF                     IDIV EDI
00568D0B  2B C8                     SUB ECX,EAX
00568D0D  8B 86 03 0E 00 00         MOV EAX,dword ptr [ESI + 0xe03]
00568D13  51                        PUSH ECX
00568D14  50                        PUSH EAX
00568D15  E8 C6 8F 15 00            CALL 0x006c1ce0
00568D1A  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00568D1D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568D23  5F                        POP EDI
00568D24  5E                        POP ESI
00568D25  8B E5                     MOV ESP,EBP
00568D27  5D                        POP EBP
00568D28  C3                        RET
LAB_00568d29:
00568D29  89 BE 03 0E 00 00         MOV dword ptr [ESI + 0xe03],EDI
LAB_00568d2f:
00568D2F  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00568D32  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568D38  5F                        POP EDI
00568D39  5E                        POP ESI
00568D3A  8B E5                     MOV ESP,EBP
00568D3C  5D                        POP EBP
00568D3D  C3                        RET
LAB_00568d3e:
00568D3E  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00568D41  68 18 98 7C 00            PUSH 0x7c9818
00568D46  68 CC 4C 7A 00            PUSH 0x7a4ccc
00568D4B  50                        PUSH EAX
00568D4C  6A 00                     PUSH 0x0
00568D4E  68 05 02 00 00            PUSH 0x205
00568D53  68 FC 97 7C 00            PUSH 0x7c97fc
00568D58  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00568D5E  E8 6D 47 14 00            CALL 0x006ad4d0
00568D63  83 C4 18                  ADD ESP,0x18
00568D66  85 C0                     TEST EAX,EAX
00568D68  74 01                     JZ 0x00568d6b
00568D6A  CC                        INT3
LAB_00568d6b:
00568D6B  5F                        POP EDI
00568D6C  5E                        POP ESI
00568D6D  8B E5                     MOV ESP,EBP
00568D6F  5D                        POP EBP
00568D70  C3                        RET

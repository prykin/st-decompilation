HelpPanelTy::IndexBut:
00513A40  55                        PUSH EBP
00513A41  8B EC                     MOV EBP,ESP
00513A43  83 EC 48                  SUB ESP,0x48
00513A46  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00513A4B  53                        PUSH EBX
00513A4C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00513A4F  33 DB                     XOR EBX,EBX
00513A51  56                        PUSH ESI
00513A52  8D 55 BC                  LEA EDX,[EBP + -0x44]
00513A55  8D 4D B8                  LEA ECX,[EBP + -0x48]
00513A58  53                        PUSH EBX
00513A59  52                        PUSH EDX
00513A5A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00513A5D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00513A63  E8 88 9D 21 00            CALL 0x0072d7f0
00513A68  8B F0                     MOV ESI,EAX
00513A6A  83 C4 08                  ADD ESP,0x8
00513A6D  3B F3                     CMP ESI,EBX
00513A6F  0F 85 AB 00 00 00         JNZ 0x00513b20
00513A75  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00513A78  8A 86 A1 01 00 00         MOV AL,byte ptr [ESI + 0x1a1]
00513A7E  3A C3                     CMP AL,BL
00513A80  74 16                     JZ 0x00513a98
00513A82  3C 06                     CMP AL,0x6
00513A84  74 12                     JZ 0x00513a98
00513A86  3C 0A                     CMP AL,0xa
00513A88  74 0E                     JZ 0x00513a98
00513A8A  88 9E A2 01 00 00         MOV byte ptr [ESI + 0x1a2],BL
00513A90  89 9E AB 01 00 00         MOV dword ptr [ESI + 0x1ab],EBX
00513A96  EB 12                     JMP 0x00513aaa
LAB_00513a98:
00513A98  88 86 A2 01 00 00         MOV byte ptr [ESI + 0x1a2],AL
00513A9E  8B 86 A3 01 00 00         MOV EAX,dword ptr [ESI + 0x1a3]
00513AA4  89 86 AB 01 00 00         MOV dword ptr [ESI + 0x1ab],EAX
LAB_00513aaa:
00513AAA  8B 8E DC 01 00 00         MOV ECX,dword ptr [ESI + 0x1dc]
00513AB0  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
00513AB3  68 18 01 00 00            PUSH 0x118
00513AB8  68 B8 01 00 00            PUSH 0x1b8
00513ABD  6A 16                     PUSH 0x16
00513ABF  6A 21                     PUSH 0x21
00513AC1  53                        PUSH EBX
00513AC2  51                        PUSH ECX
00513AC3  6A 16                     PUSH 0x16
00513AC5  6A 21                     PUSH 0x21
00513AC7  53                        PUSH EBX
00513AC8  52                        PUSH EDX
00513AC9  C6 86 A1 01 00 00 0A      MOV byte ptr [ESI + 0x1a1],0xa
00513AD0  89 9E A3 01 00 00         MOV dword ptr [ESI + 0x1a3],EBX
00513AD6  E8 15 1B 1A 00            CALL 0x006b55f0
00513ADB  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
00513AE1  3B C3                     CMP EAX,EBX
00513AE3  74 26                     JZ 0x00513b0b
00513AE5  C7 46 28 02 42 00 00      MOV dword ptr [ESI + 0x28],0x4202
00513AEC  66 89 5E 2C               MOV word ptr [ESI + 0x2c],BX
00513AF0  66 C7 46 2E 02 00         MOV word ptr [ESI + 0x2e],0x2
00513AF6  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
00513AF9  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
00513AFF  3B CB                     CMP ECX,EBX
00513B01  74 08                     JZ 0x00513b0b
00513B03  8B 01                     MOV EAX,dword ptr [ECX]
00513B05  8D 56 18                  LEA EDX,[ESI + 0x18]
00513B08  52                        PUSH EDX
00513B09  FF 10                     CALL dword ptr [EAX]
LAB_00513b0b:
00513B0B  8B CE                     MOV ECX,ESI
00513B0D  E8 BB DF EE FF            CALL 0x00401acd
00513B12  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00513B15  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00513B1A  5E                        POP ESI
00513B1B  5B                        POP EBX
00513B1C  8B E5                     MOV ESP,EBP
00513B1E  5D                        POP EBP
00513B1F  C3                        RET
LAB_00513b20:
00513B20  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00513B23  68 9C 3A 7C 00            PUSH 0x7c3a9c
00513B28  68 CC 4C 7A 00            PUSH 0x7a4ccc
00513B2D  56                        PUSH ESI
00513B2E  53                        PUSH EBX
00513B2F  68 C0 02 00 00            PUSH 0x2c0
00513B34  68 3C 38 7C 00            PUSH 0x7c383c
00513B39  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00513B3F  E8 8C 99 19 00            CALL 0x006ad4d0
00513B44  83 C4 18                  ADD ESP,0x18
00513B47  85 C0                     TEST EAX,EAX
00513B49  74 01                     JZ 0x00513b4c
00513B4B  CC                        INT3
LAB_00513b4c:
00513B4C  68 C0 02 00 00            PUSH 0x2c0
00513B51  68 3C 38 7C 00            PUSH 0x7c383c
00513B56  53                        PUSH EBX
00513B57  56                        PUSH ESI
00513B58  E8 E3 22 19 00            CALL 0x006a5e40
00513B5D  5E                        POP ESI
00513B5E  5B                        POP EBX
00513B5F  8B E5                     MOV ESP,EBP
00513B61  5D                        POP EBP
00513B62  C3                        RET

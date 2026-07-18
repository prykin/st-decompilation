FUN_00543ad0:
00543AD0  55                        PUSH EBP
00543AD1  8B EC                     MOV EBP,ESP
00543AD3  83 EC 48                  SUB ESP,0x48
00543AD6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00543ADB  53                        PUSH EBX
00543ADC  56                        PUSH ESI
00543ADD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00543AE0  57                        PUSH EDI
00543AE1  8D 55 BC                  LEA EDX,[EBP + -0x44]
00543AE4  8D 4D B8                  LEA ECX,[EBP + -0x48]
00543AE7  6A 00                     PUSH 0x0
00543AE9  52                        PUSH EDX
00543AEA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00543AED  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00543AF3  E8 F8 9C 1E 00            CALL 0x0072d7f0
00543AF8  83 C4 08                  ADD ESP,0x8
00543AFB  85 C0                     TEST EAX,EAX
00543AFD  0F 85 E1 00 00 00         JNZ 0x00543be4
00543B03  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00543B06  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00543B09  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00543B0C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00543B0F  8B CB                     MOV ECX,EBX
00543B11  8D 7E 18                  LEA EDI,[ESI + 0x18]
00543B14  F7 D9                     NEG ECX
00543B16  89 8E B9 00 00 00         MOV dword ptr [ESI + 0xb9],ECX
00543B1C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00543B1F  F7 DA                     NEG EDX
00543B21  6A FF                     PUSH -0x1
00543B23  89 86 A9 00 00 00         MOV dword ptr [ESI + 0xa9],EAX
00543B29  8B 07                     MOV EAX,dword ptr [EDI]
00543B2B  89 96 BD 00 00 00         MOV dword ptr [ESI + 0xbd],EDX
00543B31  8B 15 84 67 80 00         MOV EDX,dword ptr [0x00806784]
00543B37  51                        PUSH ECX
00543B38  6A 00                     PUSH 0x0
00543B3A  6A 07                     PUSH 0x7
00543B3C  52                        PUSH EDX
00543B3D  8B CF                     MOV ECX,EDI
00543B3F  FF 50 04                  CALL dword ptr [EAX + 0x4]
00543B42  8B 46 69                  MOV EAX,dword ptr [ESI + 0x69]
00543B45  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00543B48  51                        PUSH ECX
00543B49  8B 8E AD 00 00 00         MOV ECX,dword ptr [ESI + 0xad]
00543B4F  8D 50 2D                  LEA EDX,[EAX + 0x2d]
00543B52  53                        PUSH EBX
00543B53  0F BF 40 23               MOVSX EAX,word ptr [EAX + 0x23]
00543B57  6A 00                     PUSH 0x0
00543B59  68 00 00 00 08            PUSH 0x8000000
00543B5E  52                        PUSH EDX
00543B5F  50                        PUSH EAX
00543B60  51                        PUSH ECX
00543B61  E8 6A 4A 17 00            CALL 0x006b85d0
00543B66  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00543B69  89 56 58                  MOV dword ptr [ESI + 0x58],EDX
00543B6C  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00543B6F  83 F8 FF                  CMP EAX,-0x1
00543B72  74 14                     JZ 0x00543b88
00543B74  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00543B77  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
00543B7A  51                        PUSH ECX
00543B7B  52                        PUSH EDX
00543B7C  6A FE                     PUSH -0x2
00543B7E  50                        PUSH EAX
00543B7F  8B 47 48                  MOV EAX,dword ptr [EDI + 0x48]
00543B82  50                        PUSH EAX
00543B83  E8 48 F9 16 00            CALL 0x006b34d0
LAB_00543b88:
00543B88  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00543B8B  85 C0                     TEST EAX,EAX
00543B8D  7D 0D                     JGE 0x00543b9c
00543B8F  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
00543B92  2B CB                     SUB ECX,EBX
00543B94  89 8E B1 00 00 00         MOV dword ptr [ESI + 0xb1],ECX
00543B9A  EB 08                     JMP 0x00543ba4
LAB_00543b9c:
00543B9C  2B C3                     SUB EAX,EBX
00543B9E  89 86 B1 00 00 00         MOV dword ptr [ESI + 0xb1],EAX
LAB_00543ba4:
00543BA4  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00543BA7  85 C0                     TEST EAX,EAX
00543BA9  7D 1F                     JGE 0x00543bca
00543BAB  8B 56 40                  MOV EDX,dword ptr [ESI + 0x40]
00543BAE  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00543BB1  2B D0                     SUB EDX,EAX
00543BB3  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00543BB6  89 96 B5 00 00 00         MOV dword ptr [ESI + 0xb5],EDX
00543BBC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00543BC1  5F                        POP EDI
00543BC2  5E                        POP ESI
00543BC3  5B                        POP EBX
00543BC4  8B E5                     MOV ESP,EBP
00543BC6  5D                        POP EBP
00543BC7  C2 1C 00                  RET 0x1c
LAB_00543bca:
00543BCA  2B 45 18                  SUB EAX,dword ptr [EBP + 0x18]
00543BCD  89 86 B5 00 00 00         MOV dword ptr [ESI + 0xb5],EAX
00543BD3  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00543BD6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00543BDB  5F                        POP EDI
00543BDC  5E                        POP ESI
00543BDD  5B                        POP EBX
00543BDE  8B E5                     MOV ESP,EBP
00543BE0  5D                        POP EBP
00543BE1  C2 1C 00                  RET 0x1c
LAB_00543be4:
00543BE4  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00543BE7  68 28 7E 7C 00            PUSH 0x7c7e28
00543BEC  68 CC 4C 7A 00            PUSH 0x7a4ccc
00543BF1  50                        PUSH EAX
00543BF2  6A 00                     PUSH 0x0
00543BF4  68 A8 00 00 00            PUSH 0xa8
00543BF9  68 60 7D 7C 00            PUSH 0x7c7d60
00543BFE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00543C04  E8 C7 98 16 00            CALL 0x006ad4d0
00543C09  83 C4 18                  ADD ESP,0x18
00543C0C  85 C0                     TEST EAX,EAX
00543C0E  74 01                     JZ 0x00543c11
00543C10  CC                        INT3
LAB_00543c11:
00543C11  68 A9 00 00 00            PUSH 0xa9
00543C16  68 60 7D 7C 00            PUSH 0x7c7d60
00543C1B  6A 00                     PUSH 0x0
00543C1D  6A CC                     PUSH -0x34
00543C1F  E8 1C 22 16 00            CALL 0x006a5e40
00543C24  5F                        POP EDI
00543C25  5E                        POP ESI
00543C26  5B                        POP EBX
00543C27  8B E5                     MOV ESP,EBP
00543C29  5D                        POP EBP
00543C2A  C2 1C 00                  RET 0x1c

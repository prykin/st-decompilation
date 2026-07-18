FUN_0068eb30:
0068EB30  55                        PUSH EBP
0068EB31  8B EC                     MOV EBP,ESP
0068EB33  83 EC 48                  SUB ESP,0x48
0068EB36  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0068EB3B  56                        PUSH ESI
0068EB3C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0068EB3F  57                        PUSH EDI
0068EB40  8D 55 BC                  LEA EDX,[EBP + -0x44]
0068EB43  8D 4D B8                  LEA ECX,[EBP + -0x48]
0068EB46  6A 00                     PUSH 0x0
0068EB48  52                        PUSH EDX
0068EB49  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0068EB4C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068EB52  E8 99 EC 09 00            CALL 0x0072d7f0
0068EB57  8B F0                     MOV ESI,EAX
0068EB59  83 C4 08                  ADD ESP,0x8
0068EB5C  85 F6                     TEST ESI,ESI
0068EB5E  0F 85 81 00 00 00         JNZ 0x0068ebe5
0068EB64  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0068EB67  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0068EB6A  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
0068EB6D  66 8B 46 0C               MOV AX,word ptr [ESI + 0xc]
0068EB71  66 3D FF FF               CMP AX,0xffff
0068EB75  74 0A                     JZ 0x0068eb81
0068EB77  50                        PUSH EAX
0068EB78  8B CF                     MOV ECX,EDI
0068EB7A  E8 A2 62 D7 FF            CALL 0x00404e21
0068EB7F  EB 03                     JMP 0x0068eb84
LAB_0068eb81:
0068EB81  83 C8 FF                  OR EAX,0xffffffff
LAB_0068eb84:
0068EB84  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0068EB87  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
0068EB8A  66 8B 47 7C               MOV AX,word ptr [EDI + 0x7c]
0068EB8E  C7 46 34 FF FF FF FF      MOV dword ptr [ESI + 0x34],0xffffffff
0068EB95  66 40                     INC AX
0068EB97  56                        PUSH ESI
0068EB98  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0068EB9B  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
0068EB9E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0068EBA1  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0068EBA4  D1 E2                     SHL EDX,0x1
0068EBA6  66 01 56 06               ADD word ptr [ESI + 0x6],DX
0068EBAA  8B 87 2C 01 00 00         MOV EAX,dword ptr [EDI + 0x12c]
0068EBB0  89 46 3A                  MOV dword ptr [ESI + 0x3a],EAX
0068EBB3  8B 8F BD 00 00 00         MOV ECX,dword ptr [EDI + 0xbd]
0068EBB9  51                        PUSH ECX
0068EBBA  E8 01 F6 01 00            CALL 0x006ae1c0
0068EBBF  8B 97 BD 00 00 00         MOV EDX,dword ptr [EDI + 0xbd]
0068EBC5  68 2D 24 40 00            PUSH 0x40242d
0068EBCA  52                        PUSH EDX
0068EBCB  E8 D8 5D D7 FF            CALL 0x004049a8
0068EBD0  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0068EBD3  83 C4 08                  ADD ESP,0x8
0068EBD6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068EBDB  33 C0                     XOR EAX,EAX
0068EBDD  5F                        POP EDI
0068EBDE  5E                        POP ESI
0068EBDF  8B E5                     MOV ESP,EBP
0068EBE1  5D                        POP EBP
0068EBE2  C2 0C 00                  RET 0xc
LAB_0068ebe5:
0068EBE5  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0068EBE8  68 30 57 7D 00            PUSH 0x7d5730
0068EBED  68 CC 4C 7A 00            PUSH 0x7a4ccc
0068EBF2  56                        PUSH ESI
0068EBF3  6A 00                     PUSH 0x0
0068EBF5  68 A2 01 00 00            PUSH 0x1a2
0068EBFA  68 E0 56 7D 00            PUSH 0x7d56e0
0068EBFF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068EC05  E8 C6 E8 01 00            CALL 0x006ad4d0
0068EC0A  83 C4 18                  ADD ESP,0x18
0068EC0D  85 C0                     TEST EAX,EAX
0068EC0F  74 01                     JZ 0x0068ec12
0068EC11  CC                        INT3
LAB_0068ec12:
0068EC12  68 A3 01 00 00            PUSH 0x1a3
0068EC17  68 E0 56 7D 00            PUSH 0x7d56e0
0068EC1C  6A 00                     PUSH 0x0
0068EC1E  56                        PUSH ESI
0068EC1F  E8 1C 72 01 00            CALL 0x006a5e40
0068EC24  8B C6                     MOV EAX,ESI
0068EC26  5F                        POP EDI
0068EC27  5E                        POP ESI
0068EC28  8B E5                     MOV ESP,EBP
0068EC2A  5D                        POP EBP
0068EC2B  C2 0C 00                  RET 0xc

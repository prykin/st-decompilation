FUN_0072fe00:
0072FE00  55                        PUSH EBP
0072FE01  8B EC                     MOV EBP,ESP
0072FE03  83 EC 14                  SUB ESP,0x14
LAB_0072fe06:
0072FE06  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0072FE0D  7E 17                     JLE 0x0072fe26
0072FE0F  6A 08                     PUSH 0x8
0072FE11  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072FE14  33 C9                     XOR ECX,ECX
0072FE16  8A 08                     MOV CL,byte ptr [EAX]
0072FE18  51                        PUSH ECX
0072FE19  E8 F2 07 00 00            CALL 0x00730610
0072FE1E  83 C4 08                  ADD ESP,0x8
0072FE21  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0072FE24  EB 19                     JMP 0x0072fe3f
LAB_0072fe26:
0072FE26  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072FE29  33 C0                     XOR EAX,EAX
0072FE2B  8A 02                     MOV AL,byte ptr [EDX]
0072FE2D  8B 0D 80 12 7F 00         MOV ECX,dword ptr [0x007f1280]
0072FE33  33 D2                     XOR EDX,EDX
0072FE35  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
0072FE39  83 E2 08                  AND EDX,0x8
0072FE3C  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_0072fe3f:
0072FE3F  83 7D F0 00               CMP dword ptr [EBP + -0x10],0x0
0072FE43  74 0B                     JZ 0x0072fe50
0072FE45  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072FE48  83 C0 01                  ADD EAX,0x1
0072FE4B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0072FE4E  EB B6                     JMP 0x0072fe06
LAB_0072fe50:
0072FE50  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072FE53  33 D2                     XOR EDX,EDX
0072FE55  8A 11                     MOV DL,byte ptr [ECX]
0072FE57  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0072FE5A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072FE5D  83 C0 01                  ADD EAX,0x1
0072FE60  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0072FE63  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072FE66  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0072FE69  83 7D FC 2D               CMP dword ptr [EBP + -0x4],0x2d
0072FE6D  74 06                     JZ 0x0072fe75
0072FE6F  83 7D FC 2B               CMP dword ptr [EBP + -0x4],0x2b
0072FE73  75 13                     JNZ 0x0072fe88
LAB_0072fe75:
0072FE75  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072FE78  33 C0                     XOR EAX,EAX
0072FE7A  8A 02                     MOV AL,byte ptr [EDX]
0072FE7C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072FE7F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072FE82  83 C1 01                  ADD ECX,0x1
0072FE85  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_0072fe88:
0072FE88  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0072fe8f:
0072FE8F  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0072FE96  7E 13                     JLE 0x0072feab
0072FE98  6A 04                     PUSH 0x4
0072FE9A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072FE9D  52                        PUSH EDX
0072FE9E  E8 6D 07 00 00            CALL 0x00730610
0072FEA3  83 C4 08                  ADD ESP,0x8
0072FEA6  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0072FEA9  EB 15                     JMP 0x0072fec0
LAB_0072feab:
0072FEAB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072FEAE  8B 0D 80 12 7F 00         MOV ECX,dword ptr [0x007f1280]
0072FEB4  33 D2                     XOR EDX,EDX
0072FEB6  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
0072FEBA  83 E2 04                  AND EDX,0x4
0072FEBD  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_0072fec0:
0072FEC0  83 7D EC 00               CMP dword ptr [EBP + -0x14],0x0
0072FEC4  74 25                     JZ 0x0072feeb
0072FEC6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072FEC9  6B C0 0A                  IMUL EAX,EAX,0xa
0072FECC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072FECF  8D 54 08 D0               LEA EDX,[EAX + ECX*0x1 + -0x30]
0072FED3  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0072FED6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072FED9  33 C9                     XOR ECX,ECX
0072FEDB  8A 08                     MOV CL,byte ptr [EAX]
0072FEDD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0072FEE0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072FEE3  83 C2 01                  ADD EDX,0x1
0072FEE6  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0072FEE9  EB A4                     JMP 0x0072fe8f
LAB_0072feeb:
0072FEEB  83 7D F4 2D               CMP dword ptr [EBP + -0xc],0x2d
0072FEEF  75 07                     JNZ 0x0072fef8
0072FEF1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072FEF4  F7 D8                     NEG EAX
0072FEF6  EB 03                     JMP 0x0072fefb
LAB_0072fef8:
0072FEF8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_0072fefb:
0072FEFB  8B E5                     MOV ESP,EBP
0072FEFD  5D                        POP EBP
0072FEFE  C3                        RET

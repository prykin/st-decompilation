FUN_00667d90:
00667D90  55                        PUSH EBP
00667D91  8B EC                     MOV EBP,ESP
00667D93  83 EC 50                  SUB ESP,0x50
00667D96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00667D9B  53                        PUSH EBX
00667D9C  56                        PUSH ESI
00667D9D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00667DA0  57                        PUSH EDI
00667DA1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00667DA4  8D 4D B0                  LEA ECX,[EBP + -0x50]
00667DA7  6A 00                     PUSH 0x0
00667DA9  52                        PUSH EDX
00667DAA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00667DAD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00667DB3  E8 38 5A 0C 00            CALL 0x0072d7f0
00667DB8  8B F0                     MOV ESI,EAX
00667DBA  83 C4 08                  ADD ESP,0x8
00667DBD  85 F6                     TEST ESI,ESI
00667DBF  0F 85 67 02 00 00         JNZ 0x0066802c
00667DC5  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00667DCA  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00667DCD  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00667DD0  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00667DD6  89 8E 80 02 00 00         MOV dword ptr [ESI + 0x280],ECX
00667DDC  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
00667DDF  3D 11 01 00 00            CMP EAX,0x111
00667DE4  0F 87 FD 01 00 00         JA 0x00667fe7
00667DEA  0F 84 EE 01 00 00         JZ 0x00667fde
00667DF0  83 F8 03                  CMP EAX,0x3
00667DF3  0F 87 A3 01 00 00         JA 0x00667f9c
00667DF9  0F 84 86 01 00 00         JZ 0x00667f85
00667DFF  83 E8 00                  SUB EAX,0x0
00667E02  0F 84 4A 01 00 00         JZ 0x00667f52
00667E08  83 E8 02                  SUB EAX,0x2
00667E0B  0F 85 FF 01 00 00         JNZ 0x00668010
00667E11  8B 7B 14                  MOV EDI,dword ptr [EBX + 0x14]
00667E14  85 FF                     TEST EDI,EDI
00667E16  75 18                     JNZ 0x00667e30
00667E18  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00667E1E  68 70 0E 00 00            PUSH 0xe70
00667E23  68 80 2B 7D 00            PUSH 0x7d2b80
00667E28  52                        PUSH EDX
00667E29  6A FA                     PUSH -0x6
00667E2B  E8 10 E0 03 00            CALL 0x006a5e40
LAB_00667e30:
00667E30  57                        PUSH EDI
00667E31  8B CE                     MOV ECX,ESI
00667E33  E8 25 A3 D9 FF            CALL 0x0040215d
00667E38  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00667E3B  85 C0                     TEST EAX,EAX
00667E3D  75 0A                     JNZ 0x00667e49
00667E3F  A1 54 87 80 00            MOV EAX,[0x00808754]
00667E44  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00667E47  EB 09                     JMP 0x00667e52
LAB_00667e49:
00667E49  8B 8E 86 00 00 00         MOV ECX,dword ptr [ESI + 0x86]
00667E4F  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
LAB_00667e52:
00667E52  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00667E55  85 C0                     TEST EAX,EAX
00667E57  0F 85 BD 00 00 00         JNZ 0x00667f1a
00667E5D  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00667E60  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00667E66  6A 00                     PUSH 0x0
00667E68  6A 01                     PUSH 0x1
00667E6A  52                        PUSH EDX
00667E6B  E8 27 A0 D9 FF            CALL 0x00401e97
00667E70  8B CE                     MOV ECX,ESI
00667E72  66 89 46 7D               MOV word ptr [ESI + 0x7d],AX
00667E76  E8 C2 CC D9 FF            CALL 0x00404b3d
00667E7B  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00667E7E  33 D2                     XOR EDX,EDX
00667E80  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00667E86  05 39 30 00 00            ADD EAX,0x3039
00667E8B  68 CF 13 40 00            PUSH 0x4013cf
00667E90  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00667E93  C1 E8 10                  SHR EAX,0x10
00667E96  83 E0 07                  AND EAX,0x7
00667E99  83 C0 08                  ADD EAX,0x8
00667E9C  89 86 8B 00 00 00         MOV dword ptr [ESI + 0x8b],EAX
00667EA2  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00667EA5  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00667EAB  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00667EB1  B9 1A 00 00 00            MOV ECX,0x1a
00667EB6  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00667EB9  C1 E8 10                  SHR EAX,0x10
00667EBC  F7 F1                     DIV ECX
00667EBE  83 C2 19                  ADD EDX,0x19
00667EC1  89 96 FB 01 00 00         MOV dword ptr [ESI + 0x1fb],EDX
00667EC7  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00667ECA  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00667ED0  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00667ED6  33 D2                     XOR EDX,EDX
00667ED8  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00667EDB  C1 E8 10                  SHR EAX,0x10
00667EDE  F7 F1                     DIV ECX
00667EE0  83 C2 19                  ADD EDX,0x19
00667EE3  89 96 03 02 00 00         MOV dword ptr [ESI + 0x203],EDX
00667EE9  8B 96 0B 02 00 00         MOV EDX,dword ptr [ESI + 0x20b]
00667EEF  52                        PUSH EDX
00667EF0  E8 B3 CA D9 FF            CALL 0x004049a8
00667EF5  8B 86 2F 02 00 00         MOV EAX,dword ptr [ESI + 0x22f]
00667EFB  8B 96 23 02 00 00         MOV EDX,dword ptr [ESI + 0x223]
00667F01  83 C4 08                  ADD ESP,0x8
00667F04  66 8B 48 0C               MOV CX,word ptr [EAX + 0xc]
00667F08  66 89 8E 70 01 00 00      MOV word ptr [ESI + 0x170],CX
00667F0F  66 8B 42 0C               MOV AX,word ptr [EDX + 0xc]
00667F13  66 89 86 27 01 00 00      MOV word ptr [ESI + 0x127],AX
LAB_00667f1a:
00667F1A  66 8B 46 7D               MOV AX,word ptr [ESI + 0x7d]
00667F1E  66 3D FE FF               CMP AX,0xfffe
00667F22  74 16                     JZ 0x00667f3a
00667F24  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00667F2A  85 C9                     TEST ECX,ECX
00667F2C  74 0C                     JZ 0x00667f3a
00667F2E  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00667F31  50                        PUSH EAX
00667F32  52                        PUSH EDX
00667F33  E8 C1 DD D9 FF            CALL 0x00405cf9
00667F38  EB 02                     JMP 0x00667f3c
LAB_00667f3a:
00667F3A  33 C0                     XOR EAX,EAX
LAB_00667f3c:
00667F3C  85 C0                     TEST EAX,EAX
00667F3E  0F 84 CC 00 00 00         JZ 0x00668010
00667F44  6A 01                     PUSH 0x1
00667F46  8B C8                     MOV ECX,EAX
00667F48  E8 F3 C3 D9 FF            CALL 0x00404340
00667F4D  E9 BE 00 00 00            JMP 0x00668010
LAB_00667f52:
00667F52  8B 86 93 00 00 00         MOV EAX,dword ptr [ESI + 0x93]
00667F58  85 C0                     TEST EAX,EAX
00667F5A  75 16                     JNZ 0x00667f72
00667F5C  8B CE                     MOV ECX,ESI
00667F5E  C7 86 93 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0x93],0x1
00667F68  E8 89 95 D9 FF            CALL 0x004014f6
00667F6D  E9 9E 00 00 00            JMP 0x00668010
LAB_00667f72:
00667F72  8B CE                     MOV ECX,ESI
00667F74  E8 FF C7 D9 FF            CALL 0x00404778
00667F79  8B CE                     MOV ECX,ESI
00667F7B  E8 0E AD D9 FF            CALL 0x00402c8e
00667F80  E9 8B 00 00 00            JMP 0x00668010
LAB_00667f85:
00667F85  8B CE                     MOV ECX,ESI
00667F87  E8 53 9D D9 FF            CALL 0x00401cdf
00667F8C  8B CE                     MOV ECX,ESI
00667F8E  E8 AE CC D9 FF            CALL 0x00404c41
00667F93  8B CE                     MOV ECX,ESI
00667F95  E8 72 A2 D9 FF            CALL 0x0040220c
00667F9A  EB 74                     JMP 0x00668010
LAB_00667f9c:
00667F9C  3D 0F 01 00 00            CMP EAX,0x10f
00667FA1  75 6D                     JNZ 0x00668010
00667FA3  8D 45 FC                  LEA EAX,[EBP + -0x4]
00667FA6  8B CE                     MOV ECX,ESI
00667FA8  50                        PUSH EAX
00667FA9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00667FB0  E8 84 AC D9 FF            CALL 0x00402c39
00667FB5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00667FB8  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00667FBB  51                        PUSH ECX
00667FBC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00667FC2  50                        PUSH EAX
00667FC3  52                        PUSH EDX
00667FC4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00667FC7  E8 2D A6 D9 FF            CALL 0x004025f9
00667FCC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00667FCF  85 C0                     TEST EAX,EAX
00667FD1  74 3D                     JZ 0x00668010
00667FD3  8D 45 F8                  LEA EAX,[EBP + -0x8]
00667FD6  50                        PUSH EAX
00667FD7  E8 84 30 04 00            CALL 0x006ab060
00667FDC  EB 32                     JMP 0x00668010
LAB_00667fde:
00667FDE  8B CE                     MOV ECX,ESI
00667FE0  E8 58 CB D9 FF            CALL 0x00404b3d
00667FE5  EB 29                     JMP 0x00668010
LAB_00667fe7:
00667FE7  2D 95 5D 00 00            SUB EAX,0x5d95
00667FEC  74 18                     JZ 0x00668006
00667FEE  48                        DEC EAX
00667FEF  74 0B                     JZ 0x00667ffc
00667FF1  83 E8 03                  SUB EAX,0x3
00667FF4  75 1A                     JNZ 0x00668010
00667FF6  66 C7 43 14 01 00         MOV word ptr [EBX + 0x14],0x1
LAB_00667ffc:
00667FFC  53                        PUSH EBX
00667FFD  8B CE                     MOV ECX,ESI
00667FFF  E8 18 BA D9 FF            CALL 0x00403a1c
00668004  EB 0A                     JMP 0x00668010
LAB_00668006:
00668006  C7 86 A7 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0xa7],0x1
LAB_00668010:
00668010  53                        PUSH EBX
00668011  8B CE                     MOV ECX,ESI
00668013  E8 B8 DF 07 00            CALL 0x006e5fd0
00668018  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0066801B  33 C0                     XOR EAX,EAX
0066801D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00668023  5F                        POP EDI
00668024  5E                        POP ESI
00668025  5B                        POP EBX
00668026  8B E5                     MOV ESP,EBP
00668028  5D                        POP EBP
00668029  C2 04 00                  RET 0x4
LAB_0066802c:
0066802C  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0066802F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00668032  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00668038  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0066803B  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0066803E  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
00668041  51                        PUSH ECX
00668042  50                        PUSH EAX
00668043  68 7C 2C 7D 00            PUSH 0x7d2c7c
00668048  56                        PUSH ESI
00668049  6A 00                     PUSH 0x0
0066804B  68 CA 0E 00 00            PUSH 0xeca
00668050  68 80 2B 7D 00            PUSH 0x7d2b80
00668055  E8 76 54 04 00            CALL 0x006ad4d0
0066805A  83 C4 1C                  ADD ESP,0x1c
0066805D  85 C0                     TEST EAX,EAX
0066805F  74 01                     JZ 0x00668062
00668061  CC                        INT3
LAB_00668062:
00668062  68 CB 0E 00 00            PUSH 0xecb
00668067  68 80 2B 7D 00            PUSH 0x7d2b80
0066806C  6A 00                     PUSH 0x0
0066806E  56                        PUSH ESI
0066806F  E8 CC DD 03 00            CALL 0x006a5e40
00668074  5F                        POP EDI
00668075  5E                        POP ESI
00668076  B8 FF FF 00 00            MOV EAX,0xffff
0066807B  5B                        POP EBX
0066807C  8B E5                     MOV ESP,EBP
0066807E  5D                        POP EBP
0066807F  C2 04 00                  RET 0x4

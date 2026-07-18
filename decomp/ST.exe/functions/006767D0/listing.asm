FUN_006767d0:
006767D0  55                        PUSH EBP
006767D1  8B EC                     MOV EBP,ESP
006767D3  81 EC 4C 01 00 00         SUB ESP,0x14c
006767D9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006767DE  56                        PUSH ESI
006767DF  57                        PUSH EDI
006767E0  8D 55 BC                  LEA EDX,[EBP + -0x44]
006767E3  8D 4D B8                  LEA ECX,[EBP + -0x48]
006767E6  6A 00                     PUSH 0x0
006767E8  52                        PUSH EDX
006767E9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006767F0  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006767F3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006767F9  E8 F2 6F 0B 00            CALL 0x0072d7f0
006767FE  8B F0                     MOV ESI,EAX
00676800  83 C4 08                  ADD ESP,0x8
00676803  85 F6                     TEST ESI,ESI
00676805  0F 85 A5 00 00 00         JNZ 0x006768b0
0067680B  A1 C4 D6 79 00            MOV EAX,[0x0079d6c4]
00676810  8B 0D C0 D6 79 00         MOV ECX,dword ptr [0x0079d6c0]
00676816  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
0067681C  50                        PUSH EAX
0067681D  68 DD 7D 80 00            PUSH 0x807ddd
00676822  51                        PUSH ECX
00676823  68 80 76 80 00            PUSH 0x807680
00676828  8D 95 B4 FE FF FF         LEA EDX,[EBP + 0xfffffeb4]
0067682E  68 EC A1 7C 00            PUSH 0x7ca1ec
00676833  52                        PUSH EDX
00676834  FF D7                     CALL EDI
00676836  56                        PUSH ESI
00676837  56                        PUSH ESI
00676838  8D 85 B4 FE FF FF         LEA EAX,[EBP + 0xfffffeb4]
0067683E  6A 02                     PUSH 0x2
00676840  50                        PUSH EAX
00676841  68 45 03 00 00            PUSH 0x345
00676846  E8 75 A6 07 00            CALL 0x006f0ec0
0067684B  8B 0D 2A C5 80 00         MOV ECX,dword ptr [0x0080c52a]
00676851  33 D2                     XOR EDX,EDX
00676853  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00676859  8B F0                     MOV ESI,EAX
0067685B  A1 C8 D6 79 00            MOV EAX,[0x0079d6c8]
00676860  51                        PUSH ECX
00676861  52                        PUSH EDX
00676862  50                        PUSH EAX
00676863  8D 8D B4 FE FF FF         LEA ECX,[EBP + 0xfffffeb4]
00676869  68 E8 2D 7D 00            PUSH 0x7d2de8
0067686E  51                        PUSH ECX
0067686F  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00676872  FF D7                     CALL EDI
00676874  83 C4 40                  ADD ESP,0x40
00676877  8D 95 B4 FE FF FF         LEA EDX,[EBP + 0xfffffeb4]
0067687D  8B CE                     MOV ECX,ESI
0067687F  6A 00                     PUSH 0x0
00676881  6A 00                     PUSH 0x0
00676883  6A 00                     PUSH 0x0
00676885  68 F0 27 00 00            PUSH 0x27f0
0067688A  68 22 C5 80 00            PUSH 0x80c522
0067688F  52                        PUSH EDX
00676890  6A 0C                     PUSH 0xc
00676892  E8 59 AB 07 00            CALL 0x006f13f0
00676897  56                        PUSH ESI
00676898  E8 D3 A8 07 00            CALL 0x006f1170
0067689D  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006768A0  83 C4 04                  ADD ESP,0x4
006768A3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006768A8  33 C0                     XOR EAX,EAX
006768AA  5F                        POP EDI
006768AB  5E                        POP ESI
006768AC  8B E5                     MOV ESP,EBP
006768AE  5D                        POP EBP
006768AF  C3                        RET
LAB_006768b0:
006768B0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006768B3  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006768B6  52                        PUSH EDX
006768B7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006768BD  E8 AE A8 07 00            CALL 0x006f1170
006768C2  83 C4 04                  ADD ESP,0x4
006768C5  85 F6                     TEST ESI,ESI
006768C7  7D 08                     JGE 0x006768d1
006768C9  8B C6                     MOV EAX,ESI
006768CB  5F                        POP EDI
006768CC  5E                        POP ESI
006768CD  8B E5                     MOV ESP,EBP
006768CF  5D                        POP EBP
006768D0  C3                        RET
LAB_006768d1:
006768D1  5F                        POP EDI
006768D2  83 C8 FF                  OR EAX,0xffffffff
006768D5  5E                        POP ESI
006768D6  8B E5                     MOV ESP,EBP
006768D8  5D                        POP EBP
006768D9  C3                        RET

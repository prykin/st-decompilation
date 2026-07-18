STManRub3C::GetMessage:
0062CCA0  55                        PUSH EBP
0062CCA1  8B EC                     MOV EBP,ESP
0062CCA3  83 EC 54                  SUB ESP,0x54
0062CCA6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0062CCAB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0062CCAE  56                        PUSH ESI
0062CCAF  8D 55 B0                  LEA EDX,[EBP + -0x50]
0062CCB2  8D 4D AC                  LEA ECX,[EBP + -0x54]
0062CCB5  6A 00                     PUSH 0x0
0062CCB7  52                        PUSH EDX
0062CCB8  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0062CCBF  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0062CCC2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0062CCC8  E8 23 0B 10 00            CALL 0x0072d7f0
0062CCCD  8B F0                     MOV ESI,EAX
0062CCCF  83 C4 08                  ADD ESP,0x8
0062CCD2  85 F6                     TEST ESI,ESI
0062CCD4  0F 85 23 01 00 00         JNZ 0x0062cdfd
0062CCDA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062CCDD  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
0062CCE0  83 E8 02                  SUB EAX,0x2
0062CCE3  0F 84 84 00 00 00         JZ 0x0062cd6d
0062CCE9  48                        DEC EAX
0062CCEA  74 4D                     JZ 0x0062cd39
0062CCEC  2D 0C 01 00 00            SUB EAX,0x10c
0062CCF1  0F 85 F4 00 00 00         JNZ 0x0062cdeb
0062CCF7  8D 4D F4                  LEA ECX,[EBP + -0xc]
0062CCFA  51                        PUSH ECX
0062CCFB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0062CCFE  E8 F5 4F DD FF            CALL 0x00401cf8
0062CD03  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0062CD06  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0062CD0C  6A 0C                     PUSH 0xc
0062CD0E  52                        PUSH EDX
0062CD0F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0062CD12  50                        PUSH EAX
0062CD13  A1 80 D0 79 00            MOV EAX,[0x0079d080]
0062CD18  50                        PUSH EAX
0062CD19  E8 5A 43 DD FF            CALL 0x00401078
0062CD1E  8D 4D F0                  LEA ECX,[EBP + -0x10]
0062CD21  51                        PUSH ECX
0062CD22  E8 39 E3 07 00            CALL 0x006ab060
0062CD27  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0062CD2A  33 C0                     XOR EAX,EAX
0062CD2C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0062CD32  5E                        POP ESI
0062CD33  8B E5                     MOV ESP,EBP
0062CD35  5D                        POP EBP
0062CD36  C2 04 00                  RET 0x4
LAB_0062cd39:
0062CD39  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0062CD3C  8B CE                     MOV ECX,ESI
0062CD3E  E8 02 85 DD FF            CALL 0x00405245
0062CD43  8B CE                     MOV ECX,ESI
0062CD45  E8 24 57 DD FF            CALL 0x0040246e
0062CD4A  8B CE                     MOV ECX,ESI
0062CD4C  E8 30 71 DD FF            CALL 0x00403e81
0062CD51  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0062CD54  C7 05 A4 17 81 00 00 00 00 00  MOV dword ptr [0x008117a4],0x0
0062CD5E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0062CD64  33 C0                     XOR EAX,EAX
0062CD66  5E                        POP ESI
0062CD67  8B E5                     MOV ESP,EBP
0062CD69  5D                        POP EBP
0062CD6A  C2 04 00                  RET 0x4
LAB_0062cd6d:
0062CD6D  A1 54 67 80 00            MOV EAX,[0x00806754]
0062CD72  85 C0                     TEST EAX,EAX
0062CD74  74 19                     JZ 0x0062cd8f
0062CD76  8B 15 80 D0 79 00         MOV EDX,dword ptr [0x0079d080]
0062CD7C  6A 00                     PUSH 0x0
0062CD7E  6A 00                     PUSH 0x0
0062CD80  52                        PUSH EDX
0062CD81  50                        PUSH EAX
0062CD82  E8 09 60 0C 00            CALL 0x006f2d90
0062CD87  83 C4 10                  ADD ESP,0x10
0062CD8A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0062CD8D  EB 03                     JMP 0x0062cd92
LAB_0062cd8f:
0062CD8F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0062cd92:
0062CD92  85 C0                     TEST EAX,EAX
0062CD94  74 16                     JZ 0x0062cdac
0062CD96  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0062CD99  83 F9 02                  CMP ECX,0x2
0062CD9C  75 0E                     JNZ 0x0062cdac
0062CD9E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0062CDA1  50                        PUSH EAX
0062CDA2  E8 8D 4F DD FF            CALL 0x00401d34
0062CDA7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062CDAA  EB 28                     JMP 0x0062cdd4
LAB_0062cdac:
0062CDAC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0062CDAF  BA 01 00 00 00            MOV EDX,0x1
0062CDB4  C7 41 1C 00 00 00 00      MOV dword ptr [ECX + 0x1c],0x0
0062CDBB  89 51 28                  MOV dword ptr [ECX + 0x28],EDX
0062CDBE  89 51 24                  MOV dword ptr [ECX + 0x24],EDX
0062CDC1  C7 41 20 FF 00 00 00      MOV dword ptr [ECX + 0x20],0xff
0062CDC8  8B 15 54 87 80 00         MOV EDX,dword ptr [0x00808754]
0062CDCE  89 91 B4 00 00 00         MOV dword ptr [ECX + 0xb4],EDX
LAB_0062cdd4:
0062CDD4  85 C0                     TEST EAX,EAX
0062CDD6  74 13                     JZ 0x0062cdeb
0062CDD8  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0062CDDE  85 C9                     TEST ECX,ECX
0062CDE0  74 09                     JZ 0x0062cdeb
0062CDE2  8D 45 FC                  LEA EAX,[EBP + -0x4]
0062CDE5  50                        PUSH EAX
0062CDE6  E8 F5 52 0C 00            CALL 0x006f20e0
LAB_0062cdeb:
0062CDEB  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0062CDEE  33 C0                     XOR EAX,EAX
0062CDF0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0062CDF6  5E                        POP ESI
0062CDF7  8B E5                     MOV ESP,EBP
0062CDF9  5D                        POP EBP
0062CDFA  C2 04 00                  RET 0x4
LAB_0062cdfd:
0062CDFD  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0062CE00  68 10 14 7D 00            PUSH 0x7d1410
0062CE05  68 CC 4C 7A 00            PUSH 0x7a4ccc
0062CE0A  56                        PUSH ESI
0062CE0B  6A 00                     PUSH 0x0
0062CE0D  6A 4E                     PUSH 0x4e
0062CE0F  68 EC 13 7D 00            PUSH 0x7d13ec
0062CE14  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0062CE1A  E8 B1 06 08 00            CALL 0x006ad4d0
0062CE1F  83 C4 18                  ADD ESP,0x18
0062CE22  85 C0                     TEST EAX,EAX
0062CE24  74 01                     JZ 0x0062ce27
0062CE26  CC                        INT3
LAB_0062ce27:
0062CE27  6A 50                     PUSH 0x50
0062CE29  68 EC 13 7D 00            PUSH 0x7d13ec
0062CE2E  6A 00                     PUSH 0x0
0062CE30  56                        PUSH ESI
0062CE31  E8 0A 90 07 00            CALL 0x006a5e40
0062CE36  B8 FF FF 00 00            MOV EAX,0xffff
0062CE3B  5E                        POP ESI
0062CE3C  8B E5                     MOV ESP,EBP
0062CE3E  5D                        POP EBP
0062CE3F  C2 04 00                  RET 0x4

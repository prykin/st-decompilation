FUN_004827f0:
004827F0  55                        PUSH EBP
004827F1  8B EC                     MOV EBP,ESP
004827F3  83 EC 58                  SUB ESP,0x58
004827F6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004827F9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004827FC  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00482802  8B C8                     MOV ECX,EAX
00482804  C1 E9 10                  SHR ECX,0x10
00482807  53                        PUSH EBX
00482808  25 FF FF 00 00            AND EAX,0xffff
0048280D  56                        PUSH ESI
0048280E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00482811  57                        PUSH EDI
00482812  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00482815  8D 4D AC                  LEA ECX,[EBP + -0x54]
00482818  8D 45 A8                  LEA EAX,[EBP + -0x58]
0048281B  6A 00                     PUSH 0x0
0048281D  51                        PUSH ECX
0048281E  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
00482821  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00482826  E8 C5 AF 2A 00            CALL 0x0072d7f0
0048282B  8B F0                     MOV ESI,EAX
0048282D  83 C4 08                  ADD ESP,0x8
00482830  85 F6                     TEST ESI,ESI
00482832  0F 85 02 01 00 00         JNZ 0x0048293a
00482838  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0048283B  85 F6                     TEST ESI,ESI
0048283D  7C 10                     JL 0x0048284f
0048283F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00482842  33 D2                     XOR EDX,EDX
00482844  8A 90 81 02 00 00         MOV DL,byte ptr [EAX + 0x281]
0048284A  4A                        DEC EDX
0048284B  3B F2                     CMP ESI,EDX
0048284D  7E 1B                     JLE 0x0048286a
LAB_0048284f:
0048284F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00482855  68 71 3D 00 00            PUSH 0x3d71
0048285A  68 3C 9D 7A 00            PUSH 0x7a9d3c
0048285F  51                        PUSH ECX
00482860  68 0B 00 FE AF            PUSH 0xaffe000b
00482865  E8 D6 35 22 00            CALL 0x006a5e40
LAB_0048286a:
0048286A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0048286D  8B B4 B2 82 02 00 00      MOV ESI,dword ptr [EDX + ESI*0x4 + 0x282]
00482874  85 F6                     TEST ESI,ESI
00482876  75 1A                     JNZ 0x00482892
00482878  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0048287D  68 72 3D 00 00            PUSH 0x3d72
00482882  68 3C 9D 7A 00            PUSH 0x7a9d3c
00482887  50                        PUSH EAX
00482888  68 04 00 FE AF            PUSH 0xaffe0004
0048288D  E8 AE 35 22 00            CALL 0x006a5e40
LAB_00482892:
00482892  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00482895  8D 4D EC                  LEA ECX,[EBP + -0x14]
00482898  51                        PUSH ECX
00482899  8B D7                     MOV EDX,EDI
0048289B  8B CE                     MOV ECX,ESI
0048289D  E8 CE A3 22 00            CALL 0x006acc70
004828A2  BB FF 7F 00 00            MOV EBX,0x7fff
004828A7  66 39 5D EC               CMP word ptr [EBP + -0x14],BX
004828AB  75 1B                     JNZ 0x004828c8
004828AD  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004828B3  68 73 3D 00 00            PUSH 0x3d73
004828B8  68 3C 9D 7A 00            PUSH 0x7a9d3c
004828BD  52                        PUSH EDX
004828BE  68 02 00 FE AF            PUSH 0xaffe0002
004828C3  E8 78 35 22 00            CALL 0x006a5e40
LAB_004828c8:
004828C8  8D 45 EC                  LEA EAX,[EBP + -0x14]
004828CB  66 89 5D EC               MOV word ptr [EBP + -0x14],BX
004828CF  50                        PUSH EAX
004828D0  57                        PUSH EDI
004828D1  56                        PUSH ESI
004828D2  E8 69 B8 22 00            CALL 0x006ae140
004828D7  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004828DA  33 FF                     XOR EDI,EDI
004828DC  85 C0                     TEST EAX,EAX
004828DE  BB 01 00 00 00            MOV EBX,0x1
004828E3  7E 21                     JLE 0x00482906
LAB_004828e5:
004828E5  8D 4D EC                  LEA ECX,[EBP + -0x14]
004828E8  8B D7                     MOV EDX,EDI
004828EA  51                        PUSH ECX
004828EB  8B CE                     MOV ECX,ESI
004828ED  E8 7E A3 22 00            CALL 0x006acc70
004828F2  66 81 7D EC FF 7F         CMP word ptr [EBP + -0x14],0x7fff
004828F8  75 0A                     JNZ 0x00482904
004828FA  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004828FD  47                        INC EDI
004828FE  3B F8                     CMP EDI,EAX
00482900  7C E3                     JL 0x004828e5
00482902  EB 02                     JMP 0x00482906
LAB_00482904:
00482904  33 DB                     XOR EBX,EBX
LAB_00482906:
00482906  83 FB 01                  CMP EBX,0x1
00482909  75 1E                     JNZ 0x00482929
0048290B  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0048290E  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00482911  8B 94 B7 82 02 00 00      MOV EDX,dword ptr [EDI + ESI*0x4 + 0x282]
00482918  52                        PUSH EDX
00482919  E8 F2 B7 22 00            CALL 0x006ae110
0048291E  C7 84 B7 82 02 00 00 00 00 00 00  MOV dword ptr [EDI + ESI*0x4 + 0x282],0x0
LAB_00482929:
00482929  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0048292C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00482931  5F                        POP EDI
00482932  5E                        POP ESI
00482933  5B                        POP EBX
00482934  8B E5                     MOV ESP,EBP
00482936  5D                        POP EBP
00482937  C2 04 00                  RET 0x4
LAB_0048293a:
0048293A  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0048293D  68 18 B9 7A 00            PUSH 0x7ab918
00482942  68 CC 4C 7A 00            PUSH 0x7a4ccc
00482947  56                        PUSH ESI
00482948  6A 00                     PUSH 0x0
0048294A  68 7F 3D 00 00            PUSH 0x3d7f
0048294F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00482954  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0048295A  E8 71 AB 22 00            CALL 0x006ad4d0
0048295F  83 C4 18                  ADD ESP,0x18
00482962  85 C0                     TEST EAX,EAX
00482964  74 01                     JZ 0x00482967
00482966  CC                        INT3
LAB_00482967:
00482967  68 80 3D 00 00            PUSH 0x3d80
0048296C  68 3C 9D 7A 00            PUSH 0x7a9d3c
00482971  6A 00                     PUSH 0x0
00482973  56                        PUSH ESI
00482974  E8 C7 34 22 00            CALL 0x006a5e40
00482979  5F                        POP EDI
0048297A  5E                        POP ESI
0048297B  5B                        POP EBX
0048297C  8B E5                     MOV ESP,EBP
0048297E  5D                        POP EBP
0048297F  C2 04 00                  RET 0x4

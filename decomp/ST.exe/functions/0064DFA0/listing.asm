FUN_0064dfa0:
0064DFA0  55                        PUSH EBP
0064DFA1  8B EC                     MOV EBP,ESP
0064DFA3  83 EC 68                  SUB ESP,0x68
0064DFA6  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0064DFA9  53                        PUSH EBX
0064DFAA  56                        PUSH ESI
0064DFAB  57                        PUSH EDI
0064DFAC  66 85 C0                  TEST AX,AX
0064DFAF  C7 45 DC FF FF FF FF      MOV dword ptr [EBP + -0x24],0xffffffff
0064DFB6  7C 06                     JL 0x0064dfbe
0064DFB8  66 3D 08 00               CMP AX,0x8
0064DFBC  7C 03                     JL 0x0064dfc1
LAB_0064dfbe:
0064DFBE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0064dfc1:
0064DFC1  25 FF FF 00 00            AND EAX,0xffff
0064DFC6  8D 55 9C                  LEA EDX,[EBP + -0x64]
0064DFC9  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0064DFCC  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064DFD1  8D 4D 98                  LEA ECX,[EBP + -0x68]
0064DFD4  6A 00                     PUSH 0x0
0064DFD6  52                        PUSH EDX
0064DFD7  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0064DFDA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064DFE0  E8 0B F8 0D 00            CALL 0x0072d7f0
0064DFE5  8B F0                     MOV ESI,EAX
0064DFE7  83 C4 08                  ADD ESP,0x8
0064DFEA  85 F6                     TEST ESI,ESI
0064DFEC  0F 85 2C 01 00 00         JNZ 0x0064e11e
0064DFF2  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
0064DFF7  85 C0                     TEST EAX,EAX
0064DFF9  0F 84 0A 01 00 00         JZ 0x0064e109
0064DFFF  66 8B 5D 0C               MOV BX,word ptr [EBP + 0xc]
0064E003  66 81 FB A6 00            CMP BX,0xa6
0064E008  74 19                     JZ 0x0064e023
0064E00A  66 81 FB A7 00            CMP BX,0xa7
0064E00F  74 12                     JZ 0x0064e023
0064E011  66 81 FB BD 00            CMP BX,0xbd
0064E016  74 0B                     JZ 0x0064e023
0064E018  66 81 FB AF 00            CMP BX,0xaf
0064E01D  74 04                     JZ 0x0064e023
0064E01F  33 C0                     XOR EAX,EAX
0064E021  EB 05                     JMP 0x0064e028
LAB_0064e023:
0064E023  B8 01 00 00 00            MOV EAX,0x1
LAB_0064e028:
0064E028  85 C0                     TEST EAX,EAX
0064E02A  0F 84 D9 00 00 00         JZ 0x0064e109
0064E030  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0064E033  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0064E036  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0064E039  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0064E03F  50                        PUSH EAX
0064E040  57                        PUSH EDI
0064E041  56                        PUSH ESI
0064E042  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0064E045  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0064E048  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0064E04B  E8 EB 6C DB FF            CALL 0x00404d3b
0064E050  85 C0                     TEST EAX,EAX
0064E052  75 39                     JNZ 0x0064e08d
0064E054  B8 03 00 00 00            MOV EAX,0x3
0064E059  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0064E05C  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0064E05F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0064E062  8D 45 E8                  LEA EAX,[EBP + -0x18]
0064E065  8D 55 EC                  LEA EDX,[EBP + -0x14]
0064E068  50                        PUSH EAX
0064E069  4E                        DEC ESI
0064E06A  51                        PUSH ECX
0064E06B  8D 45 F0                  LEA EAX,[EBP + -0x10]
0064E06E  4F                        DEC EDI
0064E06F  52                        PUSH EDX
0064E070  50                        PUSH EAX
0064E071  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0064E074  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0064E077  E8 8A 38 DB FF            CALL 0x00401906
0064E07C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0064E07F  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0064E082  83 C4 10                  ADD ESP,0x10
0064E085  41                        INC ECX
0064E086  42                        INC EDX
0064E087  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0064E08A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0064e08d:
0064E08D  8D 45 F4                  LEA EAX,[EBP + -0xc]
0064E090  6A 01                     PUSH 0x1
0064E092  8D 4D FC                  LEA ECX,[EBP + -0x4]
0064E095  50                        PUSH EAX
0064E096  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0064E099  8D 55 F8                  LEA EDX,[EBP + -0x8]
0064E09C  51                        PUSH ECX
0064E09D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064E0A0  52                        PUSH EDX
0064E0A1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0064E0A4  50                        PUSH EAX
0064E0A5  51                        PUSH ECX
0064E0A6  52                        PUSH EDX
0064E0A7  E8 A8 6C DB FF            CALL 0x00404d54
0064E0AC  83 C4 1C                  ADD ESP,0x1c
0064E0AF  85 C0                     TEST EAX,EAX
0064E0B1  74 56                     JZ 0x0064e109
0064E0B3  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0064E0B6  85 C0                     TEST EAX,EAX
0064E0B8  75 05                     JNZ 0x0064e0bf
0064E0BA  B8 A0 16 80 00            MOV EAX,0x8016a0
LAB_0064e0bf:
0064E0BF  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0064E0C2  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0064E0C5  51                        PUSH ECX
0064E0C6  52                        PUSH EDX
0064E0C7  0F BF 4D F4               MOVSX ECX,word ptr [EBP + -0xc]
0064E0CB  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
0064E0CF  50                        PUSH EAX
0064E0D0  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0064E0D3  50                        PUSH EAX
0064E0D4  51                        PUSH ECX
0064E0D5  0F BF 45 F8               MOVSX EAX,word ptr [EBP + -0x8]
0064E0D9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064E0DC  52                        PUSH EDX
0064E0DD  50                        PUSH EAX
0064E0DE  6A 00                     PUSH 0x0
0064E0E0  0F BF D3                  MOVSX EDX,BX
0064E0E3  81 E1 FF FF 00 00         AND ECX,0xffff
0064E0E9  6A 00                     PUSH 0x0
0064E0EB  51                        PUSH ECX
0064E0EC  52                        PUSH EDX
0064E0ED  E8 68 2F DB FF            CALL 0x0040105a
0064E0F2  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0064E0F5  83 C4 2C                  ADD ESP,0x2c
0064E0F8  33 C0                     XOR EAX,EAX
0064E0FA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064E100  5F                        POP EDI
0064E101  5E                        POP ESI
0064E102  5B                        POP EBX
0064E103  8B E5                     MOV ESP,EBP
0064E105  5D                        POP EBP
0064E106  C2 24 00                  RET 0x24
LAB_0064e109:
0064E109  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0064E10C  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0064E10F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064E115  5F                        POP EDI
0064E116  5E                        POP ESI
0064E117  5B                        POP EBX
0064E118  8B E5                     MOV ESP,EBP
0064E11A  5D                        POP EBP
0064E11B  C2 24 00                  RET 0x24
LAB_0064e11e:
0064E11E  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0064E121  68 28 2B 7D 00            PUSH 0x7d2b28
0064E126  68 CC 4C 7A 00            PUSH 0x7a4ccc
0064E12B  56                        PUSH ESI
0064E12C  6A 00                     PUSH 0x0
0064E12E  68 69 01 00 00            PUSH 0x169
0064E133  68 34 2A 7D 00            PUSH 0x7d2a34
0064E138  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064E13E  E8 8D F3 05 00            CALL 0x006ad4d0
0064E143  83 C4 18                  ADD ESP,0x18
0064E146  85 C0                     TEST EAX,EAX
0064E148  74 01                     JZ 0x0064e14b
0064E14A  CC                        INT3
LAB_0064e14b:
0064E14B  68 6A 01 00 00            PUSH 0x16a
0064E150  68 34 2A 7D 00            PUSH 0x7d2a34
0064E155  6A 00                     PUSH 0x0
0064E157  56                        PUSH ESI
0064E158  E8 E3 7C 05 00            CALL 0x006a5e40
0064E15D  8B C6                     MOV EAX,ESI
0064E15F  5F                        POP EDI
0064E160  5E                        POP ESI
0064E161  5B                        POP EBX
0064E162  8B E5                     MOV ESP,EBP
0064E164  5D                        POP EBP
0064E165  C2 24 00                  RET 0x24

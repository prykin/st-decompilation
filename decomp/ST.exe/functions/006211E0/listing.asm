FUN_006211e0:
006211E0  55                        PUSH EBP
006211E1  8B EC                     MOV EBP,ESP
006211E3  83 EC 0C                  SUB ESP,0xc
006211E6  A1 38 2A 80 00            MOV EAX,[0x00802a38]
006211EB  53                        PUSH EBX
006211EC  56                        PUSH ESI
006211ED  8B F1                     MOV ESI,ECX
006211EF  57                        PUSH EDI
006211F0  8B B8 E4 00 00 00         MOV EDI,dword ptr [EAX + 0xe4]
006211F6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006211F9  33 C9                     XOR ECX,ECX
006211FB  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00621201  3B C8                     CMP ECX,EAX
00621203  0F 85 A2 00 00 00         JNZ 0x006212ab
00621209  3B BE FD 00 00 00         CMP EDI,dword ptr [ESI + 0xfd]
0062120F  0F 82 96 00 00 00         JC 0x006212ab
00621215  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00621218  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0062121B  50                        PUSH EAX
0062121C  53                        PUSH EBX
0062121D  52                        PUSH EDX
0062121E  57                        PUSH EDI
0062121F  8B CE                     MOV ECX,ESI
00621221  E8 B1 35 DE FF            CALL 0x004047d7
00621226  85 C0                     TEST EAX,EAX
00621228  7D 15                     JGE 0x0062123f
0062122A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0062122D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00621230  50                        PUSH EAX
00621231  53                        PUSH EBX
00621232  51                        PUSH ECX
00621233  57                        PUSH EDI
00621234  8B CE                     MOV ECX,ESI
00621236  E8 95 1E DE FF            CALL 0x004030d0
0062123B  85 C0                     TEST EAX,EAX
0062123D  7D 05                     JGE 0x00621244
LAB_0062123f:
0062123F  83 F8 02                  CMP EAX,0x2
00621242  75 67                     JNZ 0x006212ab
LAB_00621244:
00621244  33 C0                     XOR EAX,EAX
00621246  A0 4E 87 80 00            MOV AL,[0x0080874e]
0062124B  48                        DEC EAX
0062124C  74 14                     JZ 0x00621262
0062124E  48                        DEC EAX
0062124F  74 0A                     JZ 0x0062125b
00621251  48                        DEC EAX
00621252  75 57                     JNZ 0x006212ab
00621254  B8 AC 00 00 00            MOV EAX,0xac
00621259  EB 0C                     JMP 0x00621267
LAB_0062125b:
0062125B  B8 AB 00 00 00            MOV EAX,0xab
00621260  EB 05                     JMP 0x00621267
LAB_00621262:
00621262  B8 AA 00 00 00            MOV EAX,0xaa
LAB_00621267:
00621267  33 D2                     XOR EDX,EDX
00621269  83 C9 FF                  OR ECX,0xffffffff
0062126C  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0062126F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00621272  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00621275  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00621278  8D 4D F4                  LEA ECX,[EBP + -0xc]
0062127B  52                        PUSH EDX
0062127C  51                        PUSH ECX
0062127D  50                        PUSH EAX
0062127E  52                        PUSH EDX
0062127F  6A 06                     PUSH 0x6
00621281  B9 58 76 80 00            MOV ECX,0x807658
00621286  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00621289  E8 4A 39 DE FF            CALL 0x00404bd8
0062128E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00621291  68 8E 00 00 00            PUSH 0x8e
00621296  53                        PUSH EBX
00621297  52                        PUSH EDX
00621298  8B CE                     MOV ECX,ESI
0062129A  E8 C3 4A DE FF            CALL 0x00405d62
0062129F  81 C7 FA 00 00 00         ADD EDI,0xfa
006212A5  89 BE FD 00 00 00         MOV dword ptr [ESI + 0xfd],EDI
LAB_006212ab:
006212AB  5F                        POP EDI
006212AC  5E                        POP ESI
006212AD  5B                        POP EBX
006212AE  8B E5                     MOV ESP,EBP
006212B0  5D                        POP EBP
006212B1  C2 10 00                  RET 0x10

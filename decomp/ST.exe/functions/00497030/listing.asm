FUN_00497030:
00497030  55                        PUSH EBP
00497031  8B EC                     MOV EBP,ESP
00497033  51                        PUSH ECX
00497034  8B 15 70 B2 7F 00         MOV EDX,dword ptr [0x007fb270]
0049703A  53                        PUSH EBX
0049703B  56                        PUSH ESI
0049703C  57                        PUSH EDI
0049703D  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
00497040  83 C8 FF                  OR EAX,0xffffffff
00497043  33 FF                     XOR EDI,EDI
00497045  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00497048  85 C9                     TEST ECX,ECX
0049704A  7E 7F                     JLE 0x004970cb
0049704C  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0049704F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00497052  EB 06                     JMP 0x0049705a
LAB_00497054:
00497054  8B 15 70 B2 7F 00         MOV EDX,dword ptr [0x007fb270]
LAB_0049705a:
0049705A  3B F9                     CMP EDI,ECX
0049705C  73 0B                     JNC 0x00497069
0049705E  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
00497061  0F AF F7                  IMUL ESI,EDI
00497064  03 72 1C                  ADD ESI,dword ptr [EDX + 0x1c]
00497067  EB 02                     JMP 0x0049706b
LAB_00497069:
00497069  33 F6                     XOR ESI,ESI
LAB_0049706b:
0049706B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0049706E  85 D2                     TEST EDX,EDX
00497070  74 08                     JZ 0x0049707a
00497072  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00497075  39 56 08                  CMP dword ptr [ESI + 0x8],EDX
00497078  74 2E                     JZ 0x004970a8
LAB_0049707a:
0049707A  8B 16                     MOV EDX,dword ptr [ESI]
0049707C  8B C8                     MOV ECX,EAX
0049707E  2B CA                     SUB ECX,EDX
00497080  8B D3                     MOV EDX,EBX
00497082  2B 56 04                  SUB EDX,dword ptr [ESI + 0x4]
00497085  83 C1 07                  ADD ECX,0x7
00497088  83 C2 07                  ADD EDX,0x7
0049708B  83 F9 0E                  CMP ECX,0xe
0049708E  7F 15                     JG 0x004970a5
00497090  83 FA 0E                  CMP EDX,0xe
00497093  7F 10                     JG 0x004970a5
00497095  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00497098  8D 14 8A                  LEA EDX,[EDX + ECX*0x4]
0049709B  80 BC 11 64 BC 7A 00 00   CMP byte ptr [ECX + EDX*0x1 + 0x7abc64],0x0
004970A3  75 14                     JNZ 0x004970b9
LAB_004970a5:
004970A5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_004970a8:
004970A8  47                        INC EDI
004970A9  3B F9                     CMP EDI,ECX
004970AB  7C A7                     JL 0x00497054
004970AD  5F                        POP EDI
004970AE  5E                        POP ESI
004970AF  83 C8 FF                  OR EAX,0xffffffff
004970B2  5B                        POP EBX
004970B3  8B E5                     MOV ESP,EBP
004970B5  5D                        POP EBP
004970B6  C2 14 00                  RET 0x14
LAB_004970b9:
004970B9  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004970BC  85 C0                     TEST EAX,EAX
004970BE  7E 09                     JLE 0x004970c9
004970C0  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
004970C3  50                        PUSH EAX
004970C4  E8 F4 B9 F6 FF            CALL 0x00402abd
LAB_004970c9:
004970C9  8B C7                     MOV EAX,EDI
LAB_004970cb:
004970CB  5F                        POP EDI
004970CC  5E                        POP ESI
004970CD  5B                        POP EBX
004970CE  8B E5                     MOV ESP,EBP
004970D0  5D                        POP EBP
004970D1  C2 14 00                  RET 0x14

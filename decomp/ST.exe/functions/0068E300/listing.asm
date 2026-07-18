FUN_0068e300:
0068E300  55                        PUSH EBP
0068E301  8B EC                     MOV EBP,ESP
0068E303  83 EC 08                  SUB ESP,0x8
0068E306  8B 89 A5 00 00 00         MOV ECX,dword ptr [ECX + 0xa5]
0068E30C  53                        PUSH EBX
0068E30D  56                        PUSH ESI
0068E30E  57                        PUSH EDI
0068E30F  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
0068E312  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0068E315  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0068E318  8D 56 FF                  LEA EDX,[ESI + -0x1]
0068E31B  85 D2                     TEST EDX,EDX
0068E31D  7C 56                     JL 0x0068e375
LAB_0068e31f:
0068E31F  3B D6                     CMP EDX,ESI
0068E321  73 0D                     JNC 0x0068e330
0068E323  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068E326  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
0068E329  0F AF C2                  IMUL EAX,EDX
0068E32C  03 C7                     ADD EAX,EDI
0068E32E  EB 02                     JMP 0x0068e332
LAB_0068e330:
0068E330  33 C0                     XOR EAX,EAX
LAB_0068e332:
0068E332  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
0068E335  85 FF                     TEST EDI,EDI
0068E337  74 39                     JZ 0x0068e372
0068E339  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0068E33C  8D 47 3B                  LEA EAX,[EDI + 0x3b]
LAB_0068e33f:
0068E33F  8A 18                     MOV BL,byte ptr [EAX]
0068E341  8A CB                     MOV CL,BL
0068E343  3A 1E                     CMP BL,byte ptr [ESI]
0068E345  75 1C                     JNZ 0x0068e363
0068E347  84 C9                     TEST CL,CL
0068E349  74 14                     JZ 0x0068e35f
0068E34B  8A 58 01                  MOV BL,byte ptr [EAX + 0x1]
0068E34E  8A CB                     MOV CL,BL
0068E350  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
0068E353  75 0E                     JNZ 0x0068e363
0068E355  83 C0 02                  ADD EAX,0x2
0068E358  83 C6 02                  ADD ESI,0x2
0068E35B  84 C9                     TEST CL,CL
0068E35D  75 E0                     JNZ 0x0068e33f
LAB_0068e35f:
0068E35F  33 C0                     XOR EAX,EAX
0068E361  EB 05                     JMP 0x0068e368
LAB_0068e363:
0068E363  1B C0                     SBB EAX,EAX
0068E365  83 D8 FF                  SBB EAX,-0x1
LAB_0068e368:
0068E368  85 C0                     TEST EAX,EAX
0068E36A  74 15                     JZ 0x0068e381
0068E36C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0068E36F  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_0068e372:
0068E372  4A                        DEC EDX
0068E373  79 AA                     JNS 0x0068e31f
LAB_0068e375:
0068E375  5F                        POP EDI
0068E376  5E                        POP ESI
0068E377  83 C8 FF                  OR EAX,0xffffffff
0068E37A  5B                        POP EBX
0068E37B  8B E5                     MOV ESP,EBP
0068E37D  5D                        POP EBP
0068E37E  C2 04 00                  RET 0x4
LAB_0068e381:
0068E381  33 C0                     XOR EAX,EAX
0068E383  66 8B 47 7D               MOV AX,word ptr [EDI + 0x7d]
0068E387  5F                        POP EDI
0068E388  5E                        POP ESI
0068E389  5B                        POP EBX
0068E38A  8B E5                     MOV ESP,EBP
0068E38C  5D                        POP EBP
0068E38D  C2 04 00                  RET 0x4

FUN_007112e0:
007112E0  55                        PUSH EBP
007112E1  8B EC                     MOV EBP,ESP
007112E3  51                        PUSH ECX
007112E4  53                        PUSH EBX
007112E5  56                        PUSH ESI
007112E6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007112E9  57                        PUSH EDI
007112EA  83 C8 FF                  OR EAX,0xffffffff
007112ED  33 FF                     XOR EDI,EDI
007112EF  85 F6                     TEST ESI,ESI
007112F1  8B D9                     MOV EBX,ECX
007112F3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007112F6  74 66                     JZ 0x0071135e
007112F8  8B 4B 7E                  MOV ECX,dword ptr [EBX + 0x7e]
007112FB  85 C9                     TEST ECX,ECX
007112FD  74 5F                     JZ 0x0071135e
007112FF  8B 8B 82 00 00 00         MOV ECX,dword ptr [EBX + 0x82]
00711305  85 C9                     TEST ECX,ECX
00711307  7D 55                     JGE 0x0071135e
00711309  80 3E 00                  CMP byte ptr [ESI],0x0
0071130C  74 4D                     JZ 0x0071135b
LAB_0071130e:
0071130E  85 FF                     TEST EDI,EDI
00711310  74 21                     JZ 0x00711333
00711312  56                        PUSH ESI
00711313  33 FF                     XOR EDI,EDI
00711315  E8 A6 BA FF FF            CALL 0x0070cdc0
0071131A  83 C4 04                  ADD ESP,0x4
0071131D  85 C0                     TEST EAX,EAX
0071131F  7C 32                     JL 0x00711353
00711321  83 F8 0F                  CMP EAX,0xf
00711324  7D 05                     JGE 0x0071132b
00711326  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00711329  EB 28                     JMP 0x00711353
LAB_0071132b:
0071132B  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
0071132E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00711331  EB 20                     JMP 0x00711353
LAB_00711333:
00711333  8D 8B 9E 00 00 00         LEA ECX,[EBX + 0x9e]
00711339  56                        PUSH ESI
0071133A  51                        PUSH ECX
0071133B  E8 50 BA FF FF            CALL 0x0070cd90
00711340  83 C4 08                  ADD ESP,0x8
00711343  85 C0                     TEST EAX,EAX
00711345  75 0C                     JNZ 0x00711353
00711347  8B 43 7E                  MOV EAX,dword ptr [EBX + 0x7e]
0071134A  85 C0                     TEST EAX,EAX
0071134C  74 05                     JZ 0x00711353
0071134E  BF 01 00 00 00            MOV EDI,0x1
LAB_00711353:
00711353  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
00711356  46                        INC ESI
00711357  84 C0                     TEST AL,AL
00711359  75 B3                     JNZ 0x0071130e
LAB_0071135b:
0071135B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0071135e:
0071135E  5F                        POP EDI
0071135F  5E                        POP ESI
00711360  5B                        POP EBX
00711361  8B E5                     MOV ESP,EBP
00711363  5D                        POP EBP
00711364  C2 04 00                  RET 0x4

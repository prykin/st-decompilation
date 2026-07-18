ComboTy::GetMessage:
00594440  55                        PUSH EBP
00594441  8B EC                     MOV EBP,ESP
00594443  83 EC 4C                  SUB ESP,0x4c
00594446  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059444B  53                        PUSH EBX
0059444C  56                        PUSH ESI
0059444D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00594450  57                        PUSH EDI
00594451  8D 55 B8                  LEA EDX,[EBP + -0x48]
00594454  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00594457  6A 00                     PUSH 0x0
00594459  52                        PUSH EDX
0059445A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0059445D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00594463  E8 88 93 19 00            CALL 0x0072d7f0
00594468  8B F0                     MOV ESI,EAX
0059446A  83 C4 08                  ADD ESP,0x8
0059446D  85 F6                     TEST ESI,ESI
0059446F  0F 85 BA 01 00 00         JNZ 0x0059462f
00594475  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00594478  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0059447B  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0059447E  3D FF FF 00 00            CMP EAX,0xffff
00594483  0F 87 B0 00 00 00         JA 0x00594539
00594489  3D FF FF 00 00            CMP EAX,0xffff
0059448E  0F 84 97 00 00 00         JZ 0x0059452b
00594494  83 C0 FE                  ADD EAX,-0x2
00594497  83 F8 62                  CMP EAX,0x62
0059449A  0F 87 75 01 00 00         JA 0x00594615
005944A0  33 C9                     XOR ECX,ECX
005944A2  8A 88 94 46 59 00         MOV CL,byte ptr [EAX + 0x594694]
switchD_005944a8::switchD:
005944A8  FF 24 8D 7C 46 59 00      JMP dword ptr [ECX*0x4 + 0x59467c]
switchD_005944a8::caseD_2:
005944AF  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
005944B2  8B CE                     MOV ECX,ESI
005944B4  52                        PUSH EDX
005944B5  E8 15 F2 E6 FF            CALL 0x004036cf
005944BA  E9 56 01 00 00            JMP 0x00594615
switchD_005944a8::caseD_3:
005944BF  8B CE                     MOV ECX,ESI
005944C1  E8 6E EC E6 FF            CALL 0x00403134
005944C6  E9 4A 01 00 00            JMP 0x00594615
switchD_005944a8::caseD_5:
005944CB  8B 86 08 01 00 00         MOV EAX,dword ptr [ESI + 0x108]
005944D1  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005944D7  50                        PUSH EAX
005944D8  51                        PUSH ECX
005944D9  E8 F2 F0 11 00            CALL 0x006b35d0
005944DE  E9 32 01 00 00            JMP 0x00594615
switchD_005944a8::caseD_62:
005944E3  8B 96 EC 00 00 00         MOV EDX,dword ptr [ESI + 0xec]
005944E9  33 C0                     XOR EAX,EAX
005944EB  66 8B 47 18               MOV AX,word ptr [EDI + 0x18]
005944EF  33 C9                     XOR ECX,ECX
005944F1  66 8B 4F 1A               MOV CX,word ptr [EDI + 0x1a]
005944F5  3B C2                     CMP EAX,EDX
005944F7  7C 6C                     JL 0x00594565
005944F9  8B 9E F4 00 00 00         MOV EBX,dword ptr [ESI + 0xf4]
005944FF  03 DA                     ADD EBX,EDX
00594501  3B C3                     CMP EAX,EBX
00594503  7D 60                     JGE 0x00594565
00594505  8B 86 F0 00 00 00         MOV EAX,dword ptr [ESI + 0xf0]
0059450B  3B C8                     CMP ECX,EAX
0059450D  7C 56                     JL 0x00594565
0059450F  8B 96 F8 00 00 00         MOV EDX,dword ptr [ESI + 0xf8]
00594515  03 D0                     ADD EDX,EAX
00594517  3B CA                     CMP ECX,EDX
00594519  0F 8C F6 00 00 00         JL 0x00594615
0059451F  8B CE                     MOV ECX,ESI
00594521  E8 42 F4 E6 FF            CALL 0x00403968
00594526  E9 EA 00 00 00            JMP 0x00594615
LAB_0059452b:
0059452B  8B 86 CC 00 00 00         MOV EAX,dword ptr [ESI + 0xcc]
00594531  89 47 18                  MOV dword ptr [EDI + 0x18],EAX
00594534  E9 DC 00 00 00            JMP 0x00594615
LAB_00594539:
00594539  05 00 00 FF FF            ADD EAX,0xffff0000
0059453E  83 F8 03                  CMP EAX,0x3
00594541  0F 87 CE 00 00 00         JA 0x00594615
switchD_00594547::switchD:
00594547  FF 24 85 F8 46 59 00      JMP dword ptr [EAX*0x4 + 0x5946f8]
switchD_00594547::caseD_10002:
0059454E  8B 86 10 01 00 00         MOV EAX,dword ptr [ESI + 0x110]
00594554  85 C0                     TEST EAX,EAX
00594556  0F 84 B9 00 00 00         JZ 0x00594615
switchD_00594547::caseD_10000:
0059455C  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
0059455F  89 8E 9C 00 00 00         MOV dword ptr [ESI + 0x9c],ECX
switchD_005944a8::caseD_64:
00594565  8B CE                     MOV ECX,ESI
00594567  E8 FC F3 E6 FF            CALL 0x00403968
0059456C  E9 A4 00 00 00            JMP 0x00594615
switchD_00594547::caseD_10001:
00594571  8B 86 04 01 00 00         MOV EAX,dword ptr [ESI + 0x104]
00594577  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0059457A  85 C9                     TEST ECX,ECX
0059457C  75 18                     JNZ 0x00594596
0059457E  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
00594582  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
00594586  83 C1 1F                  ADD ECX,0x1f
00594589  C1 E9 03                  SHR ECX,0x3
0059458C  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
00594592  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_00594596:
00594596  8A 9E D8 00 00 00         MOV BL,byte ptr [ESI + 0xd8]
0059459C  50                        PUSH EAX
0059459D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005945A0  E8 FB 09 12 00            CALL 0x006b4fa0
005945A5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005945A8  8B F8                     MOV EDI,EAX
005945AA  8A C3                     MOV AL,BL
005945AC  8A FB                     MOV BH,BL
005945AE  8B C3                     MOV EAX,EBX
005945B0  8B D1                     MOV EDX,ECX
005945B2  C1 E0 10                  SHL EAX,0x10
005945B5  66 8B C3                  MOV AX,BX
005945B8  C1 E9 02                  SHR ECX,0x2
005945BB  F3 AB                     STOSD.REP ES:EDI
005945BD  8B CA                     MOV ECX,EDX
005945BF  83 E1 03                  AND ECX,0x3
005945C2  F3 AA                     STOSB.REP ES:EDI
005945C4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005945C7  8D 8E A8 00 00 00         LEA ECX,[ESI + 0xa8]
005945CD  51                        PUSH ECX
005945CE  8B CE                     MOV ECX,ESI
005945D0  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
005945D3  89 86 BC 00 00 00         MOV dword ptr [ESI + 0xbc],EAX
005945D9  E8 02 1A 15 00            CALL 0x006e5fe0
005945DE  8B 86 04 01 00 00         MOV EAX,dword ptr [ESI + 0x104]
005945E4  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005945E7  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005945EA  52                        PUSH EDX
005945EB  51                        PUSH ECX
005945EC  6A 00                     PUSH 0x0
005945EE  6A 00                     PUSH 0x0
005945F0  6A 00                     PUSH 0x0
005945F2  8B 8E FC 00 00 00         MOV ECX,dword ptr [ESI + 0xfc]
005945F8  50                        PUSH EAX
005945F9  33 D2                     XOR EDX,EDX
005945FB  66 8B 57 1A               MOV DX,word ptr [EDI + 0x1a]
005945FF  33 C0                     XOR EAX,EAX
00594601  66 8B 47 18               MOV AX,word ptr [EDI + 0x18]
00594605  83 C2 05                  ADD EDX,0x5
00594608  83 C0 05                  ADD EAX,0x5
0059460B  52                        PUSH EDX
0059460C  50                        PUSH EAX
0059460D  6A 00                     PUSH 0x0
0059460F  51                        PUSH ECX
00594610  E8 DB 0F 12 00            CALL 0x006b55f0
switchD_005944a8::caseD_4:
00594615  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00594618  57                        PUSH EDI
00594619  8B CE                     MOV ECX,ESI
0059461B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00594621  E8 AA 19 15 00            CALL 0x006e5fd0
00594626  5F                        POP EDI
00594627  5E                        POP ESI
00594628  5B                        POP EBX
00594629  8B E5                     MOV ESP,EBP
0059462B  5D                        POP EBP
0059462C  C2 04 00                  RET 0x4
LAB_0059462f:
0059462F  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00594632  68 58 BF 7C 00            PUSH 0x7cbf58
00594637  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059463C  56                        PUSH ESI
0059463D  6A 00                     PUSH 0x0
0059463F  68 B7 00 00 00            PUSH 0xb7
00594644  68 EC BE 7C 00            PUSH 0x7cbeec
00594649  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059464E  E8 7D 8E 11 00            CALL 0x006ad4d0
00594653  83 C4 18                  ADD ESP,0x18
00594656  85 C0                     TEST EAX,EAX
00594658  74 01                     JZ 0x0059465b
0059465A  CC                        INT3
LAB_0059465b:
0059465B  68 B7 00 00 00            PUSH 0xb7
00594660  68 EC BE 7C 00            PUSH 0x7cbeec
00594665  6A 00                     PUSH 0x0
00594667  56                        PUSH ESI
00594668  E8 D3 17 11 00            CALL 0x006a5e40
0059466D  5F                        POP EDI
0059466E  5E                        POP ESI
0059466F  B8 FF FF 00 00            MOV EAX,0xffff
00594674  5B                        POP EBX
00594675  8B E5                     MOV ESP,EBP
00594677  5D                        POP EBP
00594678  C2 04 00                  RET 0x4

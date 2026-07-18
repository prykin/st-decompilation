FUN_006b7190:
006B7190  55                        PUSH EBP
006B7191  8B EC                     MOV EBP,ESP
006B7193  83 EC 10                  SUB ESP,0x10
006B7196  53                        PUSH EBX
006B7197  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B719A  56                        PUSH ESI
006B719B  57                        PUSH EDI
LAB_006b719c:
006B719C  8B 03                     MOV EAX,dword ptr [EBX]
006B719E  8D 55 F8                  LEA EDX,[EBP + -0x8]
006B71A1  52                        PUSH EDX
006B71A2  6A 00                     PUSH 0x0
006B71A4  8B 08                     MOV ECX,dword ptr [EAX]
006B71A6  8D 55 F0                  LEA EDX,[EBP + -0x10]
006B71A9  6A 00                     PUSH 0x0
006B71AB  52                        PUSH EDX
006B71AC  8D 55 F4                  LEA EDX,[EBP + -0xc]
006B71AF  52                        PUSH EDX
006B71B0  50                        PUSH EAX
006B71B1  FF 51 64                  CALL dword ptr [ECX + 0x64]
006B71B4  3D 1E 00 77 88            CMP EAX,0x8877001e
006B71B9  0F 85 E0 01 00 00         JNZ 0x006b739f
006B71BF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B71C2  50                        PUSH EAX
006B71C3  E8 A8 3A FF FF            CALL 0x006aac70
006B71C8  8B 0B                     MOV ECX,dword ptr [EBX]
006B71CA  8D 75 F8                  LEA ESI,[EBP + -0x8]
006B71CD  56                        PUSH ESI
006B71CE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B71D1  8B 11                     MOV EDX,dword ptr [ECX]
006B71D3  50                        PUSH EAX
006B71D4  8D 45 F0                  LEA EAX,[EBP + -0x10]
006B71D7  6A 00                     PUSH 0x0
006B71D9  50                        PUSH EAX
006B71DA  8D 45 F4                  LEA EAX,[EBP + -0xc]
006B71DD  50                        PUSH EAX
006B71DE  51                        PUSH ECX
006B71DF  FF 52 64                  CALL dword ptr [EDX + 0x64]
006B71E2  3D BE 00 77 88            CMP EAX,0x887700be
006B71E7  0F 84 C4 01 00 00         JZ 0x006b73b1
006B71ED  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006B71F0  85 C0                     TEST EAX,EAX
006B71F2  75 0B                     JNZ 0x006b71ff
006B71F4  8D 4D FC                  LEA ECX,[EBP + -0x4]
006B71F7  51                        PUSH ECX
006B71F8  E8 63 3E FF FF            CALL 0x006ab060
006B71FD  EB 9D                     JMP 0x006b719c
LAB_006b71ff:
006B71FF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B7202  8A 0A                     MOV CL,byte ptr [EDX]
006B7204  80 F9 05                  CMP CL,0x5
006B7207  0F 85 9B 00 00 00         JNZ 0x006b72a8
006B720D  8D 73 50                  LEA ESI,[EBX + 0x50]
006B7210  50                        PUSH EAX
006B7211  8B 06                     MOV EAX,dword ptr [ESI]
006B7213  50                        PUSH EAX
006B7214  E8 C7 01 00 00            CALL 0x006b73e0
006B7219  85 C0                     TEST EAX,EAX
006B721B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B721E  74 0B                     JZ 0x006b722b
006B7220  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
006B7223  51                        PUSH ECX
006B7224  E8 67 EC FE FF            CALL 0x006a5e90
006B7229  EB 19                     JMP 0x006b7244
LAB_006b722b:
006B722B  6A 18                     PUSH 0x18
006B722D  E8 3E 3A FF FF            CALL 0x006aac70
006B7232  85 C0                     TEST EAX,EAX
006B7234  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B7237  0F 84 8A 01 00 00         JZ 0x006b73c7
006B723D  50                        PUSH EAX
006B723E  56                        PUSH ESI
006B723F  E8 CC 26 00 00            CALL 0x006b9910
LAB_006b7244:
006B7244  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B7247  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006B724A  33 C9                     XOR ECX,ECX
006B724C  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
006B724F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B7252  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B7255  8A 4A 01                  MOV CL,byte ptr [EDX + 0x1]
006B7258  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
006B725B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B725E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B7261  0F BF 51 02               MOVSX EDX,word ptr [ECX + 0x2]
006B7265  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
006B7268  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006B726B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B726E  83 C1 F8                  ADD ECX,-0x8
006B7271  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
006B7274  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B7277  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006B727A  51                        PUSH ECX
006B727B  E8 F0 39 FF FF            CALL 0x006aac70
006B7280  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B7283  89 42 14                  MOV dword ptr [EDX + 0x14],EAX
006B7286  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B7289  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B728C  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006B728F  8B 78 14                  MOV EDI,dword ptr [EAX + 0x14]
006B7292  8B C1                     MOV EAX,ECX
006B7294  8D 72 08                  LEA ESI,[EDX + 0x8]
006B7297  C1 E9 02                  SHR ECX,0x2
006B729A  F3 A5                     MOVSD.REP ES:EDI,ESI
006B729C  8B C8                     MOV ECX,EAX
006B729E  83 E1 03                  AND ECX,0x3
006B72A1  F3 A4                     MOVSB.REP ES:EDI,ESI
006B72A3  E9 F4 FE FF FF            JMP 0x006b719c
LAB_006b72a8:
006B72A8  80 F9 06                  CMP CL,0x6
006B72AB  0F 85 C2 00 00 00         JNZ 0x006b7373
006B72B1  8B 4B 50                  MOV ECX,dword ptr [EBX + 0x50]
006B72B4  8D 73 50                  LEA ESI,[EBX + 0x50]
006B72B7  50                        PUSH EAX
006B72B8  51                        PUSH ECX
006B72B9  E8 22 01 00 00            CALL 0x006b73e0
006B72BE  85 C0                     TEST EAX,EAX
006B72C0  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B72C3  0F 84 D3 FE FF FF         JZ 0x006b719c
006B72C9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B72CC  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
006B72CF  3A 4A 01                  CMP CL,byte ptr [EDX + 0x1]
006B72D2  75 0C                     JNZ 0x006b72e0
006B72D4  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006B72D7  0F BF 52 02               MOVSX EDX,word ptr [EDX + 0x2]
006B72DB  49                        DEC ECX
006B72DC  3B D1                     CMP EDX,ECX
006B72DE  74 21                     JZ 0x006b7301
LAB_006b72e0:
006B72E0  83 C0 14                  ADD EAX,0x14
006B72E3  50                        PUSH EAX
006B72E4  E8 77 3D FF FF            CALL 0x006ab060
006B72E9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B72EC  50                        PUSH EAX
006B72ED  56                        PUSH ESI
006B72EE  E8 CD 25 00 00            CALL 0x006b98c0
006B72F3  8D 4D 08                  LEA ECX,[EBP + 0x8]
006B72F6  51                        PUSH ECX
006B72F7  E8 64 3D FF FF            CALL 0x006ab060
006B72FC  E9 9B FE FF FF            JMP 0x006b719c
LAB_006b7301:
006B7301  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006B7304  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B7307  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006B730A  8D 70 08                  LEA ESI,[EAX + 0x8]
006B730D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B7310  8D 4A F8                  LEA ECX,[EDX + -0x8]
006B7313  8B 78 14                  MOV EDI,dword ptr [EAX + 0x14]
006B7316  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006B7319  03 FA                     ADD EDI,EDX
006B731B  8B D1                     MOV EDX,ECX
006B731D  C1 E9 02                  SHR ECX,0x2
006B7320  F3 A5                     MOVSD.REP ES:EDI,ESI
006B7322  8B CA                     MOV ECX,EDX
006B7324  83 E1 03                  AND ECX,0x3
006B7327  F3 A4                     MOVSB.REP ES:EDI,ESI
006B7329  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B732C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006B732F  83 C1 F8                  ADD ECX,-0x8
006B7332  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006B7335  03 D1                     ADD EDX,ECX
006B7337  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
006B733A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B733D  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
006B7340  85 C0                     TEST EAX,EAX
006B7342  0F 85 54 FE FF FF         JNZ 0x006b719c
006B7348  8D 55 FC                  LEA EDX,[EBP + -0x4]
006B734B  52                        PUSH EDX
006B734C  E8 0F 3D FF FF            CALL 0x006ab060
006B7351  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B7354  50                        PUSH EAX
006B7355  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
006B7358  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006B735B  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006B735E  8D 43 50                  LEA EAX,[EBX + 0x50]
006B7361  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006B7364  50                        PUSH EAX
006B7365  E8 56 25 00 00            CALL 0x006b98c0
006B736A  8D 4D 08                  LEA ECX,[EBP + 0x8]
006B736D  51                        PUSH ECX
006B736E  E8 ED 3C FF FF            CALL 0x006ab060
LAB_006b7373:
006B7373  6A 14                     PUSH 0x14
006B7375  E8 F6 38 FF FF            CALL 0x006aac70
006B737A  85 C0                     TEST EAX,EAX
006B737C  74 49                     JZ 0x006b73c7
006B737E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006B7381  50                        PUSH EAX
006B7382  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
006B7385  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B7388  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
006B738B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006B738E  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
006B7391  8D 43 44                  LEA EAX,[EBX + 0x44]
006B7394  50                        PUSH EAX
006B7395  E8 96 B1 01 00            CALL 0x006d2530
006B739A  E9 FD FD FF FF            JMP 0x006b719c
LAB_006b739f:
006B739F  3D BE 00 77 88            CMP EAX,0x887700be
006B73A4  75 26                     JNZ 0x006b73cc
006B73A6  5F                        POP EDI
006B73A7  5E                        POP ESI
006B73A8  33 C0                     XOR EAX,EAX
006B73AA  5B                        POP EBX
006B73AB  8B E5                     MOV ESP,EBP
006B73AD  5D                        POP EBP
006B73AE  C2 04 00                  RET 0x4
LAB_006b73b1:
006B73B1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B73B4  33 F6                     XOR ESI,ESI
006B73B6  51                        PUSH ECX
006B73B7  E8 D4 EA FE FF            CALL 0x006a5e90
006B73BC  8B C6                     MOV EAX,ESI
006B73BE  5F                        POP EDI
006B73BF  5E                        POP ESI
006B73C0  5B                        POP EBX
006B73C1  8B E5                     MOV ESP,EBP
006B73C3  5D                        POP EBP
006B73C4  C2 04 00                  RET 0x4
LAB_006b73c7:
006B73C7  B8 FE FF FF FF            MOV EAX,0xfffffffe
LAB_006b73cc:
006B73CC  5F                        POP EDI
006B73CD  5E                        POP ESI
006B73CE  5B                        POP EBX
006B73CF  8B E5                     MOV ESP,EBP
006B73D1  5D                        POP EBP
006B73D2  C2 04 00                  RET 0x4

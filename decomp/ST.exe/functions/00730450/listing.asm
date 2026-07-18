FUN_00730450:
00730450  55                        PUSH EBP
00730451  8B EC                     MOV EBP,ESP
00730453  83 EC 10                  SUB ESP,0x10
00730456  68 FF FF 00 00            PUSH 0xffff
0073045B  A1 78 12 7F 00            MOV EAX,[0x007f1278]
00730460  50                        PUSH EAX
00730461  E8 0A 5E 00 00            CALL 0x00736270
00730466  83 C4 08                  ADD ESP,0x8
00730469  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0073046C  8B 4D 0E                  MOV ECX,dword ptr [EBP + 0xe]
0073046F  81 E1 FF FF 00 00         AND ECX,0xffff
00730475  81 E1 F0 7F 00 00         AND ECX,0x7ff0
0073047B  81 F9 F0 7F 00 00         CMP ECX,0x7ff0
00730481  0F 85 84 00 00 00         JNZ 0x0073050b
00730487  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073048A  52                        PUSH EDX
0073048B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073048E  50                        PUSH EAX
0073048F  E8 DC 5B 00 00            CALL 0x00736070
00730494  83 C4 08                  ADD ESP,0x8
00730497  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0073049A  83 7D F0 00               CMP dword ptr [EBP + -0x10],0x0
0073049E  7E 42                     JLE 0x007304e2
007304A0  83 7D F0 02               CMP dword ptr [EBP + -0x10],0x2
007304A4  7E 08                     JLE 0x007304ae
007304A6  83 7D F0 03               CMP dword ptr [EBP + -0x10],0x3
007304AA  74 1B                     JZ 0x007304c7
007304AC  EB 34                     JMP 0x007304e2
LAB_007304ae:
007304AE  68 FF FF 00 00            PUSH 0xffff
007304B3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007304B6  51                        PUSH ECX
007304B7  E8 B4 5D 00 00            CALL 0x00736270
007304BC  83 C4 08                  ADD ESP,0x8
007304BF  DD 45 08                  FLD double ptr [EBP + 0x8]
007304C2  E9 BA 00 00 00            JMP 0x00730581
LAB_007304c7:
007304C7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007304CA  52                        PUSH EDX
007304CB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007304CE  50                        PUSH EAX
007304CF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007304D2  51                        PUSH ECX
007304D3  6A 0C                     PUSH 0xc
007304D5  E8 56 4E 00 00            CALL 0x00735330
007304DA  83 C4 10                  ADD ESP,0x10
007304DD  E9 9F 00 00 00            JMP 0x00730581
LAB_007304e2:
007304E2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007304E5  52                        PUSH EDX
007304E6  DD 45 08                  FLD double ptr [EBP + 0x8]
007304E9  DC 05 88 CD 79 00         FADD double ptr [0x0079cd88]
007304EF  83 EC 08                  SUB ESP,0x8
007304F2  DD 1C 24                  FSTP double ptr [ESP]
007304F5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007304F8  50                        PUSH EAX
007304F9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007304FC  51                        PUSH ECX
007304FD  6A 0C                     PUSH 0xc
007304FF  6A 08                     PUSH 0x8
00730501  E8 FA 4E 00 00            CALL 0x00735400
00730506  83 C4 1C                  ADD ESP,0x1c
00730509  EB 76                     JMP 0x00730581
LAB_0073050b:
0073050B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073050E  52                        PUSH EDX
0073050F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00730512  50                        PUSH EAX
00730513  E8 F8 4D 00 00            CALL 0x00735310
00730518  83 C4 08                  ADD ESP,0x8
0073051B  DD 5D F8                  FSTP double ptr [EBP + -0x8]
0073051E  DD 45 F8                  FLD double ptr [EBP + -0x8]
00730521  DC 5D 08                  FCOMP double ptr [EBP + 0x8]
00730524  DF E0                     FNSTSW AX
00730526  F6 C4 40                  TEST AH,0x40
00730529  74 16                     JZ 0x00730541
0073052B  68 FF FF 00 00            PUSH 0xffff
00730530  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00730533  51                        PUSH ECX
00730534  E8 37 5D 00 00            CALL 0x00736270
00730539  83 C4 08                  ADD ESP,0x8
0073053C  DD 45 F8                  FLD double ptr [EBP + -0x8]
0073053F  EB 40                     JMP 0x00730581
LAB_00730541:
00730541  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00730544  83 E2 20                  AND EDX,0x20
00730547  85 D2                     TEST EDX,EDX
00730549  74 16                     JZ 0x00730561
0073054B  68 FF FF 00 00            PUSH 0xffff
00730550  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00730553  50                        PUSH EAX
00730554  E8 17 5D 00 00            CALL 0x00736270
00730559  83 C4 08                  ADD ESP,0x8
0073055C  DD 45 F8                  FLD double ptr [EBP + -0x8]
0073055F  EB 20                     JMP 0x00730581
LAB_00730561:
00730561  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00730564  51                        PUSH ECX
00730565  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00730568  52                        PUSH EDX
00730569  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073056C  50                        PUSH EAX
0073056D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00730570  51                        PUSH ECX
00730571  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00730574  52                        PUSH EDX
00730575  6A 0C                     PUSH 0xc
00730577  6A 10                     PUSH 0x10
00730579  E8 82 4E 00 00            CALL 0x00735400
0073057E  83 C4 1C                  ADD ESP,0x1c
LAB_00730581:
00730581  8B E5                     MOV ESP,EBP
00730583  5D                        POP EBP
00730584  C3                        RET

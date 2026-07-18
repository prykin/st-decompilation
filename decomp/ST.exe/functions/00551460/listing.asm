TradePanelTy::SetModeControls:
00551460  55                        PUSH EBP
00551461  8B EC                     MOV EBP,ESP
00551463  83 EC 48                  SUB ESP,0x48
00551466  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
00551469  8A 91 BB 01 00 00         MOV DL,byte ptr [ECX + 0x1bb]
0055146F  56                        PUSH ESI
00551470  3A D0                     CMP DL,AL
00551472  57                        PUSH EDI
00551473  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00551476  0F 84 9C 01 00 00         JZ 0x00551618
0055147C  88 81 BB 01 00 00         MOV byte ptr [ECX + 0x1bb],AL
00551482  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00551487  8D 55 BC                  LEA EDX,[EBP + -0x44]
0055148A  8D 4D B8                  LEA ECX,[EBP + -0x48]
0055148D  6A 00                     PUSH 0x0
0055148F  52                        PUSH EDX
00551490  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00551493  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00551499  E8 52 C3 1D 00            CALL 0x0072d7f0
0055149E  8B F0                     MOV ESI,EAX
005514A0  83 C4 08                  ADD ESP,0x8
005514A3  85 F6                     TEST ESI,ESI
005514A5  0F 85 2F 01 00 00         JNZ 0x005515da
005514AB  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005514AE  6A 39                     PUSH 0x39
005514B0  6A 77                     PUSH 0x77
005514B2  6A 31                     PUSH 0x31
005514B4  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
005514B7  68 A6 00 00 00            PUSH 0xa6
005514BC  50                        PUSH EAX
005514BD  8B 86 85 01 00 00         MOV EAX,dword ptr [ESI + 0x185]
005514C3  50                        PUSH EAX
005514C4  6A 31                     PUSH 0x31
005514C6  68 A6 00 00 00            PUSH 0xa6
005514CB  6A 00                     PUSH 0x0
005514CD  51                        PUSH ECX
005514CE  E8 1D 41 16 00            CALL 0x006b55f0
005514D3  8B 86 C8 01 00 00         MOV EAX,dword ptr [ESI + 0x1c8]
005514D9  85 C0                     TEST EAX,EAX
005514DB  74 09                     JZ 0x005514e6
005514DD  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005514E0  50                        PUSH EAX
005514E1  E8 CA 41 19 00            CALL 0x006e56b0
LAB_005514e6:
005514E6  8B 86 CC 01 00 00         MOV EAX,dword ptr [ESI + 0x1cc]
005514EC  C7 86 C8 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1c8],0x0
005514F6  85 C0                     TEST EAX,EAX
005514F8  74 09                     JZ 0x00551503
005514FA  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005514FD  50                        PUSH EAX
005514FE  E8 AD 41 19 00            CALL 0x006e56b0
LAB_00551503:
00551503  8A 86 BB 01 00 00         MOV AL,byte ptr [ESI + 0x1bb]
00551509  8B 3E                     MOV EDI,dword ptr [ESI]
0055150B  6A 01                     PUSH 0x1
0055150D  6A 00                     PUSH 0x0
0055150F  6A 00                     PUSH 0x0
00551511  6A 00                     PUSH 0x0
00551513  6A 00                     PUSH 0x0
00551515  68 00 B2 00 00            PUSH 0xb200
0055151A  68 FF B1 00 00            PUSH 0xb1ff
0055151F  6A 00                     PUSH 0x0
00551521  84 C0                     TEST AL,AL
00551523  C7 86 CC 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1cc],0x0
0055152D  68 94 38 7C 00            PUSH 0x7c3894
00551532  74 27                     JZ 0x0055155b
00551534  E8 43 42 EB FF            CALL 0x0040577c
00551539  83 C4 08                  ADD ESP,0x8
0055153C  8B CE                     MOV ECX,ESI
0055153E  50                        PUSH EAX
0055153F  6A 01                     PUSH 0x1
00551541  6A 01                     PUSH 0x1
00551543  6A 00                     PUSH 0x0
00551545  6A 57                     PUSH 0x57
00551547  68 CA 00 00 00            PUSH 0xca
0055154C  6A 01                     PUSH 0x1
0055154E  6A 00                     PUSH 0x0
00551550  FF 57 04                  CALL dword ptr [EDI + 0x4]
00551553  89 86 C8 01 00 00         MOV dword ptr [ESI + 0x1c8],EAX
00551559  EB 67                     JMP 0x005515c2
LAB_0055155b:
0055155B  E8 1C 42 EB FF            CALL 0x0040577c
00551560  83 C4 08                  ADD ESP,0x8
00551563  8B CE                     MOV ECX,ESI
00551565  50                        PUSH EAX
00551566  6A 01                     PUSH 0x1
00551568  6A 01                     PUSH 0x1
0055156A  6A 00                     PUSH 0x0
0055156C  6A 57                     PUSH 0x57
0055156E  68 AC 00 00 00            PUSH 0xac
00551573  6A 01                     PUSH 0x1
00551575  6A 00                     PUSH 0x0
00551577  FF 57 04                  CALL dword ptr [EDI + 0x4]
0055157A  6A 01                     PUSH 0x1
0055157C  8B 3E                     MOV EDI,dword ptr [ESI]
0055157E  6A 00                     PUSH 0x0
00551580  6A 00                     PUSH 0x0
00551582  6A 00                     PUSH 0x0
00551584  6A 00                     PUSH 0x0
00551586  68 02 B2 00 00            PUSH 0xb202
0055158B  68 01 B2 00 00            PUSH 0xb201
00551590  6A 00                     PUSH 0x0
00551592  68 94 38 7C 00            PUSH 0x7c3894
00551597  89 86 C8 01 00 00         MOV dword ptr [ESI + 0x1c8],EAX
0055159D  E8 DA 41 EB FF            CALL 0x0040577c
005515A2  83 C4 08                  ADD ESP,0x8
005515A5  8B CE                     MOV ECX,ESI
005515A7  50                        PUSH EAX
005515A8  6A 01                     PUSH 0x1
005515AA  6A 01                     PUSH 0x1
005515AC  6A 00                     PUSH 0x0
005515AE  6A 57                     PUSH 0x57
005515B0  68 E5 00 00 00            PUSH 0xe5
005515B5  6A 01                     PUSH 0x1
005515B7  6A 00                     PUSH 0x0
005515B9  FF 57 04                  CALL dword ptr [EDI + 0x4]
005515BC  89 86 CC 01 00 00         MOV dword ptr [ESI + 0x1cc],EAX
LAB_005515c2:
005515C2  8B CE                     MOV ECX,ESI
005515C4  E8 D4 39 EB FF            CALL 0x00404f9d
005515C9  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005515CC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005515D2  5F                        POP EDI
005515D3  5E                        POP ESI
005515D4  8B E5                     MOV ESP,EBP
005515D6  5D                        POP EBP
005515D7  C2 04 00                  RET 0x4
LAB_005515da:
005515DA  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005515DD  68 B8 86 7C 00            PUSH 0x7c86b8
005515E2  68 CC 4C 7A 00            PUSH 0x7a4ccc
005515E7  56                        PUSH ESI
005515E8  6A 00                     PUSH 0x0
005515EA  68 81 00 00 00            PUSH 0x81
005515EF  68 24 86 7C 00            PUSH 0x7c8624
005515F4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005515F9  E8 D2 BE 15 00            CALL 0x006ad4d0
005515FE  83 C4 18                  ADD ESP,0x18
00551601  85 C0                     TEST EAX,EAX
00551603  74 01                     JZ 0x00551606
00551605  CC                        INT3
LAB_00551606:
00551606  68 81 00 00 00            PUSH 0x81
0055160B  68 24 86 7C 00            PUSH 0x7c8624
00551610  6A 00                     PUSH 0x0
00551612  56                        PUSH ESI
00551613  E8 28 48 15 00            CALL 0x006a5e40
LAB_00551618:
00551618  5F                        POP EDI
00551619  5E                        POP ESI
0055161A  8B E5                     MOV ESP,EBP
0055161C  5D                        POP EBP
0055161D  C2 04 00                  RET 0x4

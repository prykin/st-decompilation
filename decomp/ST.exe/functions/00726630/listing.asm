mfUSprLoad:
00726630  55                        PUSH EBP
00726631  8B EC                     MOV EBP,ESP
00726633  83 EC 58                  SUB ESP,0x58
00726636  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0072663B  53                        PUSH EBX
0072663C  56                        PUSH ESI
0072663D  33 F6                     XOR ESI,ESI
0072663F  57                        PUSH EDI
00726640  8D 55 AC                  LEA EDX,[EBP + -0x54]
00726643  8D 4D A8                  LEA ECX,[EBP + -0x58]
00726646  56                        PUSH ESI
00726647  52                        PUSH EDX
00726648  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0072664B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0072664E  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00726651  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00726657  E8 94 71 00 00            CALL 0x0072d7f0
0072665C  8B F8                     MOV EDI,EAX
0072665E  83 C4 08                  ADD ESP,0x8
00726661  3B FE                     CMP EDI,ESI
00726663  0F 85 5C 01 00 00         JNZ 0x007267c5
00726669  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0072666C  3B DE                     CMP EBX,ESI
0072666E  75 17                     JNZ 0x00726687
00726670  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00726675  68 42 01 00 00            PUSH 0x142
0072667A  68 8C 0C 7F 00            PUSH 0x7f0c8c
0072667F  50                        PUSH EAX
00726680  6A CC                     PUSH -0x34
00726682  E8 B9 F7 F7 FF            CALL 0x006a5e40
LAB_00726687:
00726687  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0072668A  51                        PUSH ECX
0072668B  56                        PUSH ESI
0072668C  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0072668F  8B CB                     MOV ECX,EBX
00726691  56                        PUSH ESI
00726692  6A 15                     PUSH 0x15
00726694  E8 47 B6 FC FF            CALL 0x006f1ce0
00726699  85 C0                     TEST EAX,EAX
0072669B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0072669E  75 18                     JNZ 0x007266b8
007266A0  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
007266A6  68 44 01 00 00            PUSH 0x144
007266AB  68 8C 0C 7F 00            PUSH 0x7f0c8c
007266B0  52                        PUSH EDX
007266B1  6A FC                     PUSH -0x4
007266B3  E8 88 F7 F7 FF            CALL 0x006a5e40
LAB_007266b8:
007266B8  8D 45 EC                  LEA EAX,[EBP + -0x14]
007266BB  6A 01                     PUSH 0x1
007266BD  50                        PUSH EAX
007266BE  56                        PUSH ESI
007266BF  6A 15                     PUSH 0x15
007266C1  8B CB                     MOV ECX,EBX
007266C3  E8 48 BC FC FF            CALL 0x006f2310
007266C8  0F BF 4D EC               MOVSX ECX,word ptr [EBP + -0x14]
007266CC  8D 04 8D 19 00 00 00      LEA EAX,[ECX*0x4 + 0x19]
007266D3  50                        PUSH EAX
007266D4  E8 37 45 F8 FF            CALL 0x006aac10
007266D9  0F BF 55 EC               MOVSX EDX,word ptr [EBP + -0x14]
007266DD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007266E0  89 10                     MOV dword ptr [EAX],EDX
007266E2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007266E5  89 58 05                  MOV dword ptr [EAX + 0x5],EBX
007266E8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007266EB  8A 55 F2                  MOV DL,byte ptr [EBP + -0xe]
007266EE  88 51 04                  MOV byte ptr [ECX + 0x4],DL
007266F1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007266F4  8B 08                     MOV ECX,dword ptr [EAX]
007266F6  C1 E1 02                  SHL ECX,0x2
007266F9  51                        PUSH ECX
007266FA  E8 11 45 F8 FF            CALL 0x006aac10
007266FF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00726702  33 F6                     XOR ESI,ESI
00726704  89 42 11                  MOV dword ptr [EDX + 0x11],EAX
00726707  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072670A  83 38 00                  CMP dword ptr [EAX],0x0
0072670D  7E 65                     JLE 0x00726774
0072670F  33 FF                     XOR EDI,EDI
LAB_00726711:
00726711  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00726714  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00726717  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0072671A  51                        PUSH ECX
0072671B  52                        PUSH EDX
0072671C  8A 14 07                  MOV DL,byte ptr [EDI + EAX*0x1]
0072671F  8D 4C 07 01               LEA ECX,[EDI + EAX*0x1 + 0x1]
00726723  51                        PUSH ECX
00726724  52                        PUSH EDX
00726725  53                        PUSH EBX
00726726  E8 75 3E FE FF            CALL 0x0070a5a0
0072672B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072672E  83 C4 14                  ADD ESP,0x14
00726731  8B 51 11                  MOV EDX,dword ptr [ECX + 0x11]
00726734  89 04 B2                  MOV dword ptr [EDX + ESI*0x4],EAX
00726737  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072673A  8B 48 11                  MOV ECX,dword ptr [EAX + 0x11]
0072673D  83 3C B1 00               CMP dword ptr [ECX + ESI*0x4],0x0
00726741  75 18                     JNZ 0x0072675b
00726743  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00726749  68 51 01 00 00            PUSH 0x151
0072674E  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726753  52                        PUSH EDX
00726754  6A FC                     PUSH -0x4
00726756  E8 E5 F6 F7 FF            CALL 0x006a5e40
LAB_0072675b:
0072675B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072675E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00726761  46                        INC ESI
00726762  8B 4C 07 21               MOV ECX,dword ptr [EDI + EAX*0x1 + 0x21]
00726766  83 C7 25                  ADD EDI,0x25
00726769  89 4C B2 11               MOV dword ptr [EDX + ESI*0x4 + 0x11],ECX
0072676D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00726770  3B 30                     CMP ESI,dword ptr [EAX]
00726772  7C 9D                     JL 0x00726711
LAB_00726774:
00726774  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00726777  6A 01                     PUSH 0x1
00726779  8A 10                     MOV DL,byte ptr [EAX]
0072677B  8D 48 01                  LEA ECX,[EAX + 0x1]
0072677E  51                        PUSH ECX
0072677F  52                        PUSH EDX
00726780  53                        PUSH EBX
00726781  E8 6A 3F FE FF            CALL 0x0070a6f0
00726786  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00726789  6A 01                     PUSH 0x1
0072678B  89 41 09                  MOV dword ptr [ECX + 0x9],EAX
0072678E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00726791  8D 50 01                  LEA EDX,[EAX + 0x1]
00726794  8A 00                     MOV AL,byte ptr [EAX]
00726796  52                        PUSH EDX
00726797  50                        PUSH EAX
00726798  53                        PUSH EBX
00726799  E8 12 40 FE FF            CALL 0x0070a7b0
0072679E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007267A1  83 C4 20                  ADD ESP,0x20
007267A4  89 41 0D                  MOV dword ptr [ECX + 0xd],EAX
007267A7  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
007267AA  8D 45 F8                  LEA EAX,[EBP + -0x8]
007267AD  8B CB                     MOV ECX,EBX
007267AF  50                        PUSH EAX
007267B0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007267B6  E8 25 B9 FC FF            CALL 0x006f20e0
007267BB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007267BE  5F                        POP EDI
007267BF  5E                        POP ESI
007267C0  5B                        POP EBX
007267C1  8B E5                     MOV ESP,EBP
007267C3  5D                        POP EBP
007267C4  C3                        RET
LAB_007267c5:
007267C5  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
007267C8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007267CB  8D 55 F8                  LEA EDX,[EBP + -0x8]
007267CE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007267D4  52                        PUSH EDX
007267D5  8B CE                     MOV ECX,ESI
007267D7  E8 04 B9 FC FF            CALL 0x006f20e0
007267DC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007267DF  85 C0                     TEST EAX,EAX
007267E1  74 37                     JZ 0x0072681a
007267E3  8B 48 11                  MOV ECX,dword ptr [EAX + 0x11]
007267E6  85 C9                     TEST ECX,ECX
007267E8  74 27                     JZ 0x00726811
007267EA  8B 08                     MOV ECX,dword ptr [EAX]
007267EC  33 DB                     XOR EBX,EBX
007267EE  85 C9                     TEST ECX,ECX
007267F0  7E 16                     JLE 0x00726808
LAB_007267f2:
007267F2  8B 40 11                  MOV EAX,dword ptr [EAX + 0x11]
007267F5  8D 0C 98                  LEA ECX,[EAX + EBX*0x4]
007267F8  51                        PUSH ECX
007267F9  8B CE                     MOV ECX,ESI
007267FB  E8 E0 B8 FC FF            CALL 0x006f20e0
00726800  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00726803  43                        INC EBX
00726804  3B 18                     CMP EBX,dword ptr [EAX]
00726806  7C EA                     JL 0x007267f2
LAB_00726808:
00726808  83 C0 11                  ADD EAX,0x11
0072680B  50                        PUSH EAX
0072680C  E8 4F 48 F8 FF            CALL 0x006ab060
LAB_00726811:
00726811  8D 55 FC                  LEA EDX,[EBP + -0x4]
00726814  52                        PUSH EDX
00726815  E8 46 48 F8 FF            CALL 0x006ab060
LAB_0072681a:
0072681A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0072681D  85 C0                     TEST EAX,EAX
0072681F  75 05                     JNZ 0x00726826
00726821  83 FF FC                  CMP EDI,-0x4
00726824  74 36                     JZ 0x0072685c
LAB_00726826:
00726826  68 00 0D 7F 00            PUSH 0x7f0d00
0072682B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00726830  57                        PUSH EDI
00726831  6A 00                     PUSH 0x0
00726833  68 63 01 00 00            PUSH 0x163
00726838  68 8C 0C 7F 00            PUSH 0x7f0c8c
0072683D  E8 8E 6C F8 FF            CALL 0x006ad4d0
00726842  83 C4 18                  ADD ESP,0x18
00726845  85 C0                     TEST EAX,EAX
00726847  74 01                     JZ 0x0072684a
00726849  CC                        INT3
LAB_0072684a:
0072684A  68 65 01 00 00            PUSH 0x165
0072684F  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726854  6A 00                     PUSH 0x0
00726856  57                        PUSH EDI
00726857  E8 E4 F5 F7 FF            CALL 0x006a5e40
LAB_0072685c:
0072685C  5F                        POP EDI
0072685D  5E                        POP ESI
0072685E  33 C0                     XOR EAX,EAX
00726860  5B                        POP EBX
00726861  8B E5                     MOV ESP,EBP
00726863  5D                        POP EBP
00726864  C3                        RET

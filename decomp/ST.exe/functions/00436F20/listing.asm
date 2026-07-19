STAllPlayersC::CmdToPlsObj:
00436F20  55                        PUSH EBP
00436F21  8B EC                     MOV EBP,ESP
00436F23  81 EC F8 01 00 00         SUB ESP,0x1f8
00436F29  53                        PUSH EBX
00436F2A  56                        PUSH ESI
00436F2B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00436F2E  57                        PUSH EDI
00436F2F  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00436F32  33 DB                     XOR EBX,EBX
00436F34  8A 56 08                  MOV DL,byte ptr [ESI + 0x8]
00436F37  66 8B 4E 0A               MOV CX,word ptr [ESI + 0xa]
00436F3B  8B C2                     MOV EAX,EDX
00436F3D  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
00436F40  25 FF 00 00 00            AND EAX,0xff
00436F45  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00436F48  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
00436F4B  8D 3C F8                  LEA EDI,[EAX + EDI*0x8]
00436F4E  8D 3C 78                  LEA EDI,[EAX + EDI*0x2]
00436F51  C1 E7 04                  SHL EDI,0x4
00436F54  03 F8                     ADD EDI,EAX
00436F56  8B 46 0A                  MOV EAX,dword ptr [ESI + 0xa]
00436F59  C1 E8 10                  SHR EAX,0x10
00436F5C  8B 3C 7D 21 4E 7F 00      MOV EDI,dword ptr [EDI*0x2 + 0x7f4e21]
00436F63  2B C3                     SUB EAX,EBX
00436F65  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
00436F68  0F 84 BB 02 00 00         JZ 0x00437229
00436F6E  48                        DEC EAX
00436F6F  74 74                     JZ 0x00436fe5
00436F71  48                        DEC EAX
00436F72  0F 85 FE 16 00 00         JNZ 0x00438676
00436F78  66 81 F9 FF FF            CMP CX,0xffff
00436F7D  0F 84 F3 16 00 00         JZ 0x00438676
00436F83  6A 03                     PUSH 0x3
00436F85  51                        PUSH ECX
00436F86  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00436F8C  52                        PUSH EDX
00436F8D  E8 28 B9 FC FF            CALL 0x004028ba
00436F92  3B C3                     CMP EAX,EBX
00436F94  0F 84 DC 16 00 00         JZ 0x00438676
00436F9A  8A 4E 0E                  MOV CL,byte ptr [ESI + 0xe]
00436F9D  80 F9 15                  CMP CL,0x15
00436FA0  74 1C                     JZ 0x00436fbe
00436FA2  80 F9 2A                  CMP CL,0x2a
00436FA5  0F 85 CB 16 00 00         JNZ 0x00438676
00436FAB  56                        PUSH ESI
00436FAC  6A 2A                     PUSH 0x2a
00436FAE  8B C8                     MOV ECX,EAX
00436FB0  E8 D7 A0 FC FF            CALL 0x0040108c
00436FB5  5F                        POP EDI
00436FB6  5E                        POP ESI
00436FB7  5B                        POP EBX
00436FB8  8B E5                     MOV ESP,EBP
00436FBA  5D                        POP EBP
00436FBB  C2 04 00                  RET 0x4
LAB_00436fbe:
00436FBE  8B 4E 17                  MOV ECX,dword ptr [ESI + 0x17]
00436FC1  33 D2                     XOR EDX,EDX
00436FC3  8A 11                     MOV DL,byte ptr [ECX]
00436FC5  B9 04 00 00 00            MOV ECX,0x4
00436FCA  2B CA                     SUB ECX,EDX
00436FCC  8D 55 E0                  LEA EDX,[EBP + -0x20]
00436FCF  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00436FD2  52                        PUSH EDX
00436FD3  6A 15                     PUSH 0x15
00436FD5  8B C8                     MOV ECX,EAX
00436FD7  E8 B0 A0 FC FF            CALL 0x0040108c
00436FDC  5F                        POP EDI
00436FDD  5E                        POP ESI
00436FDE  5B                        POP EBX
00436FDF  8B E5                     MOV ESP,EBP
00436FE1  5D                        POP EBP
00436FE2  C2 04 00                  RET 0x4
LAB_00436fe5:
00436FE5  66 81 F9 FF FF            CMP CX,0xffff
00436FEA  0F 84 86 16 00 00         JZ 0x00438676
00436FF0  6A 01                     PUSH 0x1
00436FF2  51                        PUSH ECX
00436FF3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00436FF9  52                        PUSH EDX
00436FFA  E8 BB B8 FC FF            CALL 0x004028ba
00436FFF  8B C8                     MOV ECX,EAX
00437001  3B CB                     CMP ECX,EBX
00437003  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00437006  0F 84 6A 16 00 00         JZ 0x00438676
0043700C  33 C0                     XOR EAX,EAX
0043700E  C7 45 88 01 44 00 00      MOV dword ptr [EBP + -0x78],0x4401
00437015  8A 46 0E                  MOV AL,byte ptr [ESI + 0xe]
00437018  83 C0 F8                  ADD EAX,-0x8
0043701B  83 F8 22                  CMP EAX,0x22
0043701E  0F 87 52 16 00 00         JA 0x00438676
00437024  33 D2                     XOR EDX,EDX
00437026  8A 90 90 86 43 00         MOV DL,byte ptr [EAX + 0x438690]
switchD_0043702c::switchD:
0043702C  FF 24 95 80 86 43 00      JMP dword ptr [EDX*0x4 + 0x438680]
switchD_0043702c::caseD_14:
00437033  8B 46 17                  MOV EAX,dword ptr [ESI + 0x17]
00437036  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00437039  66 8B 78 04               MOV DI,word ptr [EAX + 0x4]
0043703D  66 8B 10                  MOV DX,word ptr [EAX]
00437040  66 8B 58 08               MOV BX,word ptr [EAX + 0x8]
00437044  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
00437047  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0043704E  0F BF FF                  MOVSX EDI,DI
00437051  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
00437054  89 7D 98                  MOV dword ptr [EBP + -0x68],EDI
00437057  0F AF C7                  IMUL EAX,EDI
0043705A  0F BF 3D 7E B2 7F 00      MOVSX EDI,word ptr [0x007fb27e]
00437061  0F BF DB                  MOVSX EBX,BX
00437064  0F AF FB                  IMUL EDI,EBX
00437067  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0043706A  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
0043706D  8B 1D 80 B2 7F 00         MOV EBX,dword ptr [0x007fb280]
00437073  0F BF D2                  MOVSX EDX,DX
00437076  03 FA                     ADD EDI,EDX
00437078  03 F8                     ADD EDI,EAX
0043707A  66 83 3C 7B 00            CMP word ptr [EBX + EDI*0x2],0x0
0043707F  0F 84 0C 01 00 00         JZ 0x00437191
00437085  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
00437088  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
0043708F  66 85 FF                  TEST DI,DI
00437092  7C 52                     JL 0x004370e6
00437094  66 3B FB                  CMP DI,BX
00437097  7D 4D                     JGE 0x004370e6
00437099  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0043709C  66 85 FF                  TEST DI,DI
0043709F  7C 45                     JL 0x004370e6
004370A1  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
004370A8  7D 3C                     JGE 0x004370e6
004370AA  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
004370AD  66 85 FF                  TEST DI,DI
004370B0  7C 34                     JL 0x004370e6
004370B2  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
004370B9  7D 2B                     JGE 0x004370e6
004370BB  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004370C2  0F AF 4D D4               IMUL ECX,dword ptr [EBP + -0x2c]
004370C6  0F BF FB                  MOVSX EDI,BX
004370C9  0F AF 7D 98               IMUL EDI,dword ptr [EBP + -0x68]
004370CD  8B DA                     MOV EBX,EDX
004370CF  03 D9                     ADD EBX,ECX
004370D1  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004370D7  03 FB                     ADD EDI,EBX
004370D9  83 3C F9 00               CMP dword ptr [ECX + EDI*0x8],0x0
004370DD  0F 85 AB 00 00 00         JNZ 0x0043718e
004370E3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_004370e6:
004370E6  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
004370E9  66 83 FF 05               CMP DI,0x5
004370ED  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
004370F0  0F 8D 9B 00 00 00         JGE 0x00437191
LAB_004370f6:
004370F6  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
004370FD  0F BF DF                  MOVSX EBX,DI
00437100  0F AF CB                  IMUL ECX,EBX
00437103  8B 3D 80 B2 7F 00         MOV EDI,dword ptr [0x007fb280]
00437109  03 CA                     ADD ECX,EDX
0043710B  03 C8                     ADD ECX,EAX
0043710D  66 83 3C 4F 00            CMP word ptr [EDI + ECX*0x2],0x0
00437112  74 70                     JZ 0x00437184
00437114  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00437117  66 85 C9                  TEST CX,CX
0043711A  7C 55                     JL 0x00437171
0043711C  66 3B 0D 40 B2 7F 00      CMP CX,word ptr [0x007fb240]
00437123  7D 4C                     JGE 0x00437171
00437125  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00437128  66 85 C9                  TEST CX,CX
0043712B  7C 44                     JL 0x00437171
0043712D  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
00437134  7D 3B                     JGE 0x00437171
00437136  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00437139  66 85 C9                  TEST CX,CX
0043713C  7C 33                     JL 0x00437171
0043713E  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00437145  7D 2A                     JGE 0x00437171
00437147  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
0043714E  0F BF 4D 08               MOVSX ECX,word ptr [EBP + 0x8]
00437152  0F AF F9                  IMUL EDI,ECX
00437155  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
0043715C  0F AF CB                  IMUL ECX,EBX
0043715F  8B DA                     MOV EBX,EDX
00437161  03 DF                     ADD EBX,EDI
00437163  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
00437169  03 CB                     ADD ECX,EBX
0043716B  83 3C CF 00               CMP dword ptr [EDI + ECX*0x8],0x0
0043716F  75 1D                     JNZ 0x0043718e
LAB_00437171:
00437171  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
00437174  47                        INC EDI
00437175  66 83 FF 05               CMP DI,0x5
00437179  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
0043717C  0F 8C 74 FF FF FF         JL 0x004370f6
00437182  EB 0A                     JMP 0x0043718e
LAB_00437184:
00437184  0F BF 55 DC               MOVSX EDX,word ptr [EBP + -0x24]
00437188  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0043718B  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
LAB_0043718e:
0043718E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
switchD_0043702c::caseD_8:
00437191  89 75 8C                  MOV dword ptr [EBP + -0x74],ESI
00437194  8B 11                     MOV EDX,dword ptr [ECX]
00437196  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
0043719C  50                        PUSH EAX
0043719D  FF 12                     CALL dword ptr [EDX]
0043719F  5F                        POP EDI
004371A0  5E                        POP ESI
004371A1  5B                        POP EBX
004371A2  8B E5                     MOV ESP,EBP
004371A4  5D                        POP EBP
004371A5  C2 04 00                  RET 0x4
switchD_0043702c::caseD_29:
004371A8  8B 4E 17                  MOV ECX,dword ptr [ESI + 0x17]
004371AB  80 39 00                  CMP byte ptr [ECX],0x0
004371AE  75 4A                     JNZ 0x004371fa
004371B0  3B FB                     CMP EDI,EBX
004371B2  0F 84 BE 14 00 00         JZ 0x00438676
004371B8  6A 01                     PUSH 0x1
004371BA  6A 02                     PUSH 0x2
004371BC  6A 01                     PUSH 0x1
004371BE  53                        PUSH EBX
004371BF  E8 CC 70 27 00            CALL 0x006ae290
004371C4  8D 55 CC                  LEA EDX,[EBP + -0x34]
004371C7  8B F0                     MOV ESI,EAX
004371C9  52                        PUSH EDX
004371CA  56                        PUSH ESI
004371CB  E8 F0 6F 27 00            CALL 0x006ae1c0
004371D0  C7 45 88 98 5D 00 00      MOV dword ptr [EBP + -0x78],0x5d98
004371D7  66 89 5D 8C               MOV word ptr [EBP + -0x74],BX
LAB_004371db:
004371DB  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
004371E1  89 75 90                  MOV dword ptr [EBP + -0x70],ESI
004371E4  8B 07                     MOV EAX,dword ptr [EDI]
004371E6  51                        PUSH ECX
004371E7  8B CF                     MOV ECX,EDI
004371E9  FF 10                     CALL dword ptr [EAX]
004371EB  56                        PUSH ESI
004371EC  E8 1F 6F 27 00            CALL 0x006ae110
004371F1  5F                        POP EDI
004371F2  5E                        POP ESI
004371F3  5B                        POP EBX
004371F4  8B E5                     MOV ESP,EBP
004371F6  5D                        POP EBP
004371F7  C2 04 00                  RET 0x4
LAB_004371fa:
004371FA  3B FB                     CMP EDI,EBX
004371FC  0F 84 74 14 00 00         JZ 0x00438676
00437202  6A 01                     PUSH 0x1
00437204  6A 02                     PUSH 0x2
00437206  6A 01                     PUSH 0x1
00437208  53                        PUSH EBX
00437209  E8 82 70 27 00            CALL 0x006ae290
0043720E  8D 55 CC                  LEA EDX,[EBP + -0x34]
00437211  8B F0                     MOV ESI,EAX
00437213  52                        PUSH EDX
00437214  56                        PUSH ESI
00437215  E8 A6 6F 27 00            CALL 0x006ae1c0
0043721A  C7 45 88 98 5D 00 00      MOV dword ptr [EBP + -0x78],0x5d98
00437221  66 C7 45 8C 01 00         MOV word ptr [EBP + -0x74],0x1
00437227  EB B2                     JMP 0x004371db
LAB_00437229:
00437229  66 81 F9 FF FF            CMP CX,0xffff
0043722E  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00437231  0F 84 3F 14 00 00         JZ 0x00438676
00437237  80 7E 0E 17               CMP byte ptr [ESI + 0xe],0x17
0043723B  0F 85 77 02 00 00         JNZ 0x004374b8
00437241  8B 46 17                  MOV EAX,dword ptr [ESI + 0x17]
00437244  33 DB                     XOR EBX,EBX
00437246  8A 18                     MOV BL,byte ptr [EAX]
00437248  83 C3 EF                  ADD EBX,-0x11
0043724B  83 FB 06                  CMP EBX,0x6
0043724E  0F 87 64 02 00 00         JA 0x004374b8
switchD_00437254::switchD:
00437254  FF 24 9D B4 86 43 00      JMP dword ptr [EBX*0x4 + 0x4386b4]
switchD_00437254::caseD_15:
0043725B  8B 7E 13                  MOV EDI,dword ptr [ESI + 0x13]
0043725E  85 FF                     TEST EDI,EDI
00437260  76 40                     JBE 0x004372a2
00437262  8B 4E 0F                  MOV ECX,dword ptr [ESI + 0xf]
00437265  6A 01                     PUSH 0x1
00437267  6A 02                     PUSH 0x2
00437269  03 C8                     ADD ECX,EAX
0043726B  6A 00                     PUSH 0x0
0043726D  6A 00                     PUSH 0x0
0043726F  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00437272  E8 19 70 27 00            CALL 0x006ae290
00437277  8B 56 13                  MOV EDX,dword ptr [ESI + 0x13]
0043727A  33 FF                     XOR EDI,EDI
0043727C  D1 EA                     SHR EDX,0x1
0043727E  66 85 D2                  TEST DX,DX
00437281  8B D8                     MOV EBX,EAX
00437283  7E 3B                     JLE 0x004372c0
LAB_00437285:
00437285  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00437288  0F BF C7                  MOVSX EAX,DI
0043728B  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
0043728E  52                        PUSH EDX
0043728F  53                        PUSH EBX
00437290  E8 2B 6F 27 00            CALL 0x006ae1c0
00437295  8B 46 13                  MOV EAX,dword ptr [ESI + 0x13]
00437298  47                        INC EDI
00437299  D1 E8                     SHR EAX,0x1
0043729B  66 3B F8                  CMP DI,AX
0043729E  7C E5                     JL 0x00437285
004372A0  EB 1E                     JMP 0x004372c0
LAB_004372a2:
004372A2  51                        PUSH ECX
004372A3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004372A9  52                        PUSH EDX
004372AA  E8 4A EA FC FF            CALL 0x00405cf9
004372AF  85 C0                     TEST EAX,EAX
004372B1  0F 84 BF 13 00 00         JZ 0x00438676
004372B7  8B C8                     MOV ECX,EAX
004372B9  E8 F7 BA FC FF            CALL 0x00402db5
004372BE  8B D8                     MOV EBX,EAX
LAB_004372c0:
004372C0  8A 4E 08                  MOV CL,byte ptr [ESI + 0x8]
004372C3  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
004372C6  6A 01                     PUSH 0x1
004372C8  53                        PUSH EBX
004372C9  51                        PUSH ECX
004372CA  8B CF                     MOV ECX,EDI
004372CC  E8 2A CA FC FF            CALL 0x00403cfb
004372D1  8A 56 08                  MOV DL,byte ptr [ESI + 0x8]
004372D4  6A 00                     PUSH 0x0
004372D6  53                        PUSH EBX
004372D7  52                        PUSH EDX
004372D8  8B CF                     MOV ECX,EDI
004372DA  E8 95 E7 FC FF            CALL 0x00405a74
004372DF  53                        PUSH EBX
004372E0  E8 2B 6E 27 00            CALL 0x006ae110
004372E5  5F                        POP EDI
004372E6  5E                        POP ESI
004372E7  5B                        POP EBX
004372E8  8B E5                     MOV ESP,EBP
004372EA  5D                        POP EBP
004372EB  C2 04 00                  RET 0x4
switchD_00437254::caseD_16:
004372EE  8B 7E 13                  MOV EDI,dword ptr [ESI + 0x13]
004372F1  85 FF                     TEST EDI,EDI
004372F3  76 3E                     JBE 0x00437333
004372F5  8B 7E 0F                  MOV EDI,dword ptr [ESI + 0xf]
004372F8  6A 01                     PUSH 0x1
004372FA  6A 02                     PUSH 0x2
004372FC  6A 00                     PUSH 0x0
004372FE  6A 00                     PUSH 0x0
00437300  03 F8                     ADD EDI,EAX
00437302  E8 89 6F 27 00            CALL 0x006ae290
00437307  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0043730A  8B 46 13                  MOV EAX,dword ptr [ESI + 0x13]
0043730D  D1 E8                     SHR EAX,0x1
0043730F  33 DB                     XOR EBX,EBX
00437311  66 85 C0                  TEST AX,AX
00437314  7E 3C                     JLE 0x00437352
LAB_00437316:
00437316  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00437319  0F BF CB                  MOVSX ECX,BX
0043731C  8D 14 4F                  LEA EDX,[EDI + ECX*0x2]
0043731F  52                        PUSH EDX
00437320  50                        PUSH EAX
00437321  E8 9A 6E 27 00            CALL 0x006ae1c0
00437326  8B 4E 13                  MOV ECX,dword ptr [ESI + 0x13]
00437329  43                        INC EBX
0043732A  D1 E9                     SHR ECX,0x1
0043732C  66 3B D9                  CMP BX,CX
0043732F  7C E5                     JL 0x00437316
00437331  EB 1F                     JMP 0x00437352
LAB_00437333:
00437333  51                        PUSH ECX
00437334  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0043733A  52                        PUSH EDX
0043733B  E8 B9 E9 FC FF            CALL 0x00405cf9
00437340  85 C0                     TEST EAX,EAX
00437342  0F 84 2E 13 00 00         JZ 0x00438676
00437348  8B C8                     MOV ECX,EAX
0043734A  E8 66 BA FC FF            CALL 0x00402db5
0043734F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00437352:
00437352  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00437355  8A 56 08                  MOV DL,byte ptr [ESI + 0x8]
00437358  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0043735B  6A 00                     PUSH 0x0
0043735D  57                        PUSH EDI
0043735E  52                        PUSH EDX
0043735F  E8 97 C9 FC FF            CALL 0x00403cfb
00437364  57                        PUSH EDI
00437365  E8 A6 6D 27 00            CALL 0x006ae110
0043736A  5F                        POP EDI
0043736B  5E                        POP ESI
0043736C  5B                        POP EBX
0043736D  8B E5                     MOV ESP,EBP
0043736F  5D                        POP EBP
00437370  C2 04 00                  RET 0x4
switchD_00437254::caseD_17:
00437373  8B 7E 13                  MOV EDI,dword ptr [ESI + 0x13]
00437376  85 FF                     TEST EDI,EDI
00437378  76 40                     JBE 0x004373ba
0043737A  8B 4E 0F                  MOV ECX,dword ptr [ESI + 0xf]
0043737D  6A 01                     PUSH 0x1
0043737F  6A 02                     PUSH 0x2
00437381  03 C8                     ADD ECX,EAX
00437383  6A 00                     PUSH 0x0
00437385  6A 00                     PUSH 0x0
00437387  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0043738A  E8 01 6F 27 00            CALL 0x006ae290
0043738F  8B D8                     MOV EBX,EAX
00437391  8B 46 13                  MOV EAX,dword ptr [ESI + 0x13]
00437394  D1 E8                     SHR EAX,0x1
00437396  33 FF                     XOR EDI,EDI
00437398  66 85 C0                  TEST AX,AX
0043739B  7E 3B                     JLE 0x004373d8
LAB_0043739d:
0043739D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004373A0  0F BF CF                  MOVSX ECX,DI
004373A3  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
004373A6  50                        PUSH EAX
004373A7  53                        PUSH EBX
004373A8  E8 13 6E 27 00            CALL 0x006ae1c0
004373AD  8B 4E 13                  MOV ECX,dword ptr [ESI + 0x13]
004373B0  47                        INC EDI
004373B1  D1 E9                     SHR ECX,0x1
004373B3  66 3B F9                  CMP DI,CX
004373B6  7C E5                     JL 0x0043739d
004373B8  EB 1E                     JMP 0x004373d8
LAB_004373ba:
004373BA  51                        PUSH ECX
004373BB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004373C1  52                        PUSH EDX
004373C2  E8 32 E9 FC FF            CALL 0x00405cf9
004373C7  85 C0                     TEST EAX,EAX
004373C9  0F 84 A7 12 00 00         JZ 0x00438676
004373CF  8B C8                     MOV ECX,EAX
004373D1  E8 DF B9 FC FF            CALL 0x00402db5
004373D6  8B D8                     MOV EBX,EAX
LAB_004373d8:
004373D8  8B 56 17                  MOV EDX,dword ptr [ESI + 0x17]
004373DB  8B 42 1D                  MOV EAX,dword ptr [EDX + 0x1d]
004373DE  85 C0                     TEST EAX,EAX
004373E0  75 2E                     JNZ 0x00437410
004373E2  8A 46 08                  MOV AL,byte ptr [ESI + 0x8]
004373E5  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
004373E8  6A 01                     PUSH 0x1
004373EA  53                        PUSH EBX
004373EB  50                        PUSH EAX
004373EC  8B CF                     MOV ECX,EDI
004373EE  E8 81 E6 FC FF            CALL 0x00405a74
004373F3  8A 4E 08                  MOV CL,byte ptr [ESI + 0x8]
004373F6  6A 00                     PUSH 0x0
004373F8  53                        PUSH EBX
004373F9  51                        PUSH ECX
004373FA  8B CF                     MOV ECX,EDI
004373FC  E8 FA C8 FC FF            CALL 0x00403cfb
00437401  53                        PUSH EBX
00437402  E8 09 6D 27 00            CALL 0x006ae110
00437407  5F                        POP EDI
00437408  5E                        POP ESI
00437409  5B                        POP EBX
0043740A  8B E5                     MOV ESP,EBP
0043740C  5D                        POP EBP
0043740D  C2 04 00                  RET 0x4
LAB_00437410:
00437410  8A 56 08                  MOV DL,byte ptr [ESI + 0x8]
00437413  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00437416  6A 00                     PUSH 0x0
00437418  53                        PUSH EBX
00437419  52                        PUSH EDX
0043741A  E8 55 E6 FC FF            CALL 0x00405a74
0043741F  53                        PUSH EBX
00437420  E8 EB 6C 27 00            CALL 0x006ae110
00437425  5F                        POP EDI
00437426  5E                        POP ESI
00437427  5B                        POP EBX
00437428  8B E5                     MOV ESP,EBP
0043742A  5D                        POP EBP
0043742B  C2 04 00                  RET 0x4
switchD_00437254::caseD_11:
0043742E  8B 7E 13                  MOV EDI,dword ptr [ESI + 0x13]
00437431  85 FF                     TEST EDI,EDI
00437433  76 3E                     JBE 0x00437473
00437435  8B 7E 0F                  MOV EDI,dword ptr [ESI + 0xf]
00437438  6A 01                     PUSH 0x1
0043743A  6A 02                     PUSH 0x2
0043743C  6A 00                     PUSH 0x0
0043743E  6A 00                     PUSH 0x0
00437440  03 F8                     ADD EDI,EAX
00437442  E8 49 6E 27 00            CALL 0x006ae290
00437447  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0043744A  8B 46 13                  MOV EAX,dword ptr [ESI + 0x13]
0043744D  D1 E8                     SHR EAX,0x1
0043744F  33 DB                     XOR EBX,EBX
00437451  66 85 C0                  TEST AX,AX
00437454  7E 3C                     JLE 0x00437492
LAB_00437456:
00437456  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00437459  0F BF CB                  MOVSX ECX,BX
0043745C  8D 14 4F                  LEA EDX,[EDI + ECX*0x2]
0043745F  52                        PUSH EDX
00437460  50                        PUSH EAX
00437461  E8 5A 6D 27 00            CALL 0x006ae1c0
00437466  8B 4E 13                  MOV ECX,dword ptr [ESI + 0x13]
00437469  43                        INC EBX
0043746A  D1 E9                     SHR ECX,0x1
0043746C  66 3B D9                  CMP BX,CX
0043746F  7C E5                     JL 0x00437456
00437471  EB 1F                     JMP 0x00437492
LAB_00437473:
00437473  51                        PUSH ECX
00437474  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0043747A  52                        PUSH EDX
0043747B  E8 79 E8 FC FF            CALL 0x00405cf9
00437480  85 C0                     TEST EAX,EAX
00437482  0F 84 EE 11 00 00         JZ 0x00438676
00437488  8B C8                     MOV ECX,EAX
0043748A  E8 26 B9 FC FF            CALL 0x00402db5
0043748F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00437492:
00437492  8B 56 17                  MOV EDX,dword ptr [ESI + 0x17]
00437495  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00437498  8A 4E 08                  MOV CL,byte ptr [ESI + 0x8]
0043749B  8B 42 1D                  MOV EAX,dword ptr [EDX + 0x1d]
0043749E  50                        PUSH EAX
0043749F  57                        PUSH EDI
004374A0  51                        PUSH ECX
004374A1  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004374A4  E8 47 9C FC FF            CALL 0x004010f0
004374A9  57                        PUSH EDI
004374AA  E8 61 6C 27 00            CALL 0x006ae110
004374AF  5F                        POP EDI
004374B0  5E                        POP ESI
004374B1  5B                        POP EBX
004374B2  8B E5                     MOV ESP,EBP
004374B4  5D                        POP EBP
004374B5  C2 04 00                  RET 0x4
switchD_00437254::caseD_12:
004374B8  8B 46 13                  MOV EAX,dword ptr [ESI + 0x13]
004374BB  85 C0                     TEST EAX,EAX
004374BD  76 61                     JBE 0x00437520
004374BF  8B 7E 17                  MOV EDI,dword ptr [ESI + 0x17]
004374C2  8B 56 0F                  MOV EDX,dword ptr [ESI + 0xf]
004374C5  6A 01                     PUSH 0x1
004374C7  6A 02                     PUSH 0x2
004374C9  6A 00                     PUSH 0x0
004374CB  6A 00                     PUSH 0x0
004374CD  03 FA                     ADD EDI,EDX
004374CF  E8 BC 6D 27 00            CALL 0x006ae290
004374D4  8B 56 13                  MOV EDX,dword ptr [ESI + 0x13]
004374D7  33 DB                     XOR EBX,EBX
004374D9  D1 EA                     SHR EDX,0x1
004374DB  66 85 D2                  TEST DX,DX
004374DE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004374E1  7E 1B                     JLE 0x004374fe
LAB_004374e3:
004374E3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004374E6  0F BF C3                  MOVSX EAX,BX
004374E9  8D 0C 47                  LEA ECX,[EDI + EAX*0x2]
004374EC  51                        PUSH ECX
004374ED  52                        PUSH EDX
004374EE  E8 CD 6C 27 00            CALL 0x006ae1c0
004374F3  8B 46 13                  MOV EAX,dword ptr [ESI + 0x13]
004374F6  43                        INC EBX
004374F7  D1 E8                     SHR EAX,0x1
004374F9  66 3B D8                  CMP BX,AX
004374FC  7C E5                     JL 0x004374e3
LAB_004374fe:
004374FE  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00437501  8A 56 08                  MOV DL,byte ptr [ESI + 0x8]
00437504  8D 4D E8                  LEA ECX,[EBP + -0x18]
00437507  51                        PUSH ECX
00437508  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0043750B  57                        PUSH EDI
0043750C  68 FE FF 00 00            PUSH 0xfffe
00437511  52                        PUSH EDX
00437512  E8 78 A2 FC FF            CALL 0x0040178f
00437517  57                        PUSH EDI
00437518  E8 F3 6B 27 00            CALL 0x006ae110
0043751D  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
LAB_00437520:
00437520  85 FF                     TEST EDI,EDI
00437522  74 55                     JZ 0x00437579
00437524  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00437527  8A 4E 08                  MOV CL,byte ptr [ESI + 0x8]
0043752A  50                        PUSH EAX
0043752B  51                        PUSH ECX
0043752C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00437532  E8 C2 E7 FC FF            CALL 0x00405cf9
00437537  85 C0                     TEST EAX,EAX
00437539  74 3E                     JZ 0x00437579
0043753B  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0043753E  85 C9                     TEST ECX,ECX
00437540  74 37                     JZ 0x00437579
00437542  80 7E 0E 29               CMP byte ptr [ESI + 0xe],0x29
00437546  75 0C                     JNZ 0x00437554
00437548  8B 56 17                  MOV EDX,dword ptr [ESI + 0x17]
0043754B  80 3A 01                  CMP byte ptr [EDX],0x1
0043754E  0F 84 22 11 00 00         JZ 0x00438676
LAB_00437554:
00437554  8B C8                     MOV ECX,EAX
00437556  E8 5A B8 FC FF            CALL 0x00402db5
0043755B  8A 4E 08                  MOV CL,byte ptr [ESI + 0x8]
0043755E  8B D8                     MOV EBX,EAX
00437560  8D 45 E8                  LEA EAX,[EBP + -0x18]
00437563  50                        PUSH EAX
00437564  53                        PUSH EBX
00437565  68 FE FF 00 00            PUSH 0xfffe
0043756A  51                        PUSH ECX
0043756B  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0043756E  E8 1C A2 FC FF            CALL 0x0040178f
00437573  53                        PUSH EBX
00437574  E8 97 6B 27 00            CALL 0x006ae110
LAB_00437579:
00437579  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0043757C  8A 46 08                  MOV AL,byte ptr [ESI + 0x8]
0043757F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00437585  52                        PUSH EDX
00437586  50                        PUSH EAX
00437587  E8 6D E7 FC FF            CALL 0x00405cf9
0043758C  8B D8                     MOV EBX,EAX
0043758E  85 DB                     TEST EBX,EBX
00437590  0F 84 E0 10 00 00         JZ 0x00438676
00437596  8B CB                     MOV ECX,EBX
00437598  E8 D4 C4 FC FF            CALL 0x00403a71
0043759D  33 C0                     XOR EAX,EAX
0043759F  8A 46 0E                  MOV AL,byte ptr [ESI + 0xe]
004375A2  83 C0 F6                  ADD EAX,-0xa
004375A5  83 F8 27                  CMP EAX,0x27
004375A8  0F 87 C8 10 00 00         JA 0x00438676
004375AE  33 C9                     XOR ECX,ECX
004375B0  8A 88 0C 87 43 00         MOV CL,byte ptr [EAX + 0x43870c]
switchD_004375b6::switchD:
004375B6  FF 24 8D D0 86 43 00      JMP dword ptr [ECX*0x4 + 0x4386d0]
switchD_004375b6::caseD_31:
004375BD  8B 76 17                  MOV ESI,dword ptr [ESI + 0x17]
004375C0  33 C0                     XOR EAX,EAX
004375C2  8A 06                     MOV AL,byte ptr [ESI]
004375C4  48                        DEC EAX
004375C5  83 F8 03                  CMP EAX,0x3
004375C8  0F 87 E1 00 00 00         JA 0x004376af
switchD_004375ce::switchD:
004375CE  FF 24 85 34 87 43 00      JMP dword ptr [EAX*0x4 + 0x438734]
switchD_004375ce::caseD_1:
004375D5  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
004375D8  33 D2                     XOR EDX,EDX
004375DA  3C 01                     CMP AL,0x1
004375DC  6A 01                     PUSH 0x1
004375DE  0F 95 C2                  SETNZ DL
004375E1  33 FF                     XOR EDI,EDI
004375E3  6A 04                     PUSH 0x4
004375E5  57                        PUSH EDI
004375E6  57                        PUSH EDI
004375E7  89 95 B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],EDX
004375ED  89 BD B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EDI
004375F3  E8 98 6C 27 00            CALL 0x006ae290
004375F8  89 85 BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EAX
004375FE  66 39 7E 01               CMP word ptr [ESI + 0x1],DI
00437602  76 21                     JBE 0x00437625
00437604  33 C0                     XOR EAX,EAX
LAB_00437606:
00437606  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
0043760C  8D 44 86 04               LEA EAX,[ESI + EAX*0x4 + 0x4]
00437610  50                        PUSH EAX
00437611  51                        PUSH ECX
00437612  E8 A9 6B 27 00            CALL 0x006ae1c0
00437617  47                        INC EDI
00437618  33 D2                     XOR EDX,EDX
0043761A  66 8B 56 01               MOV DX,word ptr [ESI + 0x1]
0043761E  0F BF C7                  MOVSX EAX,DI
00437621  3B C2                     CMP EAX,EDX
00437623  7C E1                     JL 0x00437606
LAB_00437625:
00437625  8B 03                     MOV EAX,dword ptr [EBX]
00437627  8D 8D B4 FE FF FF         LEA ECX,[EBP + 0xfffffeb4]
0043762D  51                        PUSH ECX
0043762E  6A 02                     PUSH 0x2
00437630  8B CB                     MOV ECX,EBX
00437632  FF 50 08                  CALL dword ptr [EAX + 0x8]
00437635  8B 95 BC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffebc]
0043763B  52                        PUSH EDX
0043763C  E8 CF 6A 27 00            CALL 0x006ae110
00437641  5F                        POP EDI
00437642  5E                        POP ESI
00437643  5B                        POP EBX
00437644  8B E5                     MOV ESP,EBP
00437646  5D                        POP EBP
00437647  C2 04 00                  RET 0x4
switchD_004375ce::caseD_3:
0043764A  33 FF                     XOR EDI,EDI
0043764C  6A 01                     PUSH 0x1
0043764E  6A 02                     PUSH 0x2
00437650  57                        PUSH EDI
00437651  57                        PUSH EDI
00437652  89 BD CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EDI
00437658  E8 33 6C 27 00            CALL 0x006ae290
0043765D  89 85 D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],EAX
00437663  66 39 7E 01               CMP word ptr [ESI + 0x1],DI
00437667  76 21                     JBE 0x0043768a
00437669  33 C0                     XOR EAX,EAX
LAB_0043766b:
0043766B  8B 8D D0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffed0]
00437671  8D 44 46 04               LEA EAX,[ESI + EAX*0x2 + 0x4]
00437675  50                        PUSH EAX
00437676  51                        PUSH ECX
00437677  E8 44 6B 27 00            CALL 0x006ae1c0
0043767C  47                        INC EDI
0043767D  33 D2                     XOR EDX,EDX
0043767F  66 8B 56 01               MOV DX,word ptr [ESI + 0x1]
00437683  0F BF C7                  MOVSX EAX,DI
00437686  3B C2                     CMP EAX,EDX
00437688  7C E1                     JL 0x0043766b
LAB_0043768a:
0043768A  8B 03                     MOV EAX,dword ptr [EBX]
0043768C  8D 8D CC FE FF FF         LEA ECX,[EBP + 0xfffffecc]
00437692  51                        PUSH ECX
00437693  6A 05                     PUSH 0x5
00437695  8B CB                     MOV ECX,EBX
00437697  FF 50 08                  CALL dword ptr [EAX + 0x8]
0043769A  8B 95 D0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffed0]
004376A0  52                        PUSH EDX
004376A1  E8 6A 6A 27 00            CALL 0x006ae110
004376A6  5F                        POP EDI
004376A7  5E                        POP ESI
004376A8  5B                        POP EBX
004376A9  8B E5                     MOV ESP,EBP
004376AB  5D                        POP EBP
004376AC  C2 04 00                  RET 0x4
switchD_004375ce::default:
004376AF  68 2C 74 7A 00            PUSH 0x7a742c
004376B4  68 CC 4C 7A 00            PUSH 0x7a4ccc
004376B9  6A 00                     PUSH 0x0
004376BB  6A 00                     PUSH 0x0
004376BD  68 27 14 00 00            PUSH 0x1427
004376C2  68 04 60 7A 00            PUSH 0x7a6004
004376C7  E8 04 5E 27 00            CALL 0x006ad4d0
004376CC  83 C4 18                  ADD ESP,0x18
004376CF  85 C0                     TEST EAX,EAX
004376D1  0F 84 9F 0F 00 00         JZ 0x00438676
004376D7  CC                        INT3
switchD_004375b6::caseD_14:
004376E1  8B CB                     MOV ECX,EBX
004376E3  E8 D4 AA FC FF            CALL 0x004021bc
004376E8  85 C0                     TEST EAX,EAX
004376EA  75 37                     JNZ 0x00437723
004376EC  8B 76 17                  MOV ESI,dword ptr [ESI + 0x17]
004376EF  8D 55 BC                  LEA EDX,[EBP + -0x44]
004376F2  52                        PUSH EDX
004376F3  6A 00                     PUSH 0x0
004376F5  66 8B 06                  MOV AX,word ptr [ESI]
004376F8  6A 00                     PUSH 0x0
004376FA  66 89 45 B8               MOV word ptr [EBP + -0x48],AX
004376FE  66 8B 4E 04               MOV CX,word ptr [ESI + 0x4]
00437702  66 89 4D BA               MOV word ptr [EBP + -0x46],CX
00437706  8B CB                     MOV ECX,EBX
00437708  E8 CB A2 FC FF            CALL 0x004019d8
0043770D  8B 03                     MOV EAX,dword ptr [EBX]
0043770F  8D 4D B8                  LEA ECX,[EBP + -0x48]
00437712  51                        PUSH ECX
00437713  6A 01                     PUSH 0x1
00437715  8B CB                     MOV ECX,EBX
00437717  FF 50 08                  CALL dword ptr [EAX + 0x8]
0043771A  5F                        POP EDI
0043771B  5E                        POP ESI
0043771C  5B                        POP EBX
0043771D  8B E5                     MOV ESP,EBP
0043771F  5D                        POP EBP
00437720  C2 04 00                  RET 0x4
LAB_00437723:
00437723  6A 01                     PUSH 0x1
00437725  6A 06                     PUSH 0x6
00437727  6A 01                     PUSH 0x1
00437729  6A 00                     PUSH 0x0
0043772B  E8 60 6B 27 00            CALL 0x006ae290
00437730  8B 76 17                  MOV ESI,dword ptr [ESI + 0x17]
00437733  8D 4D F4                  LEA ECX,[EBP + -0xc]
00437736  8B F8                     MOV EDI,EAX
00437738  51                        PUSH ECX
00437739  66 8B 16                  MOV DX,word ptr [ESI]
0043773C  6A 00                     PUSH 0x0
0043773E  66 89 55 F0               MOV word ptr [EBP + -0x10],DX
00437742  66 8B 46 04               MOV AX,word ptr [ESI + 0x4]
00437746  6A 00                     PUSH 0x0
00437748  8B CB                     MOV ECX,EBX
0043774A  66 89 45 F2               MOV word ptr [EBP + -0xe],AX
0043774E  E8 85 A2 FC FF            CALL 0x004019d8
00437753  8D 55 F0                  LEA EDX,[EBP + -0x10]
00437756  52                        PUSH EDX
00437757  57                        PUSH EDI
00437758  E8 63 6A 27 00            CALL 0x006ae1c0
0043775D  8D 8D 28 FF FF FF         LEA ECX,[EBP + 0xffffff28]
00437763  89 BD 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EDI
00437769  C7 85 2C FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff2c],0x1
00437773  8B 03                     MOV EAX,dword ptr [EBX]
00437775  51                        PUSH ECX
00437776  6A 06                     PUSH 0x6
00437778  8B CB                     MOV ECX,EBX
0043777A  FF 50 08                  CALL dword ptr [EAX + 0x8]
0043777D  57                        PUSH EDI
0043777E  E8 8D 69 27 00            CALL 0x006ae110
00437783  5F                        POP EDI
00437784  5E                        POP ESI
00437785  5B                        POP EBX
00437786  8B E5                     MOV ESP,EBP
00437788  5D                        POP EBP
00437789  C2 04 00                  RET 0x4
switchD_004375b6::caseD_15:
0043778C  8B 56 17                  MOV EDX,dword ptr [ESI + 0x17]
0043778F  33 C0                     XOR EAX,EAX
00437791  B9 04 00 00 00            MOV ECX,0x4
00437796  8A 02                     MOV AL,byte ptr [EDX]
00437798  2B C8                     SUB ECX,EAX
0043779A  8D 45 E0                  LEA EAX,[EBP + -0x20]
0043779D  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
004377A0  8B 13                     MOV EDX,dword ptr [EBX]
004377A2  50                        PUSH EAX
004377A3  6A 07                     PUSH 0x7
004377A5  8B CB                     MOV ECX,EBX
004377A7  FF 52 08                  CALL dword ptr [EDX + 0x8]
004377AA  5F                        POP EDI
004377AB  5E                        POP ESI
004377AC  5B                        POP EBX
004377AD  8B E5                     MOV ESP,EBP
004377AF  5D                        POP EBP
004377B0  C2 04 00                  RET 0x4
switchD_004375b6::caseD_16:
004377B3  8B 46 17                  MOV EAX,dword ptr [ESI + 0x17]
004377B6  33 C9                     XOR ECX,ECX
004377B8  8A 08                     MOV CL,byte ptr [EAX]
004377BA  83 F9 05                  CMP ECX,0x5
004377BD  0F 87 B3 0E 00 00         JA 0x00438676
switchD_004377c3::switchD:
004377C3  FF 24 8D 44 87 43 00      JMP dword ptr [ECX*0x4 + 0x438744]
switchD_004377c3::caseD_0:
004377CA  8B 50 01                  MOV EDX,dword ptr [EAX + 0x1]
004377CD  8D 4D FC                  LEA ECX,[EBP + -0x4]
004377D0  51                        PUSH ECX
004377D1  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004377D7  52                        PUSH EDX
004377D8  E8 F3 EA 2A 00            CALL 0x006e62d0
004377DD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004377E0  85 C0                     TEST EAX,EAX
004377E2  0F 84 8E 0E 00 00         JZ 0x00438676
004377E8  6A 01                     PUSH 0x1
004377EA  6A 04                     PUSH 0x4
004377EC  6A 01                     PUSH 0x1
004377EE  6A 00                     PUSH 0x0
004377F0  E8 9B 6A 27 00            CALL 0x006ae290
004377F5  8B F8                     MOV EDI,EAX
004377F7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004377FA  8A 48 24                  MOV CL,byte ptr [EAX + 0x24]
004377FD  88 4D EC                  MOV byte ptr [EBP + -0x14],CL
00437800  66 8B 50 32               MOV DX,word ptr [EAX + 0x32]
00437804  66 89 55 EE               MOV word ptr [EBP + -0x12],DX
00437808  8B 40 20                  MOV EAX,dword ptr [EAX + 0x20]
0043780B  3D AE 01 00 00            CMP EAX,0x1ae
00437810  77 16                     JA 0x00437828
00437812  74 0E                     JZ 0x00437822
00437814  83 F8 14                  CMP EAX,0x14
00437817  74 25                     JZ 0x0043783e
00437819  5F                        POP EDI
0043781A  5E                        POP ESI
0043781B  5B                        POP EBX
0043781C  8B E5                     MOV ESP,EBP
0043781E  5D                        POP EBP
0043781F  C2 04 00                  RET 0x4
LAB_00437822:
00437822  C6 45 ED 03               MOV byte ptr [EBP + -0x13],0x3
00437826  EB 1A                     JMP 0x00437842
LAB_00437828:
00437828  3D E8 03 00 00            CMP EAX,0x3e8
0043782D  0F 82 43 0E 00 00         JC 0x00438676
00437833  3D E9 03 00 00            CMP EAX,0x3e9
00437838  0F 87 38 0E 00 00         JA 0x00438676
LAB_0043783e:
0043783E  C6 45 ED 01               MOV byte ptr [EBP + -0x13],0x1
LAB_00437842:
00437842  8D 45 EC                  LEA EAX,[EBP + -0x14]
00437845  50                        PUSH EAX
00437846  57                        PUSH EDI
00437847  E8 74 69 27 00            CALL 0x006ae1c0
0043784C  8B 4E 17                  MOV ECX,dword ptr [ESI + 0x17]
0043784F  33 D2                     XOR EDX,EDX
00437851  8A 01                     MOV AL,byte ptr [ECX]
00437853  8D 8D B4 FE FF FF         LEA ECX,[EBP + 0xfffffeb4]
00437859  84 C0                     TEST AL,AL
0043785B  0F 95 C2                  SETNZ DL
0043785E  89 95 B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],EDX
00437864  C7 85 B4 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffeb4],0x0
0043786E  89 BD BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EDI
00437874  8B 03                     MOV EAX,dword ptr [EBX]
00437876  51                        PUSH ECX
00437877  6A 02                     PUSH 0x2
00437879  8B CB                     MOV ECX,EBX
0043787B  FF 50 08                  CALL dword ptr [EAX + 0x8]
0043787E  57                        PUSH EDI
0043787F  E8 8C 68 27 00            CALL 0x006ae110
00437884  5F                        POP EDI
00437885  5E                        POP ESI
00437886  5B                        POP EBX
00437887  8B E5                     MOV ESP,EBP
00437889  5D                        POP EBP
0043788A  C2 04 00                  RET 0x4
switchD_004377c3::caseD_2:
0043788D  66 0F B6 50 05            MOVZX DX,byte ptr [EAX + 0x5]
00437892  66 89 95 54 FF FF FF      MOV word ptr [EBP + 0xffffff54],DX
00437899  66 0F B6 48 06            MOVZX CX,byte ptr [EAX + 0x6]
0043789E  66 89 8D 56 FF FF FF      MOV word ptr [EBP + 0xffffff56],CX
004378A5  8D 8D 54 FF FF FF         LEA ECX,[EBP + 0xffffff54]
004378AB  66 0F B6 50 07            MOVZX DX,byte ptr [EAX + 0x7]
004378B0  66 89 95 58 FF FF FF      MOV word ptr [EBP + 0xffffff58],DX
004378B7  8B 03                     MOV EAX,dword ptr [EBX]
004378B9  51                        PUSH ECX
004378BA  6A 0E                     PUSH 0xe
004378BC  8B CB                     MOV ECX,EBX
004378BE  FF 50 08                  CALL dword ptr [EAX + 0x8]
004378C1  5F                        POP EDI
004378C2  5E                        POP ESI
004378C3  5B                        POP EBX
004378C4  8B E5                     MOV ESP,EBP
004378C6  5D                        POP EBP
004378C7  C2 04 00                  RET 0x4
switchD_004377c3::caseD_1:
004378CA  8B 40 01                  MOV EAX,dword ptr [EAX + 0x1]
004378CD  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004378D3  8D 55 FC                  LEA EDX,[EBP + -0x4]
004378D6  52                        PUSH EDX
004378D7  50                        PUSH EAX
004378D8  E8 F3 E9 2A 00            CALL 0x006e62d0
004378DD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004378E0  85 C0                     TEST EAX,EAX
004378E2  0F 84 8E 0D 00 00         JZ 0x00438676
004378E8  8A 48 24                  MOV CL,byte ptr [EAX + 0x24]
004378EB  88 8D 20 FF FF FF         MOV byte ptr [EBP + 0xffffff20],CL
004378F1  66 8B 50 32               MOV DX,word ptr [EAX + 0x32]
004378F5  66 89 95 21 FF FF FF      MOV word ptr [EBP + 0xffffff21],DX
004378FC  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
004378FF  89 85 23 FF FF FF         MOV dword ptr [EBP + 0xffffff23],EAX
00437905  8B 13                     MOV EDX,dword ptr [EBX]
00437907  8D 85 20 FF FF FF         LEA EAX,[EBP + 0xffffff20]
0043790D  8B CB                     MOV ECX,EBX
0043790F  50                        PUSH EAX
00437910  6A 0F                     PUSH 0xf
00437912  FF 52 08                  CALL dword ptr [EDX + 0x8]
00437915  5F                        POP EDI
00437916  5E                        POP ESI
00437917  5B                        POP EBX
00437918  8B E5                     MOV ESP,EBP
0043791A  5D                        POP EBP
0043791B  C2 04 00                  RET 0x4
switchD_004375b6::caseD_1f:
0043791E  8B 46 17                  MOV EAX,dword ptr [ESI + 0x17]
00437921  66 8B 70 01               MOV SI,word ptr [EAX + 0x1]
00437925  66 8B 48 05               MOV CX,word ptr [EAX + 0x5]
00437929  66 8B 50 03               MOV DX,word ptr [EAX + 0x3]
0043792D  66 85 F6                  TEST SI,SI
00437930  0F 8C 40 0D 00 00         JL 0x00438676
00437936  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0043793D  66 3B F7                  CMP SI,DI
00437940  0F 8D 30 0D 00 00         JGE 0x00438676
00437946  66 85 D2                  TEST DX,DX
00437949  0F 8C 27 0D 00 00         JL 0x00438676
0043794F  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00437956  0F 8D 1A 0D 00 00         JGE 0x00438676
0043795C  66 85 C9                  TEST CX,CX
0043795F  0F 8C 11 0D 00 00         JL 0x00438676
00437965  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0043796C  0F 8D 04 0D 00 00         JGE 0x00438676
00437972  0F BF D2                  MOVSX EDX,DX
00437975  0F BF FF                  MOVSX EDI,DI
00437978  0F AF D7                  IMUL EDX,EDI
0043797B  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00437982  0F BF C9                  MOVSX ECX,CX
00437985  0F AF CF                  IMUL ECX,EDI
00437988  03 D1                     ADD EDX,ECX
0043798A  0F BF CE                  MOVSX ECX,SI
0043798D  03 D1                     ADD EDX,ECX
0043798F  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00437995  8B 3C D1                  MOV EDI,dword ptr [ECX + EDX*0x8]
00437998  85 FF                     TEST EDI,EDI
0043799A  0F 84 D6 0C 00 00         JZ 0x00438676
004379A0  8A 08                     MOV CL,byte ptr [EAX]
004379A2  80 F9 03                  CMP CL,0x3
004379A5  75 36                     JNZ 0x004379dd
004379A7  66 89 B5 64 FF FF FF      MOV word ptr [EBP + 0xffffff64],SI
004379AE  66 8B 50 03               MOV DX,word ptr [EAX + 0x3]
004379B2  66 89 95 66 FF FF FF      MOV word ptr [EBP + 0xffffff66],DX
004379B9  66 8B 40 05               MOV AX,word ptr [EAX + 0x5]
004379BD  66 89 85 68 FF FF FF      MOV word ptr [EBP + 0xffffff68],AX
004379C4  8B 13                     MOV EDX,dword ptr [EBX]
004379C6  8D 85 64 FF FF FF         LEA EAX,[EBP + 0xffffff64]
004379CC  8B CB                     MOV ECX,EBX
004379CE  50                        PUSH EAX
004379CF  6A 12                     PUSH 0x12
004379D1  FF 52 08                  CALL dword ptr [EDX + 0x8]
004379D4  5F                        POP EDI
004379D5  5E                        POP ESI
004379D6  5B                        POP EBX
004379D7  8B E5                     MOV ESP,EBP
004379D9  5D                        POP EBP
004379DA  C2 04 00                  RET 0x4
LAB_004379dd:
004379DD  80 F9 01                  CMP CL,0x1
004379E0  0F 85 C6 00 00 00         JNZ 0x00437aac
004379E6  6A 01                     PUSH 0x1
004379E8  6A 02                     PUSH 0x2
004379EA  6A 01                     PUSH 0x1
004379EC  6A 00                     PUSH 0x0
004379EE  E8 9D 68 27 00            CALL 0x006ae290
004379F3  8D 4F 32                  LEA ECX,[EDI + 0x32]
004379F6  8B F0                     MOV ESI,EAX
004379F8  51                        PUSH ECX
004379F9  56                        PUSH ESI
004379FA  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
004379FD  E8 BE 67 27 00            CALL 0x006ae1c0
00437A02  89 B5 F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],ESI
00437A08  83 CE FF                  OR ESI,0xffffffff
00437A0B  C7 85 F0 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffef0],0x0
00437A15  66 89 B5 02 FF FF FF      MOV word ptr [EBP + 0xffffff02],SI
00437A1C  66 89 B5 00 FF FF FF      MOV word ptr [EBP + 0xffffff00],SI
00437A23  66 89 B5 FE FE FF FF      MOV word ptr [EBP + 0xfffffefe],SI
00437A2A  66 89 B5 FC FE FF FF      MOV word ptr [EBP + 0xfffffefc],SI
00437A31  66 89 B5 FA FE FF FF      MOV word ptr [EBP + 0xfffffefa],SI
00437A38  66 89 B5 F8 FE FF FF      MOV word ptr [EBP + 0xfffffef8],SI
00437A3F  8B 17                     MOV EDX,dword ptr [EDI]
00437A41  8B CF                     MOV ECX,EDI
00437A43  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00437A46  8D 8D F0 FE FF FF         LEA ECX,[EBP + 0xfffffef0]
00437A4C  89 85 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],EAX
00437A52  C7 85 08 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff08],0x1
00437A5C  C7 85 0C FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff0c],0x0
00437A66  66 89 B5 1A FF FF FF      MOV word ptr [EBP + 0xffffff1a],SI
00437A6D  66 89 B5 18 FF FF FF      MOV word ptr [EBP + 0xffffff18],SI
00437A74  66 89 B5 16 FF FF FF      MOV word ptr [EBP + 0xffffff16],SI
00437A7B  66 89 B5 14 FF FF FF      MOV word ptr [EBP + 0xffffff14],SI
00437A82  66 89 B5 12 FF FF FF      MOV word ptr [EBP + 0xffffff12],SI
00437A89  66 89 B5 10 FF FF FF      MOV word ptr [EBP + 0xffffff10],SI
00437A90  8B 03                     MOV EAX,dword ptr [EBX]
00437A92  51                        PUSH ECX
00437A93  6A 08                     PUSH 0x8
00437A95  8B CB                     MOV ECX,EBX
00437A97  FF 50 08                  CALL dword ptr [EAX + 0x8]
00437A9A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00437A9D  52                        PUSH EDX
00437A9E  E8 6D 66 27 00            CALL 0x006ae110
00437AA3  5F                        POP EDI
00437AA4  5E                        POP ESI
00437AA5  5B                        POP EBX
00437AA6  8B E5                     MOV ESP,EBP
00437AA8  5D                        POP EBP
00437AA9  C2 04 00                  RET 0x4
LAB_00437aac:
00437AAC  8B CB                     MOV ECX,EBX
00437AAE  E8 02 B3 FC FF            CALL 0x00402db5
00437AB3  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
00437AB6  6A 01                     PUSH 0x1
00437AB8  33 FF                     XOR EDI,EDI
00437ABA  6A 02                     PUSH 0x2
00437ABC  57                        PUSH EDI
00437ABD  57                        PUSH EDI
00437ABE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00437AC1  89 B5 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],ESI
00437AC7  E8 C4 67 27 00            CALL 0x006ae290
00437ACC  6A 01                     PUSH 0x1
00437ACE  6A 02                     PUSH 0x2
00437AD0  57                        PUSH EDI
00437AD1  57                        PUSH EDI
00437AD2  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
00437AD5  E8 B6 67 27 00            CALL 0x006ae290
00437ADA  6A 01                     PUSH 0x1
00437ADC  6A 02                     PUSH 0x2
00437ADE  57                        PUSH EDI
00437ADF  57                        PUSH EDI
00437AE0  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00437AE3  E8 A8 67 27 00            CALL 0x006ae290
00437AE8  6A 01                     PUSH 0x1
00437AEA  6A 02                     PUSH 0x2
00437AEC  57                        PUSH EDI
00437AED  57                        PUSH EDI
00437AEE  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00437AF1  E8 9A 67 27 00            CALL 0x006ae290
00437AF6  3B F7                     CMP ESI,EDI
00437AF8  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00437AFB  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
00437AFE  89 7D 9C                  MOV dword ptr [EBP + -0x64],EDI
00437B01  89 BD 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDI
00437B07  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00437B0A  0F 8E F3 02 00 00         JLE 0x00437e03
00437B10  33 D2                     XOR EDX,EDX
LAB_00437b12:
00437B12  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00437B15  8D 85 EC FE FF FF         LEA EAX,[EBP + 0xfffffeec]
00437B1B  50                        PUSH EAX
00437B1C  E8 4F 51 27 00            CALL 0x006acc70
00437B21  8B 8D EC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeec]
00437B27  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
00437B2A  6A 01                     PUSH 0x1
00437B2C  51                        PUSH ECX
00437B2D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00437B33  52                        PUSH EDX
00437B34  E8 81 AD FC FF            CALL 0x004028ba
00437B39  8B F0                     MOV ESI,EAX
00437B3B  8B CE                     MOV ECX,ESI
00437B3D  8B 06                     MOV EAX,dword ptr [ESI]
00437B3F  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00437B42  83 F8 08                  CMP EAX,0x8
00437B45  74 1C                     JZ 0x00437b63
00437B47  8B 16                     MOV EDX,dword ptr [ESI]
00437B49  8B CE                     MOV ECX,ESI
00437B4B  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00437B4E  83 F8 14                  CMP EAX,0x14
00437B51  74 10                     JZ 0x00437b63
00437B53  8B 06                     MOV EAX,dword ptr [ESI]
00437B55  8B CE                     MOV ECX,ESI
00437B57  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00437B5A  83 F8 1A                  CMP EAX,0x1a
00437B5D  0F 85 E2 00 00 00         JNZ 0x00437c45
LAB_00437b63:
00437B63  8B CE                     MOV ECX,ESI
00437B65  E8 72 B3 FC FF            CALL 0x00402edc
00437B6A  83 F8 0C                  CMP EAX,0xc
00437B6D  0F 85 D2 00 00 00         JNZ 0x00437c45
00437B73  8D 8D 4C FE FF FF         LEA ECX,[EBP + 0xfffffe4c]
00437B79  51                        PUSH ECX
00437B7A  8B CE                     MOV ECX,ESI
00437B7C  E8 4C A9 FC FF            CALL 0x004024cd
00437B81  B9 10 00 00 00            MOV ECX,0x10
00437B86  8B F0                     MOV ESI,EAX
00437B88  8D BD 08 FE FF FF         LEA EDI,[EBP + 0xfffffe08]
00437B8E  8D 55 C4                  LEA EDX,[EBP + -0x3c]
00437B91  F3 A5                     MOVSD.REP ES:EDI,ESI
00437B93  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00437B99  52                        PUSH EDX
00437B9A  66 A5                     MOVSW ES:EDI,ESI
00437B9C  8B 85 0E FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe0e]
00437BA2  50                        PUSH EAX
00437BA3  E8 28 E7 2A 00            CALL 0x006e62d0
00437BA8  85 C0                     TEST EAX,EAX
00437BAA  0F 85 95 00 00 00         JNZ 0x00437c45
00437BB0  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00437BB3  8D 85 1C FF FF FF         LEA EAX,[EBP + 0xffffff1c]
00437BB9  50                        PUSH EAX
00437BBA  8B 11                     MOV EDX,dword ptr [ECX]
00437BBC  FF 92 88 00 00 00         CALL dword ptr [EDX + 0x88]
00437BC2  85 C0                     TEST EAX,EAX
00437BC4  7E 7F                     JLE 0x00437c45
00437BC6  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
00437BCC  2D DC 00 00 00            SUB EAX,0xdc
00437BD1  74 55                     JZ 0x00437c28
00437BD3  48                        DEC EAX
00437BD4  74 3E                     JZ 0x00437c14
00437BD6  48                        DEC EAX
00437BD7  74 27                     JZ 0x00437c00
00437BD9  68 E0 73 7A 00            PUSH 0x7a73e0
00437BDE  68 CC 4C 7A 00            PUSH 0x7a4ccc
00437BE3  6A 00                     PUSH 0x0
00437BE5  6A 00                     PUSH 0x0
00437BE7  68 CA 14 00 00            PUSH 0x14ca
00437BEC  68 04 60 7A 00            PUSH 0x7a6004
00437BF1  E8 DA 58 27 00            CALL 0x006ad4d0
00437BF6  83 C4 18                  ADD ESP,0x18
00437BF9  85 C0                     TEST EAX,EAX
00437BFB  74 48                     JZ 0x00437c45
00437BFD  CC                        INT3
LAB_00437c00:
00437C00  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
00437C03  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00437C06  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00437C09  46                        INC ESI
00437C0A  83 C1 32                  ADD ECX,0x32
00437C0D  89 75 C8                  MOV dword ptr [EBP + -0x38],ESI
00437C10  51                        PUSH ECX
00437C11  52                        PUSH EDX
00437C12  EB 2C                     JMP 0x00437c40
LAB_00437c14:
00437C14  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00437C17  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00437C1A  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00437C1D  42                        INC EDX
00437C1E  83 C0 32                  ADD EAX,0x32
00437C21  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
00437C24  50                        PUSH EAX
00437C25  51                        PUSH ECX
00437C26  EB 18                     JMP 0x00437c40
LAB_00437c28:
00437C28  8B BD 30 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff30]
00437C2E  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00437C31  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00437C34  47                        INC EDI
00437C35  83 C2 32                  ADD EDX,0x32
00437C38  89 BD 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDI
00437C3E  52                        PUSH EDX
00437C3F  50                        PUSH EAX
LAB_00437c40:
00437C40  E8 7B 65 27 00            CALL 0x006ae1c0
LAB_00437c45:
00437C45  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00437C48  40                        INC EAX
00437C49  0F BF D0                  MOVSX EDX,AX
00437C4C  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00437C4F  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00437C55  3B D0                     CMP EDX,EAX
00437C57  0F 8C B5 FE FF FF         JL 0x00437b12
00437C5D  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
00437C63  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
00437C66  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
00437C69  3B C1                     CMP EAX,ECX
00437C6B  7E 0C                     JLE 0x00437c79
00437C6D  3B C2                     CMP EAX,EDX
00437C6F  7E 08                     JLE 0x00437c79
00437C71  85 C0                     TEST EAX,EAX
00437C73  7E 04                     JLE 0x00437c79
00437C75  33 C0                     XOR EAX,EAX
00437C77  EB 3C                     JMP 0x00437cb5
LAB_00437c79:
00437C79  3B CA                     CMP ECX,EDX
00437C7B  7E 20                     JLE 0x00437c9d
00437C7D  3B C8                     CMP ECX,EAX
00437C7F  7C 0B                     JL 0x00437c8c
00437C81  85 C9                     TEST ECX,ECX
00437C83  7E 07                     JLE 0x00437c8c
00437C85  B8 01 00 00 00            MOV EAX,0x1
00437C8A  EB 29                     JMP 0x00437cb5
LAB_00437c8c:
00437C8C  3B D1                     CMP EDX,ECX
00437C8E  0F 8C 6F 01 00 00         JL 0x00437e03
00437C94  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
00437C9A  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
LAB_00437c9d:
00437C9D  3B D0                     CMP EDX,EAX
00437C9F  0F 8C 5E 01 00 00         JL 0x00437e03
00437CA5  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00437CA8  85 C0                     TEST EAX,EAX
00437CAA  0F 8E 53 01 00 00         JLE 0x00437e03
00437CB0  B8 02 00 00 00            MOV EAX,0x2
LAB_00437cb5:
00437CB5  33 FF                     XOR EDI,EDI
00437CB7  2B C7                     SUB EAX,EDI
00437CB9  89 BD F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],EDI
00437CBF  74 43                     JZ 0x00437d04
00437CC1  48                        DEC EAX
00437CC2  74 18                     JZ 0x00437cdc
00437CC4  48                        DEC EAX
00437CC5  75 50                     JNZ 0x00437d17
00437CC7  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00437CCA  C7 85 04 FF FF FF 4F 00 00 00  MOV dword ptr [EBP + 0xffffff04],0x4f
00437CD4  89 8D F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],ECX
00437CDA  EB 3B                     JMP 0x00437d17
LAB_00437cdc:
00437CDC  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00437CDF  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00437CE2  89 95 F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],EDX
00437CE8  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
00437CEB  50                        PUSH EAX
00437CEC  E8 C6 CC FC FF            CALL 0x004049b7
00437CF1  2C 03                     SUB AL,0x3
00437CF3  F6 D8                     NEG AL
00437CF5  1B C0                     SBB EAX,EAX
00437CF7  24 DB                     AND AL,0xdb
00437CF9  83 C0 5E                  ADD EAX,0x5e
00437CFC  89 85 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],EAX
00437D02  EB 13                     JMP 0x00437d17
LAB_00437d04:
00437D04  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00437D07  C7 85 04 FF FF FF 38 00 00 00  MOV dword ptr [EBP + 0xffffff04],0x38
00437D11  89 8D F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],ECX
LAB_00437d17:
00437D17  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00437D1A  83 CE FF                  OR ESI,0xffffffff
00437D1D  66 89 B5 02 FF FF FF      MOV word ptr [EBP + 0xffffff02],SI
00437D24  66 89 B5 00 FF FF FF      MOV word ptr [EBP + 0xffffff00],SI
00437D2B  8B 42 17                  MOV EAX,dword ptr [EDX + 0x17]
00437D2E  66 89 B5 FE FE FF FF      MOV word ptr [EBP + 0xfffffefe],SI
00437D35  66 89 B5 FC FE FF FF      MOV word ptr [EBP + 0xfffffefc],SI
00437D3C  66 89 B5 FA FE FF FF      MOV word ptr [EBP + 0xfffffefa],SI
00437D43  66 89 B5 F8 FE FF FF      MOV word ptr [EBP + 0xfffffef8],SI
00437D4A  89 BD 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],EDI
00437D50  66 8B 48 05               MOV CX,word ptr [EAX + 0x5]
00437D54  66 8B 50 03               MOV DX,word ptr [EAX + 0x3]
00437D58  66 8B 40 01               MOV AX,word ptr [EAX + 0x1]
00437D5C  66 3B C7                  CMP AX,DI
00437D5F  7C 51                     JL 0x00437db2
00437D61  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00437D68  7D 48                     JGE 0x00437db2
00437D6A  66 85 D2                  TEST DX,DX
00437D6D  7C 43                     JL 0x00437db2
00437D6F  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00437D76  7D 3A                     JGE 0x00437db2
00437D78  66 85 C9                  TEST CX,CX
00437D7B  7C 35                     JL 0x00437db2
00437D7D  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00437D84  7D 2C                     JGE 0x00437db2
00437D86  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00437D8D  0F BF C9                  MOVSX ECX,CX
00437D90  0F AF CF                  IMUL ECX,EDI
00437D93  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
00437D9A  0F BF D2                  MOVSX EDX,DX
00437D9D  0F AF D7                  IMUL EDX,EDI
00437DA0  0F BF C0                  MOVSX EAX,AX
00437DA3  03 CA                     ADD ECX,EDX
00437DA5  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00437DAB  03 C8                     ADD ECX,EAX
00437DAD  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00437DB0  EB 02                     JMP 0x00437db4
LAB_00437db2:
00437DB2  33 C0                     XOR EAX,EAX
LAB_00437db4:
00437DB4  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
00437DB7  83 C0 32                  ADD EAX,0x32
00437DBA  50                        PUSH EAX
00437DBB  57                        PUSH EDI
00437DBC  E8 FF 63 27 00            CALL 0x006ae1c0
00437DC1  8D 8D F0 FE FF FF         LEA ECX,[EBP + 0xfffffef0]
00437DC7  89 BD 0C FF FF FF         MOV dword ptr [EBP + 0xffffff0c],EDI
00437DCD  66 89 B5 1A FF FF FF      MOV word ptr [EBP + 0xffffff1a],SI
00437DD4  66 89 B5 18 FF FF FF      MOV word ptr [EBP + 0xffffff18],SI
00437DDB  66 89 B5 16 FF FF FF      MOV word ptr [EBP + 0xffffff16],SI
00437DE2  66 89 B5 14 FF FF FF      MOV word ptr [EBP + 0xffffff14],SI
00437DE9  66 89 B5 12 FF FF FF      MOV word ptr [EBP + 0xffffff12],SI
00437DF0  66 89 B5 10 FF FF FF      MOV word ptr [EBP + 0xffffff10],SI
00437DF7  8B 03                     MOV EAX,dword ptr [EBX]
00437DF9  51                        PUSH ECX
00437DFA  6A 08                     PUSH 0x8
00437DFC  8B CB                     MOV ECX,EBX
00437DFE  FF 50 08                  CALL dword ptr [EAX + 0x8]
00437E01  EB 3A                     JMP 0x00437e3d
LAB_00437e03:
00437E03  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00437E06  8B 42 17                  MOV EAX,dword ptr [EDX + 0x17]
00437E09  66 8B 48 01               MOV CX,word ptr [EAX + 0x1]
00437E0D  66 89 8D 44 FF FF FF      MOV word ptr [EBP + 0xffffff44],CX
00437E14  66 8B 50 03               MOV DX,word ptr [EAX + 0x3]
00437E18  66 89 95 46 FF FF FF      MOV word ptr [EBP + 0xffffff46],DX
00437E1F  66 8B 40 05               MOV AX,word ptr [EAX + 0x5]
00437E23  66 89 85 48 FF FF FF      MOV word ptr [EBP + 0xffffff48],AX
00437E2A  8B 13                     MOV EDX,dword ptr [EBX]
00437E2C  8D 85 44 FF FF FF         LEA EAX,[EBP + 0xffffff44]
00437E32  8B CB                     MOV ECX,EBX
00437E34  50                        PUSH EAX
00437E35  6A 0A                     PUSH 0xa
00437E37  FF 52 08                  CALL dword ptr [EDX + 0x8]
00437E3A  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
LAB_00437e3d:
00437E3D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00437E40  51                        PUSH ECX
00437E41  E8 CA 62 27 00            CALL 0x006ae110
00437E46  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00437E49  52                        PUSH EDX
00437E4A  E8 C1 62 27 00            CALL 0x006ae110
00437E4F  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00437E52  50                        PUSH EAX
00437E53  E8 B8 62 27 00            CALL 0x006ae110
00437E58  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00437E5B  51                        PUSH ECX
00437E5C  E8 AF 62 27 00            CALL 0x006ae110
00437E61  57                        PUSH EDI
00437E62  E8 A9 62 27 00            CALL 0x006ae110
00437E67  5F                        POP EDI
00437E68  5E                        POP ESI
00437E69  5B                        POP EBX
00437E6A  8B E5                     MOV ESP,EBP
00437E6C  5D                        POP EBP
00437E6D  C2 04 00                  RET 0x4
switchD_004375b6::caseD_17:
00437E70  8B 46 17                  MOV EAX,dword ptr [ESI + 0x17]
00437E73  33 C9                     XOR ECX,ECX
00437E75  8A 08                     MOV CL,byte ptr [EAX]
00437E77  8D 79 FF                  LEA EDI,[ECX + -0x1]
00437E7A  83 FF 17                  CMP EDI,0x17
00437E7D  0F 87 F3 07 00 00         JA 0x00438676
00437E83  33 D2                     XOR EDX,EDX
00437E85  8A 97 80 87 43 00         MOV DL,byte ptr [EDI + 0x438780]
switchD_00437e8b::switchD:
00437E8B  FF 24 95 5C 87 43 00      JMP dword ptr [EDX*0x4 + 0x43875c]
switchD_00437e8b::caseD_2:
00437E92  6A 01                     PUSH 0x1
00437E94  6A 06                     PUSH 0x6
00437E96  6A 01                     PUSH 0x1
00437E98  6A 00                     PUSH 0x0
00437E9A  E8 F1 63 27 00            CALL 0x006ae290
00437E9F  8B 76 17                  MOV ESI,dword ptr [ESI + 0x17]
00437EA2  8B F8                     MOV EDI,EAX
00437EA4  8D 55 F4                  LEA EDX,[EBP + -0xc]
00437EA7  66 8B 46 01               MOV AX,word ptr [ESI + 0x1]
00437EAB  52                        PUSH EDX
00437EAC  66 89 45 F0               MOV word ptr [EBP + -0x10],AX
00437EB0  66 8B 4E 05               MOV CX,word ptr [ESI + 0x5]
00437EB4  66 89 4D F2               MOV word ptr [EBP + -0xe],CX
00437EB8  6A 00                     PUSH 0x0
00437EBA  6A 00                     PUSH 0x0
00437EBC  8B CB                     MOV ECX,EBX
00437EBE  E8 15 9B FC FF            CALL 0x004019d8
00437EC3  8D 45 F0                  LEA EAX,[EBP + -0x10]
00437EC6  50                        PUSH EAX
00437EC7  57                        PUSH EDI
00437EC8  E8 F3 62 27 00            CALL 0x006ae1c0
00437ECD  8D 4D F2                  LEA ECX,[EBP + -0xe]
00437ED0  6A 00                     PUSH 0x0
00437ED2  8D 55 F0                  LEA EDX,[EBP + -0x10]
00437ED5  51                        PUSH ECX
00437ED6  52                        PUSH EDX
00437ED7  8B CB                     MOV ECX,EBX
00437ED9  E8 FA 9A FC FF            CALL 0x004019d8
00437EDE  8D 45 F0                  LEA EAX,[EBP + -0x10]
00437EE1  50                        PUSH EAX
00437EE2  57                        PUSH EDI
00437EE3  E8 D8 62 27 00            CALL 0x006ae1c0
00437EE8  8D 85 28 FF FF FF         LEA EAX,[EBP + 0xffffff28]
00437EEE  89 BD 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EDI
00437EF4  C7 85 2C FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff2c],0x0
00437EFE  8B 13                     MOV EDX,dword ptr [EBX]
00437F00  50                        PUSH EAX
00437F01  6A 06                     PUSH 0x6
00437F03  8B CB                     MOV ECX,EBX
00437F05  FF 52 08                  CALL dword ptr [EDX + 0x8]
00437F08  57                        PUSH EDI
00437F09  E8 02 62 27 00            CALL 0x006ae110
00437F0E  5F                        POP EDI
00437F0F  5E                        POP ESI
00437F10  5B                        POP EBX
00437F11  8B E5                     MOV ESP,EBP
00437F13  5D                        POP EBP
00437F14  C2 04 00                  RET 0x4
switchD_00437e8b::caseD_a:
00437F17  8D 85 34 FF FF FF         LEA EAX,[EBP + 0xffffff34]
00437F1D  C7 85 34 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff34],0x1
00437F27  C7 85 38 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff38],0x0
00437F31  8B 13                     MOV EDX,dword ptr [EBX]
00437F33  50                        PUSH EAX
00437F34  6A 04                     PUSH 0x4
00437F36  8B CB                     MOV ECX,EBX
00437F38  FF 52 08                  CALL dword ptr [EDX + 0x8]
00437F3B  5F                        POP EDI
00437F3C  5E                        POP ESI
00437F3D  5B                        POP EBX
00437F3E  8B E5                     MOV ESP,EBP
00437F40  5D                        POP EBP
00437F41  C2 04 00                  RET 0x4
switchD_00437e8b::caseD_3:
00437F44  66 8B 48 09               MOV CX,word ptr [EAX + 0x9]
00437F48  66 8B 50 05               MOV DX,word ptr [EAX + 0x5]
00437F4C  66 8B 40 01               MOV AX,word ptr [EAX + 0x1]
00437F50  66 85 C0                  TEST AX,AX
00437F53  0F 8C 1D 07 00 00         JL 0x00438676
00437F59  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
00437F60  66 3B C6                  CMP AX,SI
00437F63  0F 8D 0D 07 00 00         JGE 0x00438676
00437F69  66 85 D2                  TEST DX,DX
00437F6C  0F 8C 04 07 00 00         JL 0x00438676
00437F72  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00437F79  0F 8D F7 06 00 00         JGE 0x00438676
00437F7F  66 85 C9                  TEST CX,CX
00437F82  0F 8C EE 06 00 00         JL 0x00438676
00437F88  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00437F8F  0F 8D E1 06 00 00         JGE 0x00438676
00437F95  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00437F9C  0F BF C9                  MOVSX ECX,CX
00437F9F  0F BF D2                  MOVSX EDX,DX
00437FA2  0F AF CF                  IMUL ECX,EDI
00437FA5  0F BF F6                  MOVSX ESI,SI
00437FA8  0F AF D6                  IMUL EDX,ESI
00437FAB  0F BF C0                  MOVSX EAX,AX
00437FAE  03 CA                     ADD ECX,EDX
00437FB0  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00437FB6  03 C8                     ADD ECX,EAX
00437FB8  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
00437FBB  85 FF                     TEST EDI,EDI
00437FBD  0F 84 B3 06 00 00         JZ 0x00438676
00437FC3  6A 01                     PUSH 0x1
00437FC5  6A 02                     PUSH 0x2
00437FC7  6A 01                     PUSH 0x1
00437FC9  6A 00                     PUSH 0x0
00437FCB  E8 C0 62 27 00            CALL 0x006ae290
00437FD0  83 C7 32                  ADD EDI,0x32
00437FD3  8B F0                     MOV ESI,EAX
00437FD5  57                        PUSH EDI
00437FD6  56                        PUSH ESI
00437FD7  E8 E4 61 27 00            CALL 0x006ae1c0
00437FDC  8D 8D 34 FF FF FF         LEA ECX,[EBP + 0xffffff34]
00437FE2  C7 85 34 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff34],0x0
00437FEC  89 B5 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],ESI
00437FF2  8B 03                     MOV EAX,dword ptr [EBX]
00437FF4  51                        PUSH ECX
00437FF5  6A 04                     PUSH 0x4
00437FF7  8B CB                     MOV ECX,EBX
00437FF9  FF 50 08                  CALL dword ptr [EAX + 0x8]
00437FFC  56                        PUSH ESI
00437FFD  E8 0E 61 27 00            CALL 0x006ae110
00438002  5F                        POP EDI
00438003  5E                        POP ESI
00438004  5B                        POP EBX
00438005  8B E5                     MOV ESP,EBP
00438007  5D                        POP EBP
00438008  C2 04 00                  RET 0x4
switchD_00437e8b::caseD_14:
0043800B  33 C0                     XOR EAX,EAX
0043800D  C7 85 6C FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff6c],0x1
00438017  66 89 85 74 FF FF FF      MOV word ptr [EBP + 0xffffff74],AX
0043801E  66 89 85 72 FF FF FF      MOV word ptr [EBP + 0xffffff72],AX
00438025  66 89 85 70 FF FF FF      MOV word ptr [EBP + 0xffffff70],AX
0043802C  8B 13                     MOV EDX,dword ptr [EBX]
0043802E  8D 85 6C FF FF FF         LEA EAX,[EBP + 0xffffff6c]
00438034  8B CB                     MOV ECX,EBX
00438036  50                        PUSH EAX
00438037  6A 11                     PUSH 0x11
00438039  FF 52 08                  CALL dword ptr [EDX + 0x8]
0043803C  5F                        POP EDI
0043803D  5E                        POP ESI
0043803E  5B                        POP EBX
0043803F  8B E5                     MOV ESP,EBP
00438041  5D                        POP EBP
00438042  C2 04 00                  RET 0x4
switchD_00437e8b::caseD_13:
00438045  66 8B 48 01               MOV CX,word ptr [EAX + 0x1]
00438049  66 8B 50 09               MOV DX,word ptr [EAX + 0x9]
0043804D  66 8B 70 05               MOV SI,word ptr [EAX + 0x5]
00438051  66 85 C9                  TEST CX,CX
00438054  0F 8C 1C 06 00 00         JL 0x00438676
0043805A  66 3B 0D 40 B2 7F 00      CMP CX,word ptr [0x007fb240]
00438061  0F 8D 0F 06 00 00         JGE 0x00438676
00438067  66 85 F6                  TEST SI,SI
0043806A  0F 8C 06 06 00 00         JL 0x00438676
00438070  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
00438077  0F 8D F9 05 00 00         JGE 0x00438676
0043807D  66 85 D2                  TEST DX,DX
00438080  0F 8C F0 05 00 00         JL 0x00438676
00438086  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
0043808D  0F 8D E3 05 00 00         JGE 0x00438676
00438093  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0043809A  0F BF D2                  MOVSX EDX,DX
0043809D  0F AF D7                  IMUL EDX,EDI
004380A0  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
004380A7  0F BF F6                  MOVSX ESI,SI
004380AA  0F AF F7                  IMUL ESI,EDI
004380AD  0F BF C9                  MOVSX ECX,CX
004380B0  03 D6                     ADD EDX,ESI
004380B2  03 D1                     ADD EDX,ECX
004380B4  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004380BA  83 3C D1 00               CMP dword ptr [ECX + EDX*0x8],0x0
004380BE  0F 84 B2 05 00 00         JZ 0x00438676
004380C4  C7 85 6C FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff6c],0x0
004380CE  66 8B 50 01               MOV DX,word ptr [EAX + 0x1]
004380D2  66 89 95 70 FF FF FF      MOV word ptr [EBP + 0xffffff70],DX
004380D9  66 8B 48 05               MOV CX,word ptr [EAX + 0x5]
004380DD  66 89 8D 72 FF FF FF      MOV word ptr [EBP + 0xffffff72],CX
004380E4  66 8B 50 09               MOV DX,word ptr [EAX + 0x9]
004380E8  8D 8D 6C FF FF FF         LEA ECX,[EBP + 0xffffff6c]
004380EE  66 89 95 74 FF FF FF      MOV word ptr [EBP + 0xffffff74],DX
004380F5  8B 03                     MOV EAX,dword ptr [EBX]
004380F7  51                        PUSH ECX
004380F8  6A 11                     PUSH 0x11
004380FA  8B CB                     MOV ECX,EBX
004380FC  FF 50 08                  CALL dword ptr [EAX + 0x8]
004380FF  5F                        POP EDI
00438100  5E                        POP ESI
00438101  5B                        POP EBX
00438102  8B E5                     MOV ESP,EBP
00438104  5D                        POP EBP
00438105  C2 04 00                  RET 0x4
switchD_00437e8b::caseD_1:
00438108  8B 40 1D                  MOV EAX,dword ptr [EAX + 0x1d]
0043810B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00438111  8D 55 FC                  LEA EDX,[EBP + -0x4]
00438114  52                        PUSH EDX
00438115  50                        PUSH EAX
00438116  E8 B5 E1 2A 00            CALL 0x006e62d0
0043811B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043811E  85 C0                     TEST EAX,EAX
00438120  0F 84 50 05 00 00         JZ 0x00438676
00438126  6A 01                     PUSH 0x1
00438128  6A 02                     PUSH 0x2
0043812A  6A 01                     PUSH 0x1
0043812C  6A 00                     PUSH 0x0
0043812E  E8 5D 61 27 00            CALL 0x006ae290
00438133  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00438136  8B F0                     MOV ESI,EAX
00438138  83 C1 32                  ADD ECX,0x32
0043813B  51                        PUSH ECX
0043813C  56                        PUSH ESI
0043813D  E8 7E 60 27 00            CALL 0x006ae1c0
00438142  8D 85 CC FE FF FF         LEA EAX,[EBP + 0xfffffecc]
00438148  C7 85 CC FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffecc],0x0
00438152  89 B5 D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],ESI
00438158  8B 13                     MOV EDX,dword ptr [EBX]
0043815A  50                        PUSH EAX
0043815B  6A 05                     PUSH 0x5
0043815D  8B CB                     MOV ECX,EBX
0043815F  FF 52 08                  CALL dword ptr [EDX + 0x8]
00438162  56                        PUSH ESI
00438163  E8 A8 5F 27 00            CALL 0x006ae110
00438168  5F                        POP EDI
00438169  5E                        POP ESI
0043816A  5B                        POP EBX
0043816B  8B E5                     MOV ESP,EBP
0043816D  5D                        POP EBP
0043816E  C2 04 00                  RET 0x4
switchD_00437e8b::caseD_18:
00438171  66 8B 48 01               MOV CX,word ptr [EAX + 0x1]
00438175  66 89 8D 5C FF FF FF      MOV word ptr [EBP + 0xffffff5c],CX
0043817C  66 8B 50 05               MOV DX,word ptr [EAX + 0x5]
00438180  66 89 95 5E FF FF FF      MOV word ptr [EBP + 0xffffff5e],DX
00438187  66 8B 40 09               MOV AX,word ptr [EAX + 0x9]
0043818B  66 89 85 60 FF FF FF      MOV word ptr [EBP + 0xffffff60],AX
00438192  8B 13                     MOV EDX,dword ptr [EBX]
00438194  8D 85 5C FF FF FF         LEA EAX,[EBP + 0xffffff5c]
0043819A  8B CB                     MOV ECX,EBX
0043819C  50                        PUSH EAX
0043819D  6A 13                     PUSH 0x13
0043819F  FF 52 08                  CALL dword ptr [EDX + 0x8]
004381A2  5F                        POP EDI
004381A3  5E                        POP ESI
004381A4  5B                        POP EBX
004381A5  8B E5                     MOV ESP,EBP
004381A7  5D                        POP EBP
004381A8  C2 04 00                  RET 0x4
switchD_00437e8b::caseD_10:
004381AB  66 8B 48 01               MOV CX,word ptr [EAX + 0x1]
004381AF  66 89 8D 4C FF FF FF      MOV word ptr [EBP + 0xffffff4c],CX
004381B6  66 8B 50 05               MOV DX,word ptr [EAX + 0x5]
004381BA  66 89 95 4E FF FF FF      MOV word ptr [EBP + 0xffffff4e],DX
004381C1  66 8B 40 09               MOV AX,word ptr [EAX + 0x9]
004381C5  66 89 85 50 FF FF FF      MOV word ptr [EBP + 0xffffff50],AX
004381CC  8B 13                     MOV EDX,dword ptr [EBX]
004381CE  8D 85 4C FF FF FF         LEA EAX,[EBP + 0xffffff4c]
004381D4  8B CB                     MOV ECX,EBX
004381D6  50                        PUSH EAX
004381D7  6A 14                     PUSH 0x14
004381D9  FF 52 08                  CALL dword ptr [EDX + 0x8]
004381DC  5F                        POP EDI
004381DD  5E                        POP ESI
004381DE  5B                        POP EBX
004381DF  8B E5                     MOV ESP,EBP
004381E1  5D                        POP EBP
004381E2  C2 04 00                  RET 0x4
switchD_004375b6::caseD_23:
004381E5  8B 46 17                  MOV EAX,dword ptr [ESI + 0x17]
004381E8  66 8B 48 04               MOV CX,word ptr [EAX + 0x4]
004381EC  66 89 8D 90 FE FF FF      MOV word ptr [EBP + 0xfffffe90],CX
004381F3  66 8B 50 08               MOV DX,word ptr [EAX + 0x8]
004381F7  66 89 95 92 FE FF FF      MOV word ptr [EBP + 0xfffffe92],DX
004381FE  66 8B 48 0C               MOV CX,word ptr [EAX + 0xc]
00438202  66 89 8D 94 FE FF FF      MOV word ptr [EBP + 0xfffffe94],CX
00438209  8B 10                     MOV EDX,dword ptr [EAX]
0043820B  33 C0                     XOR EAX,EAX
0043820D  89 95 96 FE FF FF         MOV dword ptr [EBP + 0xfffffe96],EDX
00438213  8A 46 08                  MOV AL,byte ptr [ESI + 0x8]
00438216  C6 85 9E FE FF FF 00      MOV byte ptr [EBP + 0xfffffe9e],0x0
0043821D  89 85 9A FE FF FF         MOV dword ptr [EBP + 0xfffffe9a],EAX
00438223  8D 85 90 FE FF FF         LEA EAX,[EBP + 0xfffffe90]
00438229  66 C7 85 AD FE FF FF FF FF  MOV word ptr [EBP + 0xfffffead],0xffff
00438232  8B 13                     MOV EDX,dword ptr [EBX]
00438234  50                        PUSH EAX
00438235  6A 09                     PUSH 0x9
00438237  8B CB                     MOV ECX,EBX
00438239  FF 52 08                  CALL dword ptr [EDX + 0x8]
0043823C  5F                        POP EDI
0043823D  5E                        POP ESI
0043823E  5B                        POP EBX
0043823F  8B E5                     MOV ESP,EBP
00438241  5D                        POP EBP
00438242  C2 04 00                  RET 0x4
switchD_004375b6::caseD_29:
00438245  8B 4E 17                  MOV ECX,dword ptr [ESI + 0x17]
00438248  80 39 00                  CMP byte ptr [ECX],0x0
0043824B  75 14                     JNZ 0x00438261
switchD_004375b6::caseD_a:
0043824D  8B 13                     MOV EDX,dword ptr [EBX]
0043824F  6A 00                     PUSH 0x0
00438251  6A 03                     PUSH 0x3
00438253  8B CB                     MOV ECX,EBX
00438255  FF 52 08                  CALL dword ptr [EDX + 0x8]
00438258  5F                        POP EDI
00438259  5E                        POP ESI
0043825A  5B                        POP EBX
0043825B  8B E5                     MOV ESP,EBP
0043825D  5D                        POP EBP
0043825E  C2 04 00                  RET 0x4
LAB_00438261:
00438261  85 FF                     TEST EDI,EDI
00438263  0F 84 0D 04 00 00         JZ 0x00438676
00438269  C7 45 88 98 5D 00 00      MOV dword ptr [EBP + -0x78],0x5d98
00438270  66 C7 45 8C 01 00         MOV word ptr [EBP + -0x74],0x1
00438276  8B 43 29                  MOV EAX,dword ptr [EBX + 0x29]
00438279  8B CF                     MOV ECX,EDI
0043827B  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0043827E  8B 17                     MOV EDX,dword ptr [EDI]
00438280  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
00438286  50                        PUSH EAX
00438287  FF 12                     CALL dword ptr [EDX]
00438289  5F                        POP EDI
0043828A  5E                        POP ESI
0043828B  5B                        POP EBX
0043828C  8B E5                     MOV ESP,EBP
0043828E  5D                        POP EBP
0043828F  C2 04 00                  RET 0x4
switchD_004375b6::caseD_21:
00438292  8B 76 17                  MOV ESI,dword ptr [ESI + 0x17]
00438295  33 C0                     XOR EAX,EAX
00438297  8A 06                     MOV AL,byte ptr [ESI]
00438299  48                        DEC EAX
0043829A  74 59                     JZ 0x004382f5
0043829C  83 E8 02                  SUB EAX,0x2
0043829F  74 23                     JZ 0x004382c4
004382A1  48                        DEC EAX
004382A2  0F 85 CE 03 00 00         JNZ 0x00438676
004382A8  8B 4E 01                  MOV ECX,dword ptr [ESI + 0x1]
004382AB  8D 45 A4                  LEA EAX,[EBP + -0x5c]
004382AE  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
004382B1  8B 13                     MOV EDX,dword ptr [EBX]
004382B3  50                        PUSH EAX
004382B4  6A 0B                     PUSH 0xb
004382B6  8B CB                     MOV ECX,EBX
004382B8  FF 52 08                  CALL dword ptr [EDX + 0x8]
004382BB  5F                        POP EDI
004382BC  5E                        POP ESI
004382BD  5B                        POP EBX
004382BE  8B E5                     MOV ESP,EBP
004382C0  5D                        POP EBP
004382C1  C2 04 00                  RET 0x4
LAB_004382c4:
004382C4  83 CE FF                  OR ESI,0xffffffff
004382C7  8D 85 3C FF FF FF         LEA EAX,[EBP + 0xffffff3c]
004382CD  66 89 B5 40 FF FF FF      MOV word ptr [EBP + 0xffffff40],SI
004382D4  66 89 B5 3E FF FF FF      MOV word ptr [EBP + 0xffffff3e],SI
004382DB  66 89 B5 3C FF FF FF      MOV word ptr [EBP + 0xffffff3c],SI
004382E2  8B 13                     MOV EDX,dword ptr [EBX]
004382E4  50                        PUSH EAX
004382E5  6A 0C                     PUSH 0xc
004382E7  8B CB                     MOV ECX,EBX
004382E9  FF 52 08                  CALL dword ptr [EDX + 0x8]
004382EC  5F                        POP EDI
004382ED  5E                        POP ESI
004382EE  5B                        POP EBX
004382EF  8B E5                     MOV ESP,EBP
004382F1  5D                        POP EBP
004382F2  C2 04 00                  RET 0x4
LAB_004382f5:
004382F5  8B 4E 01                  MOV ECX,dword ptr [ESI + 0x1]
004382F8  8D 45 A0                  LEA EAX,[EBP + -0x60]
004382FB  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
004382FE  8B 13                     MOV EDX,dword ptr [EBX]
00438300  50                        PUSH EAX
00438301  6A 15                     PUSH 0x15
00438303  8B CB                     MOV ECX,EBX
00438305  FF 52 08                  CALL dword ptr [EDX + 0x8]
00438308  5F                        POP EDI
00438309  5E                        POP ESI
0043830A  5B                        POP EBX
0043830B  8B E5                     MOV ESP,EBP
0043830D  5D                        POP EBP
0043830E  C2 04 00                  RET 0x4
switchD_004375b6::caseD_19:
00438311  8B 76 17                  MOV ESI,dword ptr [ESI + 0x17]
00438314  66 8B 0E                  MOV CX,word ptr [ESI]
00438317  66 89 8D E0 FE FF FF      MOV word ptr [EBP + 0xfffffee0],CX
0043831E  66 8B 56 04               MOV DX,word ptr [ESI + 0x4]
00438322  66 89 95 E2 FE FF FF      MOV word ptr [EBP + 0xfffffee2],DX
00438329  66 8B 46 08               MOV AX,word ptr [ESI + 0x8]
0043832D  66 89 85 E4 FE FF FF      MOV word ptr [EBP + 0xfffffee4],AX
00438334  8D 85 E0 FE FF FF         LEA EAX,[EBP + 0xfffffee0]
0043833A  C7 85 E6 FE FF FF FF FF FF FF  MOV dword ptr [EBP + 0xfffffee6],0xffffffff
00438344  8B 13                     MOV EDX,dword ptr [EBX]
00438346  50                        PUSH EAX
00438347  6A 0D                     PUSH 0xd
00438349  8B CB                     MOV ECX,EBX
0043834B  FF 52 08                  CALL dword ptr [EDX + 0x8]
0043834E  5F                        POP EDI
0043834F  5E                        POP ESI
00438350  5B                        POP EBX
00438351  8B E5                     MOV ESP,EBP
00438353  5D                        POP EBP
00438354  C2 04 00                  RET 0x4
switchD_004375b6::caseD_1a:
00438357  8B 76 17                  MOV ESI,dword ptr [ESI + 0x17]
0043835A  33 C0                     XOR EAX,EAX
0043835C  8A 06                     MOV AL,byte ptr [ESI]
0043835E  48                        DEC EAX
0043835F  0F 84 03 01 00 00         JZ 0x00438468
00438365  48                        DEC EAX
00438366  0F 85 0A 03 00 00         JNZ 0x00438676
0043836C  66 8B 46 01               MOV AX,word ptr [ESI + 0x1]
00438370  66 89 45 AC               MOV word ptr [EBP + -0x54],AX
00438374  66 8B 4E 05               MOV CX,word ptr [ESI + 0x5]
00438378  66 89 4D AE               MOV word ptr [EBP + -0x52],CX
0043837C  66 8B 76 09               MOV SI,word ptr [ESI + 0x9]
00438380  66 85 C0                  TEST AX,AX
00438383  66 89 75 B0               MOV word ptr [EBP + -0x50],SI
00438387  0F 8C E9 02 00 00         JL 0x00438676
0043838D  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
00438394  66 3B C2                  CMP AX,DX
00438397  0F 8D D9 02 00 00         JGE 0x00438676
0043839D  66 85 C9                  TEST CX,CX
004383A0  0F 8C D0 02 00 00         JL 0x00438676
004383A6  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004383AD  0F 8D C3 02 00 00         JGE 0x00438676
004383B3  66 85 F6                  TEST SI,SI
004383B6  0F 8C BA 02 00 00         JL 0x00438676
004383BC  66 3B 35 44 B2 7F 00      CMP SI,word ptr [0x007fb244]
004383C3  0F 8D AD 02 00 00         JGE 0x00438676
004383C9  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004383D0  0F BF F6                  MOVSX ESI,SI
004383D3  0F BF C9                  MOVSX ECX,CX
004383D6  0F AF F7                  IMUL ESI,EDI
004383D9  0F BF D2                  MOVSX EDX,DX
004383DC  0F AF CA                  IMUL ECX,EDX
004383DF  0F BF C0                  MOVSX EAX,AX
004383E2  03 F1                     ADD ESI,ECX
004383E4  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004383EA  03 F0                     ADD ESI,EAX
004383EC  8B 34 F1                  MOV ESI,dword ptr [ECX + ESI*0x8]
004383EF  85 F6                     TEST ESI,ESI
004383F1  0F 84 7F 02 00 00         JZ 0x00438676
004383F7  81 7E 20 E8 03 00 00      CMP dword ptr [ESI + 0x20],0x3e8
004383FE  0F 85 72 02 00 00         JNZ 0x00438676
00438404  8B 16                     MOV EDX,dword ptr [ESI]
00438406  8B CE                     MOV ECX,ESI
00438408  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0043840B  83 F8 37                  CMP EAX,0x37
0043840E  75 27                     JNZ 0x00438437
00438410  33 C0                     XOR EAX,EAX
00438412  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00438415  66 89 45 B2               MOV word ptr [EBP + -0x4e],AX
00438419  66 89 45 B4               MOV word ptr [EBP + -0x4c],AX
0043841D  66 89 45 B6               MOV word ptr [EBP + -0x4a],AX
LAB_00438421:
00438421  8B 03                     MOV EAX,dword ptr [EBX]
00438423  8D 4D A8                  LEA ECX,[EBP + -0x58]
00438426  51                        PUSH ECX
00438427  6A 10                     PUSH 0x10
00438429  8B CB                     MOV ECX,EBX
0043842B  FF 50 08                  CALL dword ptr [EAX + 0x8]
0043842E  5F                        POP EDI
0043842F  5E                        POP ESI
00438430  5B                        POP EBX
00438431  8B E5                     MOV ESP,EBP
00438433  5D                        POP EBP
00438434  C2 04 00                  RET 0x4
LAB_00438437:
00438437  8B 16                     MOV EDX,dword ptr [ESI]
00438439  8B CE                     MOV ECX,ESI
0043843B  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0043843E  83 F8 6C                  CMP EAX,0x6c
00438441  0F 85 2F 02 00 00         JNZ 0x00438676
00438447  8D 45 B6                  LEA EAX,[EBP + -0x4a]
0043844A  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0043844D  50                        PUSH EAX
0043844E  8D 55 B2                  LEA EDX,[EBP + -0x4e]
00438451  51                        PUSH ECX
00438452  52                        PUSH EDX
00438453  8B CE                     MOV ECX,ESI
00438455  E8 7C AB FC FF            CALL 0x00402fd6
0043845A  83 F8 01                  CMP EAX,0x1
0043845D  0F 85 13 02 00 00         JNZ 0x00438676
00438463  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00438466  EB B9                     JMP 0x00438421
LAB_00438468:
00438468  33 C0                     XOR EAX,EAX
0043846A  C7 45 A8 02 00 00 00      MOV dword ptr [EBP + -0x58],0x2
00438471  66 89 45 AC               MOV word ptr [EBP + -0x54],AX
00438475  66 89 45 AE               MOV word ptr [EBP + -0x52],AX
00438479  66 89 45 B0               MOV word ptr [EBP + -0x50],AX
0043847D  66 8B 56 01               MOV DX,word ptr [ESI + 0x1]
00438481  66 89 55 B2               MOV word ptr [EBP + -0x4e],DX
00438485  66 8B 46 05               MOV AX,word ptr [ESI + 0x5]
00438489  66 89 45 B4               MOV word ptr [EBP + -0x4c],AX
0043848D  66 8B 4E 09               MOV CX,word ptr [ESI + 0x9]
00438491  8D 45 A8                  LEA EAX,[EBP + -0x58]
00438494  66 89 4D B6               MOV word ptr [EBP + -0x4a],CX
00438498  8B 13                     MOV EDX,dword ptr [EBX]
0043849A  50                        PUSH EAX
0043849B  6A 10                     PUSH 0x10
0043849D  8B CB                     MOV ECX,EBX
0043849F  FF 52 08                  CALL dword ptr [EDX + 0x8]
004384A2  5F                        POP EDI
004384A3  5E                        POP ESI
004384A4  5B                        POP EBX
004384A5  8B E5                     MOV ESP,EBP
004384A7  5D                        POP EBP
004384A8  C2 04 00                  RET 0x4
switchD_004375b6::caseD_18:
004384AB  8B 46 17                  MOV EAX,dword ptr [ESI + 0x17]
004384AE  33 C9                     XOR ECX,ECX
004384B0  8A 08                     MOV CL,byte ptr [EAX]
004384B2  49                        DEC ECX
004384B3  83 F9 0B                  CMP ECX,0xb
004384B6  0F 87 10 01 00 00         JA 0x004385cc
switchD_004384bc::switchD:
004384BC  FF 24 8D 98 87 43 00      JMP dword ptr [ECX*0x4 + 0x438798]
switchD_004384bc::caseD_1:
004384C3  8B 50 0D                  MOV EDX,dword ptr [EAX + 0xd]
004384C6  8B 0B                     MOV ECX,dword ptr [EBX]
004384C8  52                        PUSH EDX
004384C9  33 D2                     XOR EDX,EDX
004384CB  8A 50 11                  MOV DL,byte ptr [EAX + 0x11]
004384CE  52                        PUSH EDX
004384CF  6A 01                     PUSH 0x1
004384D1  E9 F2 00 00 00            JMP 0x004385c8
switchD_004384bc::caseD_2:
004384D6  8B 50 0D                  MOV EDX,dword ptr [EAX + 0xd]
004384D9  8B 0B                     MOV ECX,dword ptr [EBX]
004384DB  52                        PUSH EDX
004384DC  33 D2                     XOR EDX,EDX
004384DE  8A 50 11                  MOV DL,byte ptr [EAX + 0x11]
004384E1  52                        PUSH EDX
004384E2  6A 02                     PUSH 0x2
004384E4  E9 DF 00 00 00            JMP 0x004385c8
switchD_004384bc::caseD_3:
004384E9  8B 50 0D                  MOV EDX,dword ptr [EAX + 0xd]
004384EC  8B 0B                     MOV ECX,dword ptr [EBX]
004384EE  52                        PUSH EDX
004384EF  33 D2                     XOR EDX,EDX
004384F1  8A 50 11                  MOV DL,byte ptr [EAX + 0x11]
004384F4  52                        PUSH EDX
004384F5  6A 04                     PUSH 0x4
004384F7  E9 CC 00 00 00            JMP 0x004385c8
switchD_004384bc::caseD_4:
004384FC  8B 50 0D                  MOV EDX,dword ptr [EAX + 0xd]
004384FF  8B 0B                     MOV ECX,dword ptr [EBX]
00438501  52                        PUSH EDX
00438502  33 D2                     XOR EDX,EDX
00438504  8A 50 11                  MOV DL,byte ptr [EAX + 0x11]
00438507  52                        PUSH EDX
00438508  6A 05                     PUSH 0x5
0043850A  E9 B9 00 00 00            JMP 0x004385c8
switchD_004384bc::caseD_5:
0043850F  8B 50 0D                  MOV EDX,dword ptr [EAX + 0xd]
00438512  8B 0B                     MOV ECX,dword ptr [EBX]
00438514  52                        PUSH EDX
00438515  33 D2                     XOR EDX,EDX
00438517  8A 50 11                  MOV DL,byte ptr [EAX + 0x11]
0043851A  52                        PUSH EDX
0043851B  6A 03                     PUSH 0x3
0043851D  E9 A6 00 00 00            JMP 0x004385c8
switchD_004384bc::caseD_9:
00438522  8B 3B                     MOV EDI,dword ptr [EBX]
00438524  8B CB                     MOV ECX,EBX
00438526  FF 57 24                  CALL dword ptr [EDI + 0x24]
00438529  50                        PUSH EAX
0043852A  8B 03                     MOV EAX,dword ptr [EBX]
0043852C  8B CB                     MOV ECX,EBX
0043852E  FF 50 20                  CALL dword ptr [EAX + 0x20]
00438531  40                        INC EAX
00438532  50                        PUSH EAX
00438533  6A FF                     PUSH -0x1
00438535  53                        PUSH EBX
00438536  FF 57 18                  CALL dword ptr [EDI + 0x18]
00438539  E9 8E 00 00 00            JMP 0x004385cc
switchD_004384bc::caseD_a:
0043853E  8B 3B                     MOV EDI,dword ptr [EBX]
00438540  8B CB                     MOV ECX,EBX
00438542  FF 57 24                  CALL dword ptr [EDI + 0x24]
00438545  8B 13                     MOV EDX,dword ptr [EBX]
00438547  50                        PUSH EAX
00438548  8B CB                     MOV ECX,EBX
0043854A  FF 52 20                  CALL dword ptr [EDX + 0x20]
0043854D  48                        DEC EAX
0043854E  50                        PUSH EAX
0043854F  6A FF                     PUSH -0x1
00438551  53                        PUSH EBX
00438552  FF 57 18                  CALL dword ptr [EDI + 0x18]
00438555  EB 75                     JMP 0x004385cc
switchD_004384bc::caseD_b:
00438557  8B 3B                     MOV EDI,dword ptr [EBX]
00438559  8B CB                     MOV ECX,EBX
0043855B  FF 57 24                  CALL dword ptr [EDI + 0x24]
0043855E  83 C0 2D                  ADD EAX,0x2d
00438561  8B CB                     MOV ECX,EBX
00438563  50                        PUSH EAX
00438564  8B 03                     MOV EAX,dword ptr [EBX]
00438566  FF 50 20                  CALL dword ptr [EAX + 0x20]
00438569  50                        PUSH EAX
0043856A  6A FF                     PUSH -0x1
0043856C  53                        PUSH EBX
0043856D  FF 57 18                  CALL dword ptr [EDI + 0x18]
00438570  EB 5A                     JMP 0x004385cc
switchD_004384bc::caseD_c:
00438572  8B 3B                     MOV EDI,dword ptr [EBX]
00438574  8B CB                     MOV ECX,EBX
00438576  FF 57 24                  CALL dword ptr [EDI + 0x24]
00438579  8B 13                     MOV EDX,dword ptr [EBX]
0043857B  83 E8 2D                  SUB EAX,0x2d
0043857E  50                        PUSH EAX
0043857F  8B CB                     MOV ECX,EBX
00438581  FF 52 20                  CALL dword ptr [EDX + 0x20]
00438584  50                        PUSH EAX
00438585  6A FF                     PUSH -0x1
00438587  53                        PUSH EBX
00438588  FF 57 18                  CALL dword ptr [EDI + 0x18]
0043858B  EB 3F                     JMP 0x004385cc
switchD_004384bc::caseD_8:
0043858D  8B 03                     MOV EAX,dword ptr [EBX]
0043858F  6A 00                     PUSH 0x0
00438591  6A 00                     PUSH 0x0
00438593  6A 00                     PUSH 0x0
00438595  53                        PUSH EBX
00438596  FF 50 18                  CALL dword ptr [EAX + 0x18]
00438599  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0043859F  6A 00                     PUSH 0x0
004385A1  6A 11                     PUSH 0x11
004385A3  E8 AD C6 FC FF            CALL 0x00404c55
004385A8  EB 22                     JMP 0x004385cc
switchD_004384bc::caseD_6:
004385AA  8B 50 0D                  MOV EDX,dword ptr [EAX + 0xd]
004385AD  8B 0B                     MOV ECX,dword ptr [EBX]
004385AF  52                        PUSH EDX
004385B0  33 D2                     XOR EDX,EDX
004385B2  8A 50 11                  MOV DL,byte ptr [EAX + 0x11]
004385B5  52                        PUSH EDX
004385B6  6A FD                     PUSH -0x3
004385B8  EB 0E                     JMP 0x004385c8
switchD_004384bc::caseD_7:
004385BA  8B 50 0D                  MOV EDX,dword ptr [EAX + 0xd]
004385BD  8B 0B                     MOV ECX,dword ptr [EBX]
004385BF  52                        PUSH EDX
004385C0  33 D2                     XOR EDX,EDX
004385C2  8A 50 11                  MOV DL,byte ptr [EAX + 0x11]
004385C5  52                        PUSH EDX
004385C6  6A FE                     PUSH -0x2
LAB_004385c8:
004385C8  53                        PUSH EBX
004385C9  FF 51 18                  CALL dword ptr [ECX + 0x18]
switchD_004384bc::default:
004385CC  8B 76 17                  MOV ESI,dword ptr [ESI + 0x17]
004385CF  33 C0                     XOR EAX,EAX
004385D1  8A 06                     MOV AL,byte ptr [ESI]
004385D3  48                        DEC EAX
004385D4  83 F8 0B                  CMP EAX,0xb
004385D7  0F 87 99 00 00 00         JA 0x00438676
004385DD  33 C9                     XOR ECX,ECX
004385DF  8A 88 D8 87 43 00         MOV CL,byte ptr [EAX + 0x4387d8]
switchD_004385e5::switchD:
004385E5  FF 24 8D C8 87 43 00      JMP dword ptr [ECX*0x4 + 0x4387c8]
switchD_004385e5::caseD_1:
004385EC  66 8B 56 01               MOV DX,word ptr [ESI + 0x1]
004385F0  8D 4D BC                  LEA ECX,[EBP + -0x44]
004385F3  66 89 55 B8               MOV word ptr [EBP + -0x48],DX
004385F7  66 8B 46 05               MOV AX,word ptr [ESI + 0x5]
004385FB  51                        PUSH ECX
004385FC  6A 00                     PUSH 0x0
004385FE  6A 00                     PUSH 0x0
00438600  8B CB                     MOV ECX,EBX
00438602  66 89 45 BA               MOV word ptr [EBP + -0x46],AX
00438606  E8 CD 93 FC FF            CALL 0x004019d8
0043860B  8B 13                     MOV EDX,dword ptr [EBX]
0043860D  8D 45 B8                  LEA EAX,[EBP + -0x48]
00438610  50                        PUSH EAX
00438611  6A 01                     PUSH 0x1
00438613  8B CB                     MOV ECX,EBX
00438615  FF 52 08                  CALL dword ptr [EDX + 0x8]
00438618  5F                        POP EDI
00438619  5E                        POP ESI
0043861A  5B                        POP EBX
0043861B  8B E5                     MOV ESP,EBP
0043861D  5D                        POP EBP
0043861E  C2 04 00                  RET 0x4
switchD_004385e5::caseD_9:
00438621  8D 4D BC                  LEA ECX,[EBP + -0x44]
00438624  8D 55 BA                  LEA EDX,[EBP + -0x46]
00438627  51                        PUSH ECX
00438628  8D 45 B8                  LEA EAX,[EBP + -0x48]
0043862B  52                        PUSH EDX
0043862C  50                        PUSH EAX
0043862D  8B CB                     MOV ECX,EBX
0043862F  E8 A4 93 FC FF            CALL 0x004019d8
00438634  8B 13                     MOV EDX,dword ptr [EBX]
00438636  8D 45 B8                  LEA EAX,[EBP + -0x48]
00438639  50                        PUSH EAX
0043863A  6A 01                     PUSH 0x1
0043863C  8B CB                     MOV ECX,EBX
0043863E  FF 52 08                  CALL dword ptr [EDX + 0x8]
00438641  5F                        POP EDI
00438642  5E                        POP ESI
00438643  5B                        POP EBX
00438644  8B E5                     MOV ESP,EBP
00438646  5D                        POP EBP
00438647  C2 04 00                  RET 0x4
switchD_004375b6::caseD_28:
0043864A  8B 46 17                  MOV EAX,dword ptr [ESI + 0x17]
0043864D  33 C9                     XOR ECX,ECX
0043864F  8A 08                     MOV CL,byte ptr [EAX]
00438651  8B C1                     MOV EAX,ECX
00438653  83 E8 00                  SUB EAX,0x0
00438656  74 15                     JZ 0x0043866d
00438658  48                        DEC EAX
00438659  75 1B                     JNZ 0x00438676
0043865B  6A 01                     PUSH 0x1
0043865D  8B CB                     MOV ECX,EBX
0043865F  E8 57 BA FC FF            CALL 0x004040bb
00438664  5F                        POP EDI
00438665  5E                        POP ESI
00438666  5B                        POP EBX
00438667  8B E5                     MOV ESP,EBP
00438669  5D                        POP EBP
0043866A  C2 04 00                  RET 0x4
LAB_0043866d:
0043866D  6A 00                     PUSH 0x0
0043866F  8B CB                     MOV ECX,EBX
00438671  E8 45 BA FC FF            CALL 0x004040bb
switchD_0043702c::caseD_a:
00438676  5F                        POP EDI
00438677  5E                        POP ESI
00438678  5B                        POP EBX
00438679  8B E5                     MOV ESP,EBP
0043867B  5D                        POP EBP
0043867C  C2 04 00                  RET 0x4

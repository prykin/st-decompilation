FUN_005441a0:
005441A0  55                        PUSH EBP
005441A1  8B EC                     MOV EBP,ESP
005441A3  81 EC B4 00 00 00         SUB ESP,0xb4
005441A9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005441AE  56                        PUSH ESI
005441AF  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
005441B2  57                        PUSH EDI
005441B3  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
005441B9  8D 8D 4C FF FF FF         LEA ECX,[EBP + 0xffffff4c]
005441BF  6A 00                     PUSH 0x0
005441C1  52                        PUSH EDX
005441C2  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
005441C8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005441CE  E8 1D 96 1E 00            CALL 0x0072d7f0
005441D3  8B F0                     MOV ESI,EAX
005441D5  83 C4 08                  ADD ESP,0x8
005441D8  85 F6                     TEST ESI,ESI
005441DA  0F 85 9B 01 00 00         JNZ 0x0054437b
005441E0  B9 08 00 00 00            MOV ECX,0x8
005441E5  8D 7D E0                  LEA EDI,[EBP + -0x20]
005441E8  F3 AB                     STOSD.REP ES:EDI
005441EA  8A 0D 4C 73 80 00         MOV CL,byte ptr [0x0080734c]
005441F0  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
005441F3  F6 D9                     NEG CL
005441F5  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005441F8  8D 55 E0                  LEA EDX,[EBP + -0x20]
005441FB  1B C9                     SBB ECX,ECX
005441FD  52                        PUSH EDX
005441FE  83 E1 02                  AND ECX,0x2
00544201  6A 01                     PUSH 0x1
00544203  41                        INC ECX
00544204  6A 03                     PUSH 0x3
00544206  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00544209  8B CE                     MOV ECX,ESI
0054420B  C7 45 F0 13 00 00 00      MOV dword ptr [EBP + -0x10],0x13
00544212  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00544215  E8 E6 1D 1A 00            CALL 0x006e6000
0054421A  8D 45 E0                  LEA EAX,[EBP + -0x20]
0054421D  8B CE                     MOV ECX,ESI
0054421F  50                        PUSH EAX
00544220  6A 01                     PUSH 0x1
00544222  6A 03                     PUSH 0x3
00544224  C7 45 F0 15 00 00 00      MOV dword ptr [EBP + -0x10],0x15
0054422B  E8 D0 1D 1A 00            CALL 0x006e6000
00544230  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00544233  B9 13 00 00 00            MOV ECX,0x13
00544238  25 FF FF 00 00            AND EAX,0xffff
0054423D  8D 7D 90                  LEA EDI,[EBP + -0x70]
00544240  89 86 C5 00 00 00         MOV dword ptr [ESI + 0xc5],EAX
00544246  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
00544249  8B 45 FA                  MOV EAX,dword ptr [EBP + -0x6]
0054424C  8D 55 E0                  LEA EDX,[EBP + -0x20]
0054424F  25 FF FF 00 00            AND EAX,0xffff
00544254  52                        PUSH EDX
00544255  89 86 C9 00 00 00         MOV dword ptr [ESI + 0xc9],EAX
0054425B  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
0054425E  33 C0                     XOR EAX,EAX
00544260  6A 01                     PUSH 0x1
00544262  F3 AB                     STOSD.REP ES:EDI
00544264  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00544267  8D 4D 90                  LEA ECX,[EBP + -0x70]
0054426A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0054426D  6A 03                     PUSH 0x3
0054426F  8B CE                     MOV ECX,ESI
00544271  C7 45 90 08 00 00 00      MOV dword ptr [EBP + -0x70],0x8
00544278  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0054427B  C7 45 A8 02 00 00 00      MOV dword ptr [EBP + -0x58],0x2
00544282  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00544285  C7 45 C8 02 00 00 00      MOV dword ptr [EBP + -0x38],0x2
0054428C  C7 45 F0 10 00 00 00      MOV dword ptr [EBP + -0x10],0x10
00544293  C7 45 94 00 00 00 08      MOV dword ptr [EBP + -0x6c],0x8000000
0054429A  C7 45 AC 10 A1 00 00      MOV dword ptr [EBP + -0x54],0xa110
005442A1  C7 45 CC 11 A1 00 00      MOV dword ptr [EBP + -0x34],0xa111
005442A8  E8 53 1D 1A 00            CALL 0x006e6000
005442AD  8D 45 E0                  LEA EAX,[EBP + -0x20]
005442B0  8B CE                     MOV ECX,ESI
005442B2  50                        PUSH EAX
005442B3  6A 01                     PUSH 0x1
005442B5  6A 03                     PUSH 0x3
005442B7  C7 45 94 00 00 00 01      MOV dword ptr [EBP + -0x6c],0x1000000
005442BE  C7 45 AC 12 A1 00 00      MOV dword ptr [EBP + -0x54],0xa112
005442C5  C7 45 CC 13 A1 00 00      MOV dword ptr [EBP + -0x34],0xa113
005442CC  E8 2F 1D 1A 00            CALL 0x006e6000
005442D1  8D 4D E0                  LEA ECX,[EBP + -0x20]
005442D4  C7 45 94 00 00 00 40      MOV dword ptr [EBP + -0x6c],0x40000000
005442DB  51                        PUSH ECX
005442DC  6A 01                     PUSH 0x1
005442DE  6A 03                     PUSH 0x3
005442E0  8B CE                     MOV ECX,ESI
005442E2  C7 45 AC 14 A1 00 00      MOV dword ptr [EBP + -0x54],0xa114
005442E9  C7 45 CC 15 A1 00 00      MOV dword ptr [EBP + -0x34],0xa115
005442F0  E8 0B 1D 1A 00            CALL 0x006e6000
005442F5  C7 45 CC 33 A1 00 00      MOV dword ptr [EBP + -0x34],0xa133
005442FC  BF 04 00 00 00            MOV EDI,0x4
LAB_00544301:
00544301  8D 55 90                  LEA EDX,[EBP + -0x70]
00544304  8D 45 E0                  LEA EAX,[EBP + -0x20]
00544307  52                        PUSH EDX
00544308  50                        PUSH EAX
00544309  57                        PUSH EDI
0054430A  8B CE                     MOV ECX,ESI
0054430C  E8 4B DA EB FF            CALL 0x00401d5c
00544311  47                        INC EDI
00544312  83 FF 08                  CMP EDI,0x8
00544315  7C EA                     JL 0x00544301
00544317  C7 45 CC 00 00 00 00      MOV dword ptr [EBP + -0x34],0x0
0054431E  BF 08 00 00 00            MOV EDI,0x8
LAB_00544323:
00544323  8D 4D 90                  LEA ECX,[EBP + -0x70]
00544326  8D 55 E0                  LEA EDX,[EBP + -0x20]
00544329  51                        PUSH ECX
0054432A  52                        PUSH EDX
0054432B  57                        PUSH EDI
0054432C  8B CE                     MOV ECX,ESI
0054432E  E8 29 DA EB FF            CALL 0x00401d5c
00544333  47                        INC EDI
00544334  83 FF 50                  CMP EDI,0x50
00544337  7C EA                     JL 0x00544323
00544339  33 FF                     XOR EDI,EDI
LAB_0054433b:
0054433B  8D 45 90                  LEA EAX,[EBP + -0x70]
0054433E  8D 4D E0                  LEA ECX,[EBP + -0x20]
00544341  50                        PUSH EAX
00544342  51                        PUSH ECX
00544343  57                        PUSH EDI
00544344  8B CE                     MOV ECX,ESI
00544346  E8 46 F5 EB FF            CALL 0x00403891
0054434B  47                        INC EDI
0054434C  83 FF 0A                  CMP EDI,0xa
0054434F  7C EA                     JL 0x0054433b
00544351  33 FF                     XOR EDI,EDI
LAB_00544353:
00544353  8D 55 90                  LEA EDX,[EBP + -0x70]
00544356  8D 45 E0                  LEA EAX,[EBP + -0x20]
00544359  52                        PUSH EDX
0054435A  50                        PUSH EAX
0054435B  57                        PUSH EDI
0054435C  8B CE                     MOV ECX,ESI
0054435E  E8 0E D9 EB FF            CALL 0x00401c71
00544363  47                        INC EDI
00544364  83 FF 1E                  CMP EDI,0x1e
00544367  7C EA                     JL 0x00544353
00544369  8B 8D 4C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff4c]
0054436F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00544375  5F                        POP EDI
00544376  5E                        POP ESI
00544377  8B E5                     MOV ESP,EBP
00544379  5D                        POP EBP
0054437A  C3                        RET
LAB_0054437b:
0054437B  8B 95 4C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff4c]
00544381  68 8C 7E 7C 00            PUSH 0x7c7e8c
00544386  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054438B  56                        PUSH ESI
0054438C  6A 00                     PUSH 0x0
0054438E  68 27 01 00 00            PUSH 0x127
00544393  68 60 7D 7C 00            PUSH 0x7c7d60
00544398  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054439E  E8 2D 91 16 00            CALL 0x006ad4d0
005443A3  83 C4 18                  ADD ESP,0x18
005443A6  85 C0                     TEST EAX,EAX
005443A8  74 01                     JZ 0x005443ab
005443AA  CC                        INT3
LAB_005443ab:
005443AB  68 28 01 00 00            PUSH 0x128
005443B0  68 60 7D 7C 00            PUSH 0x7c7d60
005443B5  6A 00                     PUSH 0x0
005443B7  56                        PUSH ESI
005443B8  E8 83 1A 16 00            CALL 0x006a5e40
005443BD  5F                        POP EDI
005443BE  5E                        POP ESI
005443BF  8B E5                     MOV ESP,EBP
005443C1  5D                        POP EBP
005443C2  C3                        RET

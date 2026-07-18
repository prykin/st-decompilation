CursorClassTy::DelSysAcc:
00544460  55                        PUSH EBP
00544461  8B EC                     MOV EBP,ESP
00544463  81 EC B4 00 00 00         SUB ESP,0xb4
00544469  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054446E  56                        PUSH ESI
0054446F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00544472  57                        PUSH EDI
00544473  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
00544479  8D 8D 4C FF FF FF         LEA ECX,[EBP + 0xffffff4c]
0054447F  6A 00                     PUSH 0x0
00544481  52                        PUSH EDX
00544482  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
00544488  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054448E  E8 5D 93 1E 00            CALL 0x0072d7f0
00544493  8B F0                     MOV ESI,EAX
00544495  83 C4 08                  ADD ESP,0x8
00544498  85 F6                     TEST ESI,ESI
0054449A  0F 85 4F 01 00 00         JNZ 0x005445ef
005444A0  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005444A3  B9 08 00 00 00            MOV ECX,0x8
005444A8  8D 7D DC                  LEA EDI,[EBP + -0x24]
005444AB  F3 AB                     STOSD.REP ES:EDI
005444AD  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005444B0  8D 4D DC                  LEA ECX,[EBP + -0x24]
005444B3  51                        PUSH ECX
005444B4  6A 01                     PUSH 0x1
005444B6  6A 03                     PUSH 0x3
005444B8  8B CE                     MOV ECX,ESI
005444BA  C7 45 EC 14 00 00 00      MOV dword ptr [EBP + -0x14],0x14
005444C1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005444C4  E8 37 1B 1A 00            CALL 0x006e6000
005444C9  B9 13 00 00 00            MOV ECX,0x13
005444CE  33 C0                     XOR EAX,EAX
005444D0  8D 7D 90                  LEA EDI,[EBP + -0x70]
005444D3  8D 55 90                  LEA EDX,[EBP + -0x70]
005444D6  F3 AB                     STOSD.REP ES:EDI
005444D8  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005444DB  B9 02 00 00 00            MOV ECX,0x2
005444E0  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
005444E3  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
005444E6  8D 45 DC                  LEA EAX,[EBP + -0x24]
005444E9  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
005444EC  50                        PUSH EAX
005444ED  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
005444F0  6A 01                     PUSH 0x1
005444F2  6A 03                     PUSH 0x3
005444F4  8B CE                     MOV ECX,ESI
005444F6  C7 45 90 08 00 00 00      MOV dword ptr [EBP + -0x70],0x8
005444FD  C7 45 EC 11 00 00 00      MOV dword ptr [EBP + -0x14],0x11
00544504  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00544507  C7 45 94 00 00 00 08      MOV dword ptr [EBP + -0x6c],0x8000000
0054450E  C7 45 AC 10 A1 00 00      MOV dword ptr [EBP + -0x54],0xa110
00544515  C7 45 CC 11 A1 00 00      MOV dword ptr [EBP + -0x34],0xa111
0054451C  E8 DF 1A 1A 00            CALL 0x006e6000
00544521  8D 4D DC                  LEA ECX,[EBP + -0x24]
00544524  C7 45 94 00 00 00 01      MOV dword ptr [EBP + -0x6c],0x1000000
0054452B  51                        PUSH ECX
0054452C  6A 01                     PUSH 0x1
0054452E  6A 03                     PUSH 0x3
00544530  8B CE                     MOV ECX,ESI
00544532  C7 45 AC 12 A1 00 00      MOV dword ptr [EBP + -0x54],0xa112
00544539  C7 45 CC 13 A1 00 00      MOV dword ptr [EBP + -0x34],0xa113
00544540  E8 BB 1A 1A 00            CALL 0x006e6000
00544545  8D 55 DC                  LEA EDX,[EBP + -0x24]
00544548  8B CE                     MOV ECX,ESI
0054454A  52                        PUSH EDX
0054454B  6A 01                     PUSH 0x1
0054454D  6A 03                     PUSH 0x3
0054454F  C7 45 94 00 00 00 40      MOV dword ptr [EBP + -0x6c],0x40000000
00544556  C7 45 AC 14 A1 00 00      MOV dword ptr [EBP + -0x54],0xa114
0054455D  C7 45 CC 15 A1 00 00      MOV dword ptr [EBP + -0x34],0xa115
00544564  E8 97 1A 1A 00            CALL 0x006e6000
00544569  C7 45 CC 33 A1 00 00      MOV dword ptr [EBP + -0x34],0xa133
00544570  BF 04 00 00 00            MOV EDI,0x4
LAB_00544575:
00544575  8D 45 90                  LEA EAX,[EBP + -0x70]
00544578  8D 4D DC                  LEA ECX,[EBP + -0x24]
0054457B  50                        PUSH EAX
0054457C  51                        PUSH ECX
0054457D  57                        PUSH EDI
0054457E  8B CE                     MOV ECX,ESI
00544580  E8 D7 D7 EB FF            CALL 0x00401d5c
00544585  47                        INC EDI
00544586  83 FF 08                  CMP EDI,0x8
00544589  7C EA                     JL 0x00544575
0054458B  C7 45 CC 00 00 00 00      MOV dword ptr [EBP + -0x34],0x0
00544592  BF 08 00 00 00            MOV EDI,0x8
LAB_00544597:
00544597  8D 55 90                  LEA EDX,[EBP + -0x70]
0054459A  8D 45 DC                  LEA EAX,[EBP + -0x24]
0054459D  52                        PUSH EDX
0054459E  50                        PUSH EAX
0054459F  57                        PUSH EDI
005445A0  8B CE                     MOV ECX,ESI
005445A2  E8 B5 D7 EB FF            CALL 0x00401d5c
005445A7  47                        INC EDI
005445A8  83 FF 50                  CMP EDI,0x50
005445AB  7C EA                     JL 0x00544597
005445AD  33 FF                     XOR EDI,EDI
LAB_005445af:
005445AF  8D 4D 90                  LEA ECX,[EBP + -0x70]
005445B2  8D 55 DC                  LEA EDX,[EBP + -0x24]
005445B5  51                        PUSH ECX
005445B6  52                        PUSH EDX
005445B7  57                        PUSH EDI
005445B8  8B CE                     MOV ECX,ESI
005445BA  E8 D2 F2 EB FF            CALL 0x00403891
005445BF  47                        INC EDI
005445C0  83 FF 0A                  CMP EDI,0xa
005445C3  7C EA                     JL 0x005445af
005445C5  33 FF                     XOR EDI,EDI
LAB_005445c7:
005445C7  8D 45 90                  LEA EAX,[EBP + -0x70]
005445CA  8D 4D DC                  LEA ECX,[EBP + -0x24]
005445CD  50                        PUSH EAX
005445CE  51                        PUSH ECX
005445CF  57                        PUSH EDI
005445D0  8B CE                     MOV ECX,ESI
005445D2  E8 9A D6 EB FF            CALL 0x00401c71
005445D7  47                        INC EDI
005445D8  83 FF 1E                  CMP EDI,0x1e
005445DB  7C EA                     JL 0x005445c7
005445DD  8B 95 4C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff4c]
005445E3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005445E9  5F                        POP EDI
005445EA  5E                        POP ESI
005445EB  8B E5                     MOV ESP,EBP
005445ED  5D                        POP EBP
005445EE  C3                        RET
LAB_005445ef:
005445EF  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
005445F5  68 AC 7E 7C 00            PUSH 0x7c7eac
005445FA  68 CC 4C 7A 00            PUSH 0x7a4ccc
005445FF  56                        PUSH ESI
00544600  6A 00                     PUSH 0x0
00544602  68 5A 01 00 00            PUSH 0x15a
00544607  68 60 7D 7C 00            PUSH 0x7c7d60
0054460C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00544611  E8 BA 8E 16 00            CALL 0x006ad4d0
00544616  83 C4 18                  ADD ESP,0x18
00544619  85 C0                     TEST EAX,EAX
0054461B  74 01                     JZ 0x0054461e
0054461D  CC                        INT3
LAB_0054461e:
0054461E  68 5B 01 00 00            PUSH 0x15b
00544623  68 60 7D 7C 00            PUSH 0x7c7d60
00544628  6A 00                     PUSH 0x0
0054462A  56                        PUSH ESI
0054462B  E8 10 18 16 00            CALL 0x006a5e40
00544630  5F                        POP EDI
00544631  5E                        POP ESI
00544632  8B E5                     MOV ESP,EBP
00544634  5D                        POP EBP
00544635  C3                        RET

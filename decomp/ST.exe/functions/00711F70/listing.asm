ccFntTy::WrSarr:
00711F70  55                        PUSH EBP
00711F71  8B EC                     MOV EBP,ESP
00711F73  83 EC 5C                  SUB ESP,0x5c
00711F76  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00711F79  53                        PUSH EBX
00711F7A  56                        PUSH ESI
00711F7B  57                        PUSH EDI
00711F7C  85 C0                     TEST EAX,EAX
00711F7E  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00711F81  0F 84 AC 01 00 00         JZ 0x00712133
00711F87  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00711F8A  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
00711F8D  83 F9 FF                  CMP ECX,-0x1
00711F90  75 05                     JNZ 0x00711f97
00711F92  8B C8                     MOV ECX,EAX
00711F94  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_00711f97:
00711F97  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00711F9A  3B D0                     CMP EDX,EAX
00711F9C  0F 8D 91 01 00 00         JGE 0x00712133
00711FA2  85 C9                     TEST ECX,ECX
00711FA4  0F 84 89 01 00 00         JZ 0x00712133
00711FAA  03 CA                     ADD ECX,EDX
00711FAC  3B C8                     CMP ECX,EAX
00711FAE  7E 05                     JLE 0x00711fb5
00711FB0  2B C2                     SUB EAX,EDX
00711FB2  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_00711fb5:
00711FB5  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00711FBB  8D 4D A8                  LEA ECX,[EBP + -0x58]
00711FBE  8D 45 A4                  LEA EAX,[EBP + -0x5c]
00711FC1  6A 00                     PUSH 0x0
00711FC3  51                        PUSH ECX
00711FC4  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
00711FC7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00711FCC  E8 1F B8 01 00            CALL 0x0072d7f0
00711FD1  8B F0                     MOV ESI,EAX
00711FD3  83 C4 08                  ADD ESP,0x8
00711FD6  85 F6                     TEST ESI,ESI
00711FD8  0F 85 60 01 00 00         JNZ 0x0071213e
00711FDE  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00711FE1  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00711FE4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00711FE7  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00711FEA  53                        PUSH EBX
00711FEB  57                        PUSH EDI
00711FEC  52                        PUSH EDX
00711FED  8B CE                     MOV ECX,ESI
00711FEF  E8 7C F6 FF FF            CALL 0x00711670
00711FF4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00711FF7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00711FFA  53                        PUSH EBX
00711FFB  57                        PUSH EDI
00711FFC  50                        PUSH EAX
00711FFD  8B CE                     MOV ECX,ESI
00711FFF  E8 DC F5 FF FF            CALL 0x007115e0
00712004  8B C8                     MOV ECX,EAX
00712006  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00712009  85 C0                     TEST EAX,EAX
0071200B  7D 1E                     JGE 0x0071202b
0071200D  83 F8 FD                  CMP EAX,-0x3
00712010  74 19                     JZ 0x0071202b
00712012  83 F8 FE                  CMP EAX,-0x2
00712015  74 14                     JZ 0x0071202b
00712017  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0071201A  8B 5E 68                  MOV EBX,dword ptr [ESI + 0x68]
0071201D  3B D3                     CMP EDX,EBX
0071201F  7E 0A                     JLE 0x0071202b
00712021  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
00712028  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
LAB_0071202b:
0071202B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0071202E  85 DB                     TEST EBX,EBX
00712030  7D 0A                     JGE 0x0071203c
00712032  3B 4E 6C                  CMP ECX,dword ptr [ESI + 0x6c]
00712035  7E 05                     JLE 0x0071203c
00712037  33 DB                     XOR EBX,EBX
00712039  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
LAB_0071203c:
0071203C  85 C0                     TEST EAX,EAX
0071203E  7D 1C                     JGE 0x0071205c
00712040  83 F8 FD                  CMP EAX,-0x3
00712043  74 17                     JZ 0x0071205c
00712045  83 F8 FE                  CMP EAX,-0x2
00712048  74 12                     JZ 0x0071205c
0071204A  83 F8 FC                  CMP EAX,-0x4
0071204D  74 0D                     JZ 0x0071205c
0071204F  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00712052  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00712055  2B C2                     SUB EAX,EDX
00712057  99                        CDQ
00712058  2B C2                     SUB EAX,EDX
0071205A  D1 F8                     SAR EAX,0x1
LAB_0071205c:
0071205C  85 DB                     TEST EBX,EBX
0071205E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00712061  7D 0F                     JGE 0x00712072
00712063  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
00712066  2B C1                     SUB EAX,ECX
00712068  99                        CDQ
00712069  2B C2                     SUB EAX,EDX
0071206B  D1 F8                     SAR EAX,0x1
0071206D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00712070  EB 05                     JMP 0x00712077
LAB_00712072:
00712072  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00712075  8B C3                     MOV EAX,EBX
LAB_00712077:
00712077  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0071207A  33 DB                     XOR EBX,EBX
0071207C  89 4E 44                  MOV dword ptr [ESI + 0x44],ECX
0071207F  89 4E 48                  MOV dword ptr [ESI + 0x48],ECX
00712082  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00712085  89 5E 4C                  MOV dword ptr [ESI + 0x4c],EBX
00712088  03 CF                     ADD ECX,EDI
0071208A  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0071208D  3B F9                     CMP EDI,ECX
0071208F  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00712092  0F 8D 8B 00 00 00         JGE 0x00712123
00712098  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0071209B  EB 09                     JMP 0x007120a6
LAB_0071209d:
0071209D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
007120A0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007120A3  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_007120a6:
007120A6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007120A9  3B 79 08                  CMP EDI,dword ptr [ECX + 0x8]
007120AC  7D 08                     JGE 0x007120b6
007120AE  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
007120B1  8B 3C B9                  MOV EDI,dword ptr [ECX + EDI*0x4]
007120B4  EB 02                     JMP 0x007120b8
LAB_007120b6:
007120B6  33 FF                     XOR EDI,EDI
LAB_007120b8:
007120B8  83 FA FC                  CMP EDX,-0x4
007120BB  74 1C                     JZ 0x007120d9
007120BD  83 FA FE                  CMP EDX,-0x2
007120C0  74 0C                     JZ 0x007120ce
007120C2  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
007120C5  03 C3                     ADD EAX,EBX
007120C7  52                        PUSH EDX
007120C8  50                        PUSH EAX
007120C9  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
007120CC  EB 2B                     JMP 0x007120f9
LAB_007120ce:
007120CE  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
007120D1  03 C3                     ADD EAX,EBX
007120D3  51                        PUSH ECX
007120D4  50                        PUSH EAX
007120D5  6A FF                     PUSH -0x1
007120D7  EB 21                     JMP 0x007120fa
LAB_007120d9:
007120D9  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
007120DC  03 C3                     ADD EAX,EBX
007120DE  52                        PUSH EDX
007120DF  50                        PUSH EAX
007120E0  57                        PUSH EDI
007120E1  8B CE                     MOV ECX,ESI
007120E3  E8 28 F0 FF FF            CALL 0x00711110
007120E8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
007120EB  8B C8                     MOV ECX,EAX
007120ED  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
007120F0  03 C2                     ADD EAX,EDX
007120F2  99                        CDQ
007120F3  2B C2                     SUB EAX,EDX
007120F5  D1 F8                     SAR EAX,0x1
007120F7  2B C1                     SUB EAX,ECX
LAB_007120f9:
007120F9  50                        PUSH EAX
LAB_007120fa:
007120FA  57                        PUSH EDI
007120FB  8B CE                     MOV ECX,ESI
007120FD  E8 BE F8 FF FF            CALL 0x007119c0
00712102  57                        PUSH EDI
00712103  8B CE                     MOV ECX,ESI
00712105  E8 B6 F0 FF FF            CALL 0x007111c0
0071210A  8B 4E 5C                  MOV ECX,dword ptr [ESI + 0x5c]
0071210D  03 C1                     ADD EAX,ECX
0071210F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00712112  03 D8                     ADD EBX,EAX
00712114  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00712117  40                        INC EAX
00712118  3B C1                     CMP EAX,ECX
0071211A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0071211D  0F 8C 7A FF FF FF         JL 0x0071209d
LAB_00712123:
00712123  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
00712126  C7 46 4C 01 00 00 00      MOV dword ptr [ESI + 0x4c],0x1
0071212D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_00712133:
00712133  33 C0                     XOR EAX,EAX
00712135  5F                        POP EDI
00712136  5E                        POP ESI
00712137  5B                        POP EBX
00712138  8B E5                     MOV ESP,EBP
0071213A  5D                        POP EBP
0071213B  C2 18 00                  RET 0x18
LAB_0071213e:
0071213E  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00712141  68 C8 02 7F 00            PUSH 0x7f02c8
00712146  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071214B  56                        PUSH ESI
0071214C  6A 00                     PUSH 0x0
0071214E  68 52 07 00 00            PUSH 0x752
00712153  68 90 01 7F 00            PUSH 0x7f0190
00712158  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071215D  E8 6E B3 F9 FF            CALL 0x006ad4d0
00712162  83 C4 18                  ADD ESP,0x18
00712165  85 C0                     TEST EAX,EAX
00712167  74 01                     JZ 0x0071216a
00712169  CC                        INT3
LAB_0071216a:
0071216A  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0071216D  68 56 07 00 00            PUSH 0x756
00712172  68 90 01 7F 00            PUSH 0x7f0190
00712177  6A 00                     PUSH 0x0
00712179  56                        PUSH ESI
0071217A  C7 41 4C 01 00 00 00      MOV dword ptr [ECX + 0x4c],0x1
00712181  E8 BA 3C F9 FF            CALL 0x006a5e40
00712186  8B C6                     MOV EAX,ESI
00712188  5F                        POP EDI
00712189  5E                        POP ESI
0071218A  5B                        POP EBX
0071218B  8B E5                     MOV ESP,EBP
0071218D  5D                        POP EBP
0071218E  C2 18 00                  RET 0x18

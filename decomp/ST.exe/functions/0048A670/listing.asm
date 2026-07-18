FUN_0048a670:
0048A670  56                        PUSH ESI
0048A671  8B F1                     MOV ESI,ECX
0048A673  57                        PUSH EDI
0048A674  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0048A67A  48                        DEC EAX
0048A67B  83 F8 27                  CMP EAX,0x27
0048A67E  77 4F                     JA 0x0048a6cf
switchD_0048a680::switchD:
0048A680  FF 24 85 40 A7 48 00      JMP dword ptr [EAX*0x4 + 0x48a740]
switchD_0048a680::caseD_1:
0048A687  C7 86 19 02 00 00 5A 00 00 00  MOV dword ptr [ESI + 0x219],0x5a
0048A691  EB 61                     JMP 0x0048a6f4
switchD_0048a680::caseD_3:
0048A693  C7 86 19 02 00 00 BE 00 00 00  MOV dword ptr [ESI + 0x219],0xbe
0048A69D  EB 55                     JMP 0x0048a6f4
switchD_0048a680::caseD_16:
0048A69F  C7 86 19 02 00 00 E6 00 00 00  MOV dword ptr [ESI + 0x219],0xe6
0048A6A9  EB 49                     JMP 0x0048a6f4
switchD_0048a680::caseD_a:
0048A6AB  C7 86 19 02 00 00 FA 00 00 00  MOV dword ptr [ESI + 0x219],0xfa
0048A6B5  EB 3D                     JMP 0x0048a6f4
switchD_0048a680::caseD_23:
0048A6B7  C7 86 19 02 00 00 AA 00 00 00  MOV dword ptr [ESI + 0x219],0xaa
0048A6C1  EB 31                     JMP 0x0048a6f4
switchD_0048a680::caseD_2:
0048A6C3  C7 86 19 02 00 00 8C 00 00 00  MOV dword ptr [ESI + 0x219],0x8c
0048A6CD  EB 25                     JMP 0x0048a6f4
switchD_0048a680::default:
0048A6CF  68 A8 B9 7A 00            PUSH 0x7ab9a8
0048A6D4  68 CC 4C 7A 00            PUSH 0x7a4ccc
0048A6D9  6A 00                     PUSH 0x0
0048A6DB  6A 00                     PUSH 0x0
0048A6DD  68 B8 46 00 00            PUSH 0x46b8
0048A6E2  68 3C 9D 7A 00            PUSH 0x7a9d3c
0048A6E7  E8 E4 2D 22 00            CALL 0x006ad4d0
0048A6EC  83 C4 18                  ADD ESP,0x18
0048A6EF  85 C0                     TEST EAX,EAX
0048A6F1  74 01                     JZ 0x0048a6f4
0048A6F3  CC                        INT3
switchD_0048a680::caseD_7:
0048A6F4  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0048A6FA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0048A700  50                        PUSH EAX
0048A701  E8 A8 7E F7 FF            CALL 0x004025ae
0048A706  25 FF 00 00 00            AND EAX,0xff
0048A70B  8B CE                     MOV ECX,ESI
0048A70D  8B F8                     MOV EDI,EAX
0048A70F  57                        PUSH EDI
0048A710  E8 7B B5 F7 FF            CALL 0x00405c90
0048A715  8B C7                     MOV EAX,EDI
0048A717  8B CE                     MOV ECX,ESI
0048A719  99                        CDQ
0048A71A  2B C2                     SUB EAX,EDX
0048A71C  D1 F8                     SAR EAX,0x1
0048A71E  50                        PUSH EAX
0048A71F  E8 E1 A9 F7 FF            CALL 0x00405105
0048A724  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
0048A72A  5F                        POP EDI
0048A72B  8B 04 8D AC FB 7D 00      MOV EAX,dword ptr [ECX*0x4 + 0x7dfbac]
0048A732  89 86 16 07 00 00         MOV dword ptr [ESI + 0x716],EAX
0048A738  89 86 12 07 00 00         MOV dword ptr [ESI + 0x712],EAX
0048A73E  5E                        POP ESI
0048A73F  C3                        RET

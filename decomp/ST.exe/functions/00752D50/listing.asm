FUN_00752d50:
00752D50  55                        PUSH EBP
00752D51  8B EC                     MOV EBP,ESP
00752D53  53                        PUSH EBX
00752D54  56                        PUSH ESI
00752D55  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00752D58  57                        PUSH EDI
00752D59  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_00752d5c:
00752D5C  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00752D5F  3B F8                     CMP EDI,EAX
00752D61  73 05                     JNC 0x00752d68
00752D63  39 46 08                  CMP dword ptr [ESI + 0x8],EAX
00752D66  72 0E                     JC 0x00752d76
LAB_00752d68:
00752D68  56                        PUSH ESI
00752D69  E8 12 27 F6 FF            CALL 0x006b5480
00752D6E  8B D8                     MOV EBX,EAX
00752D70  85 DB                     TEST EBX,EBX
00752D72  75 7E                     JNZ 0x00752df2
00752D74  EB E6                     JMP 0x00752d5c
LAB_00752d76:
00752D76  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00752D79  85 DB                     TEST EBX,EBX
00752D7B  74 18                     JZ 0x00752d95
00752D7D  53                        PUSH EBX
00752D7E  E8 2D 1C F7 FF            CALL 0x006c49b0
00752D83  8B D8                     MOV EBX,EAX
00752D85  85 DB                     TEST EBX,EBX
00752D87  75 0C                     JNZ 0x00752d95
00752D89  5F                        POP EDI
00752D8A  5E                        POP ESI
00752D8B  B8 FE FF FF FF            MOV EAX,0xfffffffe
00752D90  5B                        POP EBX
00752D91  5D                        POP EBP
00752D92  C2 0C 00                  RET 0xc
LAB_00752d95:
00752D95  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00752D98  3B F9                     CMP EDI,ECX
00752D9A  73 41                     JNC 0x00752ddd
00752D9C  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00752D9F  8B D7                     MOV EDX,EDI
00752DA1  C1 E2 1E                  SHL EDX,0x1e
00752DA4  2B D7                     SUB EDX,EDI
00752DA6  8D 04 B8                  LEA EAX,[EAX + EDI*0x4]
00752DA9  03 D1                     ADD EDX,ECX
00752DAB  C1 E2 02                  SHL EDX,0x2
00752DAE  52                        PUSH EDX
00752DAF  50                        PUSH EAX
00752DB0  83 C0 04                  ADD EAX,0x4
00752DB3  50                        PUSH EAX
00752DB4  E8 B7 AC FD FF            CALL 0x0072da70
00752DB9  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00752DBC  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00752DBF  83 C4 0C                  ADD ESP,0xc
00752DC2  42                        INC EDX
00752DC3  3B C7                     CMP EAX,EDI
00752DC5  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
00752DC8  76 19                     JBE 0x00752de3
00752DCA  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00752DCD  40                        INC EAX
00752DCE  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
00752DD1  8B C7                     MOV EAX,EDI
00752DD3  89 1C B9                  MOV dword ptr [ECX + EDI*0x4],EBX
00752DD6  5F                        POP EDI
00752DD7  5E                        POP ESI
00752DD8  5B                        POP EBX
00752DD9  5D                        POP EBP
00752DDA  C2 0C 00                  RET 0xc
LAB_00752ddd:
00752DDD  8D 47 01                  LEA EAX,[EDI + 0x1]
00752DE0  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
LAB_00752de3:
00752DE3  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00752DE6  8B C7                     MOV EAX,EDI
00752DE8  89 1C B9                  MOV dword ptr [ECX + EDI*0x4],EBX
00752DEB  5F                        POP EDI
00752DEC  5E                        POP ESI
00752DED  5B                        POP EBX
00752DEE  5D                        POP EBP
00752DEF  C2 0C 00                  RET 0xc
LAB_00752df2:
00752DF2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00752DF8  6A 0F                     PUSH 0xf
00752DFA  68 C0 2B 7F 00            PUSH 0x7f2bc0
00752DFF  52                        PUSH EDX
00752E00  53                        PUSH EBX
00752E01  E8 3A 30 F5 FF            CALL 0x006a5e40
00752E06  5F                        POP EDI
00752E07  8B C3                     MOV EAX,EBX
00752E09  5E                        POP ESI
00752E0A  5B                        POP EBX
00752E0B  5D                        POP EBP
00752E0C  C2 0C 00                  RET 0xc

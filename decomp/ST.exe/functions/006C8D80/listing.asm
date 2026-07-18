FUN_006c8d80:
006C8D80  55                        PUSH EBP
006C8D81  8B EC                     MOV EBP,ESP
006C8D83  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C8D86  53                        PUSH EBX
006C8D87  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006C8D8A  56                        PUSH ESI
006C8D8B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C8D8E  53                        PUSH EBX
006C8D8F  50                        PUSH EAX
006C8D90  56                        PUSH ESI
006C8D91  E8 7A 7D 06 00            CALL 0x00730b10
006C8D96  83 C4 0C                  ADD ESP,0xc
006C8D99  85 C0                     TEST EAX,EAX
006C8D9B  75 2F                     JNZ 0x006c8dcc
006C8D9D  F6 43 0C 20               TEST byte ptr [EBX + 0xc],0x20
006C8DA1  74 20                     JZ 0x006c8dc3
006C8DA3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C8DA9  6A 0E                     PUSH 0xe
006C8DAB  68 5C E1 7E 00            PUSH 0x7ee15c
006C8DB0  51                        PUSH ECX
006C8DB1  6A F4                     PUSH -0xc
006C8DB3  E8 88 D0 FD FF            CALL 0x006a5e40
006C8DB8  5E                        POP ESI
006C8DB9  B8 F4 FF FF FF            MOV EAX,0xfffffff4
006C8DBE  5B                        POP EBX
006C8DBF  5D                        POP EBP
006C8DC0  C2 0C 00                  RET 0xc
LAB_006c8dc3:
006C8DC3  5E                        POP ESI
006C8DC4  83 C8 FF                  OR EAX,0xffffffff
006C8DC7  5B                        POP EBX
006C8DC8  5D                        POP EBP
006C8DC9  C2 0C 00                  RET 0xc
LAB_006c8dcc:
006C8DCC  57                        PUSH EDI
006C8DCD  8B FE                     MOV EDI,ESI
006C8DCF  83 C9 FF                  OR ECX,0xffffffff
006C8DD2  33 C0                     XOR EAX,EAX
006C8DD4  F2 AE                     SCASB.REPNE ES:EDI
006C8DD6  F7 D1                     NOT ECX
006C8DD8  49                        DEC ECX
006C8DD9  8B F9                     MOV EDI,ECX
006C8DDB  80 7C 3E FF 0A            CMP byte ptr [ESI + EDI*0x1 + -0x1],0xa
006C8DE0  75 0F                     JNZ 0x006c8df1
006C8DE2  C6 44 3E FF 00            MOV byte ptr [ESI + EDI*0x1 + -0x1],0x0
006C8DE7  4F                        DEC EDI
006C8DE8  8B C7                     MOV EAX,EDI
006C8DEA  5F                        POP EDI
006C8DEB  5E                        POP ESI
006C8DEC  5B                        POP EBX
006C8DED  5D                        POP EBP
006C8DEE  C2 0C 00                  RET 0xc
LAB_006c8df1:
006C8DF1  53                        PUSH EBX
006C8DF2  E8 69 B3 06 00            CALL 0x00734160
006C8DF7  83 C4 04                  ADD ESP,0x4
006C8DFA  83 F8 0A                  CMP EAX,0xa
006C8DFD  74 0A                     JZ 0x006c8e09
006C8DFF  83 F8 1A                  CMP EAX,0x1a
006C8E02  74 05                     JZ 0x006c8e09
006C8E04  83 F8 FF                  CMP EAX,-0x1
006C8E07  75 E8                     JNZ 0x006c8df1
LAB_006c8e09:
006C8E09  8B C7                     MOV EAX,EDI
006C8E0B  5F                        POP EDI
006C8E0C  5E                        POP ESI
006C8E0D  5B                        POP EBX
006C8E0E  5D                        POP EBP
006C8E0F  C2 0C 00                  RET 0xc

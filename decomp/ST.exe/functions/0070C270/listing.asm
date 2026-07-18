FUN_0070c270:
0070C270  55                        PUSH EBP
0070C271  8B EC                     MOV EBP,ESP
0070C273  56                        PUSH ESI
0070C274  57                        PUSH EDI
0070C275  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0070C278  66 83 7F 0E 08            CMP word ptr [EDI + 0xe],0x8
0070C27D  8B 77 20                  MOV ESI,dword ptr [EDI + 0x20]
0070C280  74 06                     JZ 0x0070c288
0070C282  5F                        POP EDI
0070C283  33 C0                     XOR EAX,EAX
0070C285  5E                        POP ESI
0070C286  5D                        POP EBP
0070C287  C3                        RET
LAB_0070c288:
0070C288  85 F6                     TEST ESI,ESI
0070C28A  75 05                     JNZ 0x0070c291
0070C28C  BE 00 01 00 00            MOV ESI,0x100
LAB_0070c291:
0070C291  8D 04 B5 00 00 00 00      LEA EAX,[ESI*0x4 + 0x0]
0070C298  50                        PUSH EAX
0070C299  E8 72 E9 F9 FF            CALL 0x006aac10
0070C29E  85 C0                     TEST EAX,EAX
0070C2A0  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0070C2A3  75 04                     JNZ 0x0070c2a9
0070C2A5  5F                        POP EDI
0070C2A6  5E                        POP ESI
0070C2A7  5D                        POP EBP
0070C2A8  C3                        RET
LAB_0070c2a9:
0070C2A9  85 F6                     TEST ESI,ESI
0070C2AB  0F 86 D2 00 00 00         JBE 0x0070c383
0070C2B1  53                        PUSH EBX
0070C2B2  8D 58 02                  LEA EBX,[EAX + 0x2]
0070C2B5  83 C7 29                  ADD EDI,0x29
LAB_0070c2b8:
0070C2B8  66 0F B6 57 FF            MOVZX DX,byte ptr [EDI + -0x1]
0070C2BD  8B CA                     MOV ECX,EDX
0070C2BF  81 E1 FF FF 00 00         AND ECX,0xffff
0070C2C5  8B C1                     MOV EAX,ECX
0070C2C7  25 07 00 00 80            AND EAX,0x80000007
0070C2CC  79 05                     JNS 0x0070c2d3
0070C2CE  48                        DEC EAX
0070C2CF  83 C8 F8                  OR EAX,0xfffffff8
0070C2D2  40                        INC EAX
LAB_0070c2d3:
0070C2D3  83 F8 04                  CMP EAX,0x4
0070C2D6  7C 1C                     JL 0x0070c2f4
0070C2D8  C1 E9 03                  SHR ECX,0x3
0070C2DB  8D 0C CD 08 00 00 00      LEA ECX,[ECX*0x8 + 0x8]
0070C2E2  81 F9 FF 00 00 00         CMP ECX,0xff
0070C2E8  7E 05                     JLE 0x0070c2ef
0070C2EA  B9 FF 00 00 00            MOV ECX,0xff
LAB_0070c2ef:
0070C2EF  88 4B FE                  MOV byte ptr [EBX + -0x2],CL
0070C2F2  EB 03                     JMP 0x0070c2f7
LAB_0070c2f4:
0070C2F4  88 53 FE                  MOV byte ptr [EBX + -0x2],DL
LAB_0070c2f7:
0070C2F7  66 0F B6 17               MOVZX DX,byte ptr [EDI]
0070C2FB  8B CA                     MOV ECX,EDX
0070C2FD  81 E1 FF FF 00 00         AND ECX,0xffff
0070C303  8B C1                     MOV EAX,ECX
0070C305  25 07 00 00 80            AND EAX,0x80000007
0070C30A  79 05                     JNS 0x0070c311
0070C30C  48                        DEC EAX
0070C30D  83 C8 F8                  OR EAX,0xfffffff8
0070C310  40                        INC EAX
LAB_0070c311:
0070C311  83 F8 04                  CMP EAX,0x4
0070C314  7C 1C                     JL 0x0070c332
0070C316  C1 E9 03                  SHR ECX,0x3
0070C319  8D 0C CD 08 00 00 00      LEA ECX,[ECX*0x8 + 0x8]
0070C320  81 F9 FF 00 00 00         CMP ECX,0xff
0070C326  7E 05                     JLE 0x0070c32d
0070C328  B9 FF 00 00 00            MOV ECX,0xff
LAB_0070c32d:
0070C32D  88 4B FF                  MOV byte ptr [EBX + -0x1],CL
0070C330  EB 03                     JMP 0x0070c335
LAB_0070c332:
0070C332  88 53 FF                  MOV byte ptr [EBX + -0x1],DL
LAB_0070c335:
0070C335  66 0F B6 57 01            MOVZX DX,byte ptr [EDI + 0x1]
0070C33A  8B CA                     MOV ECX,EDX
0070C33C  81 E1 FF FF 00 00         AND ECX,0xffff
0070C342  8B C1                     MOV EAX,ECX
0070C344  25 07 00 00 80            AND EAX,0x80000007
0070C349  79 05                     JNS 0x0070c350
0070C34B  48                        DEC EAX
0070C34C  83 C8 F8                  OR EAX,0xfffffff8
0070C34F  40                        INC EAX
LAB_0070c350:
0070C350  83 F8 04                  CMP EAX,0x4
0070C353  7C 1B                     JL 0x0070c370
0070C355  C1 E9 03                  SHR ECX,0x3
0070C358  8D 0C CD 08 00 00 00      LEA ECX,[ECX*0x8 + 0x8]
0070C35F  81 F9 FF 00 00 00         CMP ECX,0xff
0070C365  7E 05                     JLE 0x0070c36c
0070C367  B9 FF 00 00 00            MOV ECX,0xff
LAB_0070c36c:
0070C36C  88 0B                     MOV byte ptr [EBX],CL
0070C36E  EB 02                     JMP 0x0070c372
LAB_0070c370:
0070C370  88 13                     MOV byte ptr [EBX],DL
LAB_0070c372:
0070C372  83 C7 04                  ADD EDI,0x4
0070C375  83 C3 04                  ADD EBX,0x4
0070C378  4E                        DEC ESI
0070C379  0F 85 39 FF FF FF         JNZ 0x0070c2b8
0070C37F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070C382  5B                        POP EBX
LAB_0070c383:
0070C383  5F                        POP EDI
0070C384  5E                        POP ESI
0070C385  5D                        POP EBP
0070C386  C3                        RET

FUN_006937e0:
006937E0  55                        PUSH EBP
006937E1  8B EC                     MOV EBP,ESP
006937E3  81 EC 04 01 00 00         SUB ESP,0x104
006937E9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006937EC  53                        PUSH EBX
006937ED  56                        PUSH ESI
006937EE  57                        PUSH EDI
006937EF  50                        PUSH EAX
006937F0  E8 3C D9 D6 FF            CALL 0x00401131
006937F5  8B C8                     MOV ECX,EAX
006937F7  83 C4 04                  ADD ESP,0x4
006937FA  C1 E1 05                  SHL ECX,0x5
006937FD  03 C8                     ADD ECX,EAX
006937FF  33 DB                     XOR EBX,EBX
00693801  8D 3C 48                  LEA EDI,[EAX + ECX*0x2]
00693804  A1 80 3D 85 00            MOV EAX,[0x00853d80]
00693809  C1 E7 03                  SHL EDI,0x3
0069380C  8B 8C 07 0C 02 00 00      MOV ECX,dword ptr [EDI + EAX*0x1 + 0x20c]
00693813  85 C9                     TEST ECX,ECX
00693815  76 5F                     JBE 0x00693876
LAB_00693817:
00693817  8D 14 07                  LEA EDX,[EDI + EAX*0x1]
0069381A  53                        PUSH EBX
0069381B  52                        PUSH EDX
0069381C  8D 85 FC FE FF FF         LEA EAX,[EBP + 0xfffffefc]
00693822  68 60 59 7D 00            PUSH 0x7d5960
00693827  50                        PUSH EAX
00693828  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0069382E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00693831  83 C4 10                  ADD ESP,0x10
00693834  8D B5 FC FE FF FF         LEA ESI,[EBP + 0xfffffefc]
LAB_0069383a:
0069383A  8A 10                     MOV DL,byte ptr [EAX]
0069383C  8A CA                     MOV CL,DL
0069383E  3A 16                     CMP DL,byte ptr [ESI]
00693840  75 1C                     JNZ 0x0069385e
00693842  84 C9                     TEST CL,CL
00693844  74 14                     JZ 0x0069385a
00693846  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
00693849  8A CA                     MOV CL,DL
0069384B  3A 56 01                  CMP DL,byte ptr [ESI + 0x1]
0069384E  75 0E                     JNZ 0x0069385e
00693850  83 C0 02                  ADD EAX,0x2
00693853  83 C6 02                  ADD ESI,0x2
00693856  84 C9                     TEST CL,CL
00693858  75 E0                     JNZ 0x0069383a
LAB_0069385a:
0069385A  33 C0                     XOR EAX,EAX
0069385C  EB 05                     JMP 0x00693863
LAB_0069385e:
0069385E  1B C0                     SBB EAX,EAX
00693860  83 D8 FF                  SBB EAX,-0x1
LAB_00693863:
00693863  85 C0                     TEST EAX,EAX
00693865  74 19                     JZ 0x00693880
00693867  A1 80 3D 85 00            MOV EAX,[0x00853d80]
0069386C  43                        INC EBX
0069386D  3B 9C 07 0C 02 00 00      CMP EBX,dword ptr [EDI + EAX*0x1 + 0x20c]
00693874  72 A1                     JC 0x00693817
LAB_00693876:
00693876  5F                        POP EDI
00693877  5E                        POP ESI
00693878  83 C8 FF                  OR EAX,0xffffffff
0069387B  5B                        POP EBX
0069387C  8B E5                     MOV ESP,EBP
0069387E  5D                        POP EBP
0069387F  C3                        RET
LAB_00693880:
00693880  5F                        POP EDI
00693881  8B C3                     MOV EAX,EBX
00693883  5E                        POP ESI
00693884  5B                        POP EBX
00693885  8B E5                     MOV ESP,EBP
00693887  5D                        POP EBP
00693888  C3                        RET

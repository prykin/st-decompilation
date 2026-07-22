CPanelTy::sub_005050B0:
005050B0  55                        PUSH EBP
005050B1  8B EC                     MOV EBP,ESP
005050B3  A0 4E 87 80 00            MOV AL,[0x0080874e]
005050B8  56                        PUSH ESI
005050B9  83 CE FF                  OR ESI,0xffffffff
005050BC  3C 01                     CMP AL,0x1
005050BE  75 0E                     JNZ 0x005050ce
005050C0  38 81 D4 09 00 00         CMP byte ptr [ECX + 0x9d4],AL
005050C6  0F 95 C2                  SETNZ DL
005050C9  83 C2 05                  ADD EDX,0x5
005050CC  EB 17                     JMP 0x005050e5
LAB_005050ce:
005050CE  8A 89 D4 09 00 00         MOV CL,byte ptr [ECX + 0x9d4]
005050D4  80 F9 01                  CMP CL,0x1
005050D7  0F 94 C2                  SETZ DL
005050DA  83 C2 05                  ADD EDX,0x5
005050DD  3C 03                     CMP AL,0x3
005050DF  0F 84 A3 00 00 00         JZ 0x00505188
LAB_005050e5:
005050E5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005050E8  80 FA 05                  CMP DL,0x5
005050EB  75 45                     JNZ 0x00505132
005050ED  25 FF 00 00 00            AND EAX,0xff
005050F2  83 F8 04                  CMP EAX,0x4
005050F5  0F 87 AE 00 00 00         JA 0x005051a9
switchD_005050fb::switchD:
005050FB  FF 24 85 B0 51 50 00      JMP dword ptr [EAX*0x4 + 0x5051b0]
switchD_005050fb::caseD_1:
00505102  BE 01 00 00 00            MOV ESI,0x1
00505107  8B C6                     MOV EAX,ESI
00505109  5E                        POP ESI
0050510A  5D                        POP EBP
0050510B  C2 04 00                  RET 0x4
switchD_005050fb::caseD_2:
0050510E  BE 02 00 00 00            MOV ESI,0x2
00505113  8B C6                     MOV EAX,ESI
00505115  5E                        POP ESI
00505116  5D                        POP EBP
00505117  C2 04 00                  RET 0x4
switchD_005050fb::caseD_3:
0050511A  BE 05 00 00 00            MOV ESI,0x5
0050511F  8B C6                     MOV EAX,ESI
00505121  5E                        POP ESI
00505122  5D                        POP EBP
00505123  C2 04 00                  RET 0x4
switchD_005050fb::caseD_4:
00505126  BE 06 00 00 00            MOV ESI,0x6
0050512B  8B C6                     MOV EAX,ESI
0050512D  5E                        POP ESI
0050512E  5D                        POP EBP
0050512F  C2 04 00                  RET 0x4
LAB_00505132:
00505132  25 FF 00 00 00            AND EAX,0xff
00505137  83 F8 05                  CMP EAX,0x5
0050513A  77 6D                     JA 0x005051a9
switchD_0050513c::switchD:
0050513C  FF 24 85 C4 51 50 00      JMP dword ptr [EAX*0x4 + 0x5051c4]
switchD_005050fb::caseD_0:
00505143  33 F6                     XOR ESI,ESI
00505145  8B C6                     MOV EAX,ESI
00505147  5E                        POP ESI
00505148  5D                        POP EBP
00505149  C2 04 00                  RET 0x4
switchD_0050513c::caseD_1:
0050514C  BE 03 00 00 00            MOV ESI,0x3
00505151  8B C6                     MOV EAX,ESI
00505153  5E                        POP ESI
00505154  5D                        POP EBP
00505155  C2 04 00                  RET 0x4
switchD_0050513c::caseD_2:
00505158  BE 09 00 00 00            MOV ESI,0x9
0050515D  8B C6                     MOV EAX,ESI
0050515F  5E                        POP ESI
00505160  5D                        POP EBP
00505161  C2 04 00                  RET 0x4
switchD_0050513c::caseD_3:
00505164  BE 07 00 00 00            MOV ESI,0x7
00505169  8B C6                     MOV EAX,ESI
0050516B  5E                        POP ESI
0050516C  5D                        POP EBP
0050516D  C2 04 00                  RET 0x4
switchD_0050513c::caseD_4:
00505170  BE 04 00 00 00            MOV ESI,0x4
00505175  8B C6                     MOV EAX,ESI
00505177  5E                        POP ESI
00505178  5D                        POP EBP
00505179  C2 04 00                  RET 0x4
switchD_0050513c::caseD_5:
0050517C  BE 08 00 00 00            MOV ESI,0x8
00505181  8B C6                     MOV EAX,ESI
00505183  5E                        POP ESI
00505184  5D                        POP EBP
00505185  C2 04 00                  RET 0x4
LAB_00505188:
00505188  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0050518B  3C 03                     CMP AL,0x3
0050518D  75 05                     JNZ 0x00505194
0050518F  80 F9 01                  CMP CL,0x1
00505192  74 15                     JZ 0x005051a9
LAB_00505194:
00505194  FE C9                     DEC CL
00505196  F6 D9                     NEG CL
00505198  1B C9                     SBB ECX,ECX
0050519A  25 FF 00 00 00            AND EAX,0xff
0050519F  83 E1 FC                  AND ECX,0xfffffffc
005051A2  83 C1 04                  ADD ECX,0x4
005051A5  03 C8                     ADD ECX,EAX
005051A7  8B F1                     MOV ESI,ECX
switchD_005050fb::default:
005051A9  8B C6                     MOV EAX,ESI
005051AB  5E                        POP ESI
005051AC  5D                        POP EBP
005051AD  C2 04 00                  RET 0x4

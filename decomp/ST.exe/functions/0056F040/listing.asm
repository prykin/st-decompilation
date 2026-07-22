STAppC::sub_0056F040:
0056F040  55                        PUSH EBP
0056F041  8B EC                     MOV EBP,ESP
0056F043  83 EC 08                  SUB ESP,0x8
0056F046  8B D1                     MOV EDX,ECX
0056F048  53                        PUSH EBX
0056F049  56                        PUSH ESI
0056F04A  BE 08 00 00 00            MOV ESI,0x8
0056F04F  8D 82 A7 11 00 00         LEA EAX,[EDX + 0x11a7]
LAB_0056f055:
0056F055  8A 48 22                  MOV CL,byte ptr [EAX + 0x22]
0056F058  8A 9A 2D 11 00 00         MOV BL,byte ptr [EDX + 0x112d]
0056F05E  3A CB                     CMP CL,BL
0056F060  75 0D                     JNZ 0x0056f06f
0056F062  8A 48 21                  MOV CL,byte ptr [EAX + 0x21]
0056F065  8A 9A 2E 11 00 00         MOV BL,byte ptr [EDX + 0x112e]
0056F06B  3A CB                     CMP CL,BL
0056F06D  74 08                     JZ 0x0056f077
LAB_0056f06f:
0056F06F  80 38 00                  CMP byte ptr [EAX],0x0
0056F072  75 03                     JNZ 0x0056f077
0056F074  C6 00 01                  MOV byte ptr [EAX],0x1
LAB_0056f077:
0056F077  83 C0 51                  ADD EAX,0x51
0056F07A  4E                        DEC ESI
0056F07B  75 D8                     JNZ 0x0056f055
0056F07D  33 C0                     XOR EAX,EAX
0056F07F  8A 82 80 11 00 00         MOV AL,byte ptr [EDX + 0x1180]
0056F085  48                        DEC EAX
0056F086  83 F8 07                  CMP EAX,0x7
0056F089  0F 87 21 01 00 00         JA 0x0056f1b0
switchD_0056f08f::switchD:
0056F08F  FF 24 85 B8 F1 56 00      JMP dword ptr [EAX*0x4 + 0x56f1b8]
switchD_0056f08f::caseD_1:
0056F096  8D 9A C9 11 00 00         LEA EBX,[EDX + 0x11c9]
0056F09C  57                        PUSH EDI
0056F09D  C6 82 8F 14 00 00 00      MOV byte ptr [EDX + 0x148f],0x0
0056F0A4  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0056F0A7  C7 45 F8 08 00 00 00      MOV dword ptr [EBP + -0x8],0x8
LAB_0056f0ae:
0056F0AE  80 3B FF                  CMP byte ptr [EBX],0xff
0056F0B1  0F 84 E5 00 00 00         JZ 0x0056f19c
0056F0B7  33 DB                     XOR EBX,EBX
0056F0B9  B9 27 00 00 00            MOV ECX,0x27
0056F0BE  8A 9A 8F 14 00 00         MOV BL,byte ptr [EDX + 0x148f]
0056F0C4  33 C0                     XOR EAX,EAX
0056F0C6  8B F3                     MOV ESI,EBX
0056F0C8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0056F0CB  8D 3C B6                  LEA EDI,[ESI + ESI*0x4]
0056F0CE  C1 E7 03                  SHL EDI,0x3
0056F0D1  2B FE                     SUB EDI,ESI
0056F0D3  8D BC BA 90 14 00 00      LEA EDI,[EDX + EDI*0x4 + 0x1490]
0056F0DA  F3 AB                     STOSD.REP ES:EDI
0056F0DC  8A 03                     MOV AL,byte ptr [EBX]
0056F0DE  8A 8A 2D 11 00 00         MOV CL,byte ptr [EDX + 0x112d]
0056F0E4  3A C1                     CMP AL,CL
0056F0E6  75 3E                     JNZ 0x0056f126
0056F0E8  33 C0                     XOR EAX,EAX
0056F0EA  8D BA BD 07 00 00         LEA EDI,[EDX + 0x7bd]
0056F0F0  8A 82 8F 14 00 00         MOV AL,byte ptr [EDX + 0x148f]
0056F0F6  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0056F0F9  C1 E1 03                  SHL ECX,0x3
0056F0FC  2B C8                     SUB ECX,EAX
0056F0FE  33 C0                     XOR EAX,EAX
0056F100  8D B4 8A 90 14 00 00      LEA ESI,[EDX + ECX*0x4 + 0x1490]
0056F107  83 C9 FF                  OR ECX,0xffffffff
0056F10A  F2 AE                     SCASB.REPNE ES:EDI
0056F10C  F7 D1                     NOT ECX
0056F10E  2B F9                     SUB EDI,ECX
0056F110  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0056F113  8B C1                     MOV EAX,ECX
0056F115  8B F7                     MOV ESI,EDI
0056F117  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0056F11A  C1 E9 02                  SHR ECX,0x2
0056F11D  F3 A5                     MOVSD.REP ES:EDI,ESI
0056F11F  8B C8                     MOV ECX,EAX
0056F121  83 E1 03                  AND ECX,0x3
0056F124  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0056f126:
0056F126  33 C0                     XOR EAX,EAX
0056F128  8A 82 8F 14 00 00         MOV AL,byte ptr [EDX + 0x148f]
0056F12E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0056F131  C1 E1 03                  SHL ECX,0x3
0056F134  2B C8                     SUB ECX,EAX
0056F136  8A 03                     MOV AL,byte ptr [EBX]
0056F138  88 84 8A D4 14 00 00      MOV byte ptr [EDX + ECX*0x4 + 0x14d4],AL
0056F13F  33 C0                     XOR EAX,EAX
0056F141  8A 82 8F 14 00 00         MOV AL,byte ptr [EDX + 0x148f]
0056F147  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0056F14A  C1 E1 03                  SHL ECX,0x3
0056F14D  2B C8                     SUB ECX,EAX
0056F14F  C6 84 8A D5 14 00 00 01   MOV byte ptr [EDX + ECX*0x4 + 0x14d5],0x1
0056F157  8A 43 DE                  MOV AL,byte ptr [EBX + -0x22]
0056F15A  84 C0                     TEST AL,AL
0056F15C  0F 94 C1                  SETZ CL
0056F15F  33 C0                     XOR EAX,EAX
0056F161  8A 82 8F 14 00 00         MOV AL,byte ptr [EDX + 0x148f]
0056F167  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0056F16A  C1 E6 03                  SHL ESI,0x3
0056F16D  2B F0                     SUB ESI,EAX
0056F16F  33 C0                     XOR EAX,EAX
0056F171  88 8C B2 D6 14 00 00      MOV byte ptr [EDX + ESI*0x4 + 0x14d6],CL
0056F178  8A 82 8F 14 00 00         MOV AL,byte ptr [EDX + 0x148f]
0056F17E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0056F181  C1 E1 03                  SHL ECX,0x3
0056F184  2B C8                     SUB ECX,EAX
0056F186  C6 84 8A D7 14 00 00 01   MOV byte ptr [EDX + ECX*0x4 + 0x14d7],0x1
0056F18E  8A 82 8F 14 00 00         MOV AL,byte ptr [EDX + 0x148f]
0056F194  FE C0                     INC AL
0056F196  88 82 8F 14 00 00         MOV byte ptr [EDX + 0x148f],AL
LAB_0056f19c:
0056F19C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0056F19F  83 C3 51                  ADD EBX,0x51
0056F1A2  48                        DEC EAX
0056F1A3  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0056F1A6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0056F1A9  0F 85 FF FE FF FF         JNZ 0x0056f0ae
0056F1AF  5F                        POP EDI
switchD_0056f08f::caseD_4:
0056F1B0  5E                        POP ESI
0056F1B1  5B                        POP EBX
0056F1B2  8B E5                     MOV ESP,EBP
0056F1B4  5D                        POP EBP
0056F1B5  C3                        RET

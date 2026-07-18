FUN_0044ce40:
0044CE40  55                        PUSH EBP
0044CE41  8B EC                     MOV EBP,ESP
0044CE43  83 EC 0C                  SUB ESP,0xc
0044CE46  33 C0                     XOR EAX,EAX
0044CE48  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0044CE4B  A0 4D 87 80 00            MOV AL,[0x0080874d]
0044CE50  53                        PUSH EBX
0044CE51  56                        PUSH ESI
0044CE52  57                        PUSH EDI
0044CE53  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044CE56  33 F6                     XOR ESI,ESI
0044CE58  33 FF                     XOR EDI,EDI
0044CE5A  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044CE5D  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044CE60  C1 E1 04                  SHL ECX,0x4
0044CE63  03 C8                     ADD ECX,EAX
0044CE65  8B 1C 4D 8D 4F 7F 00      MOV EBX,dword ptr [ECX*0x2 + 0x7f4f8d]
0044CE6C  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0044CE6F  85 C0                     TEST EAX,EAX
0044CE71  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0044CE74  0F 8E 19 01 00 00         JLE 0x0044cf93
LAB_0044ce7a:
0044CE7A  8D 55 F8                  LEA EDX,[EBP + -0x8]
0044CE7D  8B CB                     MOV ECX,EBX
0044CE7F  52                        PUSH EDX
0044CE80  8B D7                     MOV EDX,EDI
0044CE82  E8 E9 FD 25 00            CALL 0x006acc70
0044CE87  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0044CE8A  66 3D FF FF               CMP AX,0xffff
0044CE8E  0F 84 EF 00 00 00         JZ 0x0044cf83
0044CE94  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044CE97  6A 01                     PUSH 0x1
0044CE99  50                        PUSH EAX
0044CE9A  A0 4D 87 80 00            MOV AL,[0x0080874d]
0044CE9F  50                        PUSH EAX
0044CEA0  E8 15 5A FB FF            CALL 0x004028ba
0044CEA5  85 C0                     TEST EAX,EAX
0044CEA7  0F 84 D6 00 00 00         JZ 0x0044cf83
0044CEAD  8B 10                     MOV EDX,dword ptr [EAX]
0044CEAF  8B C8                     MOV ECX,EAX
0044CEB1  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044CEB4  48                        DEC EAX
0044CEB5  83 F8 27                  CMP EAX,0x27
0044CEB8  0F 87 C5 00 00 00         JA 0x0044cf83
switchD_0044cebe::switchD:
0044CEBE  FF 24 85 30 D1 44 00      JMP dword ptr [EAX*0x4 + 0x44d130]
switchD_0044cebe::caseD_1:
0044CEC5  81 CE 00 20 00 00         OR ESI,0x2000
0044CECB  E9 B3 00 00 00            JMP 0x0044cf83
switchD_0044cebe::caseD_6:
0044CED0  83 CE 01                  OR ESI,0x1
0044CED3  E9 AB 00 00 00            JMP 0x0044cf83
switchD_0044cebe::caseD_b:
0044CED8  83 CE 04                  OR ESI,0x4
0044CEDB  E9 A3 00 00 00            JMP 0x0044cf83
switchD_0044cebe::caseD_5:
0044CEE0  83 CE 02                  OR ESI,0x2
0044CEE3  E9 9B 00 00 00            JMP 0x0044cf83
switchD_0044cebe::caseD_11:
0044CEE8  83 CE 08                  OR ESI,0x8
0044CEEB  E9 93 00 00 00            JMP 0x0044cf83
switchD_0044cebe::caseD_17:
0044CEF0  83 CE 10                  OR ESI,0x10
0044CEF3  E9 8B 00 00 00            JMP 0x0044cf83
switchD_0044cebe::caseD_16:
0044CEF8  83 CE 28                  OR ESI,0x28
0044CEFB  E9 83 00 00 00            JMP 0x0044cf83
switchD_0044cebe::caseD_4:
0044CF00  83 CE 40                  OR ESI,0x40
0044CF03  EB 7E                     JMP 0x0044cf83
switchD_0044cebe::caseD_9:
0044CF05  81 CE 80 00 00 00         OR ESI,0x80
0044CF0B  EB 76                     JMP 0x0044cf83
switchD_0044cebe::caseD_15:
0044CF0D  81 CE 00 01 00 00         OR ESI,0x100
0044CF13  EB 6E                     JMP 0x0044cf83
switchD_0044cebe::caseD_8:
0044CF15  81 CE 00 02 00 00         OR ESI,0x200
0044CF1B  EB 66                     JMP 0x0044cf83
switchD_0044cebe::caseD_7:
0044CF1D  81 CE 00 04 00 00         OR ESI,0x400
0044CF23  EB 5E                     JMP 0x0044cf83
switchD_0044cebe::caseD_c:
0044CF25  81 CE 00 08 00 00         OR ESI,0x800
0044CF2B  EB 56                     JMP 0x0044cf83
switchD_0044cebe::caseD_25:
0044CF2D  81 CE 00 10 00 00         OR ESI,0x1000
0044CF33  EB 4E                     JMP 0x0044cf83
switchD_0044cebe::caseD_1e:
0044CF35  81 CE 00 00 00 02         OR ESI,0x2000000
0044CF3B  EB 46                     JMP 0x0044cf83
switchD_0044cebe::caseD_22:
0044CF3D  81 CE 00 00 01 00         OR ESI,0x10000
0044CF43  EB 3E                     JMP 0x0044cf83
switchD_0044cebe::caseD_1a:
0044CF45  81 CE 00 00 02 00         OR ESI,0x20000
0044CF4B  EB 36                     JMP 0x0044cf83
switchD_0044cebe::caseD_19:
0044CF4D  81 CE 00 00 04 00         OR ESI,0x40000
0044CF53  EB 2E                     JMP 0x0044cf83
switchD_0044cebe::caseD_1c:
0044CF55  81 CE 00 00 08 00         OR ESI,0x80000
0044CF5B  EB 26                     JMP 0x0044cf83
switchD_0044cebe::caseD_1d:
0044CF5D  81 CE 00 00 10 00         OR ESI,0x100000
0044CF63  EB 1E                     JMP 0x0044cf83
switchD_0044cebe::caseD_1b:
0044CF65  81 CE 00 00 20 00         OR ESI,0x200000
0044CF6B  EB 16                     JMP 0x0044cf83
switchD_0044cebe::caseD_21:
0044CF6D  81 CE 00 00 40 00         OR ESI,0x400000
0044CF73  EB 0E                     JMP 0x0044cf83
switchD_0044cebe::caseD_23:
0044CF75  81 CE 00 00 80 00         OR ESI,0x800000
0044CF7B  EB 06                     JMP 0x0044cf83
switchD_0044cebe::caseD_24:
0044CF7D  81 CE 00 00 00 01         OR ESI,0x1000000
switchD_0044cebe::default:
0044CF83  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0044CF86  47                        INC EDI
0044CF87  3B F8                     CMP EDI,EAX
0044CF89  0F 8C EB FE FF FF         JL 0x0044ce7a
0044CF8F  85 F6                     TEST ESI,ESI
0044CF91  75 09                     JNZ 0x0044cf9c
LAB_0044cf93:
0044CF93  5F                        POP EDI
0044CF94  5E                        POP ESI
0044CF95  33 C0                     XOR EAX,EAX
0044CF97  5B                        POP EBX
0044CF98  8B E5                     MOV ESP,EBP
0044CF9A  5D                        POP EBP
0044CF9B  C3                        RET
LAB_0044cf9c:
0044CF9C  8B FE                     MOV EDI,ESI
0044CF9E  C1 EF 10                  SHR EDI,0x10
0044CFA1  66 85 FF                  TEST DI,DI
0044CFA4  76 2A                     JBE 0x0044cfd0
0044CFA6  66 85 F6                  TEST SI,SI
0044CFA9  76 4B                     JBE 0x0044cff6
0044CFAB  A0 4D 87 80 00            MOV AL,[0x0080874d]
0044CFB0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0044CFB3  50                        PUSH EAX
0044CFB4  E8 FE 79 FB FF            CALL 0x004049b7
0044CFB9  2C 03                     SUB AL,0x3
0044CFBB  5F                        POP EDI
0044CFBC  F6 D8                     NEG AL
0044CFBE  1B C0                     SBB EAX,EAX
0044CFC0  5E                        POP ESI
0044CFC1  25 00 20 00 FE            AND EAX,0xfe002000
0044CFC6  5B                        POP EBX
0044CFC7  05 00 00 00 02            ADD EAX,0x2000000
0044CFCC  8B E5                     MOV ESP,EBP
0044CFCE  5D                        POP EBP
0044CFCF  C3                        RET
LAB_0044cfd0:
0044CFD0  66 85 F6                  TEST SI,SI
0044CFD3  76 21                     JBE 0x0044cff6
0044CFD5  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0044CFDB  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0044CFDE  51                        PUSH ECX
0044CFDF  8B CB                     MOV ECX,EBX
0044CFE1  E8 D1 79 FB FF            CALL 0x004049b7
0044CFE6  3C 03                     CMP AL,0x3
0044CFE8  75 0F                     JNZ 0x0044cff9
0044CFEA  5F                        POP EDI
0044CFEB  5E                        POP ESI
0044CFEC  B8 00 00 00 02            MOV EAX,0x2000000
0044CFF1  5B                        POP EBX
0044CFF2  8B E5                     MOV ESP,EBP
0044CFF4  5D                        POP EBP
0044CFF5  C3                        RET
LAB_0044cff6:
0044CFF6  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0044cff9:
0044CFF9  66 85 FF                  TEST DI,DI
0044CFFC  76 1E                     JBE 0x0044d01c
0044CFFE  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0044D004  8B CB                     MOV ECX,EBX
0044D006  52                        PUSH EDX
0044D007  E8 AB 79 FB FF            CALL 0x004049b7
0044D00C  3C 03                     CMP AL,0x3
0044D00E  74 0C                     JZ 0x0044d01c
0044D010  5F                        POP EDI
0044D011  5E                        POP ESI
0044D012  B8 00 20 00 00            MOV EAX,0x2000
0044D017  5B                        POP EBX
0044D018  8B E5                     MOV ESP,EBP
0044D01A  5D                        POP EBP
0044D01B  C3                        RET
LAB_0044d01c:
0044D01C  A0 4D 87 80 00            MOV AL,[0x0080874d]
0044D021  8B CB                     MOV ECX,EBX
0044D023  50                        PUSH EAX
0044D024  E8 8E 79 FB FF            CALL 0x004049b7
0044D029  3C 03                     CMP AL,0x3
0044D02B  74 7B                     JZ 0x0044d0a8
0044D02D  81 FE 80 00 00 00         CMP ESI,0x80
0044D033  77 1D                     JA 0x0044d052
0044D035  0F 84 EB 00 00 00         JZ 0x0044d126
0044D03B  8D 46 FF                  LEA EAX,[ESI + -0x1]
0044D03E  83 F8 3F                  CMP EAX,0x3f
0044D041  77 59                     JA 0x0044d09c
0044D043  33 C9                     XOR ECX,ECX
0044D045  8A 88 D8 D1 44 00         MOV CL,byte ptr [EAX + 0x44d1d8]
switchD_0044d04b::switchD:
0044D04B  FF 24 8D D0 D1 44 00      JMP dword ptr [ECX*0x4 + 0x44d1d0]
LAB_0044d052:
0044D052  81 FE 00 04 00 00         CMP ESI,0x400
0044D058  77 2A                     JA 0x0044d084
0044D05A  0F 84 C6 00 00 00         JZ 0x0044d126
0044D060  81 FE 00 01 00 00         CMP ESI,0x100
0044D066  0F 84 BA 00 00 00         JZ 0x0044d126
0044D06C  81 FE 00 02 00 00         CMP ESI,0x200
0044D072  0F 84 AE 00 00 00         JZ 0x0044d126
0044D078  5F                        POP EDI
0044D079  5E                        POP ESI
0044D07A  B8 00 20 00 00            MOV EAX,0x2000
0044D07F  5B                        POP EBX
0044D080  8B E5                     MOV ESP,EBP
0044D082  5D                        POP EBP
0044D083  C3                        RET
LAB_0044d084:
0044D084  81 FE 00 08 00 00         CMP ESI,0x800
0044D08A  0F 84 96 00 00 00         JZ 0x0044d126
0044D090  81 FE 00 10 00 00         CMP ESI,0x1000
0044D096  0F 84 8A 00 00 00         JZ 0x0044d126
switchD_0044d04b::caseD_3:
0044D09C  5F                        POP EDI
0044D09D  5E                        POP ESI
0044D09E  B8 00 20 00 00            MOV EAX,0x2000
0044D0A3  5B                        POP EBX
0044D0A4  8B E5                     MOV ESP,EBP
0044D0A6  5D                        POP EBP
0044D0A7  C3                        RET
LAB_0044d0a8:
0044D0A8  81 FE 00 00 10 00         CMP ESI,0x100000
0044D0AE  77 3C                     JA 0x0044d0ec
0044D0B0  74 74                     JZ 0x0044d126
0044D0B2  81 FE 00 00 04 00         CMP ESI,0x40000
0044D0B8  77 1E                     JA 0x0044d0d8
0044D0BA  74 6A                     JZ 0x0044d126
0044D0BC  81 FE 00 00 01 00         CMP ESI,0x10000
0044D0C2  74 62                     JZ 0x0044d126
0044D0C4  81 FE 00 00 02 00         CMP ESI,0x20000
0044D0CA  74 5A                     JZ 0x0044d126
0044D0CC  5F                        POP EDI
0044D0CD  5E                        POP ESI
0044D0CE  B8 00 00 00 02            MOV EAX,0x2000000
0044D0D3  5B                        POP EBX
0044D0D4  8B E5                     MOV ESP,EBP
0044D0D6  5D                        POP EBP
0044D0D7  C3                        RET
LAB_0044d0d8:
0044D0D8  81 FE 00 00 08 00         CMP ESI,0x80000
0044D0DE  74 46                     JZ 0x0044d126
0044D0E0  5F                        POP EDI
0044D0E1  5E                        POP ESI
0044D0E2  B8 00 00 00 02            MOV EAX,0x2000000
0044D0E7  5B                        POP EBX
0044D0E8  8B E5                     MOV ESP,EBP
0044D0EA  5D                        POP EBP
0044D0EB  C3                        RET
LAB_0044d0ec:
0044D0EC  81 FE 00 00 80 00         CMP ESI,0x800000
0044D0F2  77 1E                     JA 0x0044d112
0044D0F4  74 30                     JZ 0x0044d126
0044D0F6  81 FE 00 00 20 00         CMP ESI,0x200000
0044D0FC  74 28                     JZ 0x0044d126
0044D0FE  81 FE 00 00 40 00         CMP ESI,0x400000
0044D104  74 20                     JZ 0x0044d126
0044D106  5F                        POP EDI
0044D107  5E                        POP ESI
0044D108  B8 00 00 00 02            MOV EAX,0x2000000
0044D10D  5B                        POP EBX
0044D10E  8B E5                     MOV ESP,EBP
0044D110  5D                        POP EBP
0044D111  C3                        RET
LAB_0044d112:
0044D112  81 FE 00 00 00 01         CMP ESI,0x1000000
0044D118  74 0C                     JZ 0x0044d126
0044D11A  5F                        POP EDI
0044D11B  5E                        POP ESI
0044D11C  B8 00 00 00 02            MOV EAX,0x2000000
0044D121  5B                        POP EBX
0044D122  8B E5                     MOV ESP,EBP
0044D124  5D                        POP EBP
0044D125  C3                        RET
switchD_0044d04b::caseD_1:
0044D126  8B C6                     MOV EAX,ESI
0044D128  5F                        POP EDI
0044D129  5E                        POP ESI
0044D12A  5B                        POP EBX
0044D12B  8B E5                     MOV ESP,EBP
0044D12D  5D                        POP EBP
0044D12E  C3                        RET

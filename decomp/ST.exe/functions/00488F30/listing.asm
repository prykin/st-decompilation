STBoatC::GetInfo16:
00488F30  55                        PUSH EBP
00488F31  8B EC                     MOV EBP,ESP
00488F33  53                        PUSH EBX
00488F34  56                        PUSH ESI
00488F35  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00488F38  8B D9                     MOV EBX,ECX
00488F3A  57                        PUSH EDI
00488F3B  B9 90 00 00 00            MOV ECX,0x90
00488F40  83 C8 FF                  OR EAX,0xffffffff
00488F43  8B FE                     MOV EDI,ESI
00488F45  F3 AB                     STOSD.REP ES:EDI
00488F47  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
00488F4A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488F50  50                        PUSH EAX
00488F51  E8 61 BA F7 FF            CALL 0x004049b7
00488F56  25 FF 00 00 00            AND EAX,0xff
00488F5B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00488F5E  48                        DEC EAX
00488F5F  0F 84 E5 00 00 00         JZ 0x0048904a
00488F65  48                        DEC EAX
00488F66  0F 84 99 00 00 00         JZ 0x00489005
00488F6C  48                        DEC EAX
00488F6D  74 30                     JZ 0x00488f9f
00488F6F  68 4C B9 7A 00            PUSH 0x7ab94c
00488F74  68 CC 4C 7A 00            PUSH 0x7a4ccc
00488F79  6A 00                     PUSH 0x0
00488F7B  6A 00                     PUSH 0x0
00488F7D  68 CA 44 00 00            PUSH 0x44ca
00488F82  68 3C 9D 7A 00            PUSH 0x7a9d3c
00488F87  E8 44 45 22 00            CALL 0x006ad4d0
00488F8C  83 C4 18                  ADD ESP,0x18
00488F8F  85 C0                     TEST EAX,EAX
00488F91  0F 84 CB 06 00 00         JZ 0x00489662
00488F97  CC                        INT3
LAB_00488f9f:
00488F9F  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00488FA2  6A 6D                     PUSH 0x6d
00488FA4  51                        PUSH ECX
00488FA5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488FAB  E8 BB 88 F7 FF            CALL 0x0040186b
00488FB0  0F BF D0                  MOVSX EDX,AX
00488FB3  C1 E2 10                  SHL EDX,0x10
00488FB6  83 CA 6D                  OR EDX,0x6d
00488FB9  C6 46 08 01               MOV byte ptr [ESI + 0x8],0x1
00488FBD  89 16                     MOV dword ptr [ESI],EDX
00488FBF  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00488FC2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488FC8  6A 65                     PUSH 0x65
00488FCA  50                        PUSH EAX
00488FCB  E8 9B 88 F7 FF            CALL 0x0040186b
00488FD0  0F BF C8                  MOVSX ECX,AX
00488FD3  C1 E1 10                  SHL ECX,0x10
00488FD6  83 C9 65                  OR ECX,0x65
00488FD9  C6 46 38 01               MOV byte ptr [ESI + 0x38],0x1
00488FDD  89 4E 30                  MOV dword ptr [ESI + 0x30],ECX
00488FE0  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00488FE3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488FE9  6A 4E                     PUSH 0x4e
00488FEB  52                        PUSH EDX
00488FEC  E8 7A 88 F7 FF            CALL 0x0040186b
00488FF1  0F BF C0                  MOVSX EAX,AX
00488FF4  C1 E0 10                  SHL EAX,0x10
00488FF7  0C 4E                     OR AL,0x4e
00488FF9  C6 46 68 01               MOV byte ptr [ESI + 0x68],0x1
00488FFD  89 46 60                  MOV dword ptr [ESI + 0x60],EAX
00489000  E9 85 00 00 00            JMP 0x0048908a
LAB_00489005:
00489005  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00489008  68 82 00 00 00            PUSH 0x82
0048900D  51                        PUSH ECX
0048900E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489014  E8 52 88 F7 FF            CALL 0x0040186b
00489019  0F BF D0                  MOVSX EDX,AX
0048901C  C1 E2 10                  SHL EDX,0x10
0048901F  80 CA 82                  OR DL,0x82
00489022  C6 46 08 01               MOV byte ptr [ESI + 0x8],0x1
00489026  89 16                     MOV dword ptr [ESI],EDX
00489028  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
0048902B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489031  68 81 00 00 00            PUSH 0x81
00489036  50                        PUSH EAX
00489037  E8 2F 88 F7 FF            CALL 0x0040186b
0048903C  0F BF C8                  MOVSX ECX,AX
0048903F  C1 E1 10                  SHL ECX,0x10
00489042  80 C9 81                  OR CL,0x81
00489045  89 4E 30                  MOV dword ptr [ESI + 0x30],ECX
00489048  EB 3C                     JMP 0x00489086
LAB_0048904a:
0048904A  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
0048904D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489053  6A 05                     PUSH 0x5
00489055  52                        PUSH EDX
00489056  E8 10 88 F7 FF            CALL 0x0040186b
0048905B  0F BF C0                  MOVSX EAX,AX
0048905E  C1 E0 10                  SHL EAX,0x10
00489061  0C 05                     OR AL,0x5
00489063  C6 46 08 01               MOV byte ptr [ESI + 0x8],0x1
00489067  89 06                     MOV dword ptr [ESI],EAX
00489069  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
0048906C  6A 04                     PUSH 0x4
0048906E  51                        PUSH ECX
0048906F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489075  E8 F1 87 F7 FF            CALL 0x0040186b
0048907A  0F BF D0                  MOVSX EDX,AX
0048907D  C1 E2 10                  SHL EDX,0x10
00489080  83 CA 04                  OR EDX,0x4
00489083  89 56 30                  MOV dword ptr [ESI + 0x30],EDX
LAB_00489086:
00489086  C6 46 38 01               MOV byte ptr [ESI + 0x38],0x1
LAB_0048908a:
0048908A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0048908D  BF 03 00 00 00            MOV EDI,0x3
00489092  85 C0                     TEST EAX,EAX
00489094  0F 8E 88 01 00 00         JLE 0x00489222
0048909A  83 F8 02                  CMP EAX,0x2
0048909D  0F 8E C5 00 00 00         JLE 0x00489168
004890A3  3B C7                     CMP EAX,EDI
004890A5  0F 85 77 01 00 00         JNZ 0x00489222
004890AB  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004890AE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004890B4  6A 66                     PUSH 0x66
004890B6  50                        PUSH EAX
004890B7  E8 AF 87 F7 FF            CALL 0x0040186b
004890BC  66 85 C0                  TEST AX,AX
004890BF  7E 1B                     JLE 0x004890dc
004890C1  0F BF C8                  MOVSX ECX,AX
004890C4  C1 E1 10                  SHL ECX,0x10
004890C7  83 C9 66                  OR ECX,0x66
004890CA  BF 04 00 00 00            MOV EDI,0x4
004890CF  89 8E 90 00 00 00         MOV dword ptr [ESI + 0x90],ECX
004890D5  C6 86 98 00 00 00 01      MOV byte ptr [ESI + 0x98],0x1
LAB_004890dc:
004890DC  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004890DF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004890E5  6A 67                     PUSH 0x67
004890E7  52                        PUSH EDX
004890E8  E8 7E 87 F7 FF            CALL 0x0040186b
004890ED  66 85 C0                  TEST AX,AX
004890F0  7E 18                     JLE 0x0048910a
004890F2  0F BF D0                  MOVSX EDX,AX
004890F5  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
004890F8  C1 E1 04                  SHL ECX,0x4
004890FB  C1 E2 10                  SHL EDX,0x10
004890FE  03 CE                     ADD ECX,ESI
00489100  83 CA 67                  OR EDX,0x67
00489103  47                        INC EDI
00489104  89 11                     MOV dword ptr [ECX],EDX
00489106  C6 41 08 01               MOV byte ptr [ECX + 0x8],0x1
LAB_0048910a:
0048910A  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
0048910D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489113  6A 68                     PUSH 0x68
00489115  50                        PUSH EAX
00489116  E8 50 87 F7 FF            CALL 0x0040186b
0048911B  66 85 C0                  TEST AX,AX
0048911E  7E 18                     JLE 0x00489138
00489120  0F BF D0                  MOVSX EDX,AX
00489123  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
00489126  C1 E1 04                  SHL ECX,0x4
00489129  C1 E2 10                  SHL EDX,0x10
0048912C  03 CE                     ADD ECX,ESI
0048912E  83 CA 68                  OR EDX,0x68
00489131  47                        INC EDI
00489132  89 11                     MOV dword ptr [ECX],EDX
00489134  C6 41 08 01               MOV byte ptr [ECX + 0x8],0x1
LAB_00489138:
00489138  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
0048913B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489141  6A 6A                     PUSH 0x6a
00489143  50                        PUSH EAX
00489144  E8 22 87 F7 FF            CALL 0x0040186b
00489149  66 85 C0                  TEST AX,AX
0048914C  0F 8E D0 00 00 00         JLE 0x00489222
00489152  0F BF D0                  MOVSX EDX,AX
00489155  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
00489158  C1 E1 04                  SHL ECX,0x4
0048915B  C1 E2 10                  SHL EDX,0x10
0048915E  03 CE                     ADD ECX,ESI
00489160  83 CA 6A                  OR EDX,0x6a
00489163  E9 B4 00 00 00            JMP 0x0048921c
LAB_00489168:
00489168  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
0048916B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489171  6A 0A                     PUSH 0xa
00489173  50                        PUSH EAX
00489174  E8 F2 86 F7 FF            CALL 0x0040186b
00489179  66 85 C0                  TEST AX,AX
0048917C  7E 1B                     JLE 0x00489199
0048917E  0F BF C8                  MOVSX ECX,AX
00489181  C1 E1 10                  SHL ECX,0x10
00489184  83 C9 0A                  OR ECX,0xa
00489187  BF 04 00 00 00            MOV EDI,0x4
0048918C  89 8E 90 00 00 00         MOV dword ptr [ESI + 0x90],ECX
00489192  C6 86 98 00 00 00 01      MOV byte ptr [ESI + 0x98],0x1
LAB_00489199:
00489199  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
0048919C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004891A2  6A 1B                     PUSH 0x1b
004891A4  52                        PUSH EDX
004891A5  E8 C1 86 F7 FF            CALL 0x0040186b
004891AA  66 85 C0                  TEST AX,AX
004891AD  7E 18                     JLE 0x004891c7
004891AF  0F BF D0                  MOVSX EDX,AX
004891B2  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
004891B5  C1 E1 04                  SHL ECX,0x4
004891B8  C1 E2 10                  SHL EDX,0x10
004891BB  03 CE                     ADD ECX,ESI
004891BD  83 CA 1B                  OR EDX,0x1b
004891C0  47                        INC EDI
004891C1  89 11                     MOV dword ptr [ECX],EDX
004891C3  C6 41 08 01               MOV byte ptr [ECX + 0x8],0x1
LAB_004891c7:
004891C7  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004891CA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004891D0  6A 24                     PUSH 0x24
004891D2  50                        PUSH EAX
004891D3  E8 93 86 F7 FF            CALL 0x0040186b
004891D8  66 85 C0                  TEST AX,AX
004891DB  7E 18                     JLE 0x004891f5
004891DD  0F BF D0                  MOVSX EDX,AX
004891E0  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
004891E3  C1 E1 04                  SHL ECX,0x4
004891E6  C1 E2 10                  SHL EDX,0x10
004891E9  03 CE                     ADD ECX,ESI
004891EB  83 CA 24                  OR EDX,0x24
004891EE  47                        INC EDI
004891EF  89 11                     MOV dword ptr [ECX],EDX
004891F1  C6 41 08 01               MOV byte ptr [ECX + 0x8],0x1
LAB_004891f5:
004891F5  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004891F8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004891FE  6A 2D                     PUSH 0x2d
00489200  50                        PUSH EAX
00489201  E8 65 86 F7 FF            CALL 0x0040186b
00489206  66 85 C0                  TEST AX,AX
00489209  7E 17                     JLE 0x00489222
0048920B  0F BF D0                  MOVSX EDX,AX
0048920E  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
00489211  C1 E1 04                  SHL ECX,0x4
00489214  C1 E2 10                  SHL EDX,0x10
00489217  03 CE                     ADD ECX,ESI
00489219  83 CA 2D                  OR EDX,0x2d
LAB_0048921c:
0048921C  89 11                     MOV dword ptr [ECX],EDX
0048921E  C6 41 08 01               MOV byte ptr [ECX + 0x8],0x1
STBoatC::GetInfo16::cf_common_join_00489222:
00489222  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
00489228  BF 09 00 00 00            MOV EDI,0x9
0048922D  48                        DEC EAX
0048922E  83 F8 27                  CMP EAX,0x27
00489231  0F 87 2B 04 00 00         JA 0x00489662
00489237  33 C9                     XOR ECX,ECX
00489239  8A 88 A0 96 48 00         MOV CL,byte ptr [EAX + 0x4896a0]
switchD_0048923f::switchD:
0048923F  FF 24 8D 6C 96 48 00      JMP dword ptr [ECX*0x4 + 0x48966c]
switchD_0048923f::caseD_1:
00489246  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00489249  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0048924F  6A 0B                     PUSH 0xb
00489251  52                        PUSH EDX
00489252  E8 14 86 F7 FF            CALL 0x0040186b
00489257  66 85 C0                  TEST AX,AX
0048925A  7E 1A                     JLE 0x00489276
0048925C  0F BF C0                  MOVSX EAX,AX
0048925F  C1 E0 10                  SHL EAX,0x10
00489262  0C 0B                     OR AL,0xb
00489264  BF 0A 00 00 00            MOV EDI,0xa
00489269  89 86 B0 01 00 00         MOV dword ptr [ESI + 0x1b0],EAX
0048926F  C6 86 B8 01 00 00 01      MOV byte ptr [ESI + 0x1b8],0x1
LAB_00489276:
00489276  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00489279  68 97 00 00 00            PUSH 0x97
0048927E  51                        PUSH ECX
0048927F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489285  E8 E1 85 F7 FF            CALL 0x0040186b
0048928A  66 85 C0                  TEST AX,AX
0048928D  0F 8E CF 03 00 00         JLE 0x00489662
00489293  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
00489296  5F                        POP EDI
00489297  0F BF C0                  MOVSX EAX,AX
0048929A  C1 E2 04                  SHL EDX,0x4
0048929D  C1 E0 10                  SHL EAX,0x10
004892A0  8D 0C 32                  LEA ECX,[EDX + ESI*0x1]
004892A3  0C 97                     OR AL,0x97
004892A5  5E                        POP ESI
004892A6  5B                        POP EBX
004892A7  89 01                     MOV dword ptr [ECX],EAX
004892A9  C6 41 08 01               MOV byte ptr [ECX + 0x8],0x1
004892AD  5D                        POP EBP
004892AE  C2 04 00                  RET 0x4
switchD_0048923f::caseD_5:
004892B1  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004892B4  6A 3C                     PUSH 0x3c
004892B6  51                        PUSH ECX
004892B7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004892BD  E8 A9 85 F7 FF            CALL 0x0040186b
004892C2  66 85 C0                  TEST AX,AX
004892C5  7E 1B                     JLE 0x004892e2
004892C7  0F BF D0                  MOVSX EDX,AX
004892CA  C1 E2 10                  SHL EDX,0x10
004892CD  83 CA 3C                  OR EDX,0x3c
004892D0  BF 0A 00 00 00            MOV EDI,0xa
004892D5  89 96 B0 01 00 00         MOV dword ptr [ESI + 0x1b0],EDX
004892DB  C6 86 B8 01 00 00 01      MOV byte ptr [ESI + 0x1b8],0x1
LAB_004892e2:
004892E2  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004892E5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004892EB  68 9A 00 00 00            PUSH 0x9a
004892F0  50                        PUSH EAX
004892F1  E8 75 85 F7 FF            CALL 0x0040186b
004892F6  66 85 C0                  TEST AX,AX
004892F9  7E 18                     JLE 0x00489313
004892FB  0F BF D0                  MOVSX EDX,AX
004892FE  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
00489301  C1 E1 04                  SHL ECX,0x4
00489304  C1 E2 10                  SHL EDX,0x10
00489307  03 CE                     ADD ECX,ESI
00489309  80 CA 9A                  OR DL,0x9a
0048930C  47                        INC EDI
0048930D  89 11                     MOV dword ptr [ECX],EDX
0048930F  C6 41 08 01               MOV byte ptr [ECX + 0x8],0x1
LAB_00489313:
00489313  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00489316  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0048931C  6A 06                     PUSH 0x6
0048931E  50                        PUSH EAX
0048931F  E8 47 85 F7 FF            CALL 0x0040186b
00489324  66 85 C0                  TEST AX,AX
00489327  0F 8E 35 03 00 00         JLE 0x00489662
0048932D  0F BF D0                  MOVSX EDX,AX
00489330  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
00489333  5F                        POP EDI
00489334  C1 E1 04                  SHL ECX,0x4
00489337  C1 E2 10                  SHL EDX,0x10
0048933A  03 CE                     ADD ECX,ESI
0048933C  83 CA 06                  OR EDX,0x6
0048933F  5E                        POP ESI
00489340  5B                        POP EBX
00489341  89 11                     MOV dword ptr [ECX],EDX
00489343  C6 41 08 01               MOV byte ptr [ECX + 0x8],0x1
00489347  5D                        POP EBP
00489348  C2 04 00                  RET 0x4
switchD_0048923f::caseD_11:
0048934B  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
0048934E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489354  68 91 00 00 00            PUSH 0x91
00489359  50                        PUSH EAX
0048935A  E8 0C 85 F7 FF            CALL 0x0040186b
0048935F  66 85 C0                  TEST AX,AX
00489362  7E 1B                     JLE 0x0048937f
00489364  0F BF C8                  MOVSX ECX,AX
00489367  C1 E1 10                  SHL ECX,0x10
0048936A  80 C9 91                  OR CL,0x91
0048936D  BF 0A 00 00 00            MOV EDI,0xa
00489372  89 8E B0 01 00 00         MOV dword ptr [ESI + 0x1b0],ECX
00489378  C6 86 B8 01 00 00 01      MOV byte ptr [ESI + 0x1b8],0x1
LAB_0048937f:
0048937F  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00489382  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489388  6A 41                     PUSH 0x41
0048938A  52                        PUSH EDX
0048938B  E8 DB 84 F7 FF            CALL 0x0040186b
00489390  66 85 C0                  TEST AX,AX
00489393  0F 8E C9 02 00 00         JLE 0x00489662
00489399  0F BF D0                  MOVSX EDX,AX
0048939C  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
0048939F  5F                        POP EDI
004893A0  C1 E1 04                  SHL ECX,0x4
004893A3  C1 E2 10                  SHL EDX,0x10
004893A6  03 CE                     ADD ECX,ESI
004893A8  83 CA 41                  OR EDX,0x41
004893AB  5E                        POP ESI
004893AC  5B                        POP EBX
004893AD  89 11                     MOV dword ptr [ECX],EDX
004893AF  C6 41 08 01               MOV byte ptr [ECX + 0x8],0x1
004893B3  5D                        POP EBP
004893B4  C2 04 00                  RET 0x4
switchD_0048923f::caseD_2:
004893B7  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004893BA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004893C0  6A 06                     PUSH 0x6
004893C2  50                        PUSH EAX
004893C3  E8 A3 84 F7 FF            CALL 0x0040186b
004893C8  66 85 C0                  TEST AX,AX
004893CB  0F 8E 91 02 00 00         JLE 0x00489662
004893D1  0F BF C8                  MOVSX ECX,AX
004893D4  C1 E1 10                  SHL ECX,0x10
004893D7  83 C9 06                  OR ECX,0x6
004893DA  5F                        POP EDI
004893DB  89 8E B0 01 00 00         MOV dword ptr [ESI + 0x1b0],ECX
004893E1  C6 86 B8 01 00 00 01      MOV byte ptr [ESI + 0x1b8],0x1
004893E8  5E                        POP ESI
004893E9  5B                        POP EBX
004893EA  5D                        POP EBP
004893EB  C2 04 00                  RET 0x4
switchD_0048923f::caseD_21:
004893EE  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004893F1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004893F7  6A 4B                     PUSH 0x4b
004893F9  52                        PUSH EDX
004893FA  E8 6C 84 F7 FF            CALL 0x0040186b
004893FF  66 85 C0                  TEST AX,AX
00489402  7E 1A                     JLE 0x0048941e
00489404  0F BF C0                  MOVSX EAX,AX
00489407  C1 E0 10                  SHL EAX,0x10
0048940A  0C 4B                     OR AL,0x4b
0048940C  BF 0A 00 00 00            MOV EDI,0xa
00489411  89 86 B0 01 00 00         MOV dword ptr [ESI + 0x1b0],EAX
00489417  C6 86 B8 01 00 00 01      MOV byte ptr [ESI + 0x1b8],0x1
LAB_0048941e:
0048941E  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00489421  6A 4C                     PUSH 0x4c
00489423  51                        PUSH ECX
00489424  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0048942A  E8 3C 84 F7 FF            CALL 0x0040186b
0048942F  66 85 C0                  TEST AX,AX
00489432  7E 18                     JLE 0x0048944c
00489434  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
00489437  0F BF C0                  MOVSX EAX,AX
0048943A  C1 E2 04                  SHL EDX,0x4
0048943D  C1 E0 10                  SHL EAX,0x10
00489440  8D 0C 32                  LEA ECX,[EDX + ESI*0x1]
00489443  0C 4C                     OR AL,0x4c
00489445  47                        INC EDI
00489446  89 01                     MOV dword ptr [ECX],EAX
00489448  C6 41 08 01               MOV byte ptr [ECX + 0x8],0x1
LAB_0048944c:
0048944C  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
0048944F  6A 76                     PUSH 0x76
00489451  51                        PUSH ECX
00489452  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489458  E8 0E 84 F7 FF            CALL 0x0040186b
0048945D  66 85 C0                  TEST AX,AX
00489460  0F 8E FC 01 00 00         JLE 0x00489662
00489466  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
00489469  5F                        POP EDI
0048946A  0F BF C0                  MOVSX EAX,AX
0048946D  C1 E2 04                  SHL EDX,0x4
00489470  C1 E0 10                  SHL EAX,0x10
00489473  8D 0C 32                  LEA ECX,[EDX + ESI*0x1]
00489476  0C 76                     OR AL,0x76
00489478  5E                        POP ESI
00489479  5B                        POP EBX
0048947A  89 01                     MOV dword ptr [ECX],EAX
0048947C  C6 41 08 01               MOV byte ptr [ECX + 0x8],0x1
00489480  5D                        POP EBP
00489481  C2 04 00                  RET 0x4
switchD_0048923f::caseD_23:
00489484  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00489487  6A 69                     PUSH 0x69
00489489  51                        PUSH ECX
0048948A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489490  E8 D6 83 F7 FF            CALL 0x0040186b
00489495  66 85 C0                  TEST AX,AX
00489498  0F 8E C4 01 00 00         JLE 0x00489662
0048949E  0F BF D0                  MOVSX EDX,AX
004894A1  C1 E2 10                  SHL EDX,0x10
004894A4  83 CA 69                  OR EDX,0x69
004894A7  5F                        POP EDI
004894A8  89 96 B0 01 00 00         MOV dword ptr [ESI + 0x1b0],EDX
004894AE  C6 86 B8 01 00 00 01      MOV byte ptr [ESI + 0x1b8],0x1
004894B5  5E                        POP ESI
004894B6  5B                        POP EBX
004894B7  5D                        POP EBP
004894B8  C2 04 00                  RET 0x4
switchD_0048923f::caseD_1c:
004894BB  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004894BE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004894C4  6A 7D                     PUSH 0x7d
004894C6  50                        PUSH EAX
004894C7  E8 9F 83 F7 FF            CALL 0x0040186b
004894CC  66 85 C0                  TEST AX,AX
004894CF  7E 1B                     JLE 0x004894ec
004894D1  0F BF C8                  MOVSX ECX,AX
004894D4  C1 E1 10                  SHL ECX,0x10
004894D7  83 C9 7D                  OR ECX,0x7d
004894DA  BF 0A 00 00 00            MOV EDI,0xa
004894DF  89 8E B0 01 00 00         MOV dword ptr [ESI + 0x1b0],ECX
004894E5  C6 86 B8 01 00 00 01      MOV byte ptr [ESI + 0x1b8],0x1
LAB_004894ec:
004894EC  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004894EF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004894F5  6A 7E                     PUSH 0x7e
004894F7  52                        PUSH EDX
004894F8  E8 6E 83 F7 FF            CALL 0x0040186b
004894FD  66 85 C0                  TEST AX,AX
00489500  0F 8E 5C 01 00 00         JLE 0x00489662
00489506  0F BF D0                  MOVSX EDX,AX
00489509  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
0048950C  5F                        POP EDI
0048950D  C1 E1 04                  SHL ECX,0x4
00489510  C1 E2 10                  SHL EDX,0x10
00489513  03 CE                     ADD ECX,ESI
00489515  83 CA 7E                  OR EDX,0x7e
00489518  5E                        POP ESI
00489519  5B                        POP EBX
0048951A  89 11                     MOV dword ptr [ECX],EDX
0048951C  C6 41 08 01               MOV byte ptr [ECX + 0x8],0x1
00489520  5D                        POP EBP
00489521  C2 04 00                  RET 0x4
switchD_0048923f::caseD_d:
00489524  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00489527  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0048952D  68 83 00 00 00            PUSH 0x83
00489532  50                        PUSH EAX
00489533  E8 33 83 F7 FF            CALL 0x0040186b
00489538  66 85 C0                  TEST AX,AX
0048953B  0F 8E 21 01 00 00         JLE 0x00489662
00489541  0F BF C8                  MOVSX ECX,AX
00489544  C1 E1 10                  SHL ECX,0x10
00489547  80 C9 83                  OR CL,0x83
0048954A  5F                        POP EDI
0048954B  89 8E B0 01 00 00         MOV dword ptr [ESI + 0x1b0],ECX
00489551  C6 86 B8 01 00 00 01      MOV byte ptr [ESI + 0x1b8],0x1
00489558  5E                        POP ESI
00489559  5B                        POP EBX
0048955A  5D                        POP EBP
0048955B  C2 04 00                  RET 0x4
switchD_0048923f::caseD_f:
0048955E  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00489561  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489567  6A 3A                     PUSH 0x3a
00489569  52                        PUSH EDX
0048956A  E8 FC 82 F7 FF            CALL 0x0040186b
0048956F  66 85 C0                  TEST AX,AX
00489572  0F 8E EA 00 00 00         JLE 0x00489662
00489578  0F BF C0                  MOVSX EAX,AX
0048957B  C1 E0 10                  SHL EAX,0x10
0048957E  0C 3A                     OR AL,0x3a
00489580  5F                        POP EDI
00489581  89 86 B0 01 00 00         MOV dword ptr [ESI + 0x1b0],EAX
00489587  C6 86 B8 01 00 00 01      MOV byte ptr [ESI + 0x1b8],0x1
0048958E  5E                        POP ESI
0048958F  5B                        POP EBX
00489590  5D                        POP EBP
00489591  C2 04 00                  RET 0x4
switchD_0048923f::caseD_1e:
00489594  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00489597  6A 7A                     PUSH 0x7a
00489599  51                        PUSH ECX
0048959A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004895A0  E8 C6 82 F7 FF            CALL 0x0040186b
004895A5  66 85 C0                  TEST AX,AX
004895A8  0F 8E B4 00 00 00         JLE 0x00489662
004895AE  0F BF D0                  MOVSX EDX,AX
004895B1  C1 E2 10                  SHL EDX,0x10
004895B4  83 CA 7A                  OR EDX,0x7a
004895B7  5F                        POP EDI
004895B8  89 96 B0 01 00 00         MOV dword ptr [ESI + 0x1b0],EDX
004895BE  C6 86 B8 01 00 00 01      MOV byte ptr [ESI + 0x1b8],0x1
004895C5  5E                        POP ESI
004895C6  5B                        POP EBX
004895C7  5D                        POP EBP
004895C8  C2 04 00                  RET 0x4
switchD_0048923f::caseD_16:
004895CB  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004895CE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004895D4  6A 3A                     PUSH 0x3a
004895D6  50                        PUSH EAX
004895D7  E8 8F 82 F7 FF            CALL 0x0040186b
004895DC  66 85 C0                  TEST AX,AX
004895DF  7E 1B                     JLE 0x004895fc
004895E1  0F BF C8                  MOVSX ECX,AX
004895E4  C1 E1 10                  SHL ECX,0x10
004895E7  83 C9 3A                  OR ECX,0x3a
004895EA  BF 0A 00 00 00            MOV EDI,0xa
004895EF  89 8E B0 01 00 00         MOV dword ptr [ESI + 0x1b0],ECX
004895F5  C6 86 B8 01 00 00 01      MOV byte ptr [ESI + 0x1b8],0x1
LAB_004895fc:
004895FC  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004895FF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00489605  68 92 00 00 00            PUSH 0x92
0048960A  52                        PUSH EDX
0048960B  E8 5B 82 F7 FF            CALL 0x0040186b
00489610  66 85 C0                  TEST AX,AX
00489613  7E 4D                     JLE 0x00489662
00489615  0F BF D0                  MOVSX EDX,AX
00489618  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
0048961B  5F                        POP EDI
0048961C  C1 E1 04                  SHL ECX,0x4
0048961F  C1 E2 10                  SHL EDX,0x10
00489622  03 CE                     ADD ECX,ESI
00489624  80 CA 92                  OR DL,0x92
00489627  5E                        POP ESI
00489628  5B                        POP EBX
00489629  89 11                     MOV dword ptr [ECX],EDX
0048962B  C6 41 08 01               MOV byte ptr [ECX + 0x8],0x1
0048962F  5D                        POP EBP
00489630  C2 04 00                  RET 0x4
switchD_0048923f::caseD_e:
00489633  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00489636  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0048963C  68 95 00 00 00            PUSH 0x95
00489641  50                        PUSH EAX
00489642  E8 24 82 F7 FF            CALL 0x0040186b
00489647  66 85 C0                  TEST AX,AX
0048964A  7E 16                     JLE 0x00489662
0048964C  0F BF C8                  MOVSX ECX,AX
0048964F  C1 E1 10                  SHL ECX,0x10
00489652  80 C9 95                  OR CL,0x95
00489655  89 8E B0 01 00 00         MOV dword ptr [ESI + 0x1b0],ECX
0048965B  C6 86 B8 01 00 00 01      MOV byte ptr [ESI + 0x1b8],0x1
switchD_0048923f::caseD_4:
00489662  5F                        POP EDI
00489663  5E                        POP ESI
00489664  5B                        POP EBX
00489665  5D                        POP EBP
00489666  C2 04 00                  RET 0x4

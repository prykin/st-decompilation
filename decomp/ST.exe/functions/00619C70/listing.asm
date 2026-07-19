FUN_00619c70:
00619C70  55                        PUSH EBP
00619C71  8B EC                     MOV EBP,ESP
00619C73  83 EC 2C                  SUB ESP,0x2c
00619C76  53                        PUSH EBX
00619C77  56                        PUSH ESI
00619C78  8B F1                     MOV ESI,ECX
00619C7A  57                        PUSH EDI
00619C7B  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
00619C82  8B 86 93 00 00 00         MOV EAX,dword ptr [ESI + 0x93]
00619C88  48                        DEC EAX
00619C89  83 F8 05                  CMP EAX,0x5
00619C8C  0F 87 B4 11 00 00         JA 0x0061ae46
switchD_00619c92::switchD:
00619C92  FF 24 85 50 AE 61 00      JMP dword ptr [EAX*0x4 + 0x61ae50]
switchD_00619c92::caseD_1:
00619C99  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00619C9E  8B 96 1B 01 00 00         MOV EDX,dword ptr [ESI + 0x11b]
00619CA4  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00619CAA  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00619CAF  2B CA                     SUB ECX,EDX
00619CB1  8B 96 17 01 00 00         MOV EDX,dword ptr [ESI + 0x117]
00619CB7  0F AF D1                  IMUL EDX,ECX
00619CBA  0F AF D1                  IMUL EDX,ECX
00619CBD  F7 EA                     IMUL EDX
00619CBF  C1 FA 0C                  SAR EDX,0xc
00619CC2  8B C2                     MOV EAX,EDX
00619CC4  C1 E8 1F                  SHR EAX,0x1f
00619CC7  03 D0                     ADD EDX,EAX
00619CC9  8B 86 13 01 00 00         MOV EAX,dword ptr [ESI + 0x113]
00619CCF  0F AF C1                  IMUL EAX,ECX
00619CD2  03 D0                     ADD EDX,EAX
00619CD4  8B 86 D7 00 00 00         MOV EAX,dword ptr [ESI + 0xd7]
00619CDA  03 D0                     ADD EDX,EAX
00619CDC  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00619CE1  8B DA                     MOV EBX,EDX
00619CE3  78 11                     JS 0x00619cf6
00619CE5  F7 EB                     IMUL EBX
00619CE7  C1 FA 06                  SAR EDX,0x6
00619CEA  8B CA                     MOV ECX,EDX
00619CEC  C1 E9 1F                  SHR ECX,0x1f
00619CEF  03 D1                     ADD EDX,ECX
00619CF1  0F BF FA                  MOVSX EDI,DX
00619CF4  EB 10                     JMP 0x00619d06
LAB_00619cf6:
00619CF6  F7 EB                     IMUL EBX
00619CF8  C1 FA 06                  SAR EDX,0x6
00619CFB  8B C2                     MOV EAX,EDX
00619CFD  C1 E8 1F                  SHR EAX,0x1f
00619D00  03 D0                     ADD EDX,EAX
00619D02  0F BF FA                  MOVSX EDI,DX
00619D05  4F                        DEC EDI
LAB_00619d06:
00619D06  8B 96 A3 00 00 00         MOV EDX,dword ptr [ESI + 0xa3]
00619D0C  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
00619D12  8D 4D F8                  LEA ECX,[EBP + -0x8]
00619D15  51                        PUSH ECX
00619D16  53                        PUSH EBX
00619D17  0F BF 8E CB 00 00 00      MOVSX ECX,word ptr [ESI + 0xcb]
00619D1E  52                        PUSH EDX
00619D1F  50                        PUSH EAX
00619D20  0F BF 96 C9 00 00 00      MOVSX EDX,word ptr [ESI + 0xc9]
00619D27  57                        PUSH EDI
00619D28  51                        PUSH ECX
00619D29  52                        PUSH EDX
00619D2A  8B CE                     MOV ECX,ESI
00619D2C  E8 7A A9 DE FF            CALL 0x004046ab
00619D31  83 F8 04                  CMP EAX,0x4
00619D34  0F 87 14 03 00 00         JA 0x0061a04e
switchD_00619d3a::switchD:
00619D3A  FF 24 85 68 AE 61 00      JMP dword ptr [EAX*0x4 + 0x61ae68]
switchD_00619d3a::caseD_0:
00619D41  8B 86 A7 00 00 00         MOV EAX,dword ptr [ESI + 0xa7]
00619D47  66 89 BE CD 00 00 00      MOV word ptr [ESI + 0xcd],DI
00619D4E  89 86 E3 00 00 00         MOV dword ptr [ESI + 0xe3],EAX
00619D54  89 9E A7 00 00 00         MOV dword ptr [ESI + 0xa7],EBX
00619D5A  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
00619D61  5F                        POP EDI
00619D62  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00619D65  5E                        POP ESI
00619D66  5B                        POP EBX
00619D67  8B E5                     MOV ESP,EBP
00619D69  5D                        POP EBP
00619D6A  C3                        RET
switchD_00619d3a::caseD_1:
00619D6B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00619D6E  C7 86 13 01 00 00 FD FF FF FF  MOV dword ptr [ESI + 0x113],0xfffffffd
00619D78  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00619D7E  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
00619D85  5F                        POP EDI
00619D86  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00619D8C  8B 8E A7 00 00 00         MOV ECX,dword ptr [ESI + 0xa7]
00619D92  89 96 1B 01 00 00         MOV dword ptr [ESI + 0x11b],EDX
00619D98  89 86 D7 00 00 00         MOV dword ptr [ESI + 0xd7],EAX
00619D9E  89 8E E3 00 00 00         MOV dword ptr [ESI + 0xe3],ECX
00619DA4  89 86 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EAX
00619DAA  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00619DAD  5E                        POP ESI
00619DAE  5B                        POP EBX
00619DAF  8B E5                     MOV ESP,EBP
00619DB1  5D                        POP EBP
00619DB2  C3                        RET
switchD_00619d3a::caseD_2:
00619DB3  0F BF 8E C9 00 00 00      MOVSX ECX,word ptr [ESI + 0xc9]
00619DBA  0F BF 96 CB 00 00 00      MOVSX EDX,word ptr [ESI + 0xcb]
00619DC1  85 C9                     TEST ECX,ECX
00619DC3  0F 8C B1 00 00 00         JL 0x00619e7a
00619DC9  85 D2                     TEST EDX,EDX
00619DCB  0F 8C A9 00 00 00         JL 0x00619e7a
00619DD1  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00619DD8  3B C8                     CMP ECX,EAX
00619DDA  0F 8D 9A 00 00 00         JGE 0x00619e7a
00619DE0  0F BF 3D 42 B2 7F 00      MOVSX EDI,word ptr [0x007fb242]
00619DE7  3B D7                     CMP EDX,EDI
00619DE9  0F 8D 8B 00 00 00         JGE 0x00619e7a
00619DEF  8B F8                     MOV EDI,EAX
00619DF1  8B 1D 6C B2 7F 00         MOV EBX,dword ptr [0x007fb26c]
00619DF7  0F AF FA                  IMUL EDI,EDX
00619DFA  03 FB                     ADD EDI,EBX
00619DFC  80 3C 0F 00               CMP byte ptr [EDI + ECX*0x1],0x0
00619E00  76 78                     JBE 0x00619e7a
00619E02  8B 5E 51                  MOV EBX,dword ptr [ESI + 0x51]
00619E05  8B 3C 9D 4C B2 7F 00      MOV EDI,dword ptr [EBX*0x4 + 0x7fb24c]
00619E0C  85 FF                     TEST EDI,EDI
00619E0E  74 0B                     JZ 0x00619e1b
00619E10  0F AF C2                  IMUL EAX,EDX
00619E13  03 C7                     ADD EAX,EDI
00619E15  80 3C 08 00               CMP byte ptr [EAX + ECX*0x1],0x0
00619E19  77 5F                     JA 0x00619e7a
LAB_00619e1b:
00619E1B  A1 AC 66 7E 00            MOV EAX,[0x007e66ac]
00619E20  50                        PUSH EAX
00619E21  6A 01                     PUSH 0x1
00619E23  53                        PUSH EBX
00619E24  52                        PUSH EDX
00619E25  51                        PUSH ECX
00619E26  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00619E2C  E8 35 9D DE FF            CALL 0x00403b66
00619E31  85 C0                     TEST EAX,EAX
00619E33  7C 45                     JL 0x00619e7a
00619E35  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00619E38  8B 8E A3 00 00 00         MOV ECX,dword ptr [ESI + 0xa3]
00619E3E  8B 96 9F 00 00 00         MOV EDX,dword ptr [ESI + 0x9f]
00619E44  50                        PUSH EAX
00619E45  51                        PUSH ECX
00619E46  52                        PUSH EDX
00619E47  89 86 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EAX
00619E4D  C7 86 AF 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xaf],0x0
00619E57  E8 26 BD DE FF            CALL 0x00405b82
00619E5C  83 C4 0C                  ADD ESP,0xc
LAB_00619e5f:
00619E5F  C7 86 93 00 00 00 06 00 00 00  MOV dword ptr [ESI + 0x93],0x6
00619E69  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
00619E70  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00619E73  5F                        POP EDI
00619E74  5E                        POP ESI
00619E75  5B                        POP EBX
00619E76  8B E5                     MOV ESP,EBP
00619E78  5D                        POP EBP
00619E79  C3                        RET
LAB_00619e7a:
00619E7A  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00619E7D  33 D2                     XOR EDX,EDX
00619E7F  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00619E85  05 39 30 00 00            ADD EAX,0x3039
00619E8A  B9 0B 00 00 00            MOV ECX,0xb
00619E8F  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00619E92  C1 E8 10                  SHR EAX,0x10
00619E95  F7 F1                     DIV ECX
00619E97  8B 8E A7 00 00 00         MOV ECX,dword ptr [ESI + 0xa7]
00619E9D  83 C2 0A                  ADD EDX,0xa
00619EA0  89 96 13 01 00 00         MOV dword ptr [ESI + 0x113],EDX
00619EA6  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00619EAC  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00619EB2  89 86 1B 01 00 00         MOV dword ptr [ESI + 0x11b],EAX
00619EB8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00619EBB  89 86 D7 00 00 00         MOV dword ptr [ESI + 0xd7],EAX
00619EC1  89 8E E3 00 00 00         MOV dword ptr [ESI + 0xe3],ECX
00619EC7  8B 4E 7D                  MOV ECX,dword ptr [ESI + 0x7d]
00619ECA  89 86 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EAX
00619ED0  85 C9                     TEST ECX,ECX
00619ED2  0F 84 93 00 00 00         JZ 0x00619f6b
00619ED8  8D 96 1F 01 00 00         LEA EDX,[ESI + 0x11f]
00619EDE  52                        PUSH EDX
00619EDF  8B 96 9F 00 00 00         MOV EDX,dword ptr [ESI + 0x9f]
00619EE5  50                        PUSH EAX
00619EE6  8B 86 A3 00 00 00         MOV EAX,dword ptr [ESI + 0xa3]
00619EEC  50                        PUSH EAX
00619EED  52                        PUSH EDX
00619EEE  E8 26 8F DE FF            CALL 0x00402e19
00619EF3  85 C0                     TEST EAX,EAX
00619EF5  74 74                     JZ 0x00619f6b
00619EF7  8A 86 4B 01 00 00         MOV AL,byte ptr [ESI + 0x14b]
00619EFD  84 C0                     TEST AL,AL
00619EFF  74 11                     JZ 0x00619f12
00619F01  8B 86 45 01 00 00         MOV EAX,dword ptr [ESI + 0x145]
00619F07  8B 4E 7D                  MOV ECX,dword ptr [ESI + 0x7d]
00619F0A  6A 00                     PUSH 0x0
00619F0C  50                        PUSH EAX
00619F0D  E8 47 BD DE FF            CALL 0x00405c59
LAB_00619f12:
00619F12  8B 8E 2F 01 00 00         MOV ECX,dword ptr [ESI + 0x12f]
00619F18  8B 96 2B 01 00 00         MOV EDX,dword ptr [ESI + 0x12b]
00619F1E  8B 86 27 01 00 00         MOV EAX,dword ptr [ESI + 0x127]
00619F24  51                        PUSH ECX
00619F25  52                        PUSH EDX
00619F26  50                        PUSH EAX
00619F27  6A 02                     PUSH 0x2
00619F29  8B CE                     MOV ECX,ESI
00619F2B  C6 86 4B 01 00 00 01      MOV byte ptr [ESI + 0x14b],0x1
00619F32  E8 36 9F DE FF            CALL 0x00403e6d
00619F37  85 C0                     TEST EAX,EAX
00619F39  0F 84 0F 01 00 00         JZ 0x0061a04e
00619F3F  8B 8E 45 01 00 00         MOV ECX,dword ptr [ESI + 0x145]
00619F45  6A 01                     PUSH 0x1
00619F47  51                        PUSH ECX
00619F48  8B 4E 7D                  MOV ECX,dword ptr [ESI + 0x7d]
00619F4B  E8 09 BD DE FF            CALL 0x00405c59
00619F50  C7 86 93 00 00 00 02 00 00 00  MOV dword ptr [ESI + 0x93],0x2
00619F5A  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
00619F61  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00619F64  5F                        POP EDI
00619F65  5E                        POP ESI
00619F66  5B                        POP EBX
00619F67  8B E5                     MOV ESP,EBP
00619F69  5D                        POP EBP
00619F6A  C3                        RET
LAB_00619f6b:
00619F6B  8B 86 A7 00 00 00         MOV EAX,dword ptr [ESI + 0xa7]
00619F71  8B 8E A3 00 00 00         MOV ECX,dword ptr [ESI + 0xa3]
00619F77  8D 96 1F 01 00 00         LEA EDX,[ESI + 0x11f]
00619F7D  52                        PUSH EDX
00619F7E  8B 96 9F 00 00 00         MOV EDX,dword ptr [ESI + 0x9f]
00619F84  50                        PUSH EAX
00619F85  51                        PUSH ECX
00619F86  52                        PUSH EDX
00619F87  8B CE                     MOV ECX,ESI
00619F89  E8 12 99 DE FF            CALL 0x004038a0
00619F8E  85 C0                     TEST EAX,EAX
00619F90  0F 84 B8 00 00 00         JZ 0x0061a04e
00619F96  8B 86 2F 01 00 00         MOV EAX,dword ptr [ESI + 0x12f]
00619F9C  8B 8E 2B 01 00 00         MOV ECX,dword ptr [ESI + 0x12b]
00619FA2  8B 96 27 01 00 00         MOV EDX,dword ptr [ESI + 0x127]
00619FA8  50                        PUSH EAX
00619FA9  51                        PUSH ECX
00619FAA  52                        PUSH EDX
00619FAB  6A 02                     PUSH 0x2
00619FAD  8B CE                     MOV ECX,ESI
00619FAF  C6 86 4B 01 00 00 01      MOV byte ptr [ESI + 0x14b],0x1
00619FB6  E8 B2 9E DE FF            CALL 0x00403e6d
00619FBB  85 C0                     TEST EAX,EAX
00619FBD  0F 84 8B 00 00 00         JZ 0x0061a04e
00619FC3  C7 86 93 00 00 00 02 00 00 00  MOV dword ptr [ESI + 0x93],0x2
00619FCD  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
00619FD4  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00619FD7  5F                        POP EDI
00619FD8  5E                        POP ESI
00619FD9  5B                        POP EBX
00619FDA  8B E5                     MOV ESP,EBP
00619FDC  5D                        POP EBP
00619FDD  C3                        RET
switchD_00619d3a::caseD_3:
00619FDE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00619FE1  6A 02                     PUSH 0x2
00619FE3  8B CE                     MOV ECX,ESI
00619FE5  89 86 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EAX
00619FEB  E8 FB B6 DE FF            CALL 0x004056eb
00619FF0  85 C0                     TEST EAX,EAX
00619FF2  0F 84 67 FE FF FF         JZ 0x00619e5f
00619FF8  33 C0                     XOR EAX,EAX
00619FFA  C7 86 93 00 00 00 05 00 00 00  MOV dword ptr [ESI + 0x93],0x5
0061A004  C7 86 AF 00 00 00 19 00 00 00  MOV dword ptr [ESI + 0xaf],0x19
0061A00E  C7 86 C0 00 00 00 0B 00 00 00  MOV dword ptr [ESI + 0xc0],0xb
0061A018  C7 86 B3 00 00 00 14 00 00 00  MOV dword ptr [ESI + 0xb3],0x14
0061A022  89 86 BC 00 00 00         MOV dword ptr [ESI + 0xbc],EAX
0061A028  89 86 B7 00 00 00         MOV dword ptr [ESI + 0xb7],EAX
0061A02E  89 86 AB 00 00 00         MOV dword ptr [ESI + 0xab],EAX
0061A034  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
0061A03B  5F                        POP EDI
0061A03C  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0061A03F  5E                        POP ESI
0061A040  5B                        POP EBX
0061A041  8B E5                     MOV ESP,EBP
0061A043  5D                        POP EBP
0061A044  C3                        RET
switchD_00619d3a::default:
0061A04E  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
0061A055  5F                        POP EDI
0061A056  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0061A059  5E                        POP ESI
0061A05A  5B                        POP EBX
0061A05B  8B E5                     MOV ESP,EBP
0061A05D  5D                        POP EBP
0061A05E  C3                        RET
switchD_00619c92::caseD_2:
0061A05F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0061A065  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0061A06A  8B B9 E4 00 00 00         MOV EDI,dword ptr [ECX + 0xe4]
0061A070  8B 8E 1B 01 00 00         MOV ECX,dword ptr [ESI + 0x11b]
0061A076  2B F9                     SUB EDI,ECX
0061A078  8B 8E 17 01 00 00         MOV ECX,dword ptr [ESI + 0x117]
0061A07E  0F AF CF                  IMUL ECX,EDI
0061A081  0F AF CF                  IMUL ECX,EDI
0061A084  F7 E9                     IMUL ECX
0061A086  8B 8E 13 01 00 00         MOV ECX,dword ptr [ESI + 0x113]
0061A08C  0F AF CF                  IMUL ECX,EDI
0061A08F  C1 FA 0C                  SAR EDX,0xc
0061A092  8B C2                     MOV EAX,EDX
0061A094  C1 E8 1F                  SHR EAX,0x1f
0061A097  03 D0                     ADD EDX,EAX
0061A099  8B 86 D7 00 00 00         MOV EAX,dword ptr [ESI + 0xd7]
0061A09F  03 D1                     ADD EDX,ECX
0061A0A1  03 D0                     ADD EDX,EAX
0061A0A3  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0061A0A8  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0061A0AB  78 14                     JS 0x0061a0c1
0061A0AD  F7 EA                     IMUL EDX
0061A0AF  C1 FA 06                  SAR EDX,0x6
0061A0B2  8B C2                     MOV EAX,EDX
0061A0B4  C1 E8 1F                  SHR EAX,0x1f
0061A0B7  03 D0                     ADD EDX,EAX
0061A0B9  0F BF CA                  MOVSX ECX,DX
0061A0BC  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0061A0BF  EB 13                     JMP 0x0061a0d4
LAB_0061a0c1:
0061A0C1  F7 EA                     IMUL EDX
0061A0C3  C1 FA 06                  SAR EDX,0x6
0061A0C6  8B C2                     MOV EAX,EDX
0061A0C8  C1 E8 1F                  SHR EAX,0x1f
0061A0CB  03 D0                     ADD EDX,EAX
0061A0CD  0F BF C2                  MOVSX EAX,DX
0061A0D0  48                        DEC EAX
0061A0D1  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0061a0d4:
0061A0D4  8B 86 0F 01 00 00         MOV EAX,dword ptr [ESI + 0x10f]
0061A0DA  8B 96 F3 00 00 00         MOV EDX,dword ptr [ESI + 0xf3]
0061A0E0  8B C8                     MOV ECX,EAX
0061A0E2  03 D0                     ADD EDX,EAX
0061A0E4  0F AF CF                  IMUL ECX,EDI
0061A0E7  89 96 F3 00 00 00         MOV dword ptr [ESI + 0xf3],EDX
0061A0ED  8B 96 03 01 00 00         MOV EDX,dword ptr [ESI + 0x103]
0061A0F3  0F AF D1                  IMUL EDX,ECX
0061A0F6  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0061A0FB  8B BE CF 00 00 00         MOV EDI,dword ptr [ESI + 0xcf]
0061A101  F7 EA                     IMUL EDX
0061A103  C1 FA 0C                  SAR EDX,0xc
0061A106  8B C2                     MOV EAX,EDX
0061A108  C1 E8 1F                  SHR EAX,0x1f
0061A10B  03 D0                     ADD EDX,EAX
0061A10D  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0061A112  03 D7                     ADD EDX,EDI
0061A114  8B FA                     MOV EDI,EDX
0061A116  8B 96 07 01 00 00         MOV EDX,dword ptr [ESI + 0x107]
0061A11C  0F AF D1                  IMUL EDX,ECX
0061A11F  F7 EA                     IMUL EDX
0061A121  C1 FA 0C                  SAR EDX,0xc
0061A124  8B CA                     MOV ECX,EDX
0061A126  B8 79 19 8C 02            MOV EAX,0x28c1979
0061A12B  C1 E9 1F                  SHR ECX,0x1f
0061A12E  03 D1                     ADD EDX,ECX
0061A130  8B 8E D3 00 00 00         MOV ECX,dword ptr [ESI + 0xd3]
0061A136  03 D1                     ADD EDX,ECX
0061A138  85 FF                     TEST EDI,EDI
0061A13A  8B DA                     MOV EBX,EDX
0061A13C  7C 13                     JL 0x0061a151
0061A13E  F7 EF                     IMUL EDI
0061A140  D1 FA                     SAR EDX,0x1
0061A142  8B C2                     MOV EAX,EDX
0061A144  C1 E8 1F                  SHR EAX,0x1f
0061A147  03 D0                     ADD EDX,EAX
0061A149  0F BF CA                  MOVSX ECX,DX
0061A14C  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0061A14F  EB 12                     JMP 0x0061a163
LAB_0061a151:
0061A151  F7 EF                     IMUL EDI
0061A153  D1 FA                     SAR EDX,0x1
0061A155  8B C2                     MOV EAX,EDX
0061A157  C1 E8 1F                  SHR EAX,0x1f
0061A15A  03 D0                     ADD EDX,EAX
0061A15C  0F BF C2                  MOVSX EAX,DX
0061A15F  48                        DEC EAX
0061A160  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_0061a163:
0061A163  85 DB                     TEST EBX,EBX
0061A165  B8 79 19 8C 02            MOV EAX,0x28c1979
0061A16A  7C 13                     JL 0x0061a17f
0061A16C  F7 EB                     IMUL EBX
0061A16E  D1 FA                     SAR EDX,0x1
0061A170  8B CA                     MOV ECX,EDX
0061A172  C1 E9 1F                  SHR ECX,0x1f
0061A175  03 D1                     ADD EDX,ECX
0061A177  0F BF D2                  MOVSX EDX,DX
0061A17A  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0061A17D  EB 12                     JMP 0x0061a191
LAB_0061a17f:
0061A17F  F7 EB                     IMUL EBX
0061A181  D1 FA                     SAR EDX,0x1
0061A183  8B C2                     MOV EAX,EDX
0061A185  C1 E8 1F                  SHR EAX,0x1f
0061A188  03 D0                     ADD EDX,EAX
0061A18A  0F BF C2                  MOVSX EAX,DX
0061A18D  48                        DEC EAX
0061A18E  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_0061a191:
0061A191  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0061A194  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0061A197  8D 4D F8                  LEA ECX,[EBP + -0x8]
0061A19A  51                        PUSH ECX
0061A19B  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0061A19E  52                        PUSH EDX
0061A19F  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0061A1A2  53                        PUSH EBX
0061A1A3  57                        PUSH EDI
0061A1A4  50                        PUSH EAX
0061A1A5  51                        PUSH ECX
0061A1A6  52                        PUSH EDX
0061A1A7  8B CE                     MOV ECX,ESI
0061A1A9  E8 FD A4 DE FF            CALL 0x004046ab
0061A1AE  83 F8 04                  CMP EAX,0x4
0061A1B1  0F 87 76 03 00 00         JA 0x0061a52d
switchD_0061a1b7::switchD:
0061A1B7  FF 24 85 7C AE 61 00      JMP dword ptr [EAX*0x4 + 0x61ae7c]
switchD_0061a1b7::caseD_0:
0061A1BE  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
0061A1C4  8B 8E A3 00 00 00         MOV ECX,dword ptr [ESI + 0xa3]
0061A1CA  8B 96 A7 00 00 00         MOV EDX,dword ptr [ESI + 0xa7]
0061A1D0  89 86 DB 00 00 00         MOV dword ptr [ESI + 0xdb],EAX
0061A1D6  66 8B 45 DC               MOV AX,word ptr [EBP + -0x24]
0061A1DA  89 8E DF 00 00 00         MOV dword ptr [ESI + 0xdf],ECX
0061A1E0  66 8B 4D E0               MOV CX,word ptr [EBP + -0x20]
0061A1E4  89 96 E3 00 00 00         MOV dword ptr [ESI + 0xe3],EDX
0061A1EA  66 8B 55 E4               MOV DX,word ptr [EBP + -0x1c]
0061A1EE  66 89 86 C9 00 00 00      MOV word ptr [ESI + 0xc9],AX
0061A1F5  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0061A1F8  66 89 8E CB 00 00 00      MOV word ptr [ESI + 0xcb],CX
0061A1FF  89 BE 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EDI
0061A205  66 89 96 CD 00 00 00      MOV word ptr [ESI + 0xcd],DX
0061A20C  89 9E A3 00 00 00         MOV dword ptr [ESI + 0xa3],EBX
0061A212  89 86 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EAX
0061A218  E9 10 03 00 00            JMP 0x0061a52d
switchD_0061a1b7::caseD_1:
0061A21D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061A220  C7 86 13 01 00 00 FD FF FF FF  MOV dword ptr [ESI + 0x113],0xfffffffd
0061A22A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0061A230  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0061A236  8B 8E A7 00 00 00         MOV ECX,dword ptr [ESI + 0xa7]
0061A23C  89 96 1B 01 00 00         MOV dword ptr [ESI + 0x11b],EDX
0061A242  89 86 D7 00 00 00         MOV dword ptr [ESI + 0xd7],EAX
0061A248  8D 55 D4                  LEA EDX,[EBP + -0x2c]
0061A24B  89 8E E3 00 00 00         MOV dword ptr [ESI + 0xe3],ECX
0061A251  52                        PUSH EDX
0061A252  8B CE                     MOV ECX,ESI
0061A254  89 BE CF 00 00 00         MOV dword ptr [ESI + 0xcf],EDI
0061A25A  89 9E D3 00 00 00         MOV dword ptr [ESI + 0xd3],EBX
0061A260  89 86 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EAX
0061A266  E8 2F 74 DE FF            CALL 0x0040169a
0061A26B  85 C0                     TEST EAX,EAX
0061A26D  7E 5D                     JLE 0x0061a2cc
0061A26F  81 BE 41 01 00 00 2C 01 00 00  CMP dword ptr [ESI + 0x141],0x12c
0061A279  7D 4F                     JGE 0x0061a2ca
0061A27B  8B 86 2F 01 00 00         MOV EAX,dword ptr [ESI + 0x12f]
0061A281  8B 8E 2B 01 00 00         MOV ECX,dword ptr [ESI + 0x12b]
0061A287  8B 96 27 01 00 00         MOV EDX,dword ptr [ESI + 0x127]
0061A28D  50                        PUSH EAX
0061A28E  51                        PUSH ECX
0061A28F  52                        PUSH EDX
0061A290  6A 03                     PUSH 0x3
0061A292  8B CE                     MOV ECX,ESI
0061A294  E8 D4 9B DE FF            CALL 0x00403e6d
0061A299  85 C0                     TEST EAX,EAX
0061A29B  0F 84 8C 02 00 00         JZ 0x0061a52d
0061A2A1  C7 86 93 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0x93],0x3
0061A2AB  8B 86 A3 00 00 00         MOV EAX,dword ptr [ESI + 0xa3]
0061A2B1  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
0061A2B7  68 95 04 00 00            PUSH 0x495
0061A2BC  50                        PUSH EAX
0061A2BD  51                        PUSH ECX
0061A2BE  8B CE                     MOV ECX,ESI
0061A2C0  E8 DF B4 DE FF            CALL 0x004057a4
0061A2C5  E9 63 02 00 00            JMP 0x0061a52d
LAB_0061a2ca:
0061A2CA  85 C0                     TEST EAX,EAX
LAB_0061a2cc:
0061A2CC  0F 85 2B 02 00 00         JNZ 0x0061a4fd
0061A2D2  8B 96 A7 00 00 00         MOV EDX,dword ptr [ESI + 0xa7]
0061A2D8  8B 86 A3 00 00 00         MOV EAX,dword ptr [ESI + 0xa3]
0061A2DE  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
0061A2E4  52                        PUSH EDX
0061A2E5  50                        PUSH EAX
0061A2E6  51                        PUSH ECX
0061A2E7  6A 01                     PUSH 0x1
0061A2E9  8B CE                     MOV ECX,ESI
0061A2EB  E8 7D 9B DE FF            CALL 0x00403e6d
0061A2F0  85 C0                     TEST EAX,EAX
0061A2F2  0F 84 FC 01 00 00         JZ 0x0061a4f4
0061A2F8  C7 86 93 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0x93],0x1
0061A302  E9 26 02 00 00            JMP 0x0061a52d
switchD_0061a1b7::caseD_2:
0061A307  0F BF 96 C9 00 00 00      MOVSX EDX,word ptr [ESI + 0xc9]
0061A30E  0F BF 8E CB 00 00 00      MOVSX ECX,word ptr [ESI + 0xcb]
0061A315  85 D2                     TEST EDX,EDX
0061A317  0F 8C C9 00 00 00         JL 0x0061a3e6
0061A31D  85 C9                     TEST ECX,ECX
0061A31F  0F 8C C1 00 00 00         JL 0x0061a3e6
0061A325  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0061A32C  3B D0                     CMP EDX,EAX
0061A32E  0F 8D B2 00 00 00         JGE 0x0061a3e6
0061A334  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
0061A33B  3B CA                     CMP ECX,EDX
0061A33D  0F 8D A3 00 00 00         JGE 0x0061a3e6
0061A343  8B D0                     MOV EDX,EAX
0061A345  0F AF D1                  IMUL EDX,ECX
0061A348  03 15 6C B2 7F 00         ADD EDX,dword ptr [0x007fb26c]
0061A34E  0F BF 8E C9 00 00 00      MOVSX ECX,word ptr [ESI + 0xc9]
0061A355  80 3C 0A 00               CMP byte ptr [EDX + ECX*0x1],0x0
0061A359  0F 86 87 00 00 00         JBE 0x0061a3e6
0061A35F  8B 56 51                  MOV EDX,dword ptr [ESI + 0x51]
0061A362  8B 14 95 4C B2 7F 00      MOV EDX,dword ptr [EDX*0x4 + 0x7fb24c]
0061A369  85 D2                     TEST EDX,EDX
0061A36B  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0061A36E  74 13                     JZ 0x0061a383
0061A370  0F BF 96 CB 00 00 00      MOVSX EDX,word ptr [ESI + 0xcb]
0061A377  0F AF C2                  IMUL EAX,EDX
0061A37A  03 45 D8                  ADD EAX,dword ptr [EBP + -0x28]
0061A37D  80 3C 08 00               CMP byte ptr [EAX + ECX*0x1],0x0
0061A381  77 63                     JA 0x0061a3e6
LAB_0061a383:
0061A383  A1 AC 66 7E 00            MOV EAX,[0x007e66ac]
0061A388  50                        PUSH EAX
0061A389  8B 46 51                  MOV EAX,dword ptr [ESI + 0x51]
0061A38C  6A 01                     PUSH 0x1
0061A38E  50                        PUSH EAX
0061A38F  0F BF 86 CB 00 00 00      MOVSX EAX,word ptr [ESI + 0xcb]
0061A396  50                        PUSH EAX
0061A397  51                        PUSH ECX
0061A398  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0061A39E  E8 C3 97 DE FF            CALL 0x00403b66
0061A3A3  85 C0                     TEST EAX,EAX
0061A3A5  7C 3F                     JL 0x0061a3e6
0061A3A7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061A3AA  89 BE 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EDI
0061A3B0  89 9E A3 00 00 00         MOV dword ptr [ESI + 0xa3],EBX
0061A3B6  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
0061A3BC  50                        PUSH EAX
0061A3BD  53                        PUSH EBX
0061A3BE  51                        PUSH ECX
0061A3BF  89 86 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EAX
0061A3C5  C7 86 AF 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xaf],0x0
0061A3CF  E8 AE B7 DE FF            CALL 0x00405b82
0061A3D4  83 C4 0C                  ADD ESP,0xc
0061A3D7  C7 86 93 00 00 00 06 00 00 00  MOV dword ptr [ESI + 0x93],0x6
0061A3E1  E9 47 01 00 00            JMP 0x0061a52d
LAB_0061a3e6:
0061A3E6  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0061A3E9  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0061A3EF  81 C2 39 30 00 00         ADD EDX,0x3039
0061A3F5  89 56 1C                  MOV dword ptr [ESI + 0x1c],EDX
0061A3F8  C7 86 13 01 00 00 0F 00 00 00  MOV dword ptr [ESI + 0x113],0xf
0061A402  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0061A405  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0061A40B  05 39 30 00 00            ADD EAX,0x3039
0061A410  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0061A413  C1 E8 10                  SHR EAX,0x10
0061A416  83 E0 01                  AND EAX,0x1
0061A419  83 C0 07                  ADD EAX,0x7
0061A41C  89 86 0F 01 00 00         MOV dword ptr [ESI + 0x10f],EAX
0061A422  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0061A428  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061A42B  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0061A431  8B 8E A7 00 00 00         MOV ECX,dword ptr [ESI + 0xa7]
0061A437  89 96 1B 01 00 00         MOV dword ptr [ESI + 0x11b],EDX
0061A43D  89 86 D7 00 00 00         MOV dword ptr [ESI + 0xd7],EAX
0061A443  8D 55 D4                  LEA EDX,[EBP + -0x2c]
0061A446  89 8E E3 00 00 00         MOV dword ptr [ESI + 0xe3],ECX
0061A44C  52                        PUSH EDX
0061A44D  8B CE                     MOV ECX,ESI
0061A44F  89 BE CF 00 00 00         MOV dword ptr [ESI + 0xcf],EDI
0061A455  89 9E D3 00 00 00         MOV dword ptr [ESI + 0xd3],EBX
0061A45B  89 86 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EAX
0061A461  E8 34 72 DE FF            CALL 0x0040169a
0061A466  85 C0                     TEST EAX,EAX
0061A468  7E 5A                     JLE 0x0061a4c4
0061A46A  81 BE 41 01 00 00 2C 01 00 00  CMP dword ptr [ESI + 0x141],0x12c
0061A474  7D 4C                     JGE 0x0061a4c2
0061A476  8B 86 2F 01 00 00         MOV EAX,dword ptr [ESI + 0x12f]
0061A47C  8B 8E 2B 01 00 00         MOV ECX,dword ptr [ESI + 0x12b]
0061A482  8B 96 27 01 00 00         MOV EDX,dword ptr [ESI + 0x127]
0061A488  50                        PUSH EAX
0061A489  51                        PUSH ECX
0061A48A  52                        PUSH EDX
0061A48B  6A 03                     PUSH 0x3
0061A48D  8B CE                     MOV ECX,ESI
0061A48F  E8 D9 99 DE FF            CALL 0x00403e6d
0061A494  85 C0                     TEST EAX,EAX
0061A496  0F 84 91 00 00 00         JZ 0x0061a52d
0061A49C  C7 86 93 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0x93],0x3
0061A4A6  8B 86 A3 00 00 00         MOV EAX,dword ptr [ESI + 0xa3]
0061A4AC  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
0061A4B2  68 95 04 00 00            PUSH 0x495
0061A4B7  50                        PUSH EAX
0061A4B8  51                        PUSH ECX
0061A4B9  8B CE                     MOV ECX,ESI
0061A4BB  E8 E4 B2 DE FF            CALL 0x004057a4
0061A4C0  EB 6B                     JMP 0x0061a52d
LAB_0061a4c2:
0061A4C2  85 C0                     TEST EAX,EAX
LAB_0061a4c4:
0061A4C4  75 37                     JNZ 0x0061a4fd
0061A4C6  8B 96 A7 00 00 00         MOV EDX,dword ptr [ESI + 0xa7]
0061A4CC  8B 86 A3 00 00 00         MOV EAX,dword ptr [ESI + 0xa3]
0061A4D2  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
0061A4D8  52                        PUSH EDX
0061A4D9  50                        PUSH EAX
0061A4DA  51                        PUSH ECX
0061A4DB  6A 01                     PUSH 0x1
0061A4DD  8B CE                     MOV ECX,ESI
0061A4DF  E8 89 99 DE FF            CALL 0x00403e6d
0061A4E4  85 C0                     TEST EAX,EAX
0061A4E6  74 0C                     JZ 0x0061a4f4
0061A4E8  C7 86 93 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0x93],0x1
0061A4F2  EB 39                     JMP 0x0061a52d
LAB_0061a4f4:
0061A4F4  8B CE                     MOV ECX,ESI
0061A4F6  E8 F1 7E DE FF            CALL 0x004023ec
0061A4FB  EB 30                     JMP 0x0061a52d
LAB_0061a4fd:
0061A4FD  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0061A500  85 C0                     TEST EAX,EAX
0061A502  74 29                     JZ 0x0061a52d
0061A504  8B 96 2F 01 00 00         MOV EDX,dword ptr [ESI + 0x12f]
0061A50A  8B 86 2B 01 00 00         MOV EAX,dword ptr [ESI + 0x12b]
0061A510  8B 8E 27 01 00 00         MOV ECX,dword ptr [ESI + 0x127]
0061A516  52                        PUSH EDX
0061A517  50                        PUSH EAX
0061A518  51                        PUSH ECX
0061A519  6A 02                     PUSH 0x2
0061A51B  8B CE                     MOV ECX,ESI
0061A51D  E8 4B 99 DE FF            CALL 0x00403e6d
0061A522  EB 09                     JMP 0x0061a52d
switchD_0061a1b7::caseD_3:
0061A524  83 F8 04                  CMP EAX,0x4
0061A527  0F 84 19 09 00 00         JZ 0x0061ae46
switchD_0061a1b7::default:
0061A52D  8B 96 F3 00 00 00         MOV EDX,dword ptr [ESI + 0xf3]
0061A533  8B 86 F7 00 00 00         MOV EAX,dword ptr [ESI + 0xf7]
0061A539  3B D0                     CMP EDX,EAX
0061A53B  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
0061A542  0F 8C FE 08 00 00         JL 0x0061ae46
0061A548  8B 86 A7 00 00 00         MOV EAX,dword ptr [ESI + 0xa7]
0061A54E  8B 8E A3 00 00 00         MOV ECX,dword ptr [ESI + 0xa3]
0061A554  8B 96 9F 00 00 00         MOV EDX,dword ptr [ESI + 0x9f]
0061A55A  50                        PUSH EAX
0061A55B  51                        PUSH ECX
0061A55C  52                        PUSH EDX
FUN_00619c70::cf_common_exit_0061A55D:
0061A55D  6A 01                     PUSH 0x1
0061A55F  8B CE                     MOV ECX,ESI
0061A561  E8 07 99 DE FF            CALL 0x00403e6d
0061A566  85 C0                     TEST EAX,EAX
0061A568  0F 84 D1 08 00 00         JZ 0x0061ae3f
0061A56E  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0061A571  C7 86 93 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0x93],0x1
0061A57B  5F                        POP EDI
0061A57C  5E                        POP ESI
0061A57D  5B                        POP EBX
0061A57E  8B E5                     MOV ESP,EBP
0061A580  5D                        POP EBP
0061A581  C3                        RET
switchD_00619c92::caseD_3:
0061A582  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0061A587  8B 9E 1B 01 00 00         MOV EBX,dword ptr [ESI + 0x11b]
0061A58D  8B 8E 17 01 00 00         MOV ECX,dword ptr [ESI + 0x117]
0061A593  8B B8 E4 00 00 00         MOV EDI,dword ptr [EAX + 0xe4]
0061A599  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0061A59E  2B FB                     SUB EDI,EBX
0061A5A0  0F AF CF                  IMUL ECX,EDI
0061A5A3  0F AF CF                  IMUL ECX,EDI
0061A5A6  F7 E9                     IMUL ECX
0061A5A8  8B CA                     MOV ECX,EDX
0061A5AA  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0061A5AF  C1 F9 0C                  SAR ECX,0xc
0061A5B2  8B D1                     MOV EDX,ECX
0061A5B4  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
0061A5B7  C1 EA 1F                  SHR EDX,0x1f
0061A5BA  03 CA                     ADD ECX,EDX
0061A5BC  8B 96 13 01 00 00         MOV EDX,dword ptr [ESI + 0x113]
0061A5C2  0F AF D7                  IMUL EDX,EDI
0061A5C5  F7 EA                     IMUL EDX
0061A5C7  8B 86 D7 00 00 00         MOV EAX,dword ptr [ESI + 0xd7]
0061A5CD  C1 FA 0C                  SAR EDX,0xc
0061A5D0  8B DA                     MOV EBX,EDX
0061A5D2  03 D1                     ADD EDX,ECX
0061A5D4  C1 EB 1F                  SHR EBX,0x1f
0061A5D7  03 DA                     ADD EBX,EDX
0061A5D9  03 D8                     ADD EBX,EAX
0061A5DB  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0061A5E0  78 14                     JS 0x0061a5f6
0061A5E2  F7 EB                     IMUL EBX
0061A5E4  C1 FA 06                  SAR EDX,0x6
0061A5E7  8B C2                     MOV EAX,EDX
0061A5E9  C1 E8 1F                  SHR EAX,0x1f
0061A5EC  03 D0                     ADD EDX,EAX
0061A5EE  0F BF C2                  MOVSX EAX,DX
0061A5F1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0061A5F4  EB 13                     JMP 0x0061a609
LAB_0061a5f6:
0061A5F6  F7 EB                     IMUL EBX
0061A5F8  C1 FA 06                  SAR EDX,0x6
0061A5FB  8B CA                     MOV ECX,EDX
0061A5FD  C1 E9 1F                  SHR ECX,0x1f
0061A600  03 D1                     ADD EDX,ECX
0061A602  0F BF C2                  MOVSX EAX,DX
0061A605  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0061A608  48                        DEC EAX
LAB_0061a609:
0061A609  8B BE 0F 01 00 00         MOV EDI,dword ptr [ESI + 0x10f]
0061A60F  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0061A612  8B CF                     MOV ECX,EDI
0061A614  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0061A619  0F AF 4D D4               IMUL ECX,dword ptr [EBP + -0x2c]
0061A61D  F7 E9                     IMUL ECX
0061A61F  8B 8E 03 01 00 00         MOV ECX,dword ptr [ESI + 0x103]
0061A625  C1 FA 05                  SAR EDX,0x5
0061A628  8B C2                     MOV EAX,EDX
0061A62A  C1 E8 1F                  SHR EAX,0x1f
0061A62D  03 D0                     ADD EDX,EAX
0061A62F  8B 86 F3 00 00 00         MOV EAX,dword ptr [ESI + 0xf3]
0061A635  0F AF CA                  IMUL ECX,EDX
0061A638  03 C7                     ADD EAX,EDI
0061A63A  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0061A63D  89 86 F3 00 00 00         MOV dword ptr [ESI + 0xf3],EAX
0061A643  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0061A648  F7 E9                     IMUL ECX
0061A64A  C1 FA 0C                  SAR EDX,0xc
0061A64D  8B CA                     MOV ECX,EDX
0061A64F  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0061A654  C1 E9 1F                  SHR ECX,0x1f
0061A657  03 D1                     ADD EDX,ECX
0061A659  8B 8E CF 00 00 00         MOV ECX,dword ptr [ESI + 0xcf]
0061A65F  03 D1                     ADD EDX,ECX
0061A661  8B 8E 07 01 00 00         MOV ECX,dword ptr [ESI + 0x107]
0061A667  0F AF 4D DC               IMUL ECX,dword ptr [EBP + -0x24]
0061A66B  8B FA                     MOV EDI,EDX
0061A66D  F7 E9                     IMUL ECX
0061A66F  8B 8E D3 00 00 00         MOV ECX,dword ptr [ESI + 0xd3]
0061A675  C1 FA 0C                  SAR EDX,0xc
0061A678  8B C2                     MOV EAX,EDX
0061A67A  C1 E8 1F                  SHR EAX,0x1f
0061A67D  03 D0                     ADD EDX,EAX
0061A67F  B8 79 19 8C 02            MOV EAX,0x28c1979
0061A684  03 D1                     ADD EDX,ECX
0061A686  85 FF                     TEST EDI,EDI
0061A688  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0061A68B  7C 13                     JL 0x0061a6a0
0061A68D  F7 EF                     IMUL EDI
0061A68F  D1 FA                     SAR EDX,0x1
0061A691  8B CA                     MOV ECX,EDX
0061A693  C1 E9 1F                  SHR ECX,0x1f
0061A696  03 D1                     ADD EDX,ECX
0061A698  0F BF C2                  MOVSX EAX,DX
0061A69B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0061A69E  EB 12                     JMP 0x0061a6b2
LAB_0061a6a0:
0061A6A0  F7 EF                     IMUL EDI
0061A6A2  D1 FA                     SAR EDX,0x1
0061A6A4  8B C2                     MOV EAX,EDX
0061A6A6  C1 E8 1F                  SHR EAX,0x1f
0061A6A9  03 D0                     ADD EDX,EAX
0061A6AB  0F BF C2                  MOVSX EAX,DX
0061A6AE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0061A6B1  48                        DEC EAX
LAB_0061a6b2:
0061A6B2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0061A6B5  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0061A6B8  85 C9                     TEST ECX,ECX
0061A6BA  B8 79 19 8C 02            MOV EAX,0x28c1979
0061A6BF  7C 16                     JL 0x0061a6d7
0061A6C1  F7 E9                     IMUL ECX
0061A6C3  D1 FA                     SAR EDX,0x1
0061A6C5  8B C2                     MOV EAX,EDX
0061A6C7  C1 E8 1F                  SHR EAX,0x1f
0061A6CA  03 D0                     ADD EDX,EAX
0061A6CC  0F BF C2                  MOVSX EAX,DX
0061A6CF  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0061A6D2  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0061A6D5  EB 17                     JMP 0x0061a6ee
LAB_0061a6d7:
0061A6D7  F7 E9                     IMUL ECX
0061A6D9  D1 FA                     SAR EDX,0x1
0061A6DB  8B C2                     MOV EAX,EDX
0061A6DD  C1 E8 1F                  SHR EAX,0x1f
0061A6E0  03 D0                     ADD EDX,EAX
0061A6E2  0F BF C2                  MOVSX EAX,DX
0061A6E5  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0061A6E8  8D 50 FF                  LEA EDX,[EAX + -0x1]
0061A6EB  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_0061a6ee:
0061A6EE  83 7D D4 02               CMP dword ptr [EBP + -0x2c],0x2
0061A6F2  8B 15 AC 66 7E 00         MOV EDX,dword ptr [0x007e66ac]
0061A6F8  0F 8E 77 01 00 00         JLE 0x0061a875
0061A6FE  66 8B 86 89 00 00 00      MOV AX,word ptr [ESI + 0x89]
0061A705  8B 8E 85 00 00 00         MOV ECX,dword ptr [ESI + 0x85]
0061A70B  6A 00                     PUSH 0x0
0061A70D  6A 00                     PUSH 0x0
0061A70F  68 B3 00 00 00            PUSH 0xb3
0061A714  50                        PUSH EAX
0061A715  8B 86 E3 00 00 00         MOV EAX,dword ptr [ESI + 0xe3]
0061A71B  51                        PUSH ECX
0061A71C  8B 8E DF 00 00 00         MOV ECX,dword ptr [ESI + 0xdf]
0061A722  52                        PUSH EDX
0061A723  8B 56 51                  MOV EDX,dword ptr [ESI + 0x51]
0061A726  52                        PUSH EDX
0061A727  8B 96 DB 00 00 00         MOV EDX,dword ptr [ESI + 0xdb]
0061A72D  50                        PUSH EAX
0061A72E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061A731  51                        PUSH ECX
0061A732  52                        PUSH EDX
0061A733  53                        PUSH EBX
0061A734  50                        PUSH EAX
0061A735  57                        PUSH EDI
0061A736  8D 4E 20                  LEA ECX,[ESI + 0x20]
0061A739  E8 D8 9D DE FF            CALL 0x00404516
0061A73E  85 C0                     TEST EAX,EAX
0061A740  0F 8E 29 01 00 00         JLE 0x0061a86f
0061A746  83 F8 05                  CMP EAX,0x5
0061A749  0F 84 F0 06 00 00         JZ 0x0061ae3f
0061A74F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0061A752  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0061A755  53                        PUSH EBX
0061A756  51                        PUSH ECX
0061A757  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0061A75A  57                        PUSH EDI
0061A75B  52                        PUSH EDX
0061A75C  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0061A75F  51                        PUSH ECX
0061A760  8B 8E 93 00 00 00         MOV ECX,dword ptr [ESI + 0x93]
0061A766  52                        PUSH EDX
0061A767  51                        PUSH ECX
0061A768  50                        PUSH EAX
0061A769  8B CE                     MOV ECX,ESI
0061A76B  E8 77 81 DE FF            CALL 0x004028e7
0061A770  83 F8 05                  CMP EAX,0x5
0061A773  89 86 93 00 00 00         MOV dword ptr [ESI + 0x93],EAX
0061A779  75 56                     JNZ 0x0061a7d1
0061A77B  8B 96 A3 00 00 00         MOV EDX,dword ptr [ESI + 0xa3]
0061A781  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
0061A787  68 96 04 00 00            PUSH 0x496
0061A78C  52                        PUSH EDX
0061A78D  50                        PUSH EAX
0061A78E  8B CE                     MOV ECX,ESI
0061A790  E8 0F B0 DE FF            CALL 0x004057a4
0061A795  33 C0                     XOR EAX,EAX
0061A797  C7 86 AF 00 00 00 19 00 00 00  MOV dword ptr [ESI + 0xaf],0x19
0061A7A1  C7 86 C0 00 00 00 0B 00 00 00  MOV dword ptr [ESI + 0xc0],0xb
0061A7AB  C7 86 B3 00 00 00 14 00 00 00  MOV dword ptr [ESI + 0xb3],0x14
0061A7B5  89 86 BC 00 00 00         MOV dword ptr [ESI + 0xbc],EAX
0061A7BB  89 86 B7 00 00 00         MOV dword ptr [ESI + 0xb7],EAX
0061A7C1  89 86 AB 00 00 00         MOV dword ptr [ESI + 0xab],EAX
0061A7C7  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0061A7CA  5F                        POP EDI
0061A7CB  5E                        POP ESI
0061A7CC  5B                        POP EBX
0061A7CD  8B E5                     MOV ESP,EBP
0061A7CF  5D                        POP EBP
0061A7D0  C3                        RET
LAB_0061a7d1:
0061A7D1  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
0061A7D7  8B 86 A7 00 00 00         MOV EAX,dword ptr [ESI + 0xa7]
0061A7DD  8B 96 A3 00 00 00         MOV EDX,dword ptr [ESI + 0xa3]
0061A7E3  89 8E DB 00 00 00         MOV dword ptr [ESI + 0xdb],ECX
0061A7E9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0061A7EC  89 86 E3 00 00 00         MOV dword ptr [ESI + 0xe3],EAX
0061A7F2  89 BE 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EDI
0061A7F8  89 96 DF 00 00 00         MOV dword ptr [ESI + 0xdf],EDX
0061A7FE  85 FF                     TEST EDI,EDI
0061A800  89 8E A3 00 00 00         MOV dword ptr [ESI + 0xa3],ECX
0061A806  89 9E A7 00 00 00         MOV dword ptr [ESI + 0xa7],EBX
0061A80C  7C 05                     JL 0x0061a813
0061A80E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0061A811  EB 06                     JMP 0x0061a819
LAB_0061a813:
0061A813  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0061A816  8D 42 FF                  LEA EAX,[EDX + -0x1]
LAB_0061a819:
0061A819  66 89 86 C9 00 00 00      MOV word ptr [ESI + 0xc9],AX
0061A820  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0061A823  85 C9                     TEST ECX,ECX
0061A825  7D 01                     JGE 0x0061a828
0061A827  48                        DEC EAX
LAB_0061a828:
0061A828  85 DB                     TEST EBX,EBX
0061A82A  66 89 86 CB 00 00 00      MOV word ptr [ESI + 0xcb],AX
0061A831  7C 05                     JL 0x0061a838
0061A833  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0061A836  EB 06                     JMP 0x0061a83e
LAB_0061a838:
0061A838  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0061A83B  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_0061a83e:
0061A83E  8B 8E 93 00 00 00         MOV ECX,dword ptr [ESI + 0x93]
0061A844  66 89 86 CD 00 00 00      MOV word ptr [ESI + 0xcd],AX
0061A84B  B8 01 00 00 00            MOV EAX,0x1
0061A850  3B C8                     CMP ECX,EAX
0061A852  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0061A855  0F 85 EB 05 00 00         JNZ 0x0061ae46
0061A85B  8B 96 A3 00 00 00         MOV EDX,dword ptr [ESI + 0xa3]
0061A861  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
0061A867  53                        PUSH EBX
0061A868  52                        PUSH EDX
0061A869  50                        PUSH EAX
0061A86A  E9 EE FC FF FF            JMP 0x0061a55d
LAB_0061a86f:
0061A86F  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0061A872  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0061a875:
0061A875  8B 96 9F 00 00 00         MOV EDX,dword ptr [ESI + 0x9f]
0061A87B  89 96 DB 00 00 00         MOV dword ptr [ESI + 0xdb],EDX
0061A881  8B 96 A3 00 00 00         MOV EDX,dword ptr [ESI + 0xa3]
0061A887  89 96 DF 00 00 00         MOV dword ptr [ESI + 0xdf],EDX
0061A88D  8B 96 A7 00 00 00         MOV EDX,dword ptr [ESI + 0xa7]
0061A893  89 96 E3 00 00 00         MOV dword ptr [ESI + 0xe3],EDX
0061A899  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0061A89C  89 BE 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EDI
0061A8A2  89 8E A3 00 00 00         MOV dword ptr [ESI + 0xa3],ECX
0061A8A8  85 FF                     TEST EDI,EDI
0061A8AA  89 9E A7 00 00 00         MOV dword ptr [ESI + 0xa7],EBX
0061A8B0  7D 01                     JGE 0x0061a8b3
0061A8B2  4A                        DEC EDX
LAB_0061a8b3:
0061A8B3  85 C9                     TEST ECX,ECX
0061A8B5  66 89 96 C9 00 00 00      MOV word ptr [ESI + 0xc9],DX
0061A8BC  7D 01                     JGE 0x0061a8bf
0061A8BE  48                        DEC EAX
LAB_0061a8bf:
0061A8BF  66 89 86 CB 00 00 00      MOV word ptr [ESI + 0xcb],AX
0061A8C6  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0061A8C9  85 DB                     TEST EBX,EBX
0061A8CB  7D 01                     JGE 0x0061a8ce
0061A8CD  48                        DEC EAX
LAB_0061a8ce:
0061A8CE  66 89 86 CD 00 00 00      MOV word ptr [ESI + 0xcd],AX
0061A8D5  8B 86 93 00 00 00         MOV EAX,dword ptr [ESI + 0x93]
0061A8DB  83 F8 03                  CMP EAX,0x3
0061A8DE  75 29                     JNZ 0x0061a909
0061A8E0  6A 00                     PUSH 0x0
0061A8E2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0061A8E5  6A 00                     PUSH 0x0
0061A8E7  6A FF                     PUSH -0x1
0061A8E9  6A 00                     PUSH 0x0
0061A8EB  6A 00                     PUSH 0x0
0061A8ED  6A 00                     PUSH 0x0
0061A8EF  6A 00                     PUSH 0x0
0061A8F1  6A 00                     PUSH 0x0
0061A8F3  6A 00                     PUSH 0x0
0061A8F5  53                        PUSH EBX
0061A8F6  51                        PUSH ECX
0061A8F7  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0061A8FD  57                        PUSH EDI
0061A8FE  6A 00                     PUSH 0x0
0061A900  6A 01                     PUSH 0x1
0061A902  6A 01                     PUSH 0x1
0061A904  E8 2A 6B DE FF            CALL 0x00401433
LAB_0061a909:
0061A909  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
0061A910  5F                        POP EDI
0061A911  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0061A914  5E                        POP ESI
0061A915  5B                        POP EBX
0061A916  8B E5                     MOV ESP,EBP
0061A918  5D                        POP EBP
0061A919  C3                        RET
switchD_00619c92::caseD_4:
0061A91A  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0061A920  8B 8E 1B 01 00 00         MOV ECX,dword ptr [ESI + 0x11b]
0061A926  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0061A92B  8B 9E CF 00 00 00         MOV EBX,dword ptr [ESI + 0xcf]
0061A931  8B BA E4 00 00 00         MOV EDI,dword ptr [EDX + 0xe4]
0061A937  2B F9                     SUB EDI,ECX
0061A939  8B 8E 03 01 00 00         MOV ECX,dword ptr [ESI + 0x103]
0061A93F  0F AF BE 0F 01 00 00      IMUL EDI,dword ptr [ESI + 0x10f]
0061A946  0F AF CF                  IMUL ECX,EDI
0061A949  F7 E9                     IMUL ECX
0061A94B  8B 8E 07 01 00 00         MOV ECX,dword ptr [ESI + 0x107]
0061A951  C1 FA 0C                  SAR EDX,0xc
0061A954  0F AF CF                  IMUL ECX,EDI
0061A957  8B C2                     MOV EAX,EDX
0061A959  C1 E8 1F                  SHR EAX,0x1f
0061A95C  03 D0                     ADD EDX,EAX
0061A95E  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0061A963  03 D3                     ADD EDX,EBX
0061A965  8B DA                     MOV EBX,EDX
0061A967  F7 E9                     IMUL ECX
0061A969  C1 FA 0C                  SAR EDX,0xc
0061A96C  8B CA                     MOV ECX,EDX
0061A96E  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0061A973  C1 E9 1F                  SHR ECX,0x1f
0061A976  03 D1                     ADD EDX,ECX
0061A978  8B 8E D3 00 00 00         MOV ECX,dword ptr [ESI + 0xd3]
0061A97E  03 D1                     ADD EDX,ECX
0061A980  8B 8E 0B 01 00 00         MOV ECX,dword ptr [ESI + 0x10b]
0061A986  0F AF CF                  IMUL ECX,EDI
0061A989  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0061A98C  F7 E9                     IMUL ECX
0061A98E  C1 FA 0C                  SAR EDX,0xc
0061A991  8B C2                     MOV EAX,EDX
0061A993  C1 E8 1F                  SHR EAX,0x1f
0061A996  03 D0                     ADD EDX,EAX
0061A998  8B 86 D7 00 00 00         MOV EAX,dword ptr [ESI + 0xd7]
0061A99E  03 D0                     ADD EDX,EAX
0061A9A0  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0061A9A5  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0061A9A8  78 14                     JS 0x0061a9be
0061A9AA  F7 EA                     IMUL EDX
0061A9AC  C1 FA 06                  SAR EDX,0x6
0061A9AF  8B CA                     MOV ECX,EDX
0061A9B1  C1 E9 1F                  SHR ECX,0x1f
0061A9B4  03 D1                     ADD EDX,ECX
0061A9B6  0F BF C2                  MOVSX EAX,DX
0061A9B9  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0061A9BC  EB 14                     JMP 0x0061a9d2
LAB_0061a9be:
0061A9BE  F7 6D E8                  IMUL dword ptr [EBP + -0x18]
0061A9C1  C1 FA 06                  SAR EDX,0x6
0061A9C4  8B C2                     MOV EAX,EDX
0061A9C6  C1 E8 1F                  SHR EAX,0x1f
0061A9C9  03 D0                     ADD EDX,EAX
0061A9CB  0F BF C2                  MOVSX EAX,DX
0061A9CE  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0061A9D1  48                        DEC EAX
LAB_0061a9d2:
0061A9D2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0061A9D5  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0061A9D8  85 C9                     TEST ECX,ECX
0061A9DA  B8 79 19 8C 02            MOV EAX,0x28c1979
0061A9DF  7C 13                     JL 0x0061a9f4
0061A9E1  F7 E9                     IMUL ECX
0061A9E3  D1 FA                     SAR EDX,0x1
0061A9E5  8B CA                     MOV ECX,EDX
0061A9E7  C1 E9 1F                  SHR ECX,0x1f
0061A9EA  03 D1                     ADD EDX,ECX
0061A9EC  0F BF CA                  MOVSX ECX,DX
0061A9EF  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0061A9F2  EB 14                     JMP 0x0061aa08
LAB_0061a9f4:
0061A9F4  F7 E9                     IMUL ECX
0061A9F6  D1 FA                     SAR EDX,0x1
0061A9F8  8B C2                     MOV EAX,EDX
0061A9FA  C1 E8 1F                  SHR EAX,0x1f
0061A9FD  03 D0                     ADD EDX,EAX
0061A9FF  0F BF C2                  MOVSX EAX,DX
0061AA02  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0061AA05  8D 48 FF                  LEA ECX,[EAX + -0x1]
LAB_0061aa08:
0061AA08  85 DB                     TEST EBX,EBX
0061AA0A  B8 79 19 8C 02            MOV EAX,0x28c1979
0061AA0F  7C 13                     JL 0x0061aa24
0061AA11  F7 EB                     IMUL EBX
0061AA13  D1 FA                     SAR EDX,0x1
0061AA15  8B C2                     MOV EAX,EDX
0061AA17  C1 E8 1F                  SHR EAX,0x1f
0061AA1A  03 D0                     ADD EDX,EAX
0061AA1C  0F BF C2                  MOVSX EAX,DX
0061AA1F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0061AA22  EB 12                     JMP 0x0061aa36
LAB_0061aa24:
0061AA24  F7 EB                     IMUL EBX
0061AA26  D1 FA                     SAR EDX,0x1
0061AA28  8B C2                     MOV EAX,EDX
0061AA2A  C1 E8 1F                  SHR EAX,0x1f
0061AA2D  03 D0                     ADD EDX,EAX
0061AA2F  0F BF C2                  MOVSX EAX,DX
0061AA32  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0061AA35  48                        DEC EAX
LAB_0061aa36:
0061AA36  8D 55 F8                  LEA EDX,[EBP + -0x8]
0061AA39  52                        PUSH EDX
0061AA3A  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0061AA3D  52                        PUSH EDX
0061AA3E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0061AA41  52                        PUSH EDX
0061AA42  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0061AA45  53                        PUSH EBX
0061AA46  52                        PUSH EDX
0061AA47  51                        PUSH ECX
0061AA48  50                        PUSH EAX
0061AA49  8B CE                     MOV ECX,ESI
0061AA4B  E8 5B 9C DE FF            CALL 0x004046ab
0061AA50  83 F8 04                  CMP EAX,0x4
0061AA53  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0061AA56  0F 87 A5 00 00 00         JA 0x0061ab01
switchD_0061aa5c::switchD:
0061AA5C  FF 24 85 90 AE 61 00      JMP dword ptr [EAX*0x4 + 0x61ae90]
switchD_0061aa5c::caseD_0:
0061AA63  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
0061AA69  8B 96 A3 00 00 00         MOV EDX,dword ptr [ESI + 0xa3]
0061AA6F  8B 86 A7 00 00 00         MOV EAX,dword ptr [ESI + 0xa7]
0061AA75  89 8E DB 00 00 00         MOV dword ptr [ESI + 0xdb],ECX
0061AA7B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0061AA7E  89 96 DF 00 00 00         MOV dword ptr [ESI + 0xdf],EDX
0061AA84  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0061AA87  89 86 E3 00 00 00         MOV dword ptr [ESI + 0xe3],EAX
0061AA8D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0061AA90  89 9E 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EBX
0061AA96  85 DB                     TEST EBX,EBX
0061AA98  89 8E A3 00 00 00         MOV dword ptr [ESI + 0xa3],ECX
0061AA9E  89 96 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EDX
0061AAA4  7D 01                     JGE 0x0061aaa7
0061AAA6  48                        DEC EAX
LAB_0061aaa7:
0061AAA7  85 C9                     TEST ECX,ECX
0061AAA9  66 89 86 C9 00 00 00      MOV word ptr [ESI + 0xc9],AX
0061AAB0  7C 05                     JL 0x0061aab7
0061AAB2  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0061AAB5  EB 06                     JMP 0x0061aabd
LAB_0061aab7:
0061AAB7  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0061AABA  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_0061aabd:
0061AABD  85 D2                     TEST EDX,EDX
0061AABF  66 89 86 CB 00 00 00      MOV word ptr [ESI + 0xcb],AX
0061AAC6  7C 0C                     JL 0x0061aad4
0061AAC8  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0061AACB  66 89 86 CD 00 00 00      MOV word ptr [ESI + 0xcd],AX
0061AAD2  EB 37                     JMP 0x0061ab0b
LAB_0061aad4:
0061AAD4  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0061AAD7  8D 42 FF                  LEA EAX,[EDX + -0x1]
0061AADA  66 89 86 CD 00 00 00      MOV word ptr [ESI + 0xcd],AX
0061AAE1  EB 28                     JMP 0x0061ab0b
switchD_0061aa5c::caseD_1:
0061AAE3  8B 86 A7 00 00 00         MOV EAX,dword ptr [ESI + 0xa7]
0061AAE9  8B 8E A3 00 00 00         MOV ECX,dword ptr [ESI + 0xa3]
0061AAEF  8B 96 9F 00 00 00         MOV EDX,dword ptr [ESI + 0x9f]
0061AAF5  50                        PUSH EAX
0061AAF6  51                        PUSH ECX
0061AAF7  52                        PUSH EDX
0061AAF8  6A 01                     PUSH 0x1
0061AAFA  8B CE                     MOV ECX,ESI
0061AAFC  E8 6C 93 DE FF            CALL 0x00403e6d
switchD_0061aa5c::default:
0061AB01  83 7D DC 04               CMP dword ptr [EBP + -0x24],0x4
0061AB05  0F 84 3B 03 00 00         JZ 0x0061ae46
LAB_0061ab0b:
0061AB0B  8B 86 F7 00 00 00         MOV EAX,dword ptr [ESI + 0xf7]
0061AB11  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
0061AB18  3B F8                     CMP EDI,EAX
0061AB1A  0F 8C 26 03 00 00         JL 0x0061ae46
0061AB20  8B 96 A7 00 00 00         MOV EDX,dword ptr [ESI + 0xa7]
0061AB26  8B 86 A3 00 00 00         MOV EAX,dword ptr [ESI + 0xa3]
0061AB2C  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
0061AB32  52                        PUSH EDX
0061AB33  50                        PUSH EAX
0061AB34  51                        PUSH ECX
0061AB35  E9 23 FA FF FF            JMP 0x0061a55d
FUN_00619c70::cf_common_exit_0061AB3A:
0061AB3A  8B 86 97 00 00 00         MOV EAX,dword ptr [ESI + 0x97]
0061AB40  85 C0                     TEST EAX,EAX
0061AB42  7C 13                     JL 0x0061ab57
0061AB44  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061AB4A  50                        PUSH EAX
0061AB4B  E8 10 00 0D 00            CALL 0x006eab60
0061AB50  C6 86 C4 00 00 00 00      MOV byte ptr [ESI + 0xc4],0x0
LAB_0061ab57:
0061AB57  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0061AB5A  C7 86 93 00 00 00 06 00 00 00  MOV dword ptr [ESI + 0x93],0x6
0061AB64  5F                        POP EDI
0061AB65  5E                        POP ESI
0061AB66  5B                        POP EBX
0061AB67  8B E5                     MOV ESP,EBP
0061AB69  5D                        POP EBP
0061AB6A  C3                        RET
switchD_0061aa5c::caseD_3:
0061AB6B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0061AB6E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061AB71  89 8E A7 00 00 00         MOV dword ptr [ESI + 0xa7],ECX
0061AB77  89 9E 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EBX
0061AB7D  6A 02                     PUSH 0x2
0061AB7F  8B CE                     MOV ECX,ESI
0061AB81  89 86 A3 00 00 00         MOV dword ptr [ESI + 0xa3],EAX
0061AB87  E8 5F AB DE FF            CALL 0x004056eb
0061AB8C  F7 D8                     NEG EAX
0061AB8E  1B C0                     SBB EAX,EAX
0061AB90  83 C0 06                  ADD EAX,0x6
0061AB93  89 86 93 00 00 00         MOV dword ptr [ESI + 0x93],EAX
0061AB99  E9 6D FF FF FF            JMP 0x0061ab0b
switchD_00619c92::caseD_5:
0061AB9E  8A 86 4B 01 00 00         MOV AL,byte ptr [ESI + 0x14b]
0061ABA4  84 C0                     TEST AL,AL
0061ABA6  74 1C                     JZ 0x0061abc4
0061ABA8  8B 4E 7D                  MOV ECX,dword ptr [ESI + 0x7d]
0061ABAB  85 C9                     TEST ECX,ECX
0061ABAD  74 15                     JZ 0x0061abc4
0061ABAF  8B 96 45 01 00 00         MOV EDX,dword ptr [ESI + 0x145]
0061ABB5  6A 00                     PUSH 0x0
0061ABB7  52                        PUSH EDX
0061ABB8  E8 9C B0 DE FF            CALL 0x00405c59
0061ABBD  C6 86 4B 01 00 00 00      MOV byte ptr [ESI + 0x14b],0x0
LAB_0061abc4:
0061ABC4  8B 8E 97 00 00 00         MOV ECX,dword ptr [ESI + 0x97]
0061ABCA  85 C9                     TEST ECX,ECX
0061ABCC  7D 14                     JGE 0x0061abe2
0061ABCE  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0061ABD1  C7 86 93 00 00 00 06 00 00 00  MOV dword ptr [ESI + 0x93],0x6
0061ABDB  5F                        POP EDI
0061ABDC  5E                        POP ESI
0061ABDD  5B                        POP EBX
0061ABDE  8B E5                     MOV ESP,EBP
0061ABE0  5D                        POP EBP
0061ABE1  C3                        RET
LAB_0061abe2:
0061ABE2  8B 86 AB 00 00 00         MOV EAX,dword ptr [ESI + 0xab]
0061ABE8  83 F8 11                  CMP EAX,0x11
0061ABEB  7C 42                     JL 0x0061ac2f
0061ABED  75 0E                     JNZ 0x0061abfd
0061ABEF  6A 02                     PUSH 0x2
0061ABF1  51                        PUSH ECX
0061ABF2  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061ABF8  E8 B3 F0 0C 00            CALL 0x006e9cb0
LAB_0061abfd:
0061ABFD  8B 86 B7 00 00 00         MOV EAX,dword ptr [ESI + 0xb7]
0061AC03  8B 8E 97 00 00 00         MOV ECX,dword ptr [ESI + 0x97]
0061AC09  50                        PUSH EAX
0061AC0A  6A 02                     PUSH 0x2
0061AC0C  51                        PUSH ECX
0061AC0D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061AC13  E8 58 F6 0C 00            CALL 0x006ea270
0061AC18  8B 86 B7 00 00 00         MOV EAX,dword ptr [ESI + 0xb7]
0061AC1E  8B 8E B3 00 00 00         MOV ECX,dword ptr [ESI + 0xb3]
0061AC24  3B C1                     CMP EAX,ECX
0061AC26  7D 07                     JGE 0x0061ac2f
0061AC28  40                        INC EAX
0061AC29  89 86 B7 00 00 00         MOV dword ptr [ESI + 0xb7],EAX
LAB_0061ac2f:
0061AC2F  8A 86 BB 00 00 00         MOV AL,byte ptr [ESI + 0xbb]
0061AC35  84 C0                     TEST AL,AL
0061AC37  74 48                     JZ 0x0061ac81
0061AC39  8B 86 BC 00 00 00         MOV EAX,dword ptr [ESI + 0xbc]
0061AC3F  8B 8E C0 00 00 00         MOV ECX,dword ptr [ESI + 0xc0]
0061AC45  3B C1                     CMP EAX,ECX
0061AC47  75 1D                     JNZ 0x0061ac66
0061AC49  8B 96 97 00 00 00         MOV EDX,dword ptr [ESI + 0x97]
0061AC4F  C6 86 BB 00 00 00 00      MOV byte ptr [ESI + 0xbb],0x0
0061AC56  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061AC5C  6A 01                     PUSH 0x1
0061AC5E  52                        PUSH EDX
0061AC5F  E8 DC F0 0C 00            CALL 0x006e9d40
0061AC64  EB 1B                     JMP 0x0061ac81
LAB_0061ac66:
0061AC66  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061AC6C  50                        PUSH EAX
0061AC6D  8B 86 97 00 00 00         MOV EAX,dword ptr [ESI + 0x97]
0061AC73  6A 01                     PUSH 0x1
0061AC75  50                        PUSH EAX
0061AC76  E8 F5 F5 0C 00            CALL 0x006ea270
0061AC7B  FF 86 BC 00 00 00         INC dword ptr [ESI + 0xbc]
LAB_0061ac81:
0061AC81  8B 86 AB 00 00 00         MOV EAX,dword ptr [ESI + 0xab]
0061AC87  8B 8E AF 00 00 00         MOV ECX,dword ptr [ESI + 0xaf]
0061AC8D  3B C1                     CMP EAX,ECX
0061AC8F  7D 17                     JGE 0x0061aca8
0061AC91  8B 8E 97 00 00 00         MOV ECX,dword ptr [ESI + 0x97]
0061AC97  50                        PUSH EAX
0061AC98  6A 00                     PUSH 0x0
0061AC9A  51                        PUSH ECX
0061AC9B  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061ACA1  E8 CA F5 0C 00            CALL 0x006ea270
0061ACA6  EB 1A                     JMP 0x0061acc2
LAB_0061aca8:
0061ACA8  75 1E                     JNZ 0x0061acc8
0061ACAA  8B 86 97 00 00 00         MOV EAX,dword ptr [ESI + 0x97]
0061ACB0  85 C0                     TEST EAX,EAX
0061ACB2  7C 0E                     JL 0x0061acc2
0061ACB4  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061ACBA  6A 00                     PUSH 0x0
0061ACBC  50                        PUSH EAX
0061ACBD  E8 7E F0 0C 00            CALL 0x006e9d40
LAB_0061acc2:
0061ACC2  FF 86 AB 00 00 00         INC dword ptr [ESI + 0xab]
LAB_0061acc8:
0061ACC8  DB 86 A7 00 00 00         FILD dword ptr [ESI + 0xa7]
0061ACCE  51                        PUSH ECX
0061ACCF  8B 96 97 00 00 00         MOV EDX,dword ptr [ESI + 0x97]
0061ACD5  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061ACDB  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061ACE1  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0061ACE7  D9 1C 24                  FSTP float ptr [ESP]
0061ACEA  DB 86 A3 00 00 00         FILD dword ptr [ESI + 0xa3]
0061ACF0  51                        PUSH ECX
0061ACF1  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061ACF7  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061ACFD  D9 1C 24                  FSTP float ptr [ESP]
0061AD00  DB 86 9F 00 00 00         FILD dword ptr [ESI + 0x9f]
0061AD06  51                        PUSH ECX
0061AD07  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061AD0D  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061AD13  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061AD19  D9 1C 24                  FSTP float ptr [ESP]
0061AD1C  52                        PUSH EDX
0061AD1D  E8 3E FC 0C 00            CALL 0x006ea960
0061AD22  8B 86 B7 00 00 00         MOV EAX,dword ptr [ESI + 0xb7]
0061AD28  8B 8E B3 00 00 00         MOV ECX,dword ptr [ESI + 0xb3]
0061AD2E  3B C1                     CMP EAX,ECX
0061AD30  75 20                     JNZ 0x0061ad52
0061AD32  8B 86 97 00 00 00         MOV EAX,dword ptr [ESI + 0x97]
0061AD38  85 C0                     TEST EAX,EAX
0061AD3A  7C 0C                     JL 0x0061ad48
0061AD3C  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061AD42  50                        PUSH EAX
0061AD43  E8 18 FE 0C 00            CALL 0x006eab60
LAB_0061ad48:
0061AD48  C7 86 93 00 00 00 06 00 00 00  MOV dword ptr [ESI + 0x93],0x6
LAB_0061ad52:
0061AD52  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0061AD58  85 FF                     TEST EDI,EDI
0061AD5A  0F 84 E6 00 00 00         JZ 0x0061ae46
0061AD60  A0 4D 87 80 00            MOV AL,[0x0080874d]
0061AD65  0F BF 9E CD 00 00 00      MOVSX EBX,word ptr [ESI + 0xcd]
0061AD6C  3C FF                     CMP AL,0xff
0061AD6E  74 73                     JZ 0x0061ade3
0061AD70  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
0061AD76  85 C0                     TEST EAX,EAX
0061AD78  74 69                     JZ 0x0061ade3
0061AD7A  0F BF 86 CB 00 00 00      MOVSX EAX,word ptr [ESI + 0xcb]
0061AD81  8D 4D E0                  LEA ECX,[EBP + -0x20]
0061AD84  8D 55 DC                  LEA EDX,[EBP + -0x24]
0061AD87  51                        PUSH ECX
0061AD88  52                        PUSH EDX
0061AD89  0F BF 8E C9 00 00 00      MOVSX ECX,word ptr [ESI + 0xc9]
0061AD90  8B 97 0C 01 00 00         MOV EDX,dword ptr [EDI + 0x10c]
0061AD96  50                        PUSH EAX
0061AD97  51                        PUSH ECX
0061AD98  52                        PUSH EDX
0061AD99  8B CF                     MOV ECX,EDI
0061AD9B  E8 B3 91 DE FF            CALL 0x00403f53
0061ADA0  85 DB                     TEST EBX,EBX
0061ADA2  7C 3F                     JL 0x0061ade3
0061ADA4  83 FB 05                  CMP EBX,0x5
0061ADA7  7D 3A                     JGE 0x0061ade3
0061ADA9  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0061ADAC  85 D2                     TEST EDX,EDX
0061ADAE  7C 33                     JL 0x0061ade3
0061ADB0  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
0061ADB3  3B D1                     CMP EDX,ECX
0061ADB5  7D 2C                     JGE 0x0061ade3
0061ADB7  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
0061ADBE  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0061ADC1  03 C3                     ADD EAX,EBX
0061ADC3  85 C0                     TEST EAX,EAX
0061ADC5  7C 1C                     JL 0x0061ade3
0061ADC7  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
0061ADCA  7D 17                     JGE 0x0061ade3
0061ADCC  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
0061ADCF  85 FF                     TEST EDI,EDI
0061ADD1  74 10                     JZ 0x0061ade3
0061ADD3  0F AF C1                  IMUL EAX,ECX
0061ADD6  03 C2                     ADD EAX,EDX
0061ADD8  33 C9                     XOR ECX,ECX
0061ADDA  8A 0C 38                  MOV CL,byte ptr [EAX + EDI*0x1]
0061ADDD  8B C1                     MOV EAX,ECX
0061ADDF  85 C0                     TEST EAX,EAX
0061ADE1  74 2F                     JZ 0x0061ae12
LAB_0061ade3:
0061ADE3  8A 86 C4 00 00 00         MOV AL,byte ptr [ESI + 0xc4]
0061ADE9  84 C0                     TEST AL,AL
0061ADEB  75 59                     JNZ 0x0061ae46
0061ADED  8B 96 97 00 00 00         MOV EDX,dword ptr [ESI + 0x97]
0061ADF3  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061ADF9  6A 00                     PUSH 0x0
0061ADFB  52                        PUSH EDX
0061ADFC  E8 9F FC 0C 00            CALL 0x006eaaa0
0061AE01  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0061AE04  C6 86 C4 00 00 00 01      MOV byte ptr [ESI + 0xc4],0x1
0061AE0B  5F                        POP EDI
0061AE0C  5E                        POP ESI
0061AE0D  5B                        POP EBX
0061AE0E  8B E5                     MOV ESP,EBP
0061AE10  5D                        POP EBP
0061AE11  C3                        RET
LAB_0061ae12:
0061AE12  8A 86 C4 00 00 00         MOV AL,byte ptr [ESI + 0xc4]
0061AE18  84 C0                     TEST AL,AL
0061AE1A  74 2A                     JZ 0x0061ae46
0061AE1C  8B 86 97 00 00 00         MOV EAX,dword ptr [ESI + 0x97]
0061AE22  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061AE28  50                        PUSH EAX
0061AE29  E8 32 FD 0C 00            CALL 0x006eab60
0061AE2E  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0061AE31  C6 86 C4 00 00 00 00      MOV byte ptr [ESI + 0xc4],0x0
0061AE38  5F                        POP EDI
0061AE39  5E                        POP ESI
0061AE3A  5B                        POP EBX
0061AE3B  8B E5                     MOV ESP,EBP
0061AE3D  5D                        POP EBP
0061AE3E  C3                        RET
switchD_00619c92::caseD_6:
0061AE3F  8B CE                     MOV ECX,ESI
0061AE41  E8 A6 75 DE FF            CALL 0x004023ec
switchD_00619c92::default:
0061AE46  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0061AE49  5F                        POP EDI
0061AE4A  5E                        POP ESI
0061AE4B  5B                        POP EBX
0061AE4C  8B E5                     MOV ESP,EBP
0061AE4E  5D                        POP EBP
0061AE4F  C3                        RET

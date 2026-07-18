FUN_00652810:
00652810  55                        PUSH EBP
00652811  8B EC                     MOV EBP,ESP
00652813  81 EC 80 04 00 00         SUB ESP,0x480
00652819  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
0065281E  53                        PUSH EBX
0065281F  56                        PUSH ESI
00652820  57                        PUSH EDI
00652821  33 FF                     XOR EDI,EDI
00652823  8B F1                     MOV ESI,ECX
00652825  3B C7                     CMP EAX,EDI
00652827  89 B5 7C FE FF FF         MOV dword ptr [EBP + 0xfffffe7c],ESI
0065282D  89 BD 84 FE FF FF         MOV dword ptr [EBP + 0xfffffe84],EDI
00652833  89 BD 6C FE FF FF         MOV dword ptr [EBP + 0xfffffe6c],EDI
00652839  0F 84 0B 73 00 00         JZ 0x00659b4a
0065283F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00652842  57                        PUSH EDI
00652843  50                        PUSH EAX
00652844  E8 D1 0E DB FF            CALL 0x0040371a
00652849  8B D8                     MOV EBX,EAX
0065284B  3B DF                     CMP EBX,EDI
0065284D  89 9D 70 FE FF FF         MOV dword ptr [EBP + 0xfffffe70],EBX
00652853  0F 8C F1 72 00 00         JL 0x00659b4a
00652859  8B 16                     MOV EDX,dword ptr [ESI]
0065285B  8B CE                     MOV ECX,ESI
0065285D  FF 52 18                  CALL dword ptr [EDX + 0x18]
00652860  81 FB 56 04 00 00         CMP EBX,0x456
00652866  89 86 2B 05 00 00         MOV dword ptr [ESI + 0x52b],EAX
0065286C  75 27                     JNZ 0x00652895
0065286E  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00652873  33 D2                     XOR EDX,EDX
00652875  BB 19 00 00 00            MOV EBX,0x19
0065287A  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00652880  8B C1                     MOV EAX,ECX
00652882  F7 F3                     DIV EBX
00652884  3B 96 D2 00 00 00         CMP EDX,dword ptr [ESI + 0xd2]
0065288A  74 09                     JZ 0x00652895
0065288C  83 F9 01                  CMP ECX,0x1
0065288F  0F 85 B5 72 00 00         JNZ 0x00659b4a
LAB_00652895:
00652895  8B 8E E2 04 00 00         MOV ECX,dword ptr [ESI + 0x4e2]
0065289B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006528A0  57                        PUSH EDI
006528A1  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006528A4  8D 8D 80 FD FF FF         LEA ECX,[EBP + 0xfffffd80]
006528AA  89 95 68 FE FF FF         MOV dword ptr [EBP + 0xfffffe68],EDX
006528B0  8D 95 84 FD FF FF         LEA EDX,[EBP + 0xfffffd84]
006528B6  52                        PUSH EDX
006528B7  89 85 80 FD FF FF         MOV dword ptr [EBP + 0xfffffd80],EAX
006528BD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006528C3  E8 28 AF 0D 00            CALL 0x0072d7f0
006528C8  8B F0                     MOV ESI,EAX
006528CA  83 C4 08                  ADD ESP,0x8
006528CD  3B F7                     CMP ESI,EDI
006528CF  0F 85 3C 72 00 00         JNZ 0x00659b11
006528D5  8B B5 7C FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffe7c]
006528DB  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006528DE  8B 86 EE 04 00 00         MOV EAX,dword ptr [ESI + 0x4ee]
006528E4  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006528E7  3B F9                     CMP EDI,ECX
006528E9  0F 8D D4 71 00 00         JGE 0x00659ac3
LAB_006528ef:
006528EF  73 0D                     JNC 0x006528fe
006528F1  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
006528F4  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
006528F7  0F AF DF                  IMUL EBX,EDI
006528FA  03 D9                     ADD EBX,ECX
006528FC  EB 02                     JMP 0x00652900
LAB_006528fe:
006528FE  33 DB                     XOR EBX,EBX
LAB_00652900:
00652900  8A 03                     MOV AL,byte ptr [EBX]
00652902  89 9D 8C FE FF FF         MOV dword ptr [EBP + 0xfffffe8c],EBX
00652908  84 C0                     TEST AL,AL
0065290A  0F 85 8C 71 00 00         JNZ 0x00659a9c
00652910  8B 85 70 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe70]
00652916  8B 4B 05                  MOV ECX,dword ptr [EBX + 0x5]
00652919  3B C8                     CMP ECX,EAX
0065291B  0F 85 8D 71 00 00         JNZ 0x00659aae
00652921  8B 85 6C FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe6c]
00652927  85 C0                     TEST EAX,EAX
00652929  75 17                     JNZ 0x00652942
0065292B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0065292E  6A 01                     PUSH 0x1
00652930  51                        PUSH ECX
00652931  8B CE                     MOV ECX,ESI
00652933  E8 E2 0D DB FF            CALL 0x0040371a
00652938  C7 85 6C FE FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffe6c],0x1
LAB_00652942:
00652942  0F BF 4B 09               MOVSX ECX,word ptr [EBX + 0x9]
00652946  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
0065294C  8D 86 FA 04 00 00         LEA EAX,[ESI + 0x4fa]
00652952  52                        PUSH EDX
00652953  51                        PUSH ECX
00652954  50                        PUSH EAX
00652955  8B CE                     MOV ECX,ESI
00652957  E8 C7 FF DA FF            CALL 0x00402923
0065295C  85 C0                     TEST EAX,EAX
0065295E  7D 0F                     JGE 0x0065296f
00652960  8B 96 84 00 00 00         MOV EDX,dword ptr [ESI + 0x84]
00652966  8D 4E 04                  LEA ECX,[ESI + 0x4]
00652969  52                        PUSH EDX
0065296A  57                        PUSH EDI
0065296B  51                        PUSH ECX
0065296C  50                        PUSH EAX
0065296D  EB 15                     JMP 0x00652984
LAB_0065296f:
0065296F  80 BD 68 FF FF FF 08      CMP byte ptr [EBP + 0xffffff68],0x8
00652976  74 22                     JZ 0x0065299a
00652978  6A FF                     PUSH -0x1
0065297A  57                        PUSH EDI
0065297B  50                        PUSH EAX
0065297C  E8 5A 2E DB FF            CALL 0x004057db
00652981  50                        PUSH EAX
00652982  6A 83                     PUSH -0x7d
LAB_00652984:
00652984  8B CE                     MOV ECX,ESI
00652986  E8 B7 26 DB FF            CALL 0x00405042
0065298B  C6 03 01                  MOV byte ptr [EBX],0x1
0065298E  C7 43 0B 00 00 00 00      MOV dword ptr [EBX + 0xb],0x0
00652995  E9 14 71 00 00            JMP 0x00659aae
LAB_0065299a:
0065299A  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006529A0  85 C0                     TEST EAX,EAX
006529A2  0F 84 06 71 00 00         JZ 0x00659aae
006529A8  33 C9                     XOR ECX,ECX
006529AA  C6 03 01                  MOV byte ptr [EBX],0x1
006529AD  89 4B 0B                  MOV dword ptr [EBX + 0xb],ECX
006529B0  8B 5B 0F                  MOV EBX,dword ptr [EBX + 0xf]
006529B3  89 8D 94 FE FF FF         MOV dword ptr [EBP + 0xfffffe94],ECX
006529B9  89 8D 90 FE FF FF         MOV dword ptr [EBP + 0xfffffe90],ECX
006529BF  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006529C2  3B C1                     CMP EAX,ECX
006529C4  0F 8E E4 70 00 00         JLE 0x00659aae
LAB_006529ca:
006529CA  8B 8D 94 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe94]
006529D0  3B C8                     CMP ECX,EAX
006529D2  73 0B                     JNC 0x006529df
006529D4  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006529D7  0F AF C1                  IMUL EAX,ECX
006529DA  03 43 1C                  ADD EAX,dword ptr [EBX + 0x1c]
006529DD  EB 02                     JMP 0x006529e1
LAB_006529df:
006529DF  33 C0                     XOR EAX,EAX
LAB_006529e1:
006529E1  66 8B 00                  MOV AX,word ptr [EAX]
006529E4  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
006529EA  0F BF C0                  MOVSX EAX,AX
006529ED  52                        PUSH EDX
006529EE  50                        PUSH EAX
006529EF  8D 86 FA 04 00 00         LEA EAX,[ESI + 0x4fa]
006529F5  8B CE                     MOV ECX,ESI
006529F7  50                        PUSH EAX
006529F8  E8 26 FF DA FF            CALL 0x00402923
006529FD  8B D8                     MOV EBX,EAX
006529FF  85 DB                     TEST EBX,EBX
00652A01  7D 14                     JGE 0x00652a17
00652A03  6A FF                     PUSH -0x1
00652A05  8D 4E 04                  LEA ECX,[ESI + 0x4]
00652A08  57                        PUSH EDI
00652A09  51                        PUSH ECX
00652A0A  53                        PUSH EBX
00652A0B  8B CE                     MOV ECX,ESI
00652A0D  E8 30 26 DB FF            CALL 0x00405042
00652A12  E9 5C 70 00 00            JMP 0x00659a73
LAB_00652a17:
00652A17  83 FB 19                  CMP EBX,0x19
00652A1A  74 0A                     JZ 0x00652a26
00652A1C  C7 85 90 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffe90],0x0
LAB_00652a26:
00652A26  81 FB 93 05 00 00         CMP EBX,0x593
00652A2C  0F 8F 47 34 00 00         JG 0x00655e79
00652A32  0F 84 B7 33 00 00         JZ 0x00655def
00652A38  81 FB 4D 05 00 00         CMP EBX,0x54d
00652A3E  0F 8F 92 13 00 00         JG 0x00653dd6
00652A44  0F 84 D2 12 00 00         JZ 0x00653d1c
00652A4A  81 FB 1A 05 00 00         CMP EBX,0x51a
00652A50  0F 8F EE 08 00 00         JG 0x00653344
00652A56  0F 84 A1 08 00 00         JZ 0x006532fd
00652A5C  83 FB 3E                  CMP EBX,0x3e
00652A5F  0F 8F 59 04 00 00         JG 0x00652ebe
00652A65  0F 84 C8 00 00 00         JZ 0x00652b33
00652A6B  8D 43 FE                  LEA EAX,[EBX + -0x2]
00652A6E  83 F8 2F                  CMP EAX,0x2f
00652A71  0F 87 FC 6F 00 00         JA 0x00659a73
00652A77  33 D2                     XOR EDX,EDX
00652A79  8A 90 68 9B 65 00         MOV DL,byte ptr [EAX + 0x659b68]
switchD_00652a7f::switchD:
00652A7F  FF 24 95 54 9B 65 00      JMP dword ptr [EDX*0x4 + 0x659b54]
switchD_00652a7f::caseD_23:
00652A86  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00652A8C  50                        PUSH EAX
00652A8D  E8 3A E7 DA FF            CALL 0x004011cc
00652A92  83 C4 04                  ADD ESP,0x4
00652A95  85 C0                     TEST EAX,EAX
00652A97  75 18                     JNZ 0x00652ab1
LAB_00652a99:
00652A99  6A FF                     PUSH -0x1
00652A9B  57                        PUSH EDI
00652A9C  53                        PUSH EBX
00652A9D  E8 39 2D DB FF            CALL 0x004057db
00652AA2  50                        PUSH EAX
00652AA3  6A 83                     PUSH -0x7d
00652AA5  8B CE                     MOV ECX,ESI
00652AA7  E8 96 25 DB FF            CALL 0x00405042
00652AAC  E9 C2 6F 00 00            JMP 0x00659a73
LAB_00652ab1:
00652AB1  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00652AB7  85 C0                     TEST EAX,EAX
00652AB9  0F 85 B4 6F 00 00         JNZ 0x00659a73
00652ABF  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
00652AC5  89 8D 94 FE FF FF         MOV dword ptr [EBP + 0xfffffe94],ECX
00652ACB  E9 B0 6F 00 00            JMP 0x00659a80
switchD_00652a7f::caseD_19:
00652AD0  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00652AD6  52                        PUSH EDX
00652AD7  E8 13 F6 DA FF            CALL 0x004020ef
00652ADC  83 C4 04                  ADD ESP,0x4
00652ADF  85 C0                     TEST EAX,EAX
00652AE1  74 B6                     JZ 0x00652a99
00652AE3  8B 8D 90 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe90]
00652AE9  33 C0                     XOR EAX,EAX
00652AEB  3B C8                     CMP ECX,EAX
00652AED  74 17                     JZ 0x00652b06
00652AEF  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
00652AF5  89 85 90 FE FF FF         MOV dword ptr [EBP + 0xfffffe90],EAX
00652AFB  89 8D 94 FE FF FF         MOV dword ptr [EBP + 0xfffffe94],ECX
00652B01  E9 7A 6F 00 00            JMP 0x00659a80
LAB_00652b06:
00652B06  89 85 90 FE FF FF         MOV dword ptr [EBP + 0xfffffe90],EAX
00652B0C  E9 62 6F 00 00            JMP 0x00659a73
switchD_00652a7f::caseD_21:
00652B11  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00652B17  52                        PUSH EDX
00652B18  E8 48 2F DB FF            CALL 0x00405a65
00652B1D  83 C4 04                  ADD ESP,0x4
00652B20  85 C0                     TEST EAX,EAX
00652B22  0F 84 71 FF FF FF         JZ 0x00652a99
00652B28  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00652B2E  E9 47 6F 00 00            JMP 0x00659a7a
switchD_00652a7f::caseD_2:
00652B33  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00652B39  83 F8 03                  CMP EAX,0x3
00652B3C  0F 87 31 6F 00 00         JA 0x00659a73
switchD_00652b42::switchD:
00652B42  FF 24 85 98 9B 65 00      JMP dword ptr [EAX*0x4 + 0x659b98]
switchD_00652b42::caseD_0:
00652B49  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00652B4F  51                        PUSH ECX
00652B50  E8 51 1B DB FF            CALL 0x004046a6
00652B55  83 C4 04                  ADD ESP,0x4
00652B58  85 C0                     TEST EAX,EAX
00652B5A  0F 84 39 FF FF FF         JZ 0x00652a99
00652B60  83 C3 FE                  ADD EBX,-0x2
00652B63  83 FB 3C                  CMP EBX,0x3c
00652B66  0F 87 07 6F 00 00         JA 0x00659a73
00652B6C  33 D2                     XOR EDX,EDX
00652B6E  8A 93 C4 9B 65 00         MOV DL,byte ptr [EBX + 0x659bc4]
switchD_00652b74::switchD:
00652B74  FF 24 95 A8 9B 65 00      JMP dword ptr [EDX*0x4 + 0x659ba8]
switchD_00652b74::caseD_5:
00652B7B  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
00652B81  8B 85 A4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea4]
00652B87  89 84 8E DE 00 00 00      MOV dword ptr [ESI + ECX*0x4 + 0xde],EAX
00652B8E  E9 E0 6E 00 00            JMP 0x00659a73
switchD_00652b74::caseD_2:
00652B93  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00652B99  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00652B9F  01 94 86 DE 00 00 00      ADD dword ptr [ESI + EAX*0x4 + 0xde],EDX
00652BA6  E9 C8 6E 00 00            JMP 0x00659a73
switchD_00652b74::caseD_3e:
00652BAB  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00652BB1  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
00652BB7  29 8C 86 DE 00 00 00      SUB dword ptr [ESI + EAX*0x4 + 0xde],ECX
00652BBE  E9 B0 6E 00 00            JMP 0x00659a73
switchD_00652b74::caseD_31:
00652BC3  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00652BC9  8B 94 86 DE 00 00 00      MOV EDX,dword ptr [ESI + EAX*0x4 + 0xde]
00652BD0  0F AF 95 A4 FE FF FF      IMUL EDX,dword ptr [EBP + 0xfffffea4]
00652BD7  89 94 86 DE 00 00 00      MOV dword ptr [ESI + EAX*0x4 + 0xde],EDX
00652BDE  E9 90 6E 00 00            JMP 0x00659a73
switchD_00652b74::caseD_17:
00652BE3  8B 9D A4 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffea4]
00652BE9  85 DB                     TEST EBX,EBX
00652BEB  75 16                     JNZ 0x00652c03
00652BED  6A FF                     PUSH -0x1
00652BEF  57                        PUSH EDI
00652BF0  68 A0 16 80 00            PUSH 0x8016a0
00652BF5  6A 99                     PUSH -0x67
00652BF7  8B CE                     MOV ECX,ESI
00652BF9  E8 44 24 DB FF            CALL 0x00405042
00652BFE  E9 70 6E 00 00            JMP 0x00659a73
LAB_00652c03:
00652C03  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
00652C09  8B 84 8E DE 00 00 00      MOV EAX,dword ptr [ESI + ECX*0x4 + 0xde]
00652C10  99                        CDQ
00652C11  F7 FB                     IDIV EBX
00652C13  89 84 8E DE 00 00 00      MOV dword ptr [ESI + ECX*0x4 + 0xde],EAX
00652C1A  E9 54 6E 00 00            JMP 0x00659a73
switchD_00652b74::caseD_2d:
00652C1F  8B 9D A4 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffea4]
00652C25  85 DB                     TEST EBX,EBX
00652C27  75 16                     JNZ 0x00652c3f
00652C29  6A FF                     PUSH -0x1
00652C2B  57                        PUSH EDI
00652C2C  68 A0 16 80 00            PUSH 0x8016a0
00652C31  6A 99                     PUSH -0x67
00652C33  8B CE                     MOV ECX,ESI
00652C35  E8 08 24 DB FF            CALL 0x00405042
00652C3A  E9 34 6E 00 00            JMP 0x00659a73
LAB_00652c3f:
00652C3F  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
00652C45  8B 84 8E DE 00 00 00      MOV EAX,dword ptr [ESI + ECX*0x4 + 0xde]
00652C4C  99                        CDQ
00652C4D  F7 FB                     IDIV EBX
00652C4F  89 94 8E DE 00 00 00      MOV dword ptr [ESI + ECX*0x4 + 0xde],EDX
00652C56  E9 18 6E 00 00            JMP 0x00659a73
switchD_00652b42::caseD_1:
00652C5B  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00652C61  50                        PUSH EAX
00652C62  E8 3F 1A DB FF            CALL 0x004046a6
00652C67  83 C4 04                  ADD ESP,0x4
00652C6A  85 C0                     TEST EAX,EAX
00652C6C  0F 84 27 FE FF FF         JZ 0x00652a99
00652C72  83 C3 FE                  ADD EBX,-0x2
00652C75  83 FB 3C                  CMP EBX,0x3c
00652C78  0F 87 F5 6D 00 00         JA 0x00659a73
00652C7E  33 C9                     XOR ECX,ECX
00652C80  8A 8B 20 9C 65 00         MOV CL,byte ptr [EBX + 0x659c20]
switchD_00652c86::switchD:
00652C86  FF 24 8D 04 9C 65 00      JMP dword ptr [ECX*0x4 + 0x659c04]
switchD_00652c86::caseD_5:
00652C8D  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00652C93  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00652C99  89 14 85 3B E4 80 00      MOV dword ptr [EAX*0x4 + 0x80e43b],EDX
00652CA0  E9 CE 6D 00 00            JMP 0x00659a73
switchD_00652c86::caseD_2:
00652CA5  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00652CAB  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
00652CB1  01 0C 85 3B E4 80 00      ADD dword ptr [EAX*0x4 + 0x80e43b],ECX
00652CB8  E9 B6 6D 00 00            JMP 0x00659a73
switchD_00652c86::caseD_3e:
00652CBD  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00652CC3  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00652CC9  29 14 85 3B E4 80 00      SUB dword ptr [EAX*0x4 + 0x80e43b],EDX
00652CD0  E9 9E 6D 00 00            JMP 0x00659a73
switchD_00652c86::caseD_31:
00652CD5  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00652CDB  8B 0C 85 3B E4 80 00      MOV ECX,dword ptr [EAX*0x4 + 0x80e43b]
00652CE2  0F AF 8D A4 FE FF FF      IMUL ECX,dword ptr [EBP + 0xfffffea4]
00652CE9  89 0C 85 3B E4 80 00      MOV dword ptr [EAX*0x4 + 0x80e43b],ECX
00652CF0  E9 7E 6D 00 00            JMP 0x00659a73
switchD_00652c86::caseD_17:
00652CF5  8B 9D A4 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffea4]
00652CFB  85 DB                     TEST EBX,EBX
00652CFD  75 16                     JNZ 0x00652d15
00652CFF  6A FF                     PUSH -0x1
00652D01  57                        PUSH EDI
00652D02  68 A0 16 80 00            PUSH 0x8016a0
00652D07  6A 99                     PUSH -0x67
00652D09  8B CE                     MOV ECX,ESI
00652D0B  E8 32 23 DB FF            CALL 0x00405042
00652D10  E9 5E 6D 00 00            JMP 0x00659a73
LAB_00652d15:
00652D15  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
00652D1B  8B 04 8D 3B E4 80 00      MOV EAX,dword ptr [ECX*0x4 + 0x80e43b]
00652D22  99                        CDQ
00652D23  F7 FB                     IDIV EBX
00652D25  89 04 8D 3B E4 80 00      MOV dword ptr [ECX*0x4 + 0x80e43b],EAX
00652D2C  E9 42 6D 00 00            JMP 0x00659a73
switchD_00652c86::caseD_2d:
00652D31  8B 9D A4 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffea4]
00652D37  85 DB                     TEST EBX,EBX
00652D39  75 16                     JNZ 0x00652d51
00652D3B  6A FF                     PUSH -0x1
00652D3D  57                        PUSH EDI
00652D3E  68 A0 16 80 00            PUSH 0x8016a0
00652D43  6A 99                     PUSH -0x67
00652D45  8B CE                     MOV ECX,ESI
00652D47  E8 F6 22 DB FF            CALL 0x00405042
00652D4C  E9 22 6D 00 00            JMP 0x00659a73
LAB_00652d51:
00652D51  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
00652D57  8B 04 8D 3B E4 80 00      MOV EAX,dword ptr [ECX*0x4 + 0x80e43b]
00652D5E  99                        CDQ
00652D5F  F7 FB                     IDIV EBX
00652D61  89 14 8D 3B E4 80 00      MOV dword ptr [ECX*0x4 + 0x80e43b],EDX
00652D68  E9 06 6D 00 00            JMP 0x00659a73
switchD_00652b42::caseD_2:
00652D6D  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00652D73  52                        PUSH EDX
00652D74  E8 14 0A DB FF            CALL 0x0040378d
00652D79  83 C4 04                  ADD ESP,0x4
00652D7C  85 C0                     TEST EAX,EAX
00652D7E  0F 84 15 FD FF FF         JZ 0x00652a99
00652D84  83 C3 FE                  ADD EBX,-0x2
00652D87  83 FB 3C                  CMP EBX,0x3c
00652D8A  0F 87 E3 6C 00 00         JA 0x00659a73
00652D90  33 C0                     XOR EAX,EAX
00652D92  8A 83 7C 9C 65 00         MOV AL,byte ptr [EBX + 0x659c7c]
switchD_00652d98::switchD:
00652D98  FF 24 85 60 9C 65 00      JMP dword ptr [EAX*0x4 + 0x659c60]
switchD_00652d98::caseD_5:
00652D9F  8B 95 A0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea0]
00652DA5  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
00652DAB  89 8C 96 2F 05 00 00      MOV dword ptr [ESI + EDX*0x4 + 0x52f],ECX
00652DB2  E9 BC 6C 00 00            JMP 0x00659a73
switchD_00652d98::caseD_2:
00652DB7  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00652DBD  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
00652DC3  01 8C 86 2F 05 00 00      ADD dword ptr [ESI + EAX*0x4 + 0x52f],ECX
00652DCA  E9 A4 6C 00 00            JMP 0x00659a73
switchD_00652d98::caseD_3e:
00652DCF  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00652DD5  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00652DDB  29 94 86 2F 05 00 00      SUB dword ptr [ESI + EAX*0x4 + 0x52f],EDX
00652DE2  E9 8C 6C 00 00            JMP 0x00659a73
switchD_00652d98::caseD_31:
00652DE7  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00652DED  8B 8C 86 2F 05 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x52f]
00652DF4  0F AF 8D A4 FE FF FF      IMUL ECX,dword ptr [EBP + 0xfffffea4]
00652DFB  89 8C 86 2F 05 00 00      MOV dword ptr [ESI + EAX*0x4 + 0x52f],ECX
00652E02  E9 6C 6C 00 00            JMP 0x00659a73
switchD_00652d98::caseD_17:
00652E07  8B 9D A4 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffea4]
00652E0D  85 DB                     TEST EBX,EBX
00652E0F  75 16                     JNZ 0x00652e27
00652E11  6A FF                     PUSH -0x1
00652E13  57                        PUSH EDI
00652E14  68 A0 16 80 00            PUSH 0x8016a0
00652E19  6A 99                     PUSH -0x67
00652E1B  8B CE                     MOV ECX,ESI
00652E1D  E8 20 22 DB FF            CALL 0x00405042
00652E22  E9 4C 6C 00 00            JMP 0x00659a73
LAB_00652e27:
00652E27  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
00652E2D  8B 84 8E 2F 05 00 00      MOV EAX,dword ptr [ESI + ECX*0x4 + 0x52f]
00652E34  99                        CDQ
00652E35  F7 FB                     IDIV EBX
00652E37  89 84 8E 2F 05 00 00      MOV dword ptr [ESI + ECX*0x4 + 0x52f],EAX
00652E3E  E9 30 6C 00 00            JMP 0x00659a73
switchD_00652d98::caseD_2d:
00652E43  8B 9D A4 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffea4]
00652E49  85 DB                     TEST EBX,EBX
00652E4B  75 16                     JNZ 0x00652e63
00652E4D  6A FF                     PUSH -0x1
00652E4F  57                        PUSH EDI
00652E50  68 A0 16 80 00            PUSH 0x8016a0
00652E55  6A 99                     PUSH -0x67
00652E57  8B CE                     MOV ECX,ESI
00652E59  E8 E4 21 DB FF            CALL 0x00405042
00652E5E  E9 10 6C 00 00            JMP 0x00659a73
LAB_00652e63:
00652E63  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
00652E69  8B 84 8E 2F 05 00 00      MOV EAX,dword ptr [ESI + ECX*0x4 + 0x52f]
00652E70  99                        CDQ
00652E71  F7 FB                     IDIV EBX
00652E73  89 94 8E 2F 05 00 00      MOV dword ptr [ESI + ECX*0x4 + 0x52f],EDX
00652E7A  E9 F4 6B 00 00            JMP 0x00659a73
switchD_00652b42::caseD_3:
00652E7F  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00652E85  52                        PUSH EDX
00652E86  E8 66 F5 DA FF            CALL 0x004023f1
00652E8B  83 C4 04                  ADD ESP,0x4
00652E8E  85 C0                     TEST EAX,EAX
00652E90  0F 84 03 FC FF FF         JZ 0x00652a99
00652E96  83 FB 05                  CMP EBX,0x5
00652E99  0F 85 D4 6B 00 00         JNZ 0x00659a73
00652E9F  8B 85 A4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea4]
00652EA5  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
00652EAB  8B 96 B3 05 00 00         MOV EDX,dword ptr [ESI + 0x5b3]
00652EB1  50                        PUSH EAX
00652EB2  51                        PUSH ECX
00652EB3  52                        PUSH EDX
00652EB4  E8 67 31 06 00            CALL 0x006b6020
00652EB9  E9 B5 6B 00 00            JMP 0x00659a73
LAB_00652ebe:
00652EBE  81 FB 16 05 00 00         CMP EBX,0x516
00652EC4  0F 8F DB 01 00 00         JG 0x006530a5
00652ECA  0F 84 C8 00 00 00         JZ 0x00652f98
00652ED0  83 FB 42                  CMP EBX,0x42
00652ED3  74 7E                     JZ 0x00652f53
00652ED5  81 FB 22 03 00 00         CMP EBX,0x322
00652EDB  74 67                     JZ 0x00652f44
00652EDD  81 FB 15 05 00 00         CMP EBX,0x515
00652EE3  0F 85 8A 6B 00 00         JNZ 0x00659a73
00652EE9  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00652EEF  50                        PUSH EAX
00652EF0  E8 7F 12 DB FF            CALL 0x00404174
00652EF5  83 C4 04                  ADD ESP,0x4
00652EF8  85 C0                     TEST EAX,EAX
00652EFA  75 18                     JNZ 0x00652f14
00652EFC  6A FF                     PUSH -0x1
00652EFE  57                        PUSH EDI
00652EFF  53                        PUSH EBX
00652F00  E8 D6 28 DB FF            CALL 0x004057db
00652F05  50                        PUSH EAX
00652F06  6A 83                     PUSH -0x7d
00652F08  8B CE                     MOV ECX,ESI
00652F0A  E8 33 21 DB FF            CALL 0x00405042
00652F0F  E9 5F 6B 00 00            JMP 0x00659a73
LAB_00652f14:
00652F14  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00652F1A  85 C0                     TEST EAX,EAX
00652F1C  8B 85 8C FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe8c]
00652F22  75 0F                     JNZ 0x00652f33
00652F24  C6 00 00                  MOV byte ptr [EAX],0x0
00652F27  C7 40 0B 00 00 00 00      MOV dword ptr [EAX + 0xb],0x0
00652F2E  E9 40 6B 00 00            JMP 0x00659a73
LAB_00652f33:
00652F33  C6 00 01                  MOV byte ptr [EAX],0x1
00652F36  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
00652F3C  89 48 0B                  MOV dword ptr [EAX + 0xb],ECX
00652F3F  E9 2F 6B 00 00            JMP 0x00659a73
LAB_00652f44:
00652F44  C7 85 90 FE FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffe90],0x1
00652F4E  E9 20 6B 00 00            JMP 0x00659a73
LAB_00652f53:
00652F53  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00652F59  52                        PUSH EDX
00652F5A  E8 3D EA DA FF            CALL 0x0040199c
00652F5F  83 C4 04                  ADD ESP,0x4
00652F62  85 C0                     TEST EAX,EAX
00652F64  75 19                     JNZ 0x00652f7f
00652F66  6A FF                     PUSH -0x1
00652F68  57                        PUSH EDI
00652F69  6A 42                     PUSH 0x42
00652F6B  E8 6B 28 DB FF            CALL 0x004057db
00652F70  50                        PUSH EAX
00652F71  6A 83                     PUSH -0x7d
00652F73  8B CE                     MOV ECX,ESI
00652F75  E8 C8 20 DB FF            CALL 0x00405042
00652F7A  E9 F4 6A 00 00            JMP 0x00659a73
LAB_00652f7f:
00652F7F  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00652F85  85 C0                     TEST EAX,EAX
00652F87  0F 85 E6 6A 00 00         JNZ 0x00659a73
00652F8D  8B 85 A4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea4]
00652F93  E9 E2 6A 00 00            JMP 0x00659a7a
LAB_00652f98:
00652F98  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00652F9E  51                        PUSH ECX
00652F9F  E8 B4 F1 DA FF            CALL 0x00402158
00652FA4  83 C4 04                  ADD ESP,0x4
00652FA7  85 C0                     TEST EAX,EAX
00652FA9  75 1C                     JNZ 0x00652fc7
00652FAB  6A FF                     PUSH -0x1
00652FAD  57                        PUSH EDI
00652FAE  68 16 05 00 00            PUSH 0x516
00652FB3  E8 23 28 DB FF            CALL 0x004057db
00652FB8  50                        PUSH EAX
00652FB9  6A 83                     PUSH -0x7d
00652FBB  8B CE                     MOV ECX,ESI
00652FBD  E8 80 20 DB FF            CALL 0x00405042
00652FC2  E9 AC 6A 00 00            JMP 0x00659a73
LAB_00652fc7:
00652FC7  83 BD A0 FE FF FF 09      CMP dword ptr [EBP + 0xfffffea0],0x9
00652FCE  75 3F                     JNZ 0x0065300f
00652FD0  8B 16                     MOV EDX,dword ptr [ESI]
00652FD2  8B CE                     MOV ECX,ESI
00652FD4  FF 52 18                  CALL dword ptr [EDX + 0x18]
00652FD7  83 F8 08                  CMP EAX,0x8
00652FDA  75 33                     JNZ 0x0065300f
00652FDC  8B 9D A8 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffea8]
00652FE2  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00652FE8  3B D8                     CMP EBX,EAX
00652FEA  0F 8F 83 6A 00 00         JG 0x00659a73
LAB_00652ff0:
00652FF0  53                        PUSH EBX
00652FF1  8B CE                     MOV ECX,ESI
00652FF3  E8 E8 18 DB FF            CALL 0x004048e0
00652FF8  85 C0                     TEST EAX,EAX
00652FFA  74 03                     JZ 0x00652fff
00652FFC  C6 00 00                  MOV byte ptr [EAX],0x0
LAB_00652fff:
00652FFF  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00653005  43                        INC EBX
00653006  3B D8                     CMP EBX,EAX
00653008  7E E6                     JLE 0x00652ff0
0065300A  E9 64 6A 00 00            JMP 0x00659a73
LAB_0065300f:
0065300F  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
00653015  8B 95 A0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea0]
0065301B  8D 45 D0                  LEA EAX,[EBP + -0x30]
0065301E  50                        PUSH EAX
0065301F  51                        PUSH ECX
00653020  52                        PUSH EDX
00653021  8B CE                     MOV ECX,ESI
00653023  E8 90 E6 DA FF            CALL 0x004016b8
00653028  85 C0                     TEST EAX,EAX
0065302A  0F 8E 43 6A 00 00         JLE 0x00659a73
00653030  8D 4D D0                  LEA ECX,[EBP + -0x30]
00653033  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00653036  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00653039:
00653039  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065303F  85 C9                     TEST ECX,ECX
00653041  74 10                     JZ 0x00653053
00653043  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00653046  8A 02                     MOV AL,byte ptr [EDX]
00653048  50                        PUSH EAX
00653049  E8 77 ED DA FF            CALL 0x00401dc5
0065304E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00653051  EB 07                     JMP 0x0065305a
LAB_00653053:
00653053  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_0065305a:
0065305A  8B 9D A8 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffea8]
00653060  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00653066  3B D8                     CMP EBX,EAX
00653068  7F 24                     JG 0x0065308e
LAB_0065306a:
0065306A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0065306D  85 C0                     TEST EAX,EAX
0065306F  74 12                     JZ 0x00653083
00653071  8B C8                     MOV ECX,EAX
00653073  53                        PUSH EBX
00653074  83 C1 1C                  ADD ECX,0x1c
00653077  E8 64 18 DB FF            CALL 0x004048e0
0065307C  85 C0                     TEST EAX,EAX
0065307E  74 03                     JZ 0x00653083
00653080  C6 00 00                  MOV byte ptr [EAX],0x0
LAB_00653083:
00653083  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00653089  43                        INC EBX
0065308A  3B D8                     CMP EBX,EAX
0065308C  7E DC                     JLE 0x0065306a
LAB_0065308e:
0065308E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00653091  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00653094  83 C1 04                  ADD ECX,0x4
00653097  48                        DEC EAX
00653098  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0065309B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065309E  75 99                     JNZ 0x00653039
006530A0  E9 CE 69 00 00            JMP 0x00659a73
LAB_006530a5:
006530A5  81 EB 17 05 00 00         SUB EBX,0x517
006530AB  0F 84 2F 01 00 00         JZ 0x006531e0
006530B1  4B                        DEC EBX
006530B2  74 4E                     JZ 0x00653102
006530B4  4B                        DEC EBX
006530B5  0F 85 B8 69 00 00         JNZ 0x00659a73
006530BB  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
006530C1  52                        PUSH EDX
006530C2  E8 6B 07 DB FF            CALL 0x00403832
006530C7  83 C4 04                  ADD ESP,0x4
006530CA  85 C0                     TEST EAX,EAX
006530CC  75 1C                     JNZ 0x006530ea
006530CE  6A FF                     PUSH -0x1
006530D0  57                        PUSH EDI
006530D1  68 19 05 00 00            PUSH 0x519
006530D6  E8 00 27 DB FF            CALL 0x004057db
006530DB  50                        PUSH EAX
006530DC  6A 83                     PUSH -0x7d
006530DE  8B CE                     MOV ECX,ESI
006530E0  E8 5D 1F DB FF            CALL 0x00405042
006530E5  E9 89 69 00 00            JMP 0x00659a73
LAB_006530ea:
006530EA  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
006530F0  8B 85 A4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea4]
006530F6  89 04 8D 3B E4 80 00      MOV dword ptr [ECX*0x4 + 0x80e43b],EAX
006530FD  E9 71 69 00 00            JMP 0x00659a73
LAB_00653102:
00653102  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00653108  52                        PUSH EDX
00653109  E8 7A 24 DB FF            CALL 0x00405588
0065310E  83 C4 04                  ADD ESP,0x4
00653111  85 C0                     TEST EAX,EAX
00653113  75 1C                     JNZ 0x00653131
00653115  6A FF                     PUSH -0x1
00653117  57                        PUSH EDI
00653118  68 18 05 00 00            PUSH 0x518
0065311D  E8 B9 26 DB FF            CALL 0x004057db
00653122  50                        PUSH EAX
00653123  6A 83                     PUSH -0x7d
00653125  8B CE                     MOV ECX,ESI
00653127  E8 16 1F DB FF            CALL 0x00405042
0065312C  E9 42 69 00 00            JMP 0x00659a73
LAB_00653131:
00653131  83 BD A0 FE FF FF 09      CMP dword ptr [EBP + 0xfffffea0],0x9
00653138  75 24                     JNZ 0x0065315e
0065313A  8B 06                     MOV EAX,dword ptr [ESI]
0065313C  8B CE                     MOV ECX,ESI
0065313E  FF 50 18                  CALL dword ptr [EAX + 0x18]
00653141  83 F8 08                  CMP EAX,0x8
00653144  75 18                     JNZ 0x0065315e
00653146  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
0065314C  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00653152  89 8C 96 DE 00 00 00      MOV dword ptr [ESI + EDX*0x4 + 0xde],ECX
00653159  E9 15 69 00 00            JMP 0x00659a73
LAB_0065315e:
0065315E  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
00653164  8B 95 A0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea0]
0065316A  8D 45 D0                  LEA EAX,[EBP + -0x30]
0065316D  50                        PUSH EAX
0065316E  51                        PUSH ECX
0065316F  52                        PUSH EDX
00653170  8B CE                     MOV ECX,ESI
00653172  E8 41 E5 DA FF            CALL 0x004016b8
00653177  85 C0                     TEST EAX,EAX
00653179  0F 8E F4 68 00 00         JLE 0x00659a73
0065317F  8D 5D D0                  LEA EBX,[EBP + -0x30]
00653182  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00653185:
00653185  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065318B  85 C9                     TEST ECX,ECX
0065318D  74 0A                     JZ 0x00653199
0065318F  8A 03                     MOV AL,byte ptr [EBX]
00653191  50                        PUSH EAX
00653192  E8 2E EC DA FF            CALL 0x00401dc5
00653197  EB 02                     JMP 0x0065319b
LAB_00653199:
00653199  33 C0                     XOR EAX,EAX
LAB_0065319b:
0065319B  85 C0                     TEST EAX,EAX
0065319D  74 15                     JZ 0x006531b4
0065319F  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006531A5  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
006531AB  89 8C 90 FA 00 00 00      MOV dword ptr [EAX + EDX*0x4 + 0xfa],ECX
006531B2  EB 1B                     JMP 0x006531cf
LAB_006531b4:
006531B4  8B 03                     MOV EAX,dword ptr [EBX]
006531B6  50                        PUSH EAX
006531B7  57                        PUSH EDI
006531B8  68 18 05 00 00            PUSH 0x518
006531BD  E8 19 26 DB FF            CALL 0x004057db
006531C2  50                        PUSH EAX
006531C3  68 55 FF FF FF            PUSH 0xffffff55
006531C8  8B CE                     MOV ECX,ESI
006531CA  E8 73 1E DB FF            CALL 0x00405042
LAB_006531cf:
006531CF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006531D2  83 C3 04                  ADD EBX,0x4
006531D5  48                        DEC EAX
006531D6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006531D9  75 AA                     JNZ 0x00653185
006531DB  E9 93 68 00 00            JMP 0x00659a73
LAB_006531e0:
006531E0  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
006531E6  51                        PUSH ECX
006531E7  E8 AF 01 DB FF            CALL 0x0040339b
006531EC  83 C4 04                  ADD ESP,0x4
006531EF  85 C0                     TEST EAX,EAX
006531F1  75 1C                     JNZ 0x0065320f
006531F3  6A FF                     PUSH -0x1
006531F5  57                        PUSH EDI
006531F6  68 17 05 00 00            PUSH 0x517
006531FB  E8 DB 25 DB FF            CALL 0x004057db
00653200  50                        PUSH EAX
00653201  6A 83                     PUSH -0x7d
00653203  8B CE                     MOV ECX,ESI
00653205  E8 38 1E DB FF            CALL 0x00405042
0065320A  E9 64 68 00 00            JMP 0x00659a73
LAB_0065320f:
0065320F  83 BD A0 FE FF FF 09      CMP dword ptr [EBP + 0xfffffea0],0x9
00653216  75 48                     JNZ 0x00653260
00653218  8B 16                     MOV EDX,dword ptr [ESI]
0065321A  8B CE                     MOV ECX,ESI
0065321C  FF 52 18                  CALL dword ptr [EDX + 0x18]
0065321F  83 F8 08                  CMP EAX,0x8
00653222  75 3C                     JNZ 0x00653260
00653224  8B 9D A8 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffea8]
0065322A  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00653230  3B D8                     CMP EBX,EAX
00653232  0F 8F 3B 68 00 00         JG 0x00659a73
LAB_00653238:
00653238  53                        PUSH EBX
00653239  8B CE                     MOV ECX,ESI
0065323B  E8 A0 16 DB FF            CALL 0x004048e0
00653240  85 C0                     TEST EAX,EAX
00653242  74 0C                     JZ 0x00653250
00653244  C6 00 01                  MOV byte ptr [EAX],0x1
00653247  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
0065324D  89 48 0B                  MOV dword ptr [EAX + 0xb],ECX
LAB_00653250:
00653250  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00653256  43                        INC EBX
00653257  3B D8                     CMP EBX,EAX
00653259  7E DD                     JLE 0x00653238
0065325B  E9 13 68 00 00            JMP 0x00659a73
LAB_00653260:
00653260  8B 85 A4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea4]
00653266  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
0065326C  8D 55 D0                  LEA EDX,[EBP + -0x30]
0065326F  52                        PUSH EDX
00653270  50                        PUSH EAX
00653271  51                        PUSH ECX
00653272  8B CE                     MOV ECX,ESI
00653274  E8 3F E4 DA FF            CALL 0x004016b8
00653279  85 C0                     TEST EAX,EAX
0065327B  0F 8E F2 67 00 00         JLE 0x00659a73
00653281  8D 55 D0                  LEA EDX,[EBP + -0x30]
00653284  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00653287  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0065328a:
0065328A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00653290  85 C9                     TEST ECX,ECX
00653292  74 10                     JZ 0x006532a4
00653294  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00653297  8A 10                     MOV DL,byte ptr [EAX]
00653299  52                        PUSH EDX
0065329A  E8 26 EB DA FF            CALL 0x00401dc5
0065329F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006532A2  EB 07                     JMP 0x006532ab
LAB_006532a4:
006532A4  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_006532ab:
006532AB  8B 9D A8 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffea8]
006532B1  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
006532B7  3B D8                     CMP EBX,EAX
006532B9  7F 2B                     JG 0x006532e6
LAB_006532bb:
006532BB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006532BE  85 C0                     TEST EAX,EAX
006532C0  74 19                     JZ 0x006532db
006532C2  53                        PUSH EBX
006532C3  8D 48 1C                  LEA ECX,[EAX + 0x1c]
006532C6  E8 15 16 DB FF            CALL 0x004048e0
006532CB  85 C0                     TEST EAX,EAX
006532CD  74 0C                     JZ 0x006532db
006532CF  C6 00 01                  MOV byte ptr [EAX],0x1
006532D2  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
006532D8  89 48 0B                  MOV dword ptr [EAX + 0xb],ECX
LAB_006532db:
006532DB  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
006532E1  43                        INC EBX
006532E2  3B D8                     CMP EBX,EAX
006532E4  7E D5                     JLE 0x006532bb
LAB_006532e6:
006532E6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006532E9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006532EC  83 C1 04                  ADD ECX,0x4
006532EF  48                        DEC EAX
006532F0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006532F3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006532F6  75 92                     JNZ 0x0065328a
006532F8  E9 76 67 00 00            JMP 0x00659a73
LAB_006532fd:
006532FD  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00653303  52                        PUSH EDX
00653304  E8 29 19 DB FF            CALL 0x00404c32
00653309  83 C4 04                  ADD ESP,0x4
0065330C  85 C0                     TEST EAX,EAX
0065330E  75 1C                     JNZ 0x0065332c
00653310  6A FF                     PUSH -0x1
00653312  57                        PUSH EDI
00653313  68 1A 05 00 00            PUSH 0x51a
00653318  E8 BE 24 DB FF            CALL 0x004057db
0065331D  50                        PUSH EAX
0065331E  6A 83                     PUSH -0x7d
00653320  8B CE                     MOV ECX,ESI
00653322  E8 1B 1D DB FF            CALL 0x00405042
00653327  E9 47 67 00 00            JMP 0x00659a73
LAB_0065332c:
0065332C  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
00653332  8B 85 A4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea4]
00653338  89 84 8E 2F 05 00 00      MOV dword ptr [ESI + ECX*0x4 + 0x52f],EAX
0065333F  E9 2F 67 00 00            JMP 0x00659a73
LAB_00653344:
00653344  8D 83 E5 FA FF FF         LEA EAX,[EBX + 0xfffffae5]
0065334A  83 F8 31                  CMP EAX,0x31
0065334D  0F 87 20 67 00 00         JA 0x00659a73
00653353  33 D2                     XOR EDX,EDX
00653355  8A 90 FC 9C 65 00         MOV DL,byte ptr [EAX + 0x659cfc]
switchD_0065335b::switchD:
0065335B  FF 24 95 BC 9C 65 00      JMP dword ptr [EDX*0x4 + 0x659cbc]
switchD_0065335b::caseD_51b:
00653362  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00653368  50                        PUSH EAX
00653369  E8 65 09 DB FF            CALL 0x00403cd3
0065336E  83 C4 04                  ADD ESP,0x4
00653371  85 C0                     TEST EAX,EAX
00653373  0F 84 20 F7 FF FF         JZ 0x00652a99
00653379  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
0065337F  8B 95 A0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea0]
00653385  8B 86 B3 05 00 00         MOV EAX,dword ptr [ESI + 0x5b3]
0065338B  51                        PUSH ECX
0065338C  52                        PUSH EDX
0065338D  50                        PUSH EAX
0065338E  E8 8D 2C 06 00            CALL 0x006b6020
00653393  E9 DB 66 00 00            JMP 0x00659a73
switchD_0065335b::caseD_528:
00653398  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
0065339E  51                        PUSH ECX
0065339F  E8 20 0E DB FF            CALL 0x004041c4
006533A4  83 C4 04                  ADD ESP,0x4
006533A7  85 C0                     TEST EAX,EAX
006533A9  0F 84 EA F6 FF FF         JZ 0x00652a99
006533AF  8B 16                     MOV EDX,dword ptr [ESI]
006533B1  8B CE                     MOV ECX,ESI
006533B3  FF 52 18                  CALL dword ptr [EDX + 0x18]
006533B6  83 F8 08                  CMP EAX,0x8
006533B9  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006533BF  75 09                     JNZ 0x006533ca
006533C1  83 F8 09                  CMP EAX,0x9
006533C4  0F 84 CF F6 FF FF         JZ 0x00652a99
LAB_006533ca:
006533CA  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006533D0  8D 4D D0                  LEA ECX,[EBP + -0x30]
006533D3  51                        PUSH ECX
006533D4  52                        PUSH EDX
006533D5  50                        PUSH EAX
006533D6  8B CE                     MOV ECX,ESI
006533D8  E8 DB E2 DA FF            CALL 0x004016b8
006533DD  85 C0                     TEST EAX,EAX
006533DF  0F 8E 8E 66 00 00         JLE 0x00659a73
006533E5  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
006533EB  8D 5D D0                  LEA EBX,[EBP + -0x30]
006533EE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006533f1:
006533F1  85 C9                     TEST ECX,ECX
006533F3  74 17                     JZ 0x0065340c
006533F5  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
006533FB  8A 13                     MOV DL,byte ptr [EBX]
006533FD  50                        PUSH EAX
006533FE  6A 01                     PUSH 0x1
00653400  52                        PUSH EDX
00653401  E8 0A E0 DA FF            CALL 0x00401410
00653406  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
LAB_0065340c:
0065340C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065340F  83 C3 04                  ADD EBX,0x4
00653412  48                        DEC EAX
00653413  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00653416  75 D9                     JNZ 0x006533f1
00653418  E9 56 66 00 00            JMP 0x00659a73
switchD_0065335b::caseD_529:
0065341D  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00653423  50                        PUSH EAX
00653424  E8 11 1A DB FF            CALL 0x00404e3a
00653429  83 C4 04                  ADD ESP,0x4
0065342C  85 C0                     TEST EAX,EAX
0065342E  0F 84 65 F6 FF FF         JZ 0x00652a99
00653434  8B 16                     MOV EDX,dword ptr [ESI]
00653436  8B CE                     MOV ECX,ESI
00653438  FF 52 18                  CALL dword ptr [EDX + 0x18]
0065343B  83 F8 08                  CMP EAX,0x8
0065343E  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00653444  75 09                     JNZ 0x0065344f
00653446  83 F8 09                  CMP EAX,0x9
00653449  0F 84 4A F6 FF FF         JZ 0x00652a99
LAB_0065344f:
0065344F  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00653455  8D 4D D0                  LEA ECX,[EBP + -0x30]
00653458  51                        PUSH ECX
00653459  52                        PUSH EDX
0065345A  50                        PUSH EAX
0065345B  8B CE                     MOV ECX,ESI
0065345D  E8 56 E2 DA FF            CALL 0x004016b8
00653462  85 C0                     TEST EAX,EAX
00653464  0F 8E 09 66 00 00         JLE 0x00659a73
0065346A  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
00653470  8D 5D D0                  LEA EBX,[EBP + -0x30]
00653473  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00653476:
00653476  85 C9                     TEST ECX,ECX
00653478  74 12                     JZ 0x0065348c
0065347A  8A 03                     MOV AL,byte ptr [EBX]
0065347C  6A 00                     PUSH 0x0
0065347E  6A 00                     PUSH 0x0
00653480  50                        PUSH EAX
00653481  E8 8A DF DA FF            CALL 0x00401410
00653486  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
LAB_0065348c:
0065348C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065348F  83 C3 04                  ADD EBX,0x4
00653492  48                        DEC EAX
00653493  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00653496  75 DE                     JNZ 0x00653476
00653498  E9 D6 65 00 00            JMP 0x00659a73
switchD_0065335b::caseD_52a:
0065349D  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
006534A3  51                        PUSH ECX
006534A4  E8 61 1C DB FF            CALL 0x0040510a
006534A9  83 C4 04                  ADD ESP,0x4
006534AC  85 C0                     TEST EAX,EAX
006534AE  0F 84 E5 F5 FF FF         JZ 0x00652a99
006534B4  8B 16                     MOV EDX,dword ptr [ESI]
006534B6  8B CE                     MOV ECX,ESI
006534B8  FF 52 18                  CALL dword ptr [EDX + 0x18]
006534BB  83 F8 08                  CMP EAX,0x8
006534BE  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006534C4  75 09                     JNZ 0x006534cf
006534C6  83 F8 09                  CMP EAX,0x9
006534C9  0F 84 CA F5 FF FF         JZ 0x00652a99
LAB_006534cf:
006534CF  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006534D5  8D 4D D0                  LEA ECX,[EBP + -0x30]
006534D8  51                        PUSH ECX
006534D9  52                        PUSH EDX
006534DA  50                        PUSH EAX
006534DB  8B CE                     MOV ECX,ESI
006534DD  E8 D6 E1 DA FF            CALL 0x004016b8
006534E2  33 C9                     XOR ECX,ECX
006534E4  85 C0                     TEST EAX,EAX
006534E6  0F 8E 87 65 00 00         JLE 0x00659a73
006534EC  33 DB                     XOR EBX,EBX
006534EE  8D 55 D0                  LEA EDX,[EBP + -0x30]
006534F1  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_006534f7:
006534F7  39 1A                     CMP dword ptr [EDX],EBX
006534F9  74 0D                     JZ 0x00653508
006534FB  41                        INC ECX
006534FC  83 C2 04                  ADD EDX,0x4
006534FF  3B C8                     CMP ECX,EAX
00653501  7C F4                     JL 0x006534f7
00653503  E9 6B 65 00 00            JMP 0x00659a73
LAB_00653508:
00653508  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0065350E  85 C9                     TEST ECX,ECX
00653510  0F 84 5D 65 00 00         JZ 0x00659a73
00653516  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
0065351C  50                        PUSH EAX
0065351D  E8 8E F8 DA FF            CALL 0x00402db0
00653522  E9 4C 65 00 00            JMP 0x00659a73
switchD_0065335b::caseD_532:
00653527  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
0065352D  51                        PUSH ECX
0065352E  E8 4F 08 DB FF            CALL 0x00403d82
00653533  83 C4 04                  ADD ESP,0x4
00653536  85 C0                     TEST EAX,EAX
00653538  0F 84 5B F5 FF FF         JZ 0x00652a99
0065353E  A1 D8 16 80 00            MOV EAX,[0x008016d8]
00653543  85 C0                     TEST EAX,EAX
00653545  0F 84 28 65 00 00         JZ 0x00659a73
0065354B  83 BD A0 FE FF FF 09      CMP dword ptr [EBP + 0xfffffea0],0x9
00653552  75 24                     JNZ 0x00653578
00653554  8B 16                     MOV EDX,dword ptr [ESI]
00653556  8B CE                     MOV ECX,ESI
00653558  FF 52 18                  CALL dword ptr [EDX + 0x18]
0065355B  83 F8 08                  CMP EAX,0x8
0065355E  75 18                     JNZ 0x00653578
00653560  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
00653566  50                        PUSH EAX
00653567  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
0065356D  50                        PUSH EAX
0065356E  E8 65 DF DA FF            CALL 0x004014d8
00653573  E9 FB 64 00 00            JMP 0x00659a73
LAB_00653578:
00653578  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065357E  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00653584  8D 4D D0                  LEA ECX,[EBP + -0x30]
00653587  51                        PUSH ECX
00653588  52                        PUSH EDX
00653589  50                        PUSH EAX
0065358A  8B CE                     MOV ECX,ESI
0065358C  E8 27 E1 DA FF            CALL 0x004016b8
00653591  33 C9                     XOR ECX,ECX
00653593  85 C0                     TEST EAX,EAX
00653595  0F 8E D8 64 00 00         JLE 0x00659a73
0065359B  33 DB                     XOR EBX,EBX
0065359D  8D 55 D0                  LEA EDX,[EBP + -0x30]
006535A0  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_006535a6:
006535A6  39 1A                     CMP dword ptr [EDX],EBX
006535A8  74 0D                     JZ 0x006535b7
006535AA  41                        INC ECX
006535AB  83 C2 04                  ADD EDX,0x4
006535AE  3B C8                     CMP ECX,EAX
006535B0  7C F4                     JL 0x006535a6
006535B2  E9 BC 64 00 00            JMP 0x00659a73
LAB_006535b7:
006535B7  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
006535BD  6A 08                     PUSH 0x8
006535BF  51                        PUSH ECX
006535C0  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
006535C6  E8 0D DF DA FF            CALL 0x004014d8
006535CB  E9 A3 64 00 00            JMP 0x00659a73
switchD_0065335b::caseD_533:
006535D0  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
006535D6  52                        PUSH EDX
006535D7  E8 E5 04 DB FF            CALL 0x00403ac1
006535DC  83 C4 04                  ADD ESP,0x4
006535DF  85 C0                     TEST EAX,EAX
006535E1  0F 84 B2 F4 FF FF         JZ 0x00652a99
006535E7  83 BD A0 FE FF FF 09      CMP dword ptr [EBP + 0xfffffea0],0x9
006535EE  75 47                     JNZ 0x00653637
006535F0  8B 06                     MOV EAX,dword ptr [ESI]
006535F2  8B CE                     MOV ECX,ESI
006535F4  FF 50 18                  CALL dword ptr [EAX + 0x18]
006535F7  83 F8 08                  CMP EAX,0x8
006535FA  75 3B                     JNZ 0x00653637
006535FC  8B 0D 94 16 80 00         MOV ECX,dword ptr [0x00801694]
00653602  85 C9                     TEST ECX,ECX
00653604  0F 84 69 64 00 00         JZ 0x00659a73
0065360A  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00653610  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00653613  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00653616  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00653619  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
0065361F  C1 E2 03                  SHL EDX,0x3
00653622  52                        PUSH EDX
00653623  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00653629  50                        PUSH EAX
0065362A  6A 02                     PUSH 0x2
0065362C  52                        PUSH EDX
0065362D  E8 13 EA DA FF            CALL 0x00402045
00653632  E9 3C 64 00 00            JMP 0x00659a73
LAB_00653637:
00653637  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
0065363D  8B 95 A0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea0]
00653643  8D 45 D0                  LEA EAX,[EBP + -0x30]
00653646  50                        PUSH EAX
00653647  51                        PUSH ECX
00653648  52                        PUSH EDX
00653649  8B CE                     MOV ECX,ESI
0065364B  E8 68 E0 DA FF            CALL 0x004016b8
00653650  33 C9                     XOR ECX,ECX
00653652  85 C0                     TEST EAX,EAX
00653654  0F 8E 19 64 00 00         JLE 0x00659a73
0065365A  33 DB                     XOR EBX,EBX
0065365C  8D 55 D0                  LEA EDX,[EBP + -0x30]
0065365F  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_00653665:
00653665  39 1A                     CMP dword ptr [EDX],EBX
00653667  74 0D                     JZ 0x00653676
00653669  41                        INC ECX
0065366A  83 C2 04                  ADD EDX,0x4
0065366D  3B C8                     CMP ECX,EAX
0065366F  7C F4                     JL 0x00653665
00653671  E9 FD 63 00 00            JMP 0x00659a73
LAB_00653676:
00653676  8B 0D 94 16 80 00         MOV ECX,dword ptr [0x00801694]
0065367C  85 C9                     TEST ECX,ECX
0065367E  0F 84 EF 63 00 00         JZ 0x00659a73
00653684  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
0065368A  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00653690  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00653693  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00653696  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00653699  C1 E0 03                  SHL EAX,0x3
0065369C  50                        PUSH EAX
0065369D  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
006536A3  52                        PUSH EDX
006536A4  6A 02                     PUSH 0x2
006536A6  50                        PUSH EAX
006536A7  E8 99 E9 DA FF            CALL 0x00402045
006536AC  E9 C2 63 00 00            JMP 0x00659a73
switchD_0065335b::caseD_534:
006536B1  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
006536B7  51                        PUSH ECX
006536B8  E8 EE DD DA FF            CALL 0x004014ab
006536BD  83 C4 04                  ADD ESP,0x4
006536C0  85 C0                     TEST EAX,EAX
006536C2  0F 84 D1 F3 FF FF         JZ 0x00652a99
006536C8  83 BD A0 FE FF FF 09      CMP dword ptr [EBP + 0xfffffea0],0x9
006536CF  75 3C                     JNZ 0x0065370d
006536D1  8B 16                     MOV EDX,dword ptr [ESI]
006536D3  8B CE                     MOV ECX,ESI
006536D5  FF 52 18                  CALL dword ptr [EDX + 0x18]
006536D8  83 F8 08                  CMP EAX,0x8
006536DB  75 30                     JNZ 0x0065370d
LAB_006536dd:
006536DD  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
006536E3  85 C9                     TEST ECX,ECX
006536E5  0F 84 88 63 00 00         JZ 0x00659a73
006536EB  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
006536F1  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
006536F7  50                        PUSH EAX
006536F8  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
006536FE  2B D0                     SUB EDX,EAX
00653700  42                        INC EDX
00653701  52                        PUSH EDX
00653702  50                        PUSH EAX
00653703  E8 4A FA DA FF            CALL 0x00403152
00653708  E9 66 63 00 00            JMP 0x00659a73
LAB_0065370d:
0065370D  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
00653713  8B 95 A0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea0]
00653719  8D 45 D0                  LEA EAX,[EBP + -0x30]
0065371C  50                        PUSH EAX
0065371D  51                        PUSH ECX
0065371E  52                        PUSH EDX
0065371F  8B CE                     MOV ECX,ESI
00653721  E8 92 DF DA FF            CALL 0x004016b8
00653726  33 C9                     XOR ECX,ECX
00653728  85 C0                     TEST EAX,EAX
0065372A  0F 8E 43 63 00 00         JLE 0x00659a73
00653730  33 DB                     XOR EBX,EBX
00653732  8D 55 D0                  LEA EDX,[EBP + -0x30]
00653735  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_0065373b:
0065373B  39 1A                     CMP dword ptr [EDX],EBX
0065373D  74 9E                     JZ 0x006536dd
0065373F  41                        INC ECX
00653740  83 C2 04                  ADD EDX,0x4
00653743  3B C8                     CMP ECX,EAX
00653745  7C F4                     JL 0x0065373b
00653747  E9 27 63 00 00            JMP 0x00659a73
switchD_0065335b::caseD_535:
0065374C  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00653752  50                        PUSH EAX
00653753  E8 F7 FC DA FF            CALL 0x0040344f
00653758  83 C4 04                  ADD ESP,0x4
0065375B  85 C0                     TEST EAX,EAX
0065375D  0F 84 36 F3 FF FF         JZ 0x00652a99
00653763  83 BD A0 FE FF FF 09      CMP dword ptr [EBP + 0xfffffea0],0x9
0065376A  75 32                     JNZ 0x0065379e
0065376C  8B 16                     MOV EDX,dword ptr [ESI]
0065376E  8B CE                     MOV ECX,ESI
00653770  FF 52 18                  CALL dword ptr [EDX + 0x18]
00653773  83 F8 08                  CMP EAX,0x8
00653776  75 26                     JNZ 0x0065379e
LAB_00653778:
00653778  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0065377E  85 C9                     TEST ECX,ECX
00653780  0F 84 ED 62 00 00         JZ 0x00659a73
00653786  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
0065378C  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00653792  50                        PUSH EAX
00653793  52                        PUSH EDX
00653794  E8 C2 E1 DA FF            CALL 0x0040195b
00653799  E9 D5 62 00 00            JMP 0x00659a73
LAB_0065379e:
0065379E  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
006537A4  8B 95 A0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea0]
006537AA  8D 45 D0                  LEA EAX,[EBP + -0x30]
006537AD  50                        PUSH EAX
006537AE  51                        PUSH ECX
006537AF  52                        PUSH EDX
006537B0  8B CE                     MOV ECX,ESI
006537B2  E8 01 DF DA FF            CALL 0x004016b8
006537B7  33 C9                     XOR ECX,ECX
006537B9  85 C0                     TEST EAX,EAX
006537BB  0F 8E B2 62 00 00         JLE 0x00659a73
006537C1  33 DB                     XOR EBX,EBX
006537C3  8D 55 D0                  LEA EDX,[EBP + -0x30]
006537C6  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_006537cc:
006537CC  39 1A                     CMP dword ptr [EDX],EBX
006537CE  74 A8                     JZ 0x00653778
006537D0  41                        INC ECX
006537D1  83 C2 04                  ADD EDX,0x4
006537D4  3B C8                     CMP ECX,EAX
006537D6  7C F4                     JL 0x006537cc
006537D8  E9 96 62 00 00            JMP 0x00659a73
switchD_0065335b::caseD_536:
006537DD  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
006537E3  50                        PUSH EAX
006537E4  E8 41 26 DB FF            CALL 0x00405e2a
006537E9  83 C4 04                  ADD ESP,0x4
006537EC  85 C0                     TEST EAX,EAX
006537EE  0F 84 A5 F2 FF FF         JZ 0x00652a99
006537F4  83 BD A0 FE FF FF 09      CMP dword ptr [EBP + 0xfffffea0],0x9
006537FB  75 2A                     JNZ 0x00653827
006537FD  8B 16                     MOV EDX,dword ptr [ESI]
006537FF  8B CE                     MOV ECX,ESI
00653801  FF 52 18                  CALL dword ptr [EDX + 0x18]
00653804  83 F8 08                  CMP EAX,0x8
00653807  75 1E                     JNZ 0x00653827
00653809  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
0065380F  6A 00                     PUSH 0x0
00653811  6A 00                     PUSH 0x0
00653813  6A 00                     PUSH 0x0
00653815  50                        PUSH EAX
00653816  6A 0C                     PUSH 0xc
00653818  B9 58 76 80 00            MOV ECX,0x807658
0065381D  E8 B6 13 DB FF            CALL 0x00404bd8
00653822  E9 4C 62 00 00            JMP 0x00659a73
LAB_00653827:
00653827  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065382D  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00653833  8D 4D D0                  LEA ECX,[EBP + -0x30]
00653836  51                        PUSH ECX
00653837  52                        PUSH EDX
00653838  50                        PUSH EAX
00653839  8B CE                     MOV ECX,ESI
0065383B  E8 78 DE DA FF            CALL 0x004016b8
00653840  33 C9                     XOR ECX,ECX
00653842  85 C0                     TEST EAX,EAX
00653844  0F 8E 29 62 00 00         JLE 0x00659a73
0065384A  33 DB                     XOR EBX,EBX
0065384C  8D 55 D0                  LEA EDX,[EBP + -0x30]
0065384F  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_00653855:
00653855  39 1A                     CMP dword ptr [EDX],EBX
00653857  74 0D                     JZ 0x00653866
00653859  41                        INC ECX
0065385A  83 C2 04                  ADD EDX,0x4
0065385D  3B C8                     CMP ECX,EAX
0065385F  7C F4                     JL 0x00653855
00653861  E9 0D 62 00 00            JMP 0x00659a73
LAB_00653866:
00653866  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
0065386C  6A 00                     PUSH 0x0
0065386E  6A 00                     PUSH 0x0
00653870  6A 00                     PUSH 0x0
00653872  51                        PUSH ECX
00653873  6A 0C                     PUSH 0xc
00653875  B9 58 76 80 00            MOV ECX,0x807658
0065387A  E8 59 13 DB FF            CALL 0x00404bd8
0065387F  E9 EF 61 00 00            JMP 0x00659a73
switchD_0065335b::caseD_537:
00653884  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
0065388A  52                        PUSH EDX
0065388B  E8 32 0B DB FF            CALL 0x004043c2
00653890  83 C4 04                  ADD ESP,0x4
00653893  85 C0                     TEST EAX,EAX
00653895  0F 84 FE F1 FF FF         JZ 0x00652a99
0065389B  83 BD A0 FE FF FF 09      CMP dword ptr [EBP + 0xfffffea0],0x9
006538A2  75 2B                     JNZ 0x006538cf
006538A4  8B 06                     MOV EAX,dword ptr [ESI]
006538A6  8B CE                     MOV ECX,ESI
006538A8  FF 50 18                  CALL dword ptr [EAX + 0x18]
006538AB  83 F8 08                  CMP EAX,0x8
006538AE  75 1F                     JNZ 0x006538cf
006538B0  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
006538B6  85 C9                     TEST ECX,ECX
006538B8  0F 84 B5 61 00 00         JZ 0x00659a73
006538BE  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006538C4  52                        PUSH EDX
006538C5  E8 51 F3 DA FF            CALL 0x00402c1b
006538CA  E9 A4 61 00 00            JMP 0x00659a73
LAB_006538cf:
006538CF  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
006538D5  8B 95 A0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea0]
006538DB  8D 45 D0                  LEA EAX,[EBP + -0x30]
006538DE  50                        PUSH EAX
006538DF  51                        PUSH ECX
006538E0  52                        PUSH EDX
006538E1  8B CE                     MOV ECX,ESI
006538E3  E8 D0 DD DA FF            CALL 0x004016b8
006538E8  33 C9                     XOR ECX,ECX
006538EA  85 C0                     TEST EAX,EAX
006538EC  0F 8E 81 61 00 00         JLE 0x00659a73
006538F2  33 DB                     XOR EBX,EBX
006538F4  8D 55 D0                  LEA EDX,[EBP + -0x30]
006538F7  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_006538fd:
006538FD  39 1A                     CMP dword ptr [EDX],EBX
006538FF  74 0D                     JZ 0x0065390e
00653901  41                        INC ECX
00653902  83 C2 04                  ADD EDX,0x4
00653905  3B C8                     CMP ECX,EAX
00653907  7C F4                     JL 0x006538fd
00653909  E9 65 61 00 00            JMP 0x00659a73
LAB_0065390e:
0065390E  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
00653914  85 C9                     TEST ECX,ECX
00653916  0F 84 57 61 00 00         JZ 0x00659a73
0065391C  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00653922  50                        PUSH EAX
00653923  E8 F3 F2 DA FF            CALL 0x00402c1b
00653928  E9 46 61 00 00            JMP 0x00659a73
switchD_0065335b::caseD_546:
0065392D  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00653933  51                        PUSH ECX
00653934  E8 12 22 DB FF            CALL 0x00405b4b
00653939  83 C4 04                  ADD ESP,0x4
0065393C  85 C0                     TEST EAX,EAX
0065393E  0F 84 55 F1 FF FF         JZ 0x00652a99
00653944  8B 16                     MOV EDX,dword ptr [ESI]
00653946  8B CE                     MOV ECX,ESI
00653948  FF 52 18                  CALL dword ptr [EDX + 0x18]
0065394B  83 F8 08                  CMP EAX,0x8
0065394E  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00653954  75 09                     JNZ 0x0065395f
00653956  83 F8 09                  CMP EAX,0x9
00653959  0F 84 3A F1 FF FF         JZ 0x00652a99
LAB_0065395f:
0065395F  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00653965  8D 4D D0                  LEA ECX,[EBP + -0x30]
00653968  51                        PUSH ECX
00653969  52                        PUSH EDX
0065396A  50                        PUSH EAX
0065396B  8B CE                     MOV ECX,ESI
0065396D  E8 46 DD DA FF            CALL 0x004016b8
00653972  33 D2                     XOR EDX,EDX
00653974  85 C0                     TEST EAX,EAX
00653976  0F 8E F7 60 00 00         JLE 0x00659a73
0065397C  33 DB                     XOR EBX,EBX
0065397E  8D 4D D0                  LEA ECX,[EBP + -0x30]
00653981  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_00653987:
00653987  39 19                     CMP dword ptr [ECX],EBX
00653989  74 0D                     JZ 0x00653998
0065398B  42                        INC EDX
0065398C  83 C1 04                  ADD ECX,0x4
0065398F  3B D0                     CMP EDX,EAX
00653991  7C F4                     JL 0x00653987
00653993  E9 DB 60 00 00            JMP 0x00659a73
LAB_00653998:
00653998  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0065399E  85 C9                     TEST ECX,ECX
006539A0  0F 84 CD 60 00 00         JZ 0x00659a73
006539A6  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
006539AC  85 C0                     TEST EAX,EAX
006539AE  7C 08                     JL 0x006539b8
006539B0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006539B3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006539B6  EB 05                     JMP 0x006539bd
LAB_006539b8:
006539B8  B8 F0 FF FF FF            MOV EAX,0xfffffff0
LAB_006539bd:
006539BD  8B 54 95 D0               MOV EDX,dword ptr [EBP + EDX*0x4 + -0x30]
006539C1  50                        PUSH EAX
006539C2  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
006539C8  50                        PUSH EAX
006539C9  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
006539CF  52                        PUSH EDX
006539D0  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
006539D6  50                        PUSH EAX
006539D7  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
006539DD  52                        PUSH EDX
006539DE  50                        PUSH EAX
006539DF  E8 EE E5 DA FF            CALL 0x00401fd2
006539E4  E9 8A 60 00 00            JMP 0x00659a73
switchD_0065335b::caseD_547:
006539E9  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
006539EF  51                        PUSH ECX
006539F0  E8 02 DF DA FF            CALL 0x004018f7
006539F5  83 C4 04                  ADD ESP,0x4
006539F8  85 C0                     TEST EAX,EAX
006539FA  0F 84 99 F0 FF FF         JZ 0x00652a99
00653A00  8B 16                     MOV EDX,dword ptr [ESI]
00653A02  8B CE                     MOV ECX,ESI
00653A04  FF 52 18                  CALL dword ptr [EDX + 0x18]
00653A07  83 F8 08                  CMP EAX,0x8
00653A0A  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00653A10  75 09                     JNZ 0x00653a1b
00653A12  83 F8 09                  CMP EAX,0x9
00653A15  0F 84 7E F0 FF FF         JZ 0x00652a99
LAB_00653a1b:
00653A1B  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00653A21  8D 4D D0                  LEA ECX,[EBP + -0x30]
00653A24  51                        PUSH ECX
00653A25  52                        PUSH EDX
00653A26  50                        PUSH EAX
00653A27  8B CE                     MOV ECX,ESI
00653A29  E8 8A DC DA FF            CALL 0x004016b8
00653A2E  33 C9                     XOR ECX,ECX
00653A30  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00653A33  85 C0                     TEST EAX,EAX
00653A35  0F 8E 38 60 00 00         JLE 0x00659a73
00653A3B  33 D2                     XOR EDX,EDX
00653A3D  8D 45 D0                  LEA EAX,[EBP + -0x30]
00653A40  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
LAB_00653a46:
00653A46  39 10                     CMP dword ptr [EAX],EDX
00653A48  74 0E                     JZ 0x00653a58
00653A4A  41                        INC ECX
00653A4B  83 C0 04                  ADD EAX,0x4
00653A4E  3B 4D F4                  CMP ECX,dword ptr [EBP + -0xc]
00653A51  7C F3                     JL 0x00653a46
00653A53  E9 1B 60 00 00            JMP 0x00659a73
LAB_00653a58:
00653A58  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00653A5E  85 C9                     TEST ECX,ECX
00653A60  0F 84 0D 60 00 00         JZ 0x00659a73
00653A66  8B 81 14 01 00 00         MOV EAX,dword ptr [ECX + 0x114]
00653A6C  33 D2                     XOR EDX,EDX
00653A6E  3B C2                     CMP EAX,EDX
00653A70  74 30                     JZ 0x00653aa2
00653A72  33 C0                     XOR EAX,EAX
00653A74  81 FB 47 05 00 00         CMP EBX,0x547
00653A7A  0F 94 C0                  SETZ AL
00653A7D  89 81 F8 00 00 00         MOV dword ptr [ECX + 0xf8],EAX
00653A83  3B C2                     CMP EAX,EDX
00653A85  A1 98 75 80 00            MOV EAX,[0x00807598]
00653A8A  74 21                     JZ 0x00653aad
00653A8C  B9 01 00 00 00            MOV ECX,0x1
00653A91  89 88 66 04 00 00         MOV dword ptr [EAX + 0x466],ECX
00653A97  89 88 D8 02 00 00         MOV dword ptr [EAX + 0x2d8],ECX
00653A9D  E9 D1 5F 00 00            JMP 0x00659a73
LAB_00653aa2:
00653AA2  89 91 F8 00 00 00         MOV dword ptr [ECX + 0xf8],EDX
00653AA8  A1 98 75 80 00            MOV EAX,[0x00807598]
LAB_00653aad:
00653AAD  89 90 66 04 00 00         MOV dword ptr [EAX + 0x466],EDX
00653AB3  C7 80 D8 02 00 00 01 00 00 00  MOV dword ptr [EAX + 0x2d8],0x1
00653ABD  E9 B1 5F 00 00            JMP 0x00659a73
switchD_0065335b::caseD_549:
00653AC2  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00653AC8  50                        PUSH EAX
00653AC9  E8 13 E5 DA FF            CALL 0x00401fe1
00653ACE  83 C4 04                  ADD ESP,0x4
00653AD1  85 C0                     TEST EAX,EAX
00653AD3  0F 84 C0 EF FF FF         JZ 0x00652a99
00653AD9  8B 16                     MOV EDX,dword ptr [ESI]
00653ADB  8B CE                     MOV ECX,ESI
00653ADD  FF 52 18                  CALL dword ptr [EDX + 0x18]
00653AE0  83 F8 08                  CMP EAX,0x8
00653AE3  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00653AE9  75 09                     JNZ 0x00653af4
00653AEB  83 F8 09                  CMP EAX,0x9
00653AEE  0F 84 A5 EF FF FF         JZ 0x00652a99
LAB_00653af4:
00653AF4  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00653AFA  8D 4D D0                  LEA ECX,[EBP + -0x30]
00653AFD  51                        PUSH ECX
00653AFE  52                        PUSH EDX
00653AFF  50                        PUSH EAX
00653B00  8B CE                     MOV ECX,ESI
00653B02  E8 B1 DB DA FF            CALL 0x004016b8
00653B07  33 C9                     XOR ECX,ECX
00653B09  85 C0                     TEST EAX,EAX
00653B0B  0F 8E 62 5F 00 00         JLE 0x00659a73
00653B11  33 DB                     XOR EBX,EBX
00653B13  8D 55 D0                  LEA EDX,[EBP + -0x30]
00653B16  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_00653b1c:
00653B1C  39 1A                     CMP dword ptr [EDX],EBX
00653B1E  74 0D                     JZ 0x00653b2d
00653B20  41                        INC ECX
00653B21  83 C2 04                  ADD EDX,0x4
00653B24  3B C8                     CMP ECX,EAX
00653B26  7C F4                     JL 0x00653b1c
00653B28  E9 46 5F 00 00            JMP 0x00659a73
LAB_00653b2d:
00653B2D  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
00653B33  85 C9                     TEST ECX,ECX
00653B35  0F 84 38 5F 00 00         JZ 0x00659a73
00653B3B  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00653B41  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00653B47  50                        PUSH EAX
00653B48  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00653B4E  52                        PUSH EDX
00653B4F  50                        PUSH EAX
00653B50  E8 C4 D9 DA FF            CALL 0x00401519
00653B55  E9 19 5F 00 00            JMP 0x00659a73
switchD_0065335b::caseD_54a:
00653B5A  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00653B60  51                        PUSH ECX
00653B61  E8 87 E2 DA FF            CALL 0x00401ded
00653B66  83 C4 04                  ADD ESP,0x4
00653B69  85 C0                     TEST EAX,EAX
00653B6B  0F 84 28 EF FF FF         JZ 0x00652a99
00653B71  8B 16                     MOV EDX,dword ptr [ESI]
00653B73  8B CE                     MOV ECX,ESI
00653B75  FF 52 18                  CALL dword ptr [EDX + 0x18]
00653B78  83 F8 08                  CMP EAX,0x8
00653B7B  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00653B81  75 09                     JNZ 0x00653b8c
00653B83  83 F8 09                  CMP EAX,0x9
00653B86  0F 84 0D EF FF FF         JZ 0x00652a99
LAB_00653b8c:
00653B8C  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00653B92  8D 4D D0                  LEA ECX,[EBP + -0x30]
00653B95  51                        PUSH ECX
00653B96  52                        PUSH EDX
00653B97  50                        PUSH EAX
00653B98  8B CE                     MOV ECX,ESI
00653B9A  E8 19 DB DA FF            CALL 0x004016b8
00653B9F  33 C9                     XOR ECX,ECX
00653BA1  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00653BA4  85 C0                     TEST EAX,EAX
00653BA6  0F 8E C7 5E 00 00         JLE 0x00659a73
00653BAC  33 D2                     XOR EDX,EDX
00653BAE  8D 45 D0                  LEA EAX,[EBP + -0x30]
00653BB1  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
LAB_00653bb7:
00653BB7  39 10                     CMP dword ptr [EAX],EDX
00653BB9  74 0E                     JZ 0x00653bc9
00653BBB  41                        INC ECX
00653BBC  83 C0 04                  ADD EAX,0x4
00653BBF  3B 4D F4                  CMP ECX,dword ptr [EBP + -0xc]
00653BC2  7C F3                     JL 0x00653bb7
00653BC4  E9 AA 5E 00 00            JMP 0x00659a73
LAB_00653bc9:
00653BC9  A1 A0 B2 7F 00            MOV EAX,[0x007fb2a0]
00653BCE  85 C0                     TEST EAX,EAX
00653BD0  0F 84 9D 5E 00 00         JZ 0x00659a73
00653BD6  B9 08 00 00 00            MOV ECX,0x8
00653BDB  33 C0                     XOR EAX,EAX
00653BDD  8D BD 44 FE FF FF         LEA EDI,[EBP + 0xfffffe44]
00653BE3  F3 AB                     STOSD.REP ES:EDI
00653BE5  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00653BEB  83 F8 03                  CMP EAX,0x3
00653BEE  77 52                     JA 0x00653c42
switchD_00653bf0::switchD:
00653BF0  FF 24 85 30 9D 65 00      JMP dword ptr [EAX*0x4 + 0x659d30]
switchD_00653bf0::caseD_0:
00653BF7  C7 85 54 FE FF FF 04 01 00 00  MOV dword ptr [EBP + 0xfffffe54],0x104
00653C01  EB 22                     JMP 0x00653c25
switchD_00653bf0::caseD_1:
00653C03  C7 85 54 FE FF FF 05 01 00 00  MOV dword ptr [EBP + 0xfffffe54],0x105
00653C0D  EB 16                     JMP 0x00653c25
switchD_00653bf0::caseD_2:
00653C0F  C7 85 54 FE FF FF 06 01 00 00  MOV dword ptr [EBP + 0xfffffe54],0x106
00653C19  EB 0A                     JMP 0x00653c25
switchD_00653bf0::caseD_3:
00653C1B  C7 85 54 FE FF FF 07 01 00 00  MOV dword ptr [EBP + 0xfffffe54],0x107
LAB_00653c25:
00653C25  8B 06                     MOV EAX,dword ptr [ESI]
00653C27  8D 8D 44 FE FF FF         LEA ECX,[EBP + 0xfffffe44]
00653C2D  51                        PUSH ECX
00653C2E  68 00 01 00 00            PUSH 0x100
00653C33  6A 03                     PUSH 0x3
00653C35  8B CE                     MOV ECX,ESI
00653C37  FF 50 30                  CALL dword ptr [EAX + 0x30]
00653C3A  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00653C3D  E9 31 5E 00 00            JMP 0x00659a73
switchD_00653bf0::default:
00653C42  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00653C45  6A FF                     PUSH -0x1
00653C47  52                        PUSH EDX
00653C48  53                        PUSH EBX
00653C49  E8 8D 1B DB FF            CALL 0x004057db
00653C4E  50                        PUSH EAX
00653C4F  6A 83                     PUSH -0x7d
00653C51  8B CE                     MOV ECX,ESI
00653C53  E8 EA 13 DB FF            CALL 0x00405042
00653C58  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00653C5B  E9 13 5E 00 00            JMP 0x00659a73
switchD_0065335b::caseD_54b:
00653C60  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00653C66  50                        PUSH EAX
00653C67  E8 FC E8 DA FF            CALL 0x00402568
00653C6C  83 C4 04                  ADD ESP,0x4
00653C6F  85 C0                     TEST EAX,EAX
00653C71  0F 84 22 EE FF FF         JZ 0x00652a99
00653C77  8B 16                     MOV EDX,dword ptr [ESI]
00653C79  8B CE                     MOV ECX,ESI
00653C7B  FF 52 18                  CALL dword ptr [EDX + 0x18]
00653C7E  83 F8 08                  CMP EAX,0x8
00653C81  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00653C87  75 09                     JNZ 0x00653c92
00653C89  83 F8 09                  CMP EAX,0x9
00653C8C  0F 84 07 EE FF FF         JZ 0x00652a99
LAB_00653c92:
00653C92  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00653C98  8D 4D D0                  LEA ECX,[EBP + -0x30]
00653C9B  51                        PUSH ECX
00653C9C  52                        PUSH EDX
00653C9D  50                        PUSH EAX
00653C9E  8B CE                     MOV ECX,ESI
00653CA0  E8 13 DA DA FF            CALL 0x004016b8
00653CA5  33 C9                     XOR ECX,ECX
00653CA7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00653CAA  85 C0                     TEST EAX,EAX
00653CAC  0F 8E C1 5D 00 00         JLE 0x00659a73
00653CB2  33 D2                     XOR EDX,EDX
00653CB4  8D 45 D0                  LEA EAX,[EBP + -0x30]
00653CB7  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
LAB_00653cbd:
00653CBD  39 10                     CMP dword ptr [EAX],EDX
00653CBF  74 0E                     JZ 0x00653ccf
00653CC1  41                        INC ECX
00653CC2  83 C0 04                  ADD EAX,0x4
00653CC5  3B 4D F4                  CMP ECX,dword ptr [EBP + -0xc]
00653CC8  7C F3                     JL 0x00653cbd
00653CCA  E9 A4 5D 00 00            JMP 0x00659a73
LAB_00653ccf:
00653CCF  A1 A0 B2 7F 00            MOV EAX,[0x007fb2a0]
00653CD4  85 C0                     TEST EAX,EAX
00653CD6  0F 84 97 5D 00 00         JZ 0x00659a73
00653CDC  B9 08 00 00 00            MOV ECX,0x8
00653CE1  33 C0                     XOR EAX,EAX
00653CE3  8D BD 44 FE FF FF         LEA EDI,[EBP + 0xfffffe44]
00653CE9  81 FB 4B 05 00 00         CMP EBX,0x54b
00653CEF  F3 AB                     STOSD.REP ES:EDI
00653CF1  0F 95 C0                  SETNZ AL
00653CF4  05 00 01 00 00            ADD EAX,0x100
00653CF9  8B CE                     MOV ECX,ESI
00653CFB  89 85 54 FE FF FF         MOV dword ptr [EBP + 0xfffffe54],EAX
00653D01  8B 16                     MOV EDX,dword ptr [ESI]
00653D03  8D 85 44 FE FF FF         LEA EAX,[EBP + 0xfffffe44]
00653D09  50                        PUSH EAX
00653D0A  68 00 01 00 00            PUSH 0x100
00653D0F  6A 03                     PUSH 0x3
00653D11  FF 52 30                  CALL dword ptr [EDX + 0x30]
00653D14  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00653D17  E9 57 5D 00 00            JMP 0x00659a73
LAB_00653d1c:
00653D1C  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00653D22  51                        PUSH ECX
00653D23  E8 F5 EC DA FF            CALL 0x00402a1d
00653D28  83 C4 04                  ADD ESP,0x4
00653D2B  85 C0                     TEST EAX,EAX
00653D2D  75 1C                     JNZ 0x00653d4b
00653D2F  6A FF                     PUSH -0x1
00653D31  57                        PUSH EDI
00653D32  68 4D 05 00 00            PUSH 0x54d
00653D37  E8 9F 1A DB FF            CALL 0x004057db
00653D3C  50                        PUSH EAX
00653D3D  6A 83                     PUSH -0x7d
00653D3F  8B CE                     MOV ECX,ESI
00653D41  E8 FC 12 DB FF            CALL 0x00405042
00653D46  E9 28 5D 00 00            JMP 0x00659a73
LAB_00653d4b:
00653D4B  8B 16                     MOV EDX,dword ptr [ESI]
00653D4D  8B CE                     MOV ECX,ESI
00653D4F  FF 52 18                  CALL dword ptr [EDX + 0x18]
00653D52  83 F8 08                  CMP EAX,0x8
00653D55  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00653D5B  75 21                     JNZ 0x00653d7e
00653D5D  83 F8 09                  CMP EAX,0x9
00653D60  75 1C                     JNZ 0x00653d7e
00653D62  6A FF                     PUSH -0x1
00653D64  57                        PUSH EDI
00653D65  68 4D 05 00 00            PUSH 0x54d
00653D6A  E8 6C 1A DB FF            CALL 0x004057db
00653D6F  50                        PUSH EAX
00653D70  6A 83                     PUSH -0x7d
00653D72  8B CE                     MOV ECX,ESI
00653D74  E8 C9 12 DB FF            CALL 0x00405042
00653D79  E9 F5 5C 00 00            JMP 0x00659a73
LAB_00653d7e:
00653D7E  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00653D84  8D 4D D0                  LEA ECX,[EBP + -0x30]
00653D87  51                        PUSH ECX
00653D88  52                        PUSH EDX
00653D89  50                        PUSH EAX
00653D8A  8B CE                     MOV ECX,ESI
00653D8C  E8 27 D9 DA FF            CALL 0x004016b8
00653D91  33 C9                     XOR ECX,ECX
00653D93  85 C0                     TEST EAX,EAX
00653D95  0F 8E D8 5C 00 00         JLE 0x00659a73
00653D9B  33 DB                     XOR EBX,EBX
00653D9D  8D 55 D0                  LEA EDX,[EBP + -0x30]
00653DA0  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_00653da6:
00653DA6  39 1A                     CMP dword ptr [EDX],EBX
00653DA8  74 0D                     JZ 0x00653db7
00653DAA  41                        INC ECX
00653DAB  83 C2 04                  ADD EDX,0x4
00653DAE  3B C8                     CMP ECX,EAX
00653DB0  7C F4                     JL 0x00653da6
00653DB2  E9 BC 5C 00 00            JMP 0x00659a73
LAB_00653db7:
00653DB7  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
00653DBD  85 C9                     TEST ECX,ECX
00653DBF  0F 84 AE 5C 00 00         JZ 0x00659a73
00653DC5  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00653DCB  50                        PUSH EAX
00653DCC  E8 1A 0F DB FF            CALL 0x00404ceb
00653DD1  E9 9D 5C 00 00            JMP 0x00659a73
LAB_00653dd6:
00653DD6  8D 83 B2 FA FF FF         LEA EAX,[EBX + 0xfffffab2]
00653DDC  83 F8 44                  CMP EAX,0x44
00653DDF  0F 87 8E 5C 00 00         JA 0x00659a73
00653DE5  33 C9                     XOR ECX,ECX
00653DE7  8A 88 C0 9D 65 00         MOV CL,byte ptr [EAX + 0x659dc0]
switchD_00653ded::switchD:
00653DED  FF 24 8D 40 9D 65 00      JMP dword ptr [ECX*0x4 + 0x659d40]
switchD_00653ded::caseD_54e:
00653DF4  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00653DFA  52                        PUSH EDX
00653DFB  E8 C8 DC DA FF            CALL 0x00401ac8
00653E00  83 C4 04                  ADD ESP,0x4
00653E03  85 C0                     TEST EAX,EAX
00653E05  0F 84 8E EC FF FF         JZ 0x00652a99
00653E0B  8B 06                     MOV EAX,dword ptr [ESI]
00653E0D  8B CE                     MOV ECX,ESI
00653E0F  FF 50 18                  CALL dword ptr [EAX + 0x18]
00653E12  83 F8 08                  CMP EAX,0x8
00653E15  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00653E1B  75 09                     JNZ 0x00653e26
00653E1D  83 F8 09                  CMP EAX,0x9
00653E20  0F 84 73 EC FF FF         JZ 0x00652a99
LAB_00653e26:
00653E26  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00653E2C  8D 4D D0                  LEA ECX,[EBP + -0x30]
00653E2F  51                        PUSH ECX
00653E30  52                        PUSH EDX
00653E31  50                        PUSH EAX
00653E32  8B CE                     MOV ECX,ESI
00653E34  E8 7F D8 DA FF            CALL 0x004016b8
00653E39  33 C9                     XOR ECX,ECX
00653E3B  85 C0                     TEST EAX,EAX
00653E3D  0F 8E 30 5C 00 00         JLE 0x00659a73
00653E43  33 DB                     XOR EBX,EBX
00653E45  8D 55 D0                  LEA EDX,[EBP + -0x30]
00653E48  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_00653e4e:
00653E4E  39 1A                     CMP dword ptr [EDX],EBX
00653E50  74 0D                     JZ 0x00653e5f
00653E52  41                        INC ECX
00653E53  83 C2 04                  ADD EDX,0x4
00653E56  3B C8                     CMP ECX,EAX
00653E58  7C F4                     JL 0x00653e4e
00653E5A  E9 14 5C 00 00            JMP 0x00659a73
LAB_00653e5f:
00653E5F  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00653E65  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00653E6B  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00653E71  50                        PUSH EAX
00653E72  51                        PUSH ECX
00653E73  52                        PUSH EDX
00653E74  E8 B6 E3 DA FF            CALL 0x0040222f
00653E79  83 C4 0C                  ADD ESP,0xc
00653E7C  E9 F2 5B 00 00            JMP 0x00659a73
switchD_00653ded::caseD_55a:
00653E81  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00653E87  50                        PUSH EAX
00653E88  E8 5E EB DA FF            CALL 0x004029eb
00653E8D  83 C4 04                  ADD ESP,0x4
00653E90  85 C0                     TEST EAX,EAX
00653E92  0F 84 01 EC FF FF         JZ 0x00652a99
00653E98  8B 16                     MOV EDX,dword ptr [ESI]
00653E9A  8B CE                     MOV ECX,ESI
00653E9C  FF 52 18                  CALL dword ptr [EDX + 0x18]
00653E9F  83 F8 08                  CMP EAX,0x8
00653EA2  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00653EA8  75 09                     JNZ 0x00653eb3
00653EAA  83 F8 09                  CMP EAX,0x9
00653EAD  0F 84 E6 EB FF FF         JZ 0x00652a99
LAB_00653eb3:
00653EB3  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00653EB9  8D 4D D0                  LEA ECX,[EBP + -0x30]
00653EBC  51                        PUSH ECX
00653EBD  52                        PUSH EDX
00653EBE  50                        PUSH EAX
00653EBF  8B CE                     MOV ECX,ESI
00653EC1  E8 F2 D7 DA FF            CALL 0x004016b8
00653EC6  85 C0                     TEST EAX,EAX
00653EC8  0F 8E A5 5B 00 00         JLE 0x00659a73
00653ECE  8B 9D A8 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffea8]
00653ED4  8D 55 D0                  LEA EDX,[EBP + -0x30]
00653ED7  83 FB 01                  CMP EBX,0x1
00653EDA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00653EDD  0F 95 C1                  SETNZ CL
00653EE0  41                        INC ECX
LAB_00653ee1:
00653EE1  8B 02                     MOV EAX,dword ptr [EDX]
00653EE3  33 DB                     XOR EBX,EBX
00653EE5  88 88 50 99 80 00         MOV byte ptr [EAX + 0x809950],CL
00653EEB  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
00653EF1  3B C3                     CMP EAX,EBX
00653EF3  75 13                     JNZ 0x00653f08
00653EF5  8B 9D A8 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffea8]
00653EFB  33 C0                     XOR EAX,EAX
00653EFD  83 FB 01                  CMP EBX,0x1
00653F00  0F 94 C0                  SETZ AL
00653F03  A3 22 C5 80 00            MOV [0x0080c522],EAX
LAB_00653f08:
00653F08  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00653F0B  83 C2 04                  ADD EDX,0x4
00653F0E  48                        DEC EAX
00653F0F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00653F12  75 CD                     JNZ 0x00653ee1
00653F14  E9 5A 5B 00 00            JMP 0x00659a73
switchD_00653ded::caseD_55b:
00653F19  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00653F1F  51                        PUSH ECX
00653F20  E8 AB EC DA FF            CALL 0x00402bd0
00653F25  83 C4 04                  ADD ESP,0x4
00653F28  85 C0                     TEST EAX,EAX
00653F2A  0F 84 69 EB FF FF         JZ 0x00652a99
00653F30  8B 16                     MOV EDX,dword ptr [ESI]
00653F32  8B CE                     MOV ECX,ESI
00653F34  FF 52 18                  CALL dword ptr [EDX + 0x18]
00653F37  83 F8 08                  CMP EAX,0x8
00653F3A  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00653F40  75 09                     JNZ 0x00653f4b
00653F42  83 F8 09                  CMP EAX,0x9
00653F45  0F 84 4E EB FF FF         JZ 0x00652a99
LAB_00653f4b:
00653F4B  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00653F51  8D 4D D0                  LEA ECX,[EBP + -0x30]
00653F54  51                        PUSH ECX
00653F55  52                        PUSH EDX
00653F56  50                        PUSH EAX
00653F57  8B CE                     MOV ECX,ESI
00653F59  E8 5A D7 DA FF            CALL 0x004016b8
00653F5E  33 C9                     XOR ECX,ECX
00653F60  85 C0                     TEST EAX,EAX
00653F62  0F 8E 0B 5B 00 00         JLE 0x00659a73
00653F68  33 DB                     XOR EBX,EBX
00653F6A  8D 55 D0                  LEA EDX,[EBP + -0x30]
00653F6D  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_00653f73:
00653F73  39 1A                     CMP dword ptr [EDX],EBX
00653F75  74 0D                     JZ 0x00653f84
00653F77  41                        INC ECX
00653F78  83 C2 04                  ADD EDX,0x4
00653F7B  3B C8                     CMP ECX,EAX
00653F7D  7C F4                     JL 0x00653f73
00653F7F  E9 EF 5A 00 00            JMP 0x00659a73
LAB_00653f84:
00653F84  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00653F8A  80 38 00                  CMP byte ptr [EAX],0x0
00653F8D  0F 84 E0 5A 00 00         JZ 0x00659a73
00653F93  A0 A0 87 80 00            MOV AL,[0x008087a0]
00653F98  3C 03                     CMP AL,0x3
00653F9A  74 08                     JZ 0x00653fa4
00653F9C  3C 08                     CMP AL,0x8
00653F9E  0F 85 CF 5A 00 00         JNZ 0x00659a73
LAB_00653fa4:
00653FA4  6A 00                     PUSH 0x0
00653FA6  8D 8D 80 FC FF FF         LEA ECX,[EBP + 0xfffffc80]
00653FAC  6A 00                     PUSH 0x0
00653FAE  51                        PUSH ECX
00653FAF  6A 00                     PUSH 0x0
00653FB1  68 1E EF 80 00            PUSH 0x80ef1e
00653FB6  E8 75 A7 0D 00            CALL 0x0072e730
00653FBB  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00653FC1  6A 00                     PUSH 0x0
00653FC3  8D 85 80 FC FF FF         LEA EAX,[EBP + 0xfffffc80]
00653FC9  52                        PUSH EDX
00653FCA  50                        PUSH EAX
00653FCB  6A 00                     PUSH 0x0
00653FCD  68 32 C6 80 00            PUSH 0x80c632
00653FD2  E8 39 B1 0D 00            CALL 0x0072f110
00653FD7  83 C4 28                  ADD ESP,0x28
00653FDA  E9 94 5A 00 00            JMP 0x00659a73
switchD_00653ded::caseD_55c:
00653FDF  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00653FE5  51                        PUSH ECX
00653FE6  E8 62 E7 DA FF            CALL 0x0040274d
00653FEB  83 C4 04                  ADD ESP,0x4
00653FEE  85 C0                     TEST EAX,EAX
00653FF0  0F 84 A3 EA FF FF         JZ 0x00652a99
00653FF6  8B 16                     MOV EDX,dword ptr [ESI]
00653FF8  8B CE                     MOV ECX,ESI
00653FFA  FF 52 18                  CALL dword ptr [EDX + 0x18]
00653FFD  83 F8 08                  CMP EAX,0x8
00654000  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00654006  75 09                     JNZ 0x00654011
00654008  83 F8 09                  CMP EAX,0x9
0065400B  0F 84 88 EA FF FF         JZ 0x00652a99
LAB_00654011:
00654011  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00654017  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065401A  51                        PUSH ECX
0065401B  52                        PUSH EDX
0065401C  50                        PUSH EAX
0065401D  8B CE                     MOV ECX,ESI
0065401F  E8 94 D6 DA FF            CALL 0x004016b8
00654024  33 C9                     XOR ECX,ECX
00654026  85 C0                     TEST EAX,EAX
00654028  0F 8E 45 5A 00 00         JLE 0x00659a73
0065402E  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
LAB_00654034:
00654034  33 DB                     XOR EBX,EBX
00654036  89 14 8D 47 C9 80 00      MOV dword ptr [ECX*0x4 + 0x80c947],EDX
0065403D  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
00654043  39 5C 8D D0               CMP dword ptr [EBP + ECX*0x4 + -0x30],EBX
00654047  75 0C                     JNZ 0x00654055
00654049  8A 9D A8 FE FF FF         MOV BL,byte ptr [EBP + 0xfffffea8]
0065404F  88 1D 01 E3 80 00         MOV byte ptr [0x0080e301],BL
LAB_00654055:
00654055  41                        INC ECX
00654056  3B C8                     CMP ECX,EAX
00654058  7C DA                     JL 0x00654034
0065405A  E9 14 5A 00 00            JMP 0x00659a73
switchD_00653ded::caseD_55d:
0065405F  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00654065  50                        PUSH EAX
00654066  E8 EA D9 DA FF            CALL 0x00401a55
0065406B  83 C4 04                  ADD ESP,0x4
0065406E  85 C0                     TEST EAX,EAX
00654070  0F 84 23 EA FF FF         JZ 0x00652a99
00654076  8B 16                     MOV EDX,dword ptr [ESI]
00654078  8B CE                     MOV ECX,ESI
0065407A  FF 52 18                  CALL dword ptr [EDX + 0x18]
0065407D  83 F8 08                  CMP EAX,0x8
00654080  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00654086  75 09                     JNZ 0x00654091
00654088  83 F8 09                  CMP EAX,0x9
0065408B  0F 84 08 EA FF FF         JZ 0x00652a99
LAB_00654091:
00654091  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00654097  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065409A  51                        PUSH ECX
0065409B  52                        PUSH EDX
0065409C  50                        PUSH EAX
0065409D  8B CE                     MOV ECX,ESI
0065409F  E8 14 D6 DA FF            CALL 0x004016b8
006540A4  33 C9                     XOR ECX,ECX
006540A6  85 C0                     TEST EAX,EAX
006540A8  0F 8E C5 59 00 00         JLE 0x00659a73
006540AE  33 DB                     XOR EBX,EBX
006540B0  8D 55 D0                  LEA EDX,[EBP + -0x30]
006540B3  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_006540b9:
006540B9  39 1A                     CMP dword ptr [EDX],EBX
006540BB  74 0D                     JZ 0x006540ca
006540BD  41                        INC ECX
006540BE  83 C2 04                  ADD EDX,0x4
006540C1  3B C8                     CMP ECX,EAX
006540C3  7C F4                     JL 0x006540b9
006540C5  E9 A9 59 00 00            JMP 0x00659a73
LAB_006540ca:
006540CA  8A 85 A8 FE FF FF         MOV AL,byte ptr [EBP + 0xfffffea8]
006540D0  B9 08 00 00 00            MOV ECX,0x8
006540D5  A2 00 E3 80 00            MOV [0x0080e300],AL
006540DA  33 C0                     XOR EAX,EAX
006540DC  BF 03 E3 80 00            MOV EDI,0x80e303
006540E1  6A 1F                     PUSH 0x1f
006540E3  F3 AB                     STOSD.REP ES:EDI
006540E5  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
006540EB  51                        PUSH ECX
006540EC  68 03 E3 80 00            PUSH 0x80e303
006540F1  E8 4A A2 0D 00            CALL 0x0072e340
006540F6  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006540F9  83 C4 0C                  ADD ESP,0xc
006540FC  E9 72 59 00 00            JMP 0x00659a73
switchD_00653ded::caseD_55e:
00654101  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00654107  52                        PUSH EDX
00654108  E8 53 DD DA FF            CALL 0x00401e60
0065410D  83 C4 04                  ADD ESP,0x4
00654110  85 C0                     TEST EAX,EAX
00654112  0F 84 81 E9 FF FF         JZ 0x00652a99
00654118  8B 06                     MOV EAX,dword ptr [ESI]
0065411A  8B CE                     MOV ECX,ESI
0065411C  FF 50 18                  CALL dword ptr [EAX + 0x18]
0065411F  83 F8 08                  CMP EAX,0x8
00654122  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00654128  75 09                     JNZ 0x00654133
0065412A  83 F8 09                  CMP EAX,0x9
0065412D  0F 84 66 E9 FF FF         JZ 0x00652a99
LAB_00654133:
00654133  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00654139  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065413C  51                        PUSH ECX
0065413D  52                        PUSH EDX
0065413E  50                        PUSH EAX
0065413F  8B CE                     MOV ECX,ESI
00654141  E8 72 D5 DA FF            CALL 0x004016b8
00654146  33 C9                     XOR ECX,ECX
00654148  85 C0                     TEST EAX,EAX
0065414A  0F 8E 23 59 00 00         JLE 0x00659a73
00654150  33 DB                     XOR EBX,EBX
00654152  8D 55 D0                  LEA EDX,[EBP + -0x30]
00654155  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_0065415b:
0065415B  39 1A                     CMP dword ptr [EDX],EBX
0065415D  74 0D                     JZ 0x0065416c
0065415F  41                        INC ECX
00654160  83 C2 04                  ADD EDX,0x4
00654163  3B C8                     CMP ECX,EAX
00654165  7C F4                     JL 0x0065415b
00654167  E9 07 59 00 00            JMP 0x00659a73
LAB_0065416c:
0065416C  8A 85 A8 FE FF FF         MOV AL,byte ptr [EBP + 0xfffffea8]
00654172  8A 8D B0 FE FF FF         MOV CL,byte ptr [EBP + 0xfffffeb0]
00654178  8A 95 B4 FE FF FF         MOV DL,byte ptr [EBP + 0xfffffeb4]
0065417E  A2 02 E3 80 00            MOV [0x0080e302],AL
00654183  8A 85 B8 FE FF FF         MOV AL,byte ptr [EBP + 0xfffffeb8]
00654189  88 0D 29 E4 80 00         MOV byte ptr [0x0080e429],CL
0065418F  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
00654195  A2 28 E4 80 00            MOV [0x0080e428],AL
0065419A  8B 85 C4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec4]
006541A0  88 15 27 E4 80 00         MOV byte ptr [0x0080e427],DL
006541A6  8B 95 C0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec0]
006541AC  A3 32 E4 80 00            MOV [0x0080e432],EAX
006541B1  A0 A0 87 80 00            MOV AL,[0x008087a0]
006541B6  89 0D 2A E4 80 00         MOV dword ptr [0x0080e42a],ECX
006541BC  8B 8D C8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec8]
006541C2  89 15 2E E4 80 00         MOV dword ptr [0x0080e42e],EDX
006541C8  8A 95 CC FE FF FF         MOV DL,byte ptr [EBP + 0xfffffecc]
006541CE  3C 03                     CMP AL,0x3
006541D0  89 0D 36 E4 80 00         MOV dword ptr [0x0080e436],ECX
006541D6  88 15 3A E4 80 00         MOV byte ptr [0x0080e43a],DL
006541DC  74 2C                     JZ 0x0065420a
006541DE  3C 08                     CMP AL,0x8
006541E0  0F 85 8D 58 00 00         JNZ 0x00659a73
006541E6  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
006541EC  50                        PUSH EAX
006541ED  68 84 77 80 00            PUSH 0x807784
006541F2  68 E4 6E 7C 00            PUSH 0x7c6ee4
006541F7  68 23 E3 80 00            PUSH 0x80e323
006541FC  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00654202  83 C4 10                  ADD ESP,0x10
00654205  E9 69 58 00 00            JMP 0x00659a73
LAB_0065420a:
0065420A  6A 00                     PUSH 0x0
0065420C  8D 8D 80 FB FF FF         LEA ECX,[EBP + 0xfffffb80]
00654212  6A 00                     PUSH 0x0
00654214  51                        PUSH ECX
00654215  6A 00                     PUSH 0x0
00654217  68 1E EF 80 00            PUSH 0x80ef1e
0065421C  E8 0F A5 0D 00            CALL 0x0072e730
00654221  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00654227  6A 00                     PUSH 0x0
00654229  8D 85 80 FB FF FF         LEA EAX,[EBP + 0xfffffb80]
0065422F  52                        PUSH EDX
00654230  50                        PUSH EAX
00654231  6A 00                     PUSH 0x0
00654233  68 3A F3 80 00            PUSH 0x80f33a
00654238  E8 D3 AE 0D 00            CALL 0x0072f110
0065423D  68 3A F3 80 00            PUSH 0x80f33a
00654242  68 84 77 80 00            PUSH 0x807784
00654247  68 E4 6E 7C 00            PUSH 0x7c6ee4
0065424C  68 23 E3 80 00            PUSH 0x80e323
00654251  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00654257  83 C4 38                  ADD ESP,0x38
0065425A  E9 14 58 00 00            JMP 0x00659a73
switchD_00653ded::caseD_55f:
0065425F  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00654265  51                        PUSH ECX
00654266  E8 D4 10 DB FF            CALL 0x0040533f
0065426B  83 C4 04                  ADD ESP,0x4
0065426E  85 C0                     TEST EAX,EAX
00654270  0F 84 23 E8 FF FF         JZ 0x00652a99
00654276  8B 16                     MOV EDX,dword ptr [ESI]
00654278  8B CE                     MOV ECX,ESI
0065427A  FF 52 18                  CALL dword ptr [EDX + 0x18]
0065427D  83 F8 08                  CMP EAX,0x8
00654280  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00654286  75 09                     JNZ 0x00654291
00654288  83 F8 09                  CMP EAX,0x9
0065428B  0F 84 08 E8 FF FF         JZ 0x00652a99
LAB_00654291:
00654291  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00654297  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065429A  51                        PUSH ECX
0065429B  52                        PUSH EDX
0065429C  50                        PUSH EAX
0065429D  8B CE                     MOV ECX,ESI
0065429F  E8 14 D4 DA FF            CALL 0x004016b8
006542A4  33 C9                     XOR ECX,ECX
006542A6  85 C0                     TEST EAX,EAX
006542A8  0F 8E C5 57 00 00         JLE 0x00659a73
006542AE  33 DB                     XOR EBX,EBX
006542B0  8D 55 D0                  LEA EDX,[EBP + -0x30]
006542B3  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_006542b9:
006542B9  39 1A                     CMP dword ptr [EDX],EBX
006542BB  74 0D                     JZ 0x006542ca
006542BD  41                        INC ECX
006542BE  83 C2 04                  ADD EDX,0x4
006542C1  3B C8                     CMP ECX,EAX
006542C3  7C F4                     JL 0x006542b9
006542C5  E9 A9 57 00 00            JMP 0x00659a73
LAB_006542ca:
006542CA  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
006542D0  8B 0D CB C4 80 00         MOV ECX,dword ptr [0x0080c4cb]
006542D6  50                        PUSH EAX
006542D7  51                        PUSH ECX
006542D8  E8 C3 17 06 00            CALL 0x006b5aa0
006542DD  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
006542E3  8B D8                     MOV EBX,EAX
006542E5  85 C9                     TEST ECX,ECX
006542E7  74 05                     JZ 0x006542ee
006542E9  E8 99 D2 DA FF            CALL 0x00401587
LAB_006542ee:
006542EE  85 DB                     TEST EBX,EBX
006542F0  0F 8C 7D 57 00 00         JL 0x00659a73
006542F6  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006542FC  89 9C 96 DE 00 00 00      MOV dword ptr [ESI + EDX*0x4 + 0xde],EBX
00654303  E9 6B 57 00 00            JMP 0x00659a73
switchD_00653ded::caseD_560:
00654308  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
0065430E  50                        PUSH EAX
0065430F  E8 98 1B DB FF            CALL 0x00405eac
00654314  83 C4 04                  ADD ESP,0x4
00654317  85 C0                     TEST EAX,EAX
00654319  0F 84 7A E7 FF FF         JZ 0x00652a99
0065431F  8B 16                     MOV EDX,dword ptr [ESI]
00654321  8B CE                     MOV ECX,ESI
00654323  FF 52 18                  CALL dword ptr [EDX + 0x18]
00654326  83 F8 08                  CMP EAX,0x8
00654329  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
0065432F  75 09                     JNZ 0x0065433a
00654331  83 F8 09                  CMP EAX,0x9
00654334  0F 84 5F E7 FF FF         JZ 0x00652a99
LAB_0065433a:
0065433A  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00654340  8D 4D D0                  LEA ECX,[EBP + -0x30]
00654343  51                        PUSH ECX
00654344  52                        PUSH EDX
00654345  50                        PUSH EAX
00654346  8B CE                     MOV ECX,ESI
00654348  E8 6B D3 DA FF            CALL 0x004016b8
0065434D  33 C9                     XOR ECX,ECX
0065434F  85 C0                     TEST EAX,EAX
00654351  0F 8E 1C 57 00 00         JLE 0x00659a73
00654357  33 DB                     XOR EBX,EBX
00654359  8D 55 D0                  LEA EDX,[EBP + -0x30]
0065435C  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_00654362:
00654362  39 1A                     CMP dword ptr [EDX],EBX
00654364  74 0D                     JZ 0x00654373
00654366  41                        INC ECX
00654367  83 C2 04                  ADD EDX,0x4
0065436A  3B C8                     CMP ECX,EAX
0065436C  7C F4                     JL 0x00654362
0065436E  E9 00 57 00 00            JMP 0x00659a73
LAB_00654373:
00654373  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00654379  8B 0D CB C4 80 00         MOV ECX,dword ptr [0x0080c4cb]
0065437F  50                        PUSH EAX
00654380  51                        PUSH ECX
00654381  E8 3A 44 07 00            CALL 0x006c87c0
LAB_00654386:
00654386  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
0065438C  85 C9                     TEST ECX,ECX
0065438E  0F 84 DF 56 00 00         JZ 0x00659a73
00654394  E8 EE D1 DA FF            CALL 0x00401587
00654399  E9 D5 56 00 00            JMP 0x00659a73
switchD_00653ded::caseD_561:
0065439E  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
006543A4  52                        PUSH EDX
006543A5  E8 06 12 DB FF            CALL 0x004055b0
006543AA  83 C4 04                  ADD ESP,0x4
006543AD  85 C0                     TEST EAX,EAX
006543AF  0F 84 E4 E6 FF FF         JZ 0x00652a99
006543B5  8B 06                     MOV EAX,dword ptr [ESI]
006543B7  8B CE                     MOV ECX,ESI
006543B9  FF 50 18                  CALL dword ptr [EAX + 0x18]
006543BC  83 F8 08                  CMP EAX,0x8
006543BF  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006543C5  75 09                     JNZ 0x006543d0
006543C7  83 F8 09                  CMP EAX,0x9
006543CA  0F 84 C9 E6 FF FF         JZ 0x00652a99
LAB_006543d0:
006543D0  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006543D6  8D 4D D0                  LEA ECX,[EBP + -0x30]
006543D9  51                        PUSH ECX
006543DA  52                        PUSH EDX
006543DB  50                        PUSH EAX
006543DC  8B CE                     MOV ECX,ESI
006543DE  E8 D5 D2 DA FF            CALL 0x004016b8
006543E3  33 C9                     XOR ECX,ECX
006543E5  85 C0                     TEST EAX,EAX
006543E7  0F 8E 86 56 00 00         JLE 0x00659a73
006543ED  33 DB                     XOR EBX,EBX
006543EF  8D 55 D0                  LEA EDX,[EBP + -0x30]
006543F2  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_006543f8:
006543F8  39 1A                     CMP dword ptr [EDX],EBX
006543FA  74 0D                     JZ 0x00654409
006543FC  41                        INC ECX
006543FD  83 C2 04                  ADD EDX,0x4
00654400  3B C8                     CMP ECX,EAX
00654402  7C F4                     JL 0x006543f8
00654404  E9 6A 56 00 00            JMP 0x00659a73
LAB_00654409:
00654409  A1 CB C4 80 00            MOV EAX,[0x0080c4cb]
0065440E  85 C0                     TEST EAX,EAX
00654410  74 06                     JZ 0x00654418
00654412  50                        PUSH EAX
00654413  E8 58 11 06 00            CALL 0x006b5570
LAB_00654418:
00654418  6A 0A                     PUSH 0xa
0065441A  6A 0A                     PUSH 0xa
0065441C  6A 00                     PUSH 0x0
0065441E  E8 CD 10 06 00            CALL 0x006b54f0
00654423  A3 CB C4 80 00            MOV [0x0080c4cb],EAX
00654428  E9 59 FF FF FF            JMP 0x00654386
switchD_00653ded::caseD_562:
0065442D  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00654433  50                        PUSH EAX
00654434  E8 06 0F DB FF            CALL 0x0040533f
00654439  83 C4 04                  ADD ESP,0x4
0065443C  85 C0                     TEST EAX,EAX
0065443E  0F 84 55 E6 FF FF         JZ 0x00652a99
00654444  8B 16                     MOV EDX,dword ptr [ESI]
00654446  8B CE                     MOV ECX,ESI
00654448  FF 52 18                  CALL dword ptr [EDX + 0x18]
0065444B  83 F8 08                  CMP EAX,0x8
0065444E  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00654454  75 09                     JNZ 0x0065445f
00654456  83 F8 09                  CMP EAX,0x9
00654459  0F 84 3A E6 FF FF         JZ 0x00652a99
LAB_0065445f:
0065445F  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00654465  8D 4D D0                  LEA ECX,[EBP + -0x30]
00654468  51                        PUSH ECX
00654469  52                        PUSH EDX
0065446A  50                        PUSH EAX
0065446B  8B CE                     MOV ECX,ESI
0065446D  E8 46 D2 DA FF            CALL 0x004016b8
00654472  33 C9                     XOR ECX,ECX
00654474  85 C0                     TEST EAX,EAX
00654476  0F 8E F7 55 00 00         JLE 0x00659a73
0065447C  33 DB                     XOR EBX,EBX
0065447E  8D 55 D0                  LEA EDX,[EBP + -0x30]
00654481  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_00654487:
00654487  39 1A                     CMP dword ptr [EDX],EBX
00654489  74 0D                     JZ 0x00654498
0065448B  41                        INC ECX
0065448C  83 C2 04                  ADD EDX,0x4
0065448F  3B C8                     CMP ECX,EAX
00654491  7C F4                     JL 0x00654487
00654493  E9 DB 55 00 00            JMP 0x00659a73
LAB_00654498:
00654498  A1 C7 C4 80 00            MOV EAX,[0x0080c4c7]
0065449D  85 C0                     TEST EAX,EAX
0065449F  75 0F                     JNZ 0x006544b0
006544A1  6A 0A                     PUSH 0xa
006544A3  6A 0A                     PUSH 0xa
006544A5  50                        PUSH EAX
006544A6  E8 45 10 06 00            CALL 0x006b54f0
006544AB  A3 C7 C4 80 00            MOV [0x0080c4c7],EAX
LAB_006544b0:
006544B0  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
006544B6  51                        PUSH ECX
006544B7  50                        PUSH EAX
006544B8  E8 E3 15 06 00            CALL 0x006b5aa0
006544BD  85 C0                     TEST EAX,EAX
006544BF  0F 8C AE 55 00 00         JL 0x00659a73
006544C5  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006544CB  89 84 96 DE 00 00 00      MOV dword ptr [ESI + EDX*0x4 + 0xde],EAX
006544D2  E9 9C 55 00 00            JMP 0x00659a73
switchD_00653ded::caseD_563:
006544D7  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
006544DD  50                        PUSH EAX
006544DE  E8 C9 19 DB FF            CALL 0x00405eac
006544E3  83 C4 04                  ADD ESP,0x4
006544E6  85 C0                     TEST EAX,EAX
006544E8  0F 84 AB E5 FF FF         JZ 0x00652a99
006544EE  8B 16                     MOV EDX,dword ptr [ESI]
006544F0  8B CE                     MOV ECX,ESI
006544F2  FF 52 18                  CALL dword ptr [EDX + 0x18]
006544F5  83 F8 08                  CMP EAX,0x8
006544F8  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006544FE  75 09                     JNZ 0x00654509
00654500  83 F8 09                  CMP EAX,0x9
00654503  0F 84 90 E5 FF FF         JZ 0x00652a99
LAB_00654509:
00654509  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065450F  8D 4D D0                  LEA ECX,[EBP + -0x30]
00654512  51                        PUSH ECX
00654513  52                        PUSH EDX
00654514  50                        PUSH EAX
00654515  8B CE                     MOV ECX,ESI
00654517  E8 9C D1 DA FF            CALL 0x004016b8
0065451C  33 C9                     XOR ECX,ECX
0065451E  85 C0                     TEST EAX,EAX
00654520  0F 8E 4D 55 00 00         JLE 0x00659a73
00654526  33 DB                     XOR EBX,EBX
00654528  8D 55 D0                  LEA EDX,[EBP + -0x30]
0065452B  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_00654531:
00654531  39 1A                     CMP dword ptr [EDX],EBX
00654533  74 0D                     JZ 0x00654542
00654535  41                        INC ECX
00654536  83 C2 04                  ADD EDX,0x4
00654539  3B C8                     CMP ECX,EAX
0065453B  7C F4                     JL 0x00654531
0065453D  E9 31 55 00 00            JMP 0x00659a73
LAB_00654542:
00654542  A1 C7 C4 80 00            MOV EAX,[0x0080c4c7]
00654547  85 C0                     TEST EAX,EAX
00654549  0F 84 24 55 00 00         JZ 0x00659a73
0065454F  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
00654555  51                        PUSH ECX
00654556  50                        PUSH EAX
00654557  E8 64 42 07 00            CALL 0x006c87c0
0065455C  E9 12 55 00 00            JMP 0x00659a73
switchD_00653ded::caseD_564:
00654561  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00654567  52                        PUSH EDX
00654568  E8 43 10 DB FF            CALL 0x004055b0
0065456D  83 C4 04                  ADD ESP,0x4
00654570  85 C0                     TEST EAX,EAX
00654572  0F 84 21 E5 FF FF         JZ 0x00652a99
00654578  8B 06                     MOV EAX,dword ptr [ESI]
0065457A  8B CE                     MOV ECX,ESI
0065457C  FF 50 18                  CALL dword ptr [EAX + 0x18]
0065457F  83 F8 08                  CMP EAX,0x8
00654582  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00654588  75 09                     JNZ 0x00654593
0065458A  83 F8 09                  CMP EAX,0x9
0065458D  0F 84 06 E5 FF FF         JZ 0x00652a99
LAB_00654593:
00654593  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00654599  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065459C  51                        PUSH ECX
0065459D  52                        PUSH EDX
0065459E  50                        PUSH EAX
0065459F  8B CE                     MOV ECX,ESI
006545A1  E8 12 D1 DA FF            CALL 0x004016b8
006545A6  33 C9                     XOR ECX,ECX
006545A8  85 C0                     TEST EAX,EAX
006545AA  0F 8E C3 54 00 00         JLE 0x00659a73
006545B0  33 DB                     XOR EBX,EBX
006545B2  8D 55 D0                  LEA EDX,[EBP + -0x30]
006545B5  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_006545bb:
006545BB  39 1A                     CMP dword ptr [EDX],EBX
006545BD  74 0D                     JZ 0x006545cc
006545BF  41                        INC ECX
006545C0  83 C2 04                  ADD EDX,0x4
006545C3  3B C8                     CMP ECX,EAX
006545C5  7C F4                     JL 0x006545bb
006545C7  E9 A7 54 00 00            JMP 0x00659a73
LAB_006545cc:
006545CC  A1 C7 C4 80 00            MOV EAX,[0x0080c4c7]
006545D1  85 C0                     TEST EAX,EAX
006545D3  74 06                     JZ 0x006545db
006545D5  50                        PUSH EAX
006545D6  E8 95 0F 06 00            CALL 0x006b5570
LAB_006545db:
006545DB  6A 0A                     PUSH 0xa
006545DD  6A 0A                     PUSH 0xa
006545DF  6A 00                     PUSH 0x0
006545E1  E8 0A 0F 06 00            CALL 0x006b54f0
006545E6  A3 C7 C4 80 00            MOV [0x0080c4c7],EAX
006545EB  E9 83 54 00 00            JMP 0x00659a73
switchD_00653ded::caseD_565:
006545F0  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
006545F6  50                        PUSH EAX
006545F7  E8 31 E3 DA FF            CALL 0x0040292d
006545FC  83 C4 04                  ADD ESP,0x4
006545FF  85 C0                     TEST EAX,EAX
00654601  0F 84 92 E4 FF FF         JZ 0x00652a99
00654607  8B 16                     MOV EDX,dword ptr [ESI]
00654609  8B CE                     MOV ECX,ESI
0065460B  FF 52 18                  CALL dword ptr [EDX + 0x18]
0065460E  83 F8 08                  CMP EAX,0x8
00654611  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00654617  75 16                     JNZ 0x0065462f
00654619  83 F8 09                  CMP EAX,0x9
0065461C  0F 84 77 E4 FF FF         JZ 0x00652a99
00654622  83 BD A0 FE FF FF 09      CMP dword ptr [EBP + 0xfffffea0],0x9
00654629  0F 84 6A E4 FF FF         JZ 0x00652a99
LAB_0065462f:
0065462F  3D FF 00 00 00            CMP EAX,0xff
00654634  0F 84 5F E4 FF FF         JZ 0x00652a99
0065463A  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065463D  51                        PUSH ECX
0065463E  6A 00                     PUSH 0x0
00654640  50                        PUSH EAX
00654641  8B CE                     MOV ECX,ESI
00654643  E8 70 D0 DA FF            CALL 0x004016b8
00654648  83 F8 01                  CMP EAX,0x1
0065464B  0F 85 48 E4 FF FF         JNZ 0x00652a99
00654651  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00654654  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
0065465A  8D 45 D0                  LEA EAX,[EBP + -0x30]
0065465D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00654660  8B 95 A0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea0]
00654666  50                        PUSH EAX
00654667  51                        PUSH ECX
00654668  52                        PUSH EDX
00654669  8B CE                     MOV ECX,ESI
0065466B  E8 48 D0 DA FF            CALL 0x004016b8
00654670  85 C0                     TEST EAX,EAX
00654672  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00654675  7E 37                     JLE 0x006546ae
00654677  81 FB 65 05 00 00         CMP EBX,0x565
0065467D  8D 5D D0                  LEA EBX,[EBP + -0x30]
00654680  0F 94 85 64 FE FF FF      SETZ byte ptr [EBP + 0xfffffe64]
00654687  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0065468a:
0065468A  8B 8D 64 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe64]
00654690  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00654693  8A 03                     MOV AL,byte ptr [EBX]
00654695  51                        PUSH ECX
00654696  52                        PUSH EDX
00654697  50                        PUSH EAX
00654698  B9 20 76 80 00            MOV ECX,0x807620
0065469D  E8 70 CB DA FF            CALL 0x00401212
006546A2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006546A5  83 C3 04                  ADD EBX,0x4
006546A8  48                        DEC EAX
006546A9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006546AC  75 DC                     JNZ 0x0065468a
LAB_006546ae:
006546AE  8B 1D E4 16 80 00         MOV EBX,dword ptr [0x008016e4]
006546B4  85 DB                     TEST EBX,EBX
006546B6  0F 84 B7 53 00 00         JZ 0x00659a73
006546BC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006546BF  85 C0                     TEST EAX,EAX
006546C1  0F 84 AC 53 00 00         JZ 0x00659a73
006546C7  8D 8B 81 01 00 00         LEA ECX,[EBX + 0x181]
006546CD  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
006546D4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006546D7  C7 45 F8 08 00 00 00      MOV dword ptr [EBP + -0x8],0x8
LAB_006546de:
006546DE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006546E1  8B 02                     MOV EAX,dword ptr [EDX]
006546E3  85 C0                     TEST EAX,EAX
006546E5  74 0E                     JZ 0x006546f5
006546E7  8D 4B 18                  LEA ECX,[EBX + 0x18]
006546EA  51                        PUSH ECX
006546EB  50                        PUSH EAX
006546EC  6A 02                     PUSH 0x2
006546EE  8B CB                     MOV ECX,EBX
006546F0  E8 8B 19 09 00            CALL 0x006e6080
LAB_006546f5:
006546F5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006546F8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006546FB  83 C1 04                  ADD ECX,0x4
006546FE  48                        DEC EAX
006546FF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00654702  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00654705  75 D7                     JNZ 0x006546de
00654707  E9 67 53 00 00            JMP 0x00659a73
switchD_00653ded::caseD_567:
0065470C  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00654712  52                        PUSH EDX
00654713  E8 C7 11 DB FF            CALL 0x004058df
00654718  83 C4 04                  ADD ESP,0x4
0065471B  85 C0                     TEST EAX,EAX
0065471D  0F 84 76 E3 FF FF         JZ 0x00652a99
00654723  8B 06                     MOV EAX,dword ptr [ESI]
00654725  8B CE                     MOV ECX,ESI
00654727  FF 50 18                  CALL dword ptr [EAX + 0x18]
0065472A  83 F8 08                  CMP EAX,0x8
0065472D  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00654733  75 09                     JNZ 0x0065473e
00654735  83 F8 09                  CMP EAX,0x9
00654738  0F 84 5B E3 FF FF         JZ 0x00652a99
LAB_0065473e:
0065473E  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00654744  8D 4D D0                  LEA ECX,[EBP + -0x30]
00654747  51                        PUSH ECX
00654748  52                        PUSH EDX
00654749  50                        PUSH EAX
0065474A  8B CE                     MOV ECX,ESI
0065474C  E8 67 CF DA FF            CALL 0x004016b8
00654751  85 C0                     TEST EAX,EAX
00654753  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00654756  7E 29                     JLE 0x00654781
00654758  8D 5D D0                  LEA EBX,[EBP + -0x30]
0065475B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0065475e:
0065475E  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
00654764  8A 13                     MOV DL,byte ptr [EBX]
00654766  51                        PUSH ECX
00654767  52                        PUSH EDX
00654768  B9 20 76 80 00            MOV ECX,0x807620
0065476D  E8 26 D6 DA FF            CALL 0x00401d98
00654772  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00654775  83 C3 04                  ADD EBX,0x4
00654778  48                        DEC EAX
00654779  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065477C  75 E0                     JNZ 0x0065475e
0065477E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_00654781:
00654781  8B 1D E4 16 80 00         MOV EBX,dword ptr [0x008016e4]
00654787  85 DB                     TEST EBX,EBX
00654789  0F 84 E4 52 00 00         JZ 0x00659a73
0065478F  85 C0                     TEST EAX,EAX
00654791  0F 84 DC 52 00 00         JZ 0x00659a73
00654797  8D 83 81 01 00 00         LEA EAX,[EBX + 0x181]
0065479D  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
006547A4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006547A7  C7 45 F8 08 00 00 00      MOV dword ptr [EBP + -0x8],0x8
LAB_006547ae:
006547AE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006547B1  8B 01                     MOV EAX,dword ptr [ECX]
006547B3  85 C0                     TEST EAX,EAX
006547B5  74 0E                     JZ 0x006547c5
006547B7  8D 53 18                  LEA EDX,[EBX + 0x18]
006547BA  8B CB                     MOV ECX,EBX
006547BC  52                        PUSH EDX
006547BD  50                        PUSH EAX
006547BE  6A 02                     PUSH 0x2
006547C0  E8 BB 18 09 00            CALL 0x006e6080
LAB_006547c5:
006547C5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006547C8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006547CB  83 C1 04                  ADD ECX,0x4
006547CE  48                        DEC EAX
006547CF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006547D2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006547D5  75 D7                     JNZ 0x006547ae
006547D7  E9 97 52 00 00            JMP 0x00659a73
switchD_00653ded::caseD_568:
006547DC  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
006547E2  50                        PUSH EAX
006547E3  E8 49 D3 DA FF            CALL 0x00401b31
006547E8  83 C4 04                  ADD ESP,0x4
006547EB  85 C0                     TEST EAX,EAX
006547ED  0F 84 A6 E2 FF FF         JZ 0x00652a99
006547F3  8B 16                     MOV EDX,dword ptr [ESI]
006547F5  8B CE                     MOV ECX,ESI
006547F7  FF 52 18                  CALL dword ptr [EDX + 0x18]
006547FA  83 F8 08                  CMP EAX,0x8
006547FD  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00654803  75 09                     JNZ 0x0065480e
00654805  83 F8 09                  CMP EAX,0x9
00654808  0F 84 8B E2 FF FF         JZ 0x00652a99
LAB_0065480e:
0065480E  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00654814  8D 4D D0                  LEA ECX,[EBP + -0x30]
00654817  51                        PUSH ECX
00654818  52                        PUSH EDX
00654819  50                        PUSH EAX
0065481A  8B CE                     MOV ECX,ESI
0065481C  E8 97 CE DA FF            CALL 0x004016b8
00654821  33 C9                     XOR ECX,ECX
00654823  85 C0                     TEST EAX,EAX
00654825  0F 8E 48 52 00 00         JLE 0x00659a73
0065482B  33 DB                     XOR EBX,EBX
0065482D  8D 55 D0                  LEA EDX,[EBP + -0x30]
00654830  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
LAB_00654836:
00654836  39 1A                     CMP dword ptr [EDX],EBX
00654838  74 0D                     JZ 0x00654847
0065483A  41                        INC ECX
0065483B  83 C2 04                  ADD EDX,0x4
0065483E  3B C8                     CMP ECX,EAX
00654840  7C F4                     JL 0x00654836
00654842  E9 2C 52 00 00            JMP 0x00659a73
LAB_00654847:
00654847  C7 05 90 87 80 00 01 00 00 00  MOV dword ptr [0x00808790],0x1
00654851  E9 1D 52 00 00            JMP 0x00659a73
switchD_00653ded::caseD_56a:
00654856  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
0065485C  50                        PUSH EAX
0065485D  E8 0A DE DA FF            CALL 0x0040266c
00654862  83 C4 04                  ADD ESP,0x4
00654865  85 C0                     TEST EAX,EAX
00654867  0F 84 2C E2 FF FF         JZ 0x00652a99
0065486D  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
00654873  51                        PUSH ECX
00654874  B9 20 76 80 00            MOV ECX,0x807620
00654879  E8 1B E3 DA FF            CALL 0x00402b99
0065487E  E9 F0 51 00 00            JMP 0x00659a73
switchD_00653ded::caseD_578:
00654883  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00654889  52                        PUSH EDX
0065488A  E8 02 D7 DA FF            CALL 0x00401f91
0065488F  83 C4 04                  ADD ESP,0x4
00654892  85 C0                     TEST EAX,EAX
00654894  0F 84 FF E1 FF FF         JZ 0x00652a99
0065489A  8B 06                     MOV EAX,dword ptr [ESI]
0065489C  8B CE                     MOV ECX,ESI
0065489E  FF 50 18                  CALL dword ptr [EAX + 0x18]
006548A1  83 F8 08                  CMP EAX,0x8
006548A4  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006548AA  75 09                     JNZ 0x006548b5
006548AC  83 F8 09                  CMP EAX,0x9
006548AF  0F 84 E4 E1 FF FF         JZ 0x00652a99
LAB_006548b5:
006548B5  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006548BB  8D 4D D0                  LEA ECX,[EBP + -0x30]
006548BE  51                        PUSH ECX
006548BF  52                        PUSH EDX
006548C0  50                        PUSH EAX
006548C1  8B CE                     MOV ECX,ESI
006548C3  E8 F0 CD DA FF            CALL 0x004016b8
006548C8  85 C0                     TEST EAX,EAX
006548CA  0F 8E A3 51 00 00         JLE 0x00659a73
006548D0  8D 5D D0                  LEA EBX,[EBP + -0x30]
006548D3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006548d6:
006548D6  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
006548DC  85 C0                     TEST EAX,EAX
006548DE  7D 07                     JGE 0x006548e7
006548E0  33 C0                     XOR EAX,EAX
006548E2  A0 91 8A 80 00            MOV AL,[0x00808a91]
LAB_006548e7:
006548E7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006548ED  50                        PUSH EAX
006548EE  8B 03                     MOV EAX,dword ptr [EBX]
006548F0  50                        PUSH EAX
006548F1  E8 F8 E7 DA FF            CALL 0x004030ee
006548F6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006548F9  83 C3 04                  ADD EBX,0x4
006548FC  48                        DEC EAX
006548FD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00654900  75 D4                     JNZ 0x006548d6
00654902  E9 6C 51 00 00            JMP 0x00659a73
switchD_00653ded::caseD_579:
00654907  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
0065490D  51                        PUSH ECX
0065490E  E8 D2 E1 DA FF            CALL 0x00402ae5
00654913  83 C4 04                  ADD ESP,0x4
00654916  85 C0                     TEST EAX,EAX
00654918  0F 84 7B E1 FF FF         JZ 0x00652a99
0065491E  8B 16                     MOV EDX,dword ptr [ESI]
00654920  8B CE                     MOV ECX,ESI
00654922  FF 52 18                  CALL dword ptr [EDX + 0x18]
00654925  83 F8 08                  CMP EAX,0x8
00654928  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
0065492E  75 09                     JNZ 0x00654939
00654930  83 F8 09                  CMP EAX,0x9
00654933  0F 84 60 E1 FF FF         JZ 0x00652a99
LAB_00654939:
00654939  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065493F  8D 4D D0                  LEA ECX,[EBP + -0x30]
00654942  51                        PUSH ECX
00654943  52                        PUSH EDX
00654944  50                        PUSH EAX
00654945  8B CE                     MOV ECX,ESI
00654947  E8 6C CD DA FF            CALL 0x004016b8
0065494C  85 C0                     TEST EAX,EAX
0065494E  0F 8E 1F 51 00 00         JLE 0x00659a73
00654954  8D 5D D0                  LEA EBX,[EBP + -0x30]
00654957  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0065495a:
0065495A  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
00654960  85 C9                     TEST ECX,ECX
00654962  7D 08                     JGE 0x0065496c
00654964  33 C9                     XOR ECX,ECX
00654966  8A 0D 92 8A 80 00         MOV CL,byte ptr [0x00808a92]
LAB_0065496c:
0065496C  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00654972  85 C0                     TEST EAX,EAX
00654974  7D 07                     JGE 0x0065497d
00654976  33 C0                     XOR EAX,EAX
00654978  A0 93 8A 80 00            MOV AL,[0x00808a93]
LAB_0065497d:
0065497D  50                        PUSH EAX
0065497E  8B 03                     MOV EAX,dword ptr [EBX]
00654980  51                        PUSH ECX
00654981  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00654987  50                        PUSH EAX
00654988  E8 61 EC DA FF            CALL 0x004035ee
0065498D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00654990  83 C3 04                  ADD EBX,0x4
00654993  48                        DEC EAX
00654994  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00654997  75 C1                     JNZ 0x0065495a
00654999  E9 D5 50 00 00            JMP 0x00659a73
switchD_00653ded::caseD_57a:
0065499E  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
006549A4  51                        PUSH ECX
006549A5  E8 B3 DC DA FF            CALL 0x0040265d
006549AA  83 C4 04                  ADD ESP,0x4
006549AD  85 C0                     TEST EAX,EAX
006549AF  0F 84 E4 E0 FF FF         JZ 0x00652a99
006549B5  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006549BB  85 C0                     TEST EAX,EAX
006549BD  7D 0A                     JGE 0x006549c9
006549BF  A1 90 8A 80 00            MOV EAX,[0x00808a90]
006549C4  25 FF 00 00 00            AND EAX,0xff
LAB_006549c9:
006549C9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006549CF  50                        PUSH EAX
006549D0  E8 62 D5 DA FF            CALL 0x00401f37
006549D5  E9 99 50 00 00            JMP 0x00659a73
switchD_00653ded::caseD_57b:
006549DA  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
006549E0  52                        PUSH EDX
006549E1  E8 A1 07 DB FF            CALL 0x00405187
006549E6  83 C4 04                  ADD ESP,0x4
006549E9  85 C0                     TEST EAX,EAX
006549EB  0F 84 A8 E0 FF FF         JZ 0x00652a99
006549F1  8B 06                     MOV EAX,dword ptr [ESI]
006549F3  8B CE                     MOV ECX,ESI
006549F5  FF 50 18                  CALL dword ptr [EAX + 0x18]
006549F8  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
006549FE  83 F8 08                  CMP EAX,0x8
00654A01  75 09                     JNZ 0x00654a0c
00654A03  83 F9 09                  CMP ECX,0x9
00654A06  0F 84 8D E0 FF FF         JZ 0x00652a99
LAB_00654a0c:
00654A0C  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00654A12  85 C0                     TEST EAX,EAX
00654A14  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00654A17  7D 0B                     JGE 0x00654a24
00654A19  33 D2                     XOR EDX,EDX
00654A1B  8A 15 9B 8A 80 00         MOV DL,byte ptr [0x00808a9b]
00654A21  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00654a24:
00654A24  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00654A2A  8D 45 D0                  LEA EAX,[EBP + -0x30]
00654A2D  50                        PUSH EAX
00654A2E  52                        PUSH EDX
00654A2F  51                        PUSH ECX
00654A30  8B CE                     MOV ECX,ESI
00654A32  E8 81 CC DA FF            CALL 0x004016b8
00654A37  85 C0                     TEST EAX,EAX
00654A39  0F 8E 34 50 00 00         JLE 0x00659a73
00654A3F  8D 7D D0                  LEA EDI,[EBP + -0x30]
00654A42  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00654a45:
00654A45  8B 0F                     MOV ECX,dword ptr [EDI]
00654A47  33 D2                     XOR EDX,EDX
00654A49  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
00654A4C  8A 94 C0 E8 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087e8]
00654A53  8B C2                     MOV EAX,EDX
00654A55  48                        DEC EAX
00654A56  0F 84 4C 06 00 00         JZ 0x006550a8
00654A5C  48                        DEC EAX
00654A5D  0F 84 BD 03 00 00         JZ 0x00654e20
00654A63  48                        DEC EAX
00654A64  0F 85 CF 08 00 00         JNZ 0x00655339
00654A6A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00654A6D  83 F8 02                  CMP EAX,0x2
00654A70  0F 8F 22 06 00 00         JG 0x00655098
00654A76  0F 84 F7 01 00 00         JZ 0x00654c73
00654A7C  83 E8 00                  SUB EAX,0x0
00654A7F  0F 84 4A 01 00 00         JZ 0x00654bcf
00654A85  48                        DEC EAX
00654A86  0F 85 98 08 00 00         JNZ 0x00655324
00654A8C  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00654A92  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00654A98  6A 00                     PUSH 0x0
00654A9A  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00654AA0  6A 00                     PUSH 0x0
00654AA2  6A 00                     PUSH 0x0
00654AA4  6A 01                     PUSH 0x1
00654AA6  6A 64                     PUSH 0x64
00654AA8  6A 00                     PUSH 0x0
00654AAA  6A FF                     PUSH -0x1
00654AAC  68 FE FF 00 00            PUSH 0xfffe
00654AB1  50                        PUSH EAX
00654AB2  66 8B 07                  MOV AX,word ptr [EDI]
00654AB5  51                        PUSH ECX
00654AB6  52                        PUSH EDX
00654AB7  6A 19                     PUSH 0x19
00654AB9  50                        PUSH EAX
00654ABA  8B CE                     MOV ECX,ESI
00654ABC  E8 54 F1 DA FF            CALL 0x00403c15
00654AC1  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00654AC7  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00654ACD  6A 00                     PUSH 0x0
00654ACF  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00654AD5  6A 00                     PUSH 0x0
00654AD7  6A 00                     PUSH 0x0
00654AD9  6A 01                     PUSH 0x1
00654ADB  6A 64                     PUSH 0x64
00654ADD  6A 00                     PUSH 0x0
00654ADF  6A FF                     PUSH -0x1
00654AE1  68 FE FF 00 00            PUSH 0xfffe
00654AE6  51                        PUSH ECX
00654AE7  66 8B 0F                  MOV CX,word ptr [EDI]
00654AEA  52                        PUSH EDX
00654AEB  50                        PUSH EAX
00654AEC  6A 19                     PUSH 0x19
00654AEE  51                        PUSH ECX
00654AEF  8B CE                     MOV ECX,ESI
00654AF1  E8 1F F1 DA FF            CALL 0x00403c15
00654AF6  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00654AFC  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00654B02  6A 00                     PUSH 0x0
00654B04  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00654B0A  6A 00                     PUSH 0x0
00654B0C  6A 00                     PUSH 0x0
00654B0E  6A 01                     PUSH 0x1
00654B10  6A 64                     PUSH 0x64
00654B12  6A 00                     PUSH 0x0
00654B14  6A FF                     PUSH -0x1
00654B16  68 FE FF 00 00            PUSH 0xfffe
00654B1B  52                        PUSH EDX
00654B1C  66 8B 17                  MOV DX,word ptr [EDI]
00654B1F  50                        PUSH EAX
00654B20  51                        PUSH ECX
00654B21  6A 19                     PUSH 0x19
00654B23  52                        PUSH EDX
00654B24  8B CE                     MOV ECX,ESI
00654B26  E8 EA F0 DA FF            CALL 0x00403c15
00654B2B  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00654B31  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00654B37  6A 00                     PUSH 0x0
00654B39  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00654B3F  6A 00                     PUSH 0x0
00654B41  6A 00                     PUSH 0x0
00654B43  6A 01                     PUSH 0x1
00654B45  6A 64                     PUSH 0x64
00654B47  6A 00                     PUSH 0x0
00654B49  6A FF                     PUSH -0x1
00654B4B  68 FE FF 00 00            PUSH 0xfffe
00654B50  50                        PUSH EAX
00654B51  66 8B 07                  MOV AX,word ptr [EDI]
00654B54  51                        PUSH ECX
00654B55  52                        PUSH EDX
00654B56  6A 1E                     PUSH 0x1e
00654B58  50                        PUSH EAX
00654B59  8B CE                     MOV ECX,ESI
00654B5B  E8 B5 F0 DA FF            CALL 0x00403c15
00654B60  6A 00                     PUSH 0x0
00654B62  6A 00                     PUSH 0x0
00654B64  6A 00                     PUSH 0x0
00654B66  6A 01                     PUSH 0x1
00654B68  6A 64                     PUSH 0x64
00654B6A  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00654B70  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00654B76  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00654B7C  6A 00                     PUSH 0x0
00654B7E  6A FF                     PUSH -0x1
00654B80  68 FE FF 00 00            PUSH 0xfffe
00654B85  51                        PUSH ECX
00654B86  66 8B 0F                  MOV CX,word ptr [EDI]
00654B89  52                        PUSH EDX
00654B8A  50                        PUSH EAX
00654B8B  6A 1E                     PUSH 0x1e
00654B8D  51                        PUSH ECX
00654B8E  8B CE                     MOV ECX,ESI
00654B90  E8 80 F0 DA FF            CALL 0x00403c15
00654B95  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00654B9B  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00654BA1  6A 00                     PUSH 0x0
00654BA3  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00654BA9  6A 00                     PUSH 0x0
00654BAB  6A 00                     PUSH 0x0
00654BAD  6A 01                     PUSH 0x1
00654BAF  6A 64                     PUSH 0x64
00654BB1  6A 00                     PUSH 0x0
00654BB3  6A FF                     PUSH -0x1
00654BB5  68 FE FF 00 00            PUSH 0xfffe
00654BBA  52                        PUSH EDX
00654BBB  66 8B 17                  MOV DX,word ptr [EDI]
00654BBE  50                        PUSH EAX
00654BBF  51                        PUSH ECX
00654BC0  6A 1E                     PUSH 0x1e
00654BC2  52                        PUSH EDX
00654BC3  8B CE                     MOV ECX,ESI
00654BC5  E8 4B F0 DA FF            CALL 0x00403c15
00654BCA  E9 6A 07 00 00            JMP 0x00655339
LAB_00654bcf:
00654BCF  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00654BD5  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00654BDB  6A 00                     PUSH 0x0
00654BDD  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00654BE3  6A 00                     PUSH 0x0
00654BE5  6A 00                     PUSH 0x0
00654BE7  6A 01                     PUSH 0x1
00654BE9  6A 64                     PUSH 0x64
00654BEB  6A 00                     PUSH 0x0
00654BED  6A FF                     PUSH -0x1
00654BEF  68 FE FF 00 00            PUSH 0xfffe
00654BF4  50                        PUSH EAX
00654BF5  66 8B 07                  MOV AX,word ptr [EDI]
00654BF8  51                        PUSH ECX
00654BF9  52                        PUSH EDX
00654BFA  6A 19                     PUSH 0x19
00654BFC  50                        PUSH EAX
00654BFD  8B CE                     MOV ECX,ESI
00654BFF  E8 11 F0 DA FF            CALL 0x00403c15
00654C04  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00654C0A  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00654C10  6A 00                     PUSH 0x0
00654C12  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00654C18  6A 00                     PUSH 0x0
00654C1A  6A 00                     PUSH 0x0
00654C1C  6A 01                     PUSH 0x1
00654C1E  6A 64                     PUSH 0x64
00654C20  6A 00                     PUSH 0x0
00654C22  6A FF                     PUSH -0x1
00654C24  68 FE FF 00 00            PUSH 0xfffe
00654C29  51                        PUSH ECX
00654C2A  66 8B 0F                  MOV CX,word ptr [EDI]
00654C2D  52                        PUSH EDX
00654C2E  50                        PUSH EAX
00654C2F  6A 19                     PUSH 0x19
00654C31  51                        PUSH ECX
00654C32  8B CE                     MOV ECX,ESI
00654C34  E8 DC EF DA FF            CALL 0x00403c15
00654C39  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00654C3F  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00654C45  6A 00                     PUSH 0x0
00654C47  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00654C4D  6A 00                     PUSH 0x0
00654C4F  6A 00                     PUSH 0x0
00654C51  6A 01                     PUSH 0x1
00654C53  6A 64                     PUSH 0x64
00654C55  6A 00                     PUSH 0x0
00654C57  6A FF                     PUSH -0x1
00654C59  68 FE FF 00 00            PUSH 0xfffe
00654C5E  52                        PUSH EDX
00654C5F  66 8B 17                  MOV DX,word ptr [EDI]
00654C62  50                        PUSH EAX
00654C63  51                        PUSH ECX
00654C64  6A 19                     PUSH 0x19
00654C66  52                        PUSH EDX
00654C67  8B CE                     MOV ECX,ESI
00654C69  E8 A7 EF DA FF            CALL 0x00403c15
00654C6E  E9 C6 06 00 00            JMP 0x00655339
LAB_00654c73:
00654C73  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00654C79  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00654C7F  6A 00                     PUSH 0x0
00654C81  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00654C87  6A 00                     PUSH 0x0
00654C89  6A 00                     PUSH 0x0
00654C8B  6A 01                     PUSH 0x1
00654C8D  6A 64                     PUSH 0x64
00654C8F  6A 00                     PUSH 0x0
00654C91  6A FF                     PUSH -0x1
00654C93  68 FE FF 00 00            PUSH 0xfffe
00654C98  50                        PUSH EAX
00654C99  66 8B 07                  MOV AX,word ptr [EDI]
00654C9C  51                        PUSH ECX
00654C9D  52                        PUSH EDX
00654C9E  6A 19                     PUSH 0x19
00654CA0  50                        PUSH EAX
00654CA1  8B CE                     MOV ECX,ESI
00654CA3  E8 6D EF DA FF            CALL 0x00403c15
00654CA8  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00654CAE  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00654CB4  6A 00                     PUSH 0x0
00654CB6  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00654CBC  6A 00                     PUSH 0x0
00654CBE  6A 00                     PUSH 0x0
00654CC0  6A 01                     PUSH 0x1
00654CC2  6A 64                     PUSH 0x64
00654CC4  6A 00                     PUSH 0x0
00654CC6  6A FF                     PUSH -0x1
00654CC8  68 FE FF 00 00            PUSH 0xfffe
00654CCD  51                        PUSH ECX
00654CCE  66 8B 0F                  MOV CX,word ptr [EDI]
00654CD1  52                        PUSH EDX
00654CD2  50                        PUSH EAX
00654CD3  6A 19                     PUSH 0x19
00654CD5  51                        PUSH ECX
00654CD6  8B CE                     MOV ECX,ESI
00654CD8  E8 38 EF DA FF            CALL 0x00403c15
00654CDD  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00654CE3  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00654CE9  6A 00                     PUSH 0x0
00654CEB  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00654CF1  6A 00                     PUSH 0x0
00654CF3  6A 00                     PUSH 0x0
00654CF5  6A 01                     PUSH 0x1
00654CF7  6A 64                     PUSH 0x64
00654CF9  6A 00                     PUSH 0x0
00654CFB  6A FF                     PUSH -0x1
00654CFD  68 FE FF 00 00            PUSH 0xfffe
00654D02  52                        PUSH EDX
00654D03  66 8B 17                  MOV DX,word ptr [EDI]
00654D06  50                        PUSH EAX
00654D07  51                        PUSH ECX
00654D08  6A 19                     PUSH 0x19
00654D0A  52                        PUSH EDX
00654D0B  8B CE                     MOV ECX,ESI
00654D0D  E8 03 EF DA FF            CALL 0x00403c15
00654D12  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00654D18  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00654D1E  6A 00                     PUSH 0x0
00654D20  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00654D26  6A 00                     PUSH 0x0
00654D28  6A 00                     PUSH 0x0
00654D2A  6A 01                     PUSH 0x1
00654D2C  6A 64                     PUSH 0x64
00654D2E  6A 00                     PUSH 0x0
00654D30  6A FF                     PUSH -0x1
00654D32  68 FE FF 00 00            PUSH 0xfffe
00654D37  50                        PUSH EAX
00654D38  66 8B 07                  MOV AX,word ptr [EDI]
00654D3B  51                        PUSH ECX
00654D3C  52                        PUSH EDX
00654D3D  6A 1E                     PUSH 0x1e
00654D3F  50                        PUSH EAX
00654D40  8B CE                     MOV ECX,ESI
00654D42  E8 CE EE DA FF            CALL 0x00403c15
00654D47  6A 00                     PUSH 0x0
00654D49  6A 00                     PUSH 0x0
00654D4B  6A 00                     PUSH 0x0
00654D4D  6A 01                     PUSH 0x1
00654D4F  6A 64                     PUSH 0x64
00654D51  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00654D57  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00654D5D  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00654D63  6A 00                     PUSH 0x0
00654D65  6A FF                     PUSH -0x1
00654D67  68 FE FF 00 00            PUSH 0xfffe
00654D6C  51                        PUSH ECX
00654D6D  66 8B 0F                  MOV CX,word ptr [EDI]
00654D70  52                        PUSH EDX
00654D71  50                        PUSH EAX
00654D72  6A 1E                     PUSH 0x1e
00654D74  51                        PUSH ECX
00654D75  8B CE                     MOV ECX,ESI
00654D77  E8 99 EE DA FF            CALL 0x00403c15
00654D7C  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00654D82  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00654D88  6A 00                     PUSH 0x0
00654D8A  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00654D90  6A 00                     PUSH 0x0
00654D92  6A 00                     PUSH 0x0
00654D94  6A 01                     PUSH 0x1
00654D96  6A 64                     PUSH 0x64
00654D98  6A 00                     PUSH 0x0
00654D9A  6A FF                     PUSH -0x1
00654D9C  68 FE FF 00 00            PUSH 0xfffe
00654DA1  52                        PUSH EDX
00654DA2  66 8B 17                  MOV DX,word ptr [EDI]
00654DA5  50                        PUSH EAX
00654DA6  51                        PUSH ECX
00654DA7  6A 1E                     PUSH 0x1e
00654DA9  52                        PUSH EDX
00654DAA  8B CE                     MOV ECX,ESI
00654DAC  E8 64 EE DA FF            CALL 0x00403c15
00654DB1  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00654DB7  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00654DBD  6A 00                     PUSH 0x0
00654DBF  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00654DC5  6A 00                     PUSH 0x0
00654DC7  6A 00                     PUSH 0x0
00654DC9  6A 01                     PUSH 0x1
00654DCB  6A 64                     PUSH 0x64
00654DCD  6A 00                     PUSH 0x0
00654DCF  6A FF                     PUSH -0x1
00654DD1  68 FE FF 00 00            PUSH 0xfffe
00654DD6  50                        PUSH EAX
00654DD7  66 8B 07                  MOV AX,word ptr [EDI]
00654DDA  51                        PUSH ECX
00654DDB  52                        PUSH EDX
00654DDC  6A 20                     PUSH 0x20
00654DDE  50                        PUSH EAX
00654DDF  8B CE                     MOV ECX,ESI
00654DE1  E8 2F EE DA FF            CALL 0x00403c15
00654DE6  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00654DEC  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00654DF2  6A 00                     PUSH 0x0
00654DF4  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00654DFA  6A 00                     PUSH 0x0
00654DFC  6A 00                     PUSH 0x0
00654DFE  6A 01                     PUSH 0x1
00654E00  6A 64                     PUSH 0x64
00654E02  6A 00                     PUSH 0x0
00654E04  6A FF                     PUSH -0x1
00654E06  68 FE FF 00 00            PUSH 0xfffe
00654E0B  51                        PUSH ECX
00654E0C  66 8B 0F                  MOV CX,word ptr [EDI]
00654E0F  52                        PUSH EDX
00654E10  50                        PUSH EAX
00654E11  6A 22                     PUSH 0x22
00654E13  51                        PUSH ECX
00654E14  8B CE                     MOV ECX,ESI
00654E16  E8 FA ED DA FF            CALL 0x00403c15
00654E1B  E9 19 05 00 00            JMP 0x00655339
LAB_00654e20:
00654E20  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00654E23  83 F8 02                  CMP EAX,0x2
00654E26  0F 8F 6C 02 00 00         JG 0x00655098
00654E2C  0F 84 23 01 00 00         JZ 0x00654f55
00654E32  83 E8 00                  SUB EAX,0x0
00654E35  0F 84 E0 00 00 00         JZ 0x00654f1b
00654E3B  48                        DEC EAX
00654E3C  0F 85 E2 04 00 00         JNZ 0x00655324
00654E42  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00654E48  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00654E4E  6A 00                     PUSH 0x0
00654E50  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00654E56  6A 00                     PUSH 0x0
00654E58  6A 00                     PUSH 0x0
00654E5A  6A 01                     PUSH 0x1
00654E5C  6A 64                     PUSH 0x64
00654E5E  6A 00                     PUSH 0x0
00654E60  6A FF                     PUSH -0x1
00654E62  68 FE FF 00 00            PUSH 0xfffe
00654E67  50                        PUSH EAX
00654E68  66 8B 07                  MOV AX,word ptr [EDI]
00654E6B  51                        PUSH ECX
00654E6C  52                        PUSH EDX
00654E6D  6A 18                     PUSH 0x18
00654E6F  50                        PUSH EAX
00654E70  8B CE                     MOV ECX,ESI
00654E72  E8 9E ED DA FF            CALL 0x00403c15
00654E77  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00654E7D  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00654E83  6A 00                     PUSH 0x0
00654E85  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00654E8B  6A 00                     PUSH 0x0
00654E8D  6A 00                     PUSH 0x0
00654E8F  6A 01                     PUSH 0x1
00654E91  6A 64                     PUSH 0x64
00654E93  6A 00                     PUSH 0x0
00654E95  6A FF                     PUSH -0x1
00654E97  68 FE FF 00 00            PUSH 0xfffe
00654E9C  51                        PUSH ECX
00654E9D  66 8B 0F                  MOV CX,word ptr [EDI]
00654EA0  52                        PUSH EDX
00654EA1  50                        PUSH EAX
00654EA2  6A 0D                     PUSH 0xd
00654EA4  51                        PUSH ECX
00654EA5  8B CE                     MOV ECX,ESI
00654EA7  E8 69 ED DA FF            CALL 0x00403c15
00654EAC  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00654EB2  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00654EB8  6A 00                     PUSH 0x0
00654EBA  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00654EC0  6A 00                     PUSH 0x0
00654EC2  6A 00                     PUSH 0x0
00654EC4  6A 01                     PUSH 0x1
00654EC6  6A 64                     PUSH 0x64
00654EC8  6A 00                     PUSH 0x0
00654ECA  6A FF                     PUSH -0x1
00654ECC  68 FE FF 00 00            PUSH 0xfffe
00654ED1  52                        PUSH EDX
00654ED2  66 8B 17                  MOV DX,word ptr [EDI]
00654ED5  50                        PUSH EAX
00654ED6  51                        PUSH ECX
00654ED7  6A 0D                     PUSH 0xd
00654ED9  52                        PUSH EDX
00654EDA  8B CE                     MOV ECX,ESI
00654EDC  E8 34 ED DA FF            CALL 0x00403c15
00654EE1  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00654EE7  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00654EED  6A 00                     PUSH 0x0
00654EEF  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00654EF5  6A 00                     PUSH 0x0
00654EF7  6A 00                     PUSH 0x0
00654EF9  6A 01                     PUSH 0x1
00654EFB  6A 64                     PUSH 0x64
00654EFD  6A 00                     PUSH 0x0
00654EFF  6A FF                     PUSH -0x1
00654F01  68 FE FF 00 00            PUSH 0xfffe
00654F06  50                        PUSH EAX
00654F07  66 8B 07                  MOV AX,word ptr [EDI]
00654F0A  51                        PUSH ECX
00654F0B  52                        PUSH EDX
00654F0C  6A 0E                     PUSH 0xe
00654F0E  50                        PUSH EAX
00654F0F  8B CE                     MOV ECX,ESI
00654F11  E8 FF EC DA FF            CALL 0x00403c15
00654F16  E9 1E 04 00 00            JMP 0x00655339
LAB_00654f1b:
00654F1B  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00654F21  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00654F27  6A 00                     PUSH 0x0
00654F29  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00654F2F  6A 00                     PUSH 0x0
00654F31  6A 00                     PUSH 0x0
00654F33  6A 01                     PUSH 0x1
00654F35  6A 64                     PUSH 0x64
00654F37  6A 00                     PUSH 0x0
00654F39  6A FF                     PUSH -0x1
00654F3B  68 FE FF 00 00            PUSH 0xfffe
00654F40  51                        PUSH ECX
00654F41  66 8B 0F                  MOV CX,word ptr [EDI]
00654F44  52                        PUSH EDX
00654F45  50                        PUSH EAX
00654F46  6A 18                     PUSH 0x18
00654F48  51                        PUSH ECX
00654F49  8B CE                     MOV ECX,ESI
00654F4B  E8 C5 EC DA FF            CALL 0x00403c15
00654F50  E9 E4 03 00 00            JMP 0x00655339
LAB_00654f55:
00654F55  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00654F5B  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00654F61  6A 00                     PUSH 0x0
00654F63  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00654F69  6A 00                     PUSH 0x0
00654F6B  6A 00                     PUSH 0x0
00654F6D  6A 01                     PUSH 0x1
00654F6F  6A 64                     PUSH 0x64
00654F71  6A 00                     PUSH 0x0
00654F73  6A FF                     PUSH -0x1
00654F75  68 FE FF 00 00            PUSH 0xfffe
00654F7A  52                        PUSH EDX
00654F7B  66 8B 17                  MOV DX,word ptr [EDI]
00654F7E  50                        PUSH EAX
00654F7F  51                        PUSH ECX
00654F80  6A 18                     PUSH 0x18
00654F82  52                        PUSH EDX
00654F83  8B CE                     MOV ECX,ESI
00654F85  E8 8B EC DA FF            CALL 0x00403c15
00654F8A  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00654F90  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00654F96  6A 00                     PUSH 0x0
00654F98  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00654F9E  6A 00                     PUSH 0x0
00654FA0  6A 00                     PUSH 0x0
00654FA2  6A 01                     PUSH 0x1
00654FA4  6A 64                     PUSH 0x64
00654FA6  6A 00                     PUSH 0x0
00654FA8  6A FF                     PUSH -0x1
00654FAA  68 FE FF 00 00            PUSH 0xfffe
00654FAF  50                        PUSH EAX
00654FB0  66 8B 07                  MOV AX,word ptr [EDI]
00654FB3  51                        PUSH ECX
00654FB4  52                        PUSH EDX
00654FB5  6A 0D                     PUSH 0xd
00654FB7  50                        PUSH EAX
00654FB8  8B CE                     MOV ECX,ESI
00654FBA  E8 56 EC DA FF            CALL 0x00403c15
00654FBF  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00654FC5  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00654FCB  6A 00                     PUSH 0x0
00654FCD  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00654FD3  6A 00                     PUSH 0x0
00654FD5  6A 00                     PUSH 0x0
00654FD7  6A 01                     PUSH 0x1
00654FD9  6A 64                     PUSH 0x64
00654FDB  6A 00                     PUSH 0x0
00654FDD  6A FF                     PUSH -0x1
00654FDF  68 FE FF 00 00            PUSH 0xfffe
00654FE4  51                        PUSH ECX
00654FE5  66 8B 0F                  MOV CX,word ptr [EDI]
00654FE8  52                        PUSH EDX
00654FE9  50                        PUSH EAX
00654FEA  6A 0D                     PUSH 0xd
00654FEC  51                        PUSH ECX
00654FED  8B CE                     MOV ECX,ESI
00654FEF  E8 21 EC DA FF            CALL 0x00403c15
00654FF4  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00654FFA  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00655000  6A 00                     PUSH 0x0
00655002  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00655008  6A 00                     PUSH 0x0
0065500A  6A 00                     PUSH 0x0
0065500C  6A 01                     PUSH 0x1
0065500E  6A 64                     PUSH 0x64
00655010  6A 00                     PUSH 0x0
00655012  6A FF                     PUSH -0x1
00655014  68 FE FF 00 00            PUSH 0xfffe
00655019  52                        PUSH EDX
0065501A  66 8B 17                  MOV DX,word ptr [EDI]
0065501D  50                        PUSH EAX
0065501E  51                        PUSH ECX
0065501F  6A 0E                     PUSH 0xe
00655021  52                        PUSH EDX
00655022  8B CE                     MOV ECX,ESI
00655024  E8 EC EB DA FF            CALL 0x00403c15
00655029  6A 00                     PUSH 0x0
0065502B  6A 00                     PUSH 0x0
0065502D  6A 00                     PUSH 0x0
0065502F  6A 01                     PUSH 0x1
00655031  6A 64                     PUSH 0x64
00655033  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00655039  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
0065503F  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00655045  6A 00                     PUSH 0x0
00655047  6A FF                     PUSH -0x1
00655049  68 FE FF 00 00            PUSH 0xfffe
0065504E  50                        PUSH EAX
0065504F  66 8B 07                  MOV AX,word ptr [EDI]
00655052  51                        PUSH ECX
00655053  52                        PUSH EDX
00655054  6A 0F                     PUSH 0xf
00655056  50                        PUSH EAX
00655057  8B CE                     MOV ECX,ESI
00655059  E8 B7 EB DA FF            CALL 0x00403c15
0065505E  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00655064  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
0065506A  6A 00                     PUSH 0x0
0065506C  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00655072  6A 00                     PUSH 0x0
00655074  6A 00                     PUSH 0x0
00655076  6A 01                     PUSH 0x1
00655078  6A 64                     PUSH 0x64
0065507A  6A 00                     PUSH 0x0
0065507C  6A FF                     PUSH -0x1
0065507E  68 FE FF 00 00            PUSH 0xfffe
00655083  51                        PUSH ECX
00655084  66 8B 0F                  MOV CX,word ptr [EDI]
00655087  52                        PUSH EDX
00655088  50                        PUSH EAX
00655089  6A 12                     PUSH 0x12
0065508B  51                        PUSH ECX
0065508C  8B CE                     MOV ECX,ESI
0065508E  E8 82 EB DA FF            CALL 0x00403c15
00655093  E9 A1 02 00 00            JMP 0x00655339
LAB_00655098:
00655098  3D FF 00 00 00            CMP EAX,0xff
0065509D  0F 84 96 02 00 00         JZ 0x00655339
006550A3  E9 7C 02 00 00            JMP 0x00655324
LAB_006550a8:
006550A8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006550AB  83 F8 02                  CMP EAX,0x2
006550AE  0F 8F 69 02 00 00         JG 0x0065531d
006550B4  0F 84 23 01 00 00         JZ 0x006551dd
006550BA  83 E8 00                  SUB EAX,0x0
006550BD  0F 84 E0 00 00 00         JZ 0x006551a3
006550C3  48                        DEC EAX
006550C4  0F 85 5A 02 00 00         JNZ 0x00655324
006550CA  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
006550D0  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
006550D6  6A 00                     PUSH 0x0
006550D8  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
006550DE  6A 00                     PUSH 0x0
006550E0  6A 00                     PUSH 0x0
006550E2  6A 01                     PUSH 0x1
006550E4  6A 64                     PUSH 0x64
006550E6  6A 00                     PUSH 0x0
006550E8  6A FF                     PUSH -0x1
006550EA  68 FE FF 00 00            PUSH 0xfffe
006550EF  50                        PUSH EAX
006550F0  66 8B 07                  MOV AX,word ptr [EDI]
006550F3  51                        PUSH ECX
006550F4  52                        PUSH EDX
006550F5  6A 0C                     PUSH 0xc
006550F7  50                        PUSH EAX
006550F8  8B CE                     MOV ECX,ESI
006550FA  E8 16 EB DA FF            CALL 0x00403c15
006550FF  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00655105  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
0065510B  6A 00                     PUSH 0x0
0065510D  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00655113  6A 00                     PUSH 0x0
00655115  6A 00                     PUSH 0x0
00655117  6A 01                     PUSH 0x1
00655119  6A 64                     PUSH 0x64
0065511B  6A 00                     PUSH 0x0
0065511D  6A FF                     PUSH -0x1
0065511F  68 FE FF 00 00            PUSH 0xfffe
00655124  51                        PUSH ECX
00655125  66 8B 0F                  MOV CX,word ptr [EDI]
00655128  52                        PUSH EDX
00655129  50                        PUSH EAX
0065512A  6A 01                     PUSH 0x1
0065512C  51                        PUSH ECX
0065512D  8B CE                     MOV ECX,ESI
0065512F  E8 E1 EA DA FF            CALL 0x00403c15
00655134  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
0065513A  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00655140  6A 00                     PUSH 0x0
00655142  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00655148  6A 00                     PUSH 0x0
0065514A  6A 00                     PUSH 0x0
0065514C  6A 01                     PUSH 0x1
0065514E  6A 64                     PUSH 0x64
00655150  6A 00                     PUSH 0x0
00655152  6A FF                     PUSH -0x1
00655154  68 FE FF 00 00            PUSH 0xfffe
00655159  52                        PUSH EDX
0065515A  66 8B 17                  MOV DX,word ptr [EDI]
0065515D  50                        PUSH EAX
0065515E  51                        PUSH ECX
0065515F  6A 01                     PUSH 0x1
00655161  52                        PUSH EDX
00655162  8B CE                     MOV ECX,ESI
00655164  E8 AC EA DA FF            CALL 0x00403c15
00655169  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
0065516F  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00655175  6A 00                     PUSH 0x0
00655177  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
0065517D  6A 00                     PUSH 0x0
0065517F  6A 00                     PUSH 0x0
00655181  6A 01                     PUSH 0x1
00655183  6A 64                     PUSH 0x64
00655185  6A 00                     PUSH 0x0
00655187  6A FF                     PUSH -0x1
00655189  68 FE FF 00 00            PUSH 0xfffe
0065518E  50                        PUSH EAX
0065518F  66 8B 07                  MOV AX,word ptr [EDI]
00655192  51                        PUSH ECX
00655193  52                        PUSH EDX
00655194  6A 02                     PUSH 0x2
00655196  50                        PUSH EAX
00655197  8B CE                     MOV ECX,ESI
00655199  E8 77 EA DA FF            CALL 0x00403c15
0065519E  E9 96 01 00 00            JMP 0x00655339
LAB_006551a3:
006551A3  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
006551A9  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
006551AF  6A 00                     PUSH 0x0
006551B1  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
006551B7  6A 00                     PUSH 0x0
006551B9  6A 00                     PUSH 0x0
006551BB  6A 01                     PUSH 0x1
006551BD  6A 64                     PUSH 0x64
006551BF  6A 00                     PUSH 0x0
006551C1  6A FF                     PUSH -0x1
006551C3  68 FE FF 00 00            PUSH 0xfffe
006551C8  51                        PUSH ECX
006551C9  66 8B 0F                  MOV CX,word ptr [EDI]
006551CC  52                        PUSH EDX
006551CD  50                        PUSH EAX
006551CE  6A 0C                     PUSH 0xc
006551D0  51                        PUSH ECX
006551D1  8B CE                     MOV ECX,ESI
006551D3  E8 3D EA DA FF            CALL 0x00403c15
006551D8  E9 5C 01 00 00            JMP 0x00655339
LAB_006551dd:
006551DD  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
006551E3  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
006551E9  6A 00                     PUSH 0x0
006551EB  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
006551F1  6A 00                     PUSH 0x0
006551F3  6A 00                     PUSH 0x0
006551F5  6A 01                     PUSH 0x1
006551F7  6A 64                     PUSH 0x64
006551F9  6A 00                     PUSH 0x0
006551FB  6A FF                     PUSH -0x1
006551FD  68 FE FF 00 00            PUSH 0xfffe
00655202  52                        PUSH EDX
00655203  66 8B 17                  MOV DX,word ptr [EDI]
00655206  50                        PUSH EAX
00655207  51                        PUSH ECX
00655208  6A 0C                     PUSH 0xc
0065520A  52                        PUSH EDX
0065520B  8B CE                     MOV ECX,ESI
0065520D  E8 03 EA DA FF            CALL 0x00403c15
00655212  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00655218  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
0065521E  6A 00                     PUSH 0x0
00655220  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00655226  6A 00                     PUSH 0x0
00655228  6A 00                     PUSH 0x0
0065522A  6A 01                     PUSH 0x1
0065522C  6A 64                     PUSH 0x64
0065522E  6A 00                     PUSH 0x0
00655230  6A FF                     PUSH -0x1
00655232  68 FE FF 00 00            PUSH 0xfffe
00655237  50                        PUSH EAX
00655238  66 8B 07                  MOV AX,word ptr [EDI]
0065523B  51                        PUSH ECX
0065523C  52                        PUSH EDX
0065523D  6A 01                     PUSH 0x1
0065523F  50                        PUSH EAX
00655240  8B CE                     MOV ECX,ESI
00655242  E8 CE E9 DA FF            CALL 0x00403c15
00655247  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
0065524D  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00655253  6A 00                     PUSH 0x0
00655255  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
0065525B  6A 00                     PUSH 0x0
0065525D  6A 00                     PUSH 0x0
0065525F  6A 01                     PUSH 0x1
00655261  6A 64                     PUSH 0x64
00655263  6A 00                     PUSH 0x0
00655265  6A FF                     PUSH -0x1
00655267  68 FE FF 00 00            PUSH 0xfffe
0065526C  51                        PUSH ECX
0065526D  66 8B 0F                  MOV CX,word ptr [EDI]
00655270  52                        PUSH EDX
00655271  50                        PUSH EAX
00655272  6A 01                     PUSH 0x1
00655274  51                        PUSH ECX
00655275  8B CE                     MOV ECX,ESI
00655277  E8 99 E9 DA FF            CALL 0x00403c15
0065527C  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00655282  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00655288  6A 00                     PUSH 0x0
0065528A  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00655290  6A 00                     PUSH 0x0
00655292  6A 00                     PUSH 0x0
00655294  6A 01                     PUSH 0x1
00655296  6A 64                     PUSH 0x64
00655298  6A 00                     PUSH 0x0
0065529A  6A FF                     PUSH -0x1
0065529C  68 FE FF 00 00            PUSH 0xfffe
006552A1  52                        PUSH EDX
006552A2  66 8B 17                  MOV DX,word ptr [EDI]
006552A5  50                        PUSH EAX
006552A6  51                        PUSH ECX
006552A7  6A 02                     PUSH 0x2
006552A9  52                        PUSH EDX
006552AA  8B CE                     MOV ECX,ESI
006552AC  E8 64 E9 DA FF            CALL 0x00403c15
006552B1  6A 00                     PUSH 0x0
006552B3  6A 00                     PUSH 0x0
006552B5  6A 00                     PUSH 0x0
006552B7  6A 01                     PUSH 0x1
006552B9  6A 64                     PUSH 0x64
006552BB  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
006552C1  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
006552C7  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
006552CD  6A 00                     PUSH 0x0
006552CF  6A FF                     PUSH -0x1
006552D1  68 FE FF 00 00            PUSH 0xfffe
006552D6  50                        PUSH EAX
006552D7  66 8B 07                  MOV AX,word ptr [EDI]
006552DA  51                        PUSH ECX
006552DB  52                        PUSH EDX
006552DC  6A 03                     PUSH 0x3
006552DE  50                        PUSH EAX
006552DF  8B CE                     MOV ECX,ESI
006552E1  E8 2F E9 DA FF            CALL 0x00403c15
006552E6  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
006552EC  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
006552F2  6A 00                     PUSH 0x0
006552F4  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
006552FA  6A 00                     PUSH 0x0
006552FC  6A 00                     PUSH 0x0
006552FE  6A 01                     PUSH 0x1
00655300  6A 64                     PUSH 0x64
00655302  6A 00                     PUSH 0x0
00655304  6A FF                     PUSH -0x1
00655306  68 FE FF 00 00            PUSH 0xfffe
0065530B  51                        PUSH ECX
0065530C  66 8B 0F                  MOV CX,word ptr [EDI]
0065530F  52                        PUSH EDX
00655310  50                        PUSH EAX
00655311  6A 06                     PUSH 0x6
00655313  51                        PUSH ECX
00655314  8B CE                     MOV ECX,ESI
00655316  E8 FA E8 DA FF            CALL 0x00403c15
0065531B  EB 1C                     JMP 0x00655339
LAB_0065531d:
0065531D  3D FF 00 00 00            CMP EAX,0xff
00655322  74 15                     JZ 0x00655339
LAB_00655324:
00655324  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00655327  51                        PUSH ECX
00655328  52                        PUSH EDX
00655329  53                        PUSH EBX
0065532A  E8 AC 04 DB FF            CALL 0x004057db
0065532F  50                        PUSH EAX
00655330  6A 83                     PUSH -0x7d
00655332  8B CE                     MOV ECX,ESI
00655334  E8 09 FD DA FF            CALL 0x00405042
LAB_00655339:
00655339  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065533C  83 C7 04                  ADD EDI,0x4
0065533F  48                        DEC EAX
00655340  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00655343  0F 85 FC F6 FF FF         JNZ 0x00654a45
00655349  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0065534C  E9 22 47 00 00            JMP 0x00659a73
switchD_00653ded::caseD_582:
00655351  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00655357  50                        PUSH EAX
00655358  E8 F2 C2 DA FF            CALL 0x0040164f
0065535D  83 C4 04                  ADD ESP,0x4
00655360  85 C0                     TEST EAX,EAX
00655362  0F 84 31 D7 FF FF         JZ 0x00652a99
00655368  8B 16                     MOV EDX,dword ptr [ESI]
0065536A  8B CE                     MOV ECX,ESI
0065536C  FF 52 18                  CALL dword ptr [EDX + 0x18]
0065536F  83 F8 08                  CMP EAX,0x8
00655372  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00655378  75 09                     JNZ 0x00655383
0065537A  83 F8 09                  CMP EAX,0x9
0065537D  0F 84 16 D7 FF FF         JZ 0x00652a99
LAB_00655383:
00655383  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00655389  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065538C  51                        PUSH ECX
0065538D  52                        PUSH EDX
0065538E  50                        PUSH EAX
0065538F  8B CE                     MOV ECX,ESI
00655391  E8 22 C3 DA FF            CALL 0x004016b8
00655396  85 C0                     TEST EAX,EAX
00655398  0F 8E D5 46 00 00         JLE 0x00659a73
0065539E  8D 5D D0                  LEA EBX,[EBP + -0x30]
006553A1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006553a4:
006553A4  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
006553AA  05 24 FF FF FF            ADD EAX,0xffffff24
006553AF  83 F8 07                  CMP EAX,0x7
006553B2  0F 87 0F 02 00 00         JA 0x006555c7
switchD_006553b8::switchD:
006553B8  FF 24 85 08 9E 65 00      JMP dword ptr [EAX*0x4 + 0x659e08]
switchD_006553b8::caseD_dc:
006553BF  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
006553C5  85 C0                     TEST EAX,EAX
006553C7  75 1A                     JNZ 0x006553e3
006553C9  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
006553CF  8A 13                     MOV DL,byte ptr [EBX]
006553D1  51                        PUSH ECX
006553D2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006553D8  52                        PUSH EDX
006553D9  E8 47 E2 DA FF            CALL 0x00403625
006553DE  E9 E4 01 00 00            JMP 0x006555c7
LAB_006553e3:
006553E3  7E 1A                     JLE 0x006553ff
006553E5  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
006553EB  8A 0B                     MOV CL,byte ptr [EBX]
006553ED  50                        PUSH EAX
006553EE  51                        PUSH ECX
006553EF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006553F5  E8 3C EF DA FF            CALL 0x00404336
006553FA  E9 C8 01 00 00            JMP 0x006555c7
LAB_006553ff:
006553FF  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00655405  8A 03                     MOV AL,byte ptr [EBX]
00655407  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065540D  52                        PUSH EDX
0065540E  50                        PUSH EAX
0065540F  E8 52 DD DA FF            CALL 0x00403166
00655414  E9 AE 01 00 00            JMP 0x006555c7
switchD_006553b8::caseD_dd:
00655419  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
0065541F  85 C0                     TEST EAX,EAX
00655421  75 1A                     JNZ 0x0065543d
00655423  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00655429  8A 13                     MOV DL,byte ptr [EBX]
0065542B  51                        PUSH ECX
0065542C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00655432  52                        PUSH EDX
00655433  E8 B0 C4 DA FF            CALL 0x004018e8
00655438  E9 8A 01 00 00            JMP 0x006555c7
LAB_0065543d:
0065543D  7E 1A                     JLE 0x00655459
0065543F  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00655445  8A 0B                     MOV CL,byte ptr [EBX]
00655447  50                        PUSH EAX
00655448  51                        PUSH ECX
00655449  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065544F  E8 BE EF DA FF            CALL 0x00404412
00655454  E9 6E 01 00 00            JMP 0x006555c7
LAB_00655459:
00655459  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
0065545F  8A 03                     MOV AL,byte ptr [EBX]
00655461  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00655467  52                        PUSH EDX
00655468  50                        PUSH EAX
00655469  E8 AA DF DA FF            CALL 0x00403418
0065546E  E9 54 01 00 00            JMP 0x006555c7
switchD_006553b8::caseD_de:
00655473  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00655479  85 C0                     TEST EAX,EAX
0065547B  75 1A                     JNZ 0x00655497
0065547D  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00655483  8A 13                     MOV DL,byte ptr [EBX]
00655485  51                        PUSH ECX
00655486  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065548C  52                        PUSH EDX
0065548D  E8 F3 D1 DA FF            CALL 0x00402685
00655492  E9 30 01 00 00            JMP 0x006555c7
LAB_00655497:
00655497  7E 1A                     JLE 0x006554b3
00655499  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
0065549F  8A 0B                     MOV CL,byte ptr [EBX]
006554A1  50                        PUSH EAX
006554A2  51                        PUSH ECX
006554A3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006554A9  E8 39 01 DB FF            CALL 0x004055e7
006554AE  E9 14 01 00 00            JMP 0x006555c7
LAB_006554b3:
006554B3  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
006554B9  8A 03                     MOV AL,byte ptr [EBX]
006554BB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006554C1  52                        PUSH EDX
006554C2  50                        PUSH EAX
006554C3  E8 9F FE DA FF            CALL 0x00405367
006554C8  E9 FA 00 00 00            JMP 0x006555c7
switchD_006553b8::caseD_e2:
006554CD  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
006554D3  85 C0                     TEST EAX,EAX
006554D5  75 1A                     JNZ 0x006554f1
006554D7  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
006554DD  8B 13                     MOV EDX,dword ptr [EBX]
006554DF  51                        PUSH ECX
006554E0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006554E6  52                        PUSH EDX
006554E7  E8 FD DB DA FF            CALL 0x004030e9
006554EC  E9 D6 00 00 00            JMP 0x006555c7
LAB_006554f1:
006554F1  7E 1A                     JLE 0x0065550d
006554F3  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
006554F9  8B 0B                     MOV ECX,dword ptr [EBX]
006554FB  50                        PUSH EAX
006554FC  51                        PUSH ECX
006554FD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00655503  E8 63 09 DB FF            CALL 0x00405e6b
00655508  E9 BA 00 00 00            JMP 0x006555c7
LAB_0065550d:
0065550D  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00655513  8B 03                     MOV EAX,dword ptr [EBX]
00655515  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065551B  52                        PUSH EDX
0065551C  50                        PUSH EAX
0065551D  E8 F2 E2 DA FF            CALL 0x00403814
00655522  E9 A0 00 00 00            JMP 0x006555c7
switchD_006553b8::caseD_df:
00655527  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
0065552D  85 C0                     TEST EAX,EAX
0065552F  75 17                     JNZ 0x00655548
00655531  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00655537  8A 13                     MOV DL,byte ptr [EBX]
00655539  51                        PUSH ECX
0065553A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00655540  52                        PUSH EDX
00655541  E8 97 C9 DA FF            CALL 0x00401edd
00655546  EB 7F                     JMP 0x006555c7
LAB_00655548:
00655548  7E 17                     JLE 0x00655561
0065554A  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00655550  8A 0B                     MOV CL,byte ptr [EBX]
00655552  50                        PUSH EAX
00655553  51                        PUSH ECX
00655554  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065555A  E8 A7 EB DA FF            CALL 0x00404106
0065555F  EB 66                     JMP 0x006555c7
LAB_00655561:
00655561  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00655567  8A 03                     MOV AL,byte ptr [EBX]
00655569  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065556F  52                        PUSH EDX
00655570  50                        PUSH EAX
00655571  E8 BA C6 DA FF            CALL 0x00401c30
00655576  EB 4F                     JMP 0x006555c7
switchD_006553b8::caseD_e3:
00655578  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
0065557E  85 C0                     TEST EAX,EAX
00655580  75 17                     JNZ 0x00655599
00655582  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00655588  8B 13                     MOV EDX,dword ptr [EBX]
0065558A  51                        PUSH ECX
0065558B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00655591  52                        PUSH EDX
00655592  E8 8D FA DA FF            CALL 0x00405024
00655597  EB 2E                     JMP 0x006555c7
LAB_00655599:
00655599  7E 17                     JLE 0x006555b2
0065559B  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
006555A1  8B 0B                     MOV ECX,dword ptr [EBX]
006555A3  50                        PUSH EAX
006555A4  51                        PUSH ECX
006555A5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006555AB  E8 43 FE DA FF            CALL 0x004053f3
006555B0  EB 15                     JMP 0x006555c7
LAB_006555b2:
006555B2  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
006555B8  8B 03                     MOV EAX,dword ptr [EBX]
006555BA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006555C0  52                        PUSH EDX
006555C1  50                        PUSH EAX
006555C2  E8 32 EE DA FF            CALL 0x004043f9
switchD_006553b8::caseD_e0:
006555C7  8B 03                     MOV EAX,dword ptr [EBX]
006555C9  33 C9                     XOR ECX,ECX
006555CB  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
006555D1  3B C1                     CMP EAX,ECX
006555D3  75 0E                     JNZ 0x006555e3
006555D5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006555DB  8A D0                     MOV DL,AL
006555DD  52                        PUSH EDX
006555DE  E8 AA F5 DA FF            CALL 0x00404b8d
LAB_006555e3:
006555E3  8A 03                     MOV AL,byte ptr [EBX]
006555E5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006555EB  50                        PUSH EAX
006555EC  E8 05 D3 DA FF            CALL 0x004028f6
006555F1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006555F4  83 C3 04                  ADD EBX,0x4
006555F7  48                        DEC EAX
006555F8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006555FB  0F 85 A3 FD FF FF         JNZ 0x006553a4
00655601  E9 6D 44 00 00            JMP 0x00659a73
switchD_00653ded::caseD_583:
00655606  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
0065560C  51                        PUSH ECX
0065560D  E8 30 C8 DA FF            CALL 0x00401e42
00655612  83 C4 04                  ADD ESP,0x4
00655615  85 C0                     TEST EAX,EAX
00655617  0F 84 7C D4 FF FF         JZ 0x00652a99
0065561D  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00655623  85 C0                     TEST EAX,EAX
00655625  75 17                     JNZ 0x0065563e
00655627  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065562D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00655633  52                        PUSH EDX
00655634  E8 45 FF DA FF            CALL 0x0040557e
00655639  E9 35 44 00 00            JMP 0x00659a73
LAB_0065563e:
0065563E  7E 31                     JLE 0x00655671
00655640  8B 1D 74 A1 7F 00         MOV EBX,dword ptr [0x007fa174]
00655646  8B 85 A4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea4]
0065564C  6A 00                     PUSH 0x0
0065564E  8B CB                     MOV ECX,EBX
00655650  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00655653  E8 1F BB DA FF            CALL 0x00401177
00655658  03 45 F8                  ADD EAX,dword ptr [EBP + -0x8]
LAB_0065565b:
0065565B  50                        PUSH EAX
0065565C  8B CB                     MOV ECX,EBX
0065565E  E8 1B FF DA FF            CALL 0x0040557e
LAB_00655663:
00655663  6A 00                     PUSH 0x0
00655665  8B CB                     MOV ECX,EBX
00655667  E8 0B BB DA FF            CALL 0x00401177
0065566C  E9 02 44 00 00            JMP 0x00659a73
LAB_00655671:
00655671  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
00655677  8B 1D 74 A1 7F 00         MOV EBX,dword ptr [0x007fa174]
0065567D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00655680  6A 00                     PUSH 0x0
00655682  8B CB                     MOV ECX,EBX
00655684  E8 EE BA DA FF            CALL 0x00401177
00655689  39 45 F8                  CMP dword ptr [EBP + -0x8],EAX
0065568C  7D D5                     JGE 0x00655663
0065568E  6A 00                     PUSH 0x0
00655690  8B CB                     MOV ECX,EBX
00655692  E8 E0 BA DA FF            CALL 0x00401177
00655697  2B 45 F8                  SUB EAX,dword ptr [EBP + -0x8]
0065569A  EB BF                     JMP 0x0065565b
switchD_00653ded::caseD_584:
0065569C  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
006556A2  52                        PUSH EDX
006556A3  E8 47 C0 DA FF            CALL 0x004016ef
006556A8  83 C4 04                  ADD ESP,0x4
006556AB  85 C0                     TEST EAX,EAX
006556AD  0F 84 E6 D3 FF FF         JZ 0x00652a99
006556B3  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
006556B9  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
006556BF  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006556C5  50                        PUSH EAX
006556C6  8B 85 A4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea4]
006556CC  51                        PUSH ECX
006556CD  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
006556D3  52                        PUSH EDX
006556D4  50                        PUSH EAX
006556D5  51                        PUSH ECX
006556D6  E8 26 08 DB FF            CALL 0x00405f01
006556DB  83 C4 14                  ADD ESP,0x14
006556DE  E9 90 43 00 00            JMP 0x00659a73
switchD_00653ded::caseD_585:
006556E3  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
006556E9  52                        PUSH EDX
006556EA  E8 1F 00 DB FF            CALL 0x0040570e
006556EF  83 C4 04                  ADD ESP,0x4
006556F2  85 C0                     TEST EAX,EAX
006556F4  0F 84 9F D3 FF FF         JZ 0x00652a99
006556FA  B9 20 76 80 00            MOV ECX,0x807620
006556FF  E8 06 BE DA FF            CALL 0x0040150a
00655704  A3 94 87 80 00            MOV [0x00808794],EAX
00655709  E9 65 43 00 00            JMP 0x00659a73
switchD_00653ded::caseD_58c:
0065570E  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00655714  50                        PUSH EAX
00655715  E8 EB F4 DA FF            CALL 0x00404c05
0065571A  83 C4 04                  ADD ESP,0x4
0065571D  85 C0                     TEST EAX,EAX
0065571F  0F 84 74 D3 FF FF         JZ 0x00652a99
00655725  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
0065572B  33 DB                     XOR EBX,EBX
0065572D  2B C3                     SUB EAX,EBX
0065572F  0F 84 D4 00 00 00         JZ 0x00655809
00655735  48                        DEC EAX
00655736  74 50                     JZ 0x00655788
00655738  48                        DEC EAX
00655739  0F 85 34 01 00 00         JNZ 0x00655873
0065573F  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00655745  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
0065574B  8B 85 A4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea4]
00655751  53                        PUSH EBX
00655752  68 73 4C 40 00            PUSH 0x404c73
00655757  6A 01                     PUSH 0x1
00655759  6A 01                     PUSH 0x1
0065575B  6A 01                     PUSH 0x1
0065575D  51                        PUSH ECX
0065575E  52                        PUSH EDX
0065575F  50                        PUSH EAX
00655760  6A FF                     PUSH -0x1
00655762  53                        PUSH EBX
00655763  E8 8A BC DA FF            CALL 0x004013f2
00655768  83 C4 28                  ADD ESP,0x28
0065576B  83 F8 FF                  CMP EAX,-0x1
0065576E  0F 85 FF 00 00 00         JNZ 0x00655873
00655774  A1 84 19 81 00            MOV EAX,[0x00811984]
00655779  85 C0                     TEST EAX,EAX
0065577B  0F 84 F2 00 00 00         JZ 0x00655873
00655781  8B D8                     MOV EBX,EAX
00655783  E9 EB 00 00 00            JMP 0x00655873
LAB_00655788:
00655788  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065578E  66 85 D2                  TEST DX,DX
00655791  0F 8C DA 00 00 00         JL 0x00655871
00655797  66 3B 15 40 B2 7F 00      CMP DX,word ptr [0x007fb240]
0065579E  0F 8D CD 00 00 00         JGE 0x00655871
006557A4  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
006557AA  66 85 C9                  TEST CX,CX
006557AD  0F 8C BE 00 00 00         JL 0x00655871
006557B3  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
006557BA  0F 8D B1 00 00 00         JGE 0x00655871
006557C0  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
006557C6  66 85 C0                  TEST AX,AX
006557C9  0F 8C A2 00 00 00         JL 0x00655871
006557CF  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
006557D6  0F 8D 95 00 00 00         JGE 0x00655871
006557DC  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
006557E3  0F BF C0                  MOVSX EAX,AX
006557E6  0F AF C3                  IMUL EAX,EBX
006557E9  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
006557F0  0F BF C9                  MOVSX ECX,CX
006557F3  0F AF CB                  IMUL ECX,EBX
006557F6  0F BF D2                  MOVSX EDX,DX
006557F9  03 C1                     ADD EAX,ECX
006557FB  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00655801  03 C2                     ADD EAX,EDX
00655803  8B 5C C1 04               MOV EBX,dword ptr [ECX + EAX*0x8 + 0x4]
00655807  EB 6A                     JMP 0x00655873
LAB_00655809:
00655809  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065580F  66 85 D2                  TEST DX,DX
00655812  7C 5D                     JL 0x00655871
00655814  66 3B 15 40 B2 7F 00      CMP DX,word ptr [0x007fb240]
0065581B  7D 54                     JGE 0x00655871
0065581D  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
00655823  66 85 C9                  TEST CX,CX
00655826  7C 49                     JL 0x00655871
00655828  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0065582F  7D 40                     JGE 0x00655871
00655831  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00655837  66 85 C0                  TEST AX,AX
0065583A  7C 35                     JL 0x00655871
0065583C  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
00655843  7D 2C                     JGE 0x00655871
00655845  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0065584C  0F BF C0                  MOVSX EAX,AX
0065584F  0F AF C3                  IMUL EAX,EBX
00655852  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
00655859  0F BF C9                  MOVSX ECX,CX
0065585C  0F AF CB                  IMUL ECX,EBX
0065585F  0F BF D2                  MOVSX EDX,DX
00655862  03 C1                     ADD EAX,ECX
00655864  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0065586A  03 C2                     ADD EAX,EDX
0065586C  8B 1C C1                  MOV EBX,dword ptr [ECX + EAX*0x8]
0065586F  EB 02                     JMP 0x00655873
LAB_00655871:
00655871  33 DB                     XOR EBX,EBX
LAB_00655873:
00655873  85 DB                     TEST EBX,EBX
00655875  0F 84 F8 41 00 00         JZ 0x00659a73
0065587B  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00655881  85 C0                     TEST EAX,EAX
00655883  0F 84 EA 41 00 00         JZ 0x00659a73
00655889  8B 13                     MOV EDX,dword ptr [EBX]
0065588B  50                        PUSH EAX
0065588C  8B CB                     MOV ECX,EBX
0065588E  FF 52 70                  CALL dword ptr [EDX + 0x70]
00655891  E9 DD 41 00 00            JMP 0x00659a73
switchD_00653ded::caseD_58d:
00655896  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
0065589C  50                        PUSH EAX
0065589D  E8 EA FD DA FF            CALL 0x0040568c
006558A2  83 C4 04                  ADD ESP,0x4
006558A5  85 C0                     TEST EAX,EAX
006558A7  0F 84 EC D1 FF FF         JZ 0x00652a99
006558AD  8B 16                     MOV EDX,dword ptr [ESI]
006558AF  8B CE                     MOV ECX,ESI
006558B1  FF 52 18                  CALL dword ptr [EDX + 0x18]
006558B4  83 F8 08                  CMP EAX,0x8
006558B7  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006558BD  75 09                     JNZ 0x006558c8
006558BF  83 F8 09                  CMP EAX,0x9
006558C2  0F 84 D1 D1 FF FF         JZ 0x00652a99
LAB_006558c8:
006558C8  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006558CE  8D 4D D0                  LEA ECX,[EBP + -0x30]
006558D1  51                        PUSH ECX
006558D2  52                        PUSH EDX
006558D3  50                        PUSH EAX
006558D4  8B CE                     MOV ECX,ESI
006558D6  E8 DD BD DA FF            CALL 0x004016b8
006558DB  85 C0                     TEST EAX,EAX
006558DD  0F 8E 90 41 00 00         JLE 0x00659a73
006558E3  8D 4D D0                  LEA ECX,[EBP + -0x30]
006558E6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006558E9  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006558ec:
006558EC  8B 85 C0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec0]
006558F2  85 C0                     TEST EAX,EAX
006558F4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006558F7  7D 09                     JGE 0x00655902
006558F9  C7 45 F8 FE FF 00 00      MOV dword ptr [EBP + -0x8],0xfffe
00655900  EB 70                     JMP 0x00655972
LAB_00655902:
00655902  7E 6E                     JLE 0x00655972
00655904  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00655907  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065590D  50                        PUSH EAX
0065590E  8A 02                     MOV AL,byte ptr [EDX]
00655910  50                        PUSH EAX
00655911  E8 E3 03 DB FF            CALL 0x00405cf9
00655916  85 C0                     TEST EAX,EAX
00655918  75 16                     JNZ 0x00655930
0065591A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0065591D  8B 11                     MOV EDX,dword ptr [ECX]
0065591F  52                        PUSH EDX
00655920  57                        PUSH EDI
00655921  68 A0 16 80 00            PUSH 0x8016a0
00655926  68 56 FF FF FF            PUSH 0xffffff56
0065592B  E9 B3 00 00 00            JMP 0x006559e3
LAB_00655930:
00655930  8B C8                     MOV ECX,EAX
00655932  E8 CB FF DA FF            CALL 0x00405902
00655937  85 C0                     TEST EAX,EAX
00655939  75 0B                     JNZ 0x00655946
0065593B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0065593E  8B 08                     MOV ECX,dword ptr [EAX]
00655940  51                        PUSH ECX
00655941  E9 90 00 00 00            JMP 0x006559d6
LAB_00655946:
00655946  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
0065594C  83 F9 32                  CMP ECX,0x32
0065594F  7C 0C                     JL 0x0065595d
00655951  83 F9 74                  CMP ECX,0x74
00655954  7D 07                     JGE 0x0065595d
00655956  B9 01 00 00 00            MOV ECX,0x1
0065595B  EB 02                     JMP 0x0065595f
LAB_0065595d:
0065595D  33 C9                     XOR ECX,ECX
LAB_0065595f:
0065595F  85 C9                     TEST ECX,ECX
00655961  74 07                     JZ 0x0065596a
00655963  66 83 78 7B 01            CMP word ptr [EAX + 0x7b],0x1
00655968  75 66                     JNZ 0x006559d0
LAB_0065596a:
0065596A  66 81 78 7B 00 80         CMP word ptr [EAX + 0x7b],0x8000
00655970  74 5E                     JZ 0x006559d0
LAB_00655972:
00655972  8B 8D D0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffed0]
00655978  8B 95 CC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffecc]
0065597E  8B 85 C8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec8]
00655984  6A 00                     PUSH 0x0
00655986  51                        PUSH ECX
00655987  8B 8D C4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec4]
0065598D  52                        PUSH EDX
0065598E  8B 95 BC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffebc]
00655994  50                        PUSH EAX
00655995  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
0065599B  51                        PUSH ECX
0065599C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0065599F  52                        PUSH EDX
006559A0  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
006559A6  50                        PUSH EAX
006559A7  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
006559AD  51                        PUSH ECX
006559AE  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
006559B4  52                        PUSH EDX
006559B5  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006559BB  50                        PUSH EAX
006559BC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006559BF  51                        PUSH ECX
006559C0  52                        PUSH EDX
006559C1  66 8B 08                  MOV CX,word ptr [EAX]
006559C4  51                        PUSH ECX
006559C5  8B CE                     MOV ECX,ESI
006559C7  E8 49 E2 DA FF            CALL 0x00403c15
006559CC  85 C0                     TEST EAX,EAX
006559CE  74 1A                     JZ 0x006559ea
LAB_006559d0:
006559D0  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006559D3  8B 02                     MOV EAX,dword ptr [EDX]
006559D5  50                        PUSH EAX
LAB_006559d6:
006559D6  57                        PUSH EDI
006559D7  53                        PUSH EBX
006559D8  E8 FE FD DA FF            CALL 0x004057db
006559DD  50                        PUSH EAX
006559DE  68 55 FF FF FF            PUSH 0xffffff55
LAB_006559e3:
006559E3  8B CE                     MOV ECX,ESI
006559E5  E8 58 F6 DA FF            CALL 0x00405042
LAB_006559ea:
006559EA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006559ED  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006559F0  83 C1 04                  ADD ECX,0x4
006559F3  48                        DEC EAX
006559F4  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006559F7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006559FA  0F 85 EC FE FF FF         JNZ 0x006558ec
00655A00  E9 6E 40 00 00            JMP 0x00659a73
switchD_00653ded::caseD_58e:
00655A05  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00655A0B  51                        PUSH ECX
00655A0C  E8 71 C0 DA FF            CALL 0x00401a82
00655A11  83 C4 04                  ADD ESP,0x4
00655A14  85 C0                     TEST EAX,EAX
00655A16  0F 84 7D D0 FF FF         JZ 0x00652a99
00655A1C  8B 16                     MOV EDX,dword ptr [ESI]
00655A1E  8B CE                     MOV ECX,ESI
00655A20  FF 52 18                  CALL dword ptr [EDX + 0x18]
00655A23  83 F8 08                  CMP EAX,0x8
00655A26  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00655A2C  75 09                     JNZ 0x00655a37
00655A2E  83 F8 09                  CMP EAX,0x9
00655A31  0F 84 62 D0 FF FF         JZ 0x00652a99
LAB_00655a37:
00655A37  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00655A3D  8D 4D D0                  LEA ECX,[EBP + -0x30]
00655A40  51                        PUSH ECX
00655A41  52                        PUSH EDX
00655A42  50                        PUSH EAX
00655A43  8B CE                     MOV ECX,ESI
00655A45  E8 6E BC DA FF            CALL 0x004016b8
00655A4A  85 C0                     TEST EAX,EAX
00655A4C  0F 8E 21 40 00 00         JLE 0x00659a73
00655A52  8D 4D D0                  LEA ECX,[EBP + -0x30]
00655A55  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00655A58  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00655a5b:
00655A5B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00655A5E  8B 02                     MOV EAX,dword ptr [EDX]
00655A60  50                        PUSH EAX
00655A61  E8 43 F3 DA FF            CALL 0x00404da9
00655A66  83 C4 04                  ADD ESP,0x4
00655A69  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00655A6C  85 C0                     TEST EAX,EAX
00655A6E  74 55                     JZ 0x00655ac5
00655A70  8B C8                     MOV ECX,EAX
00655A72  33 DB                     XOR EBX,EBX
00655A74  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00655A77  85 C0                     TEST EAX,EAX
00655A79  7E 41                     JLE 0x00655abc
00655A7B  EB 03                     JMP 0x00655a80
LAB_00655a7d:
00655A7D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00655a80:
00655A80  3B D8                     CMP EBX,EAX
00655A82  73 0D                     JNC 0x00655a91
00655A84  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00655A87  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00655A8A  0F AF C3                  IMUL EAX,EBX
00655A8D  03 C2                     ADD EAX,EDX
00655A8F  EB 02                     JMP 0x00655a93
LAB_00655a91:
00655A91  33 C0                     XOR EAX,EAX
LAB_00655a93:
00655A93  66 8B 10                  MOV DX,word ptr [EAX]
00655A96  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
00655A9C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00655A9F  51                        PUSH ECX
00655AA0  6A 01                     PUSH 0x1
00655AA2  52                        PUSH EDX
00655AA3  8A 08                     MOV CL,byte ptr [EAX]
00655AA5  51                        PUSH ECX
00655AA6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00655AAC  E8 CC DD DA FF            CALL 0x0040387d
00655AB1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00655AB4  43                        INC EBX
00655AB5  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00655AB8  3B D8                     CMP EBX,EAX
00655ABA  7C C1                     JL 0x00655a7d
LAB_00655abc:
00655ABC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00655ABF  50                        PUSH EAX
00655AC0  E8 4B 86 05 00            CALL 0x006ae110
LAB_00655ac5:
00655AC5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00655AC8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00655ACB  83 C1 04                  ADD ECX,0x4
00655ACE  48                        DEC EAX
00655ACF  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00655AD2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00655AD5  75 84                     JNZ 0x00655a5b
00655AD7  E9 97 3F 00 00            JMP 0x00659a73
switchD_00653ded::caseD_58f:
00655ADC  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00655AE2  51                        PUSH ECX
00655AE3  E8 96 D2 DA FF            CALL 0x00402d7e
00655AE8  83 C4 04                  ADD ESP,0x4
00655AEB  85 C0                     TEST EAX,EAX
00655AED  0F 84 A6 CF FF FF         JZ 0x00652a99
00655AF3  8B 16                     MOV EDX,dword ptr [ESI]
00655AF5  8B CE                     MOV ECX,ESI
00655AF7  FF 52 18                  CALL dword ptr [EDX + 0x18]
00655AFA  83 F8 08                  CMP EAX,0x8
00655AFD  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00655B03  75 09                     JNZ 0x00655b0e
00655B05  83 F8 09                  CMP EAX,0x9
00655B08  0F 84 8B CF FF FF         JZ 0x00652a99
LAB_00655b0e:
00655B0E  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00655B14  8D 4D D0                  LEA ECX,[EBP + -0x30]
00655B17  51                        PUSH ECX
00655B18  52                        PUSH EDX
00655B19  50                        PUSH EAX
00655B1A  8B CE                     MOV ECX,ESI
00655B1C  E8 97 BB DA FF            CALL 0x004016b8
00655B21  85 C0                     TEST EAX,EAX
00655B23  0F 8E 4A 3F 00 00         JLE 0x00659a73
00655B29  8D 4D D0                  LEA ECX,[EBP + -0x30]
00655B2C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00655B2F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00655b32:
00655B32  8A 85 B0 FE FF FF         MOV AL,byte ptr [EBP + 0xfffffeb0]
00655B38  3C 08                     CMP AL,0x8
00655B3A  75 07                     JNZ 0x00655b43
00655B3C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00655B3F  8A 02                     MOV AL,byte ptr [EDX]
00655B41  EB 0A                     JMP 0x00655b4d
LAB_00655b43:
00655B43  84 C0                     TEST AL,AL
00655B45  7C 04                     JL 0x00655b4b
00655B47  3C 08                     CMP AL,0x8
00655B49  7E 02                     JLE 0x00655b4d
LAB_00655b4b:
00655B4B  0C FF                     OR AL,0xff
LAB_00655b4d:
00655B4D  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
00655B53  8B 95 C8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec8]
00655B59  6A 01                     PUSH 0x1
00655B5B  51                        PUSH ECX
00655B5C  8B 8D C4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec4]
00655B62  52                        PUSH EDX
00655B63  8B 95 C0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec0]
00655B69  51                        PUSH ECX
00655B6A  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
00655B70  52                        PUSH EDX
00655B71  8B 95 B8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb8]
00655B77  51                        PUSH ECX
00655B78  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00655B7E  52                        PUSH EDX
00655B7F  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00655B85  0F BE C0                  MOVSX EAX,AL
00655B88  50                        PUSH EAX
00655B89  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00655B8F  51                        PUSH ECX
00655B90  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00655B93  52                        PUSH EDX
00655B94  50                        PUSH EAX
00655B95  8B 11                     MOV EDX,dword ptr [ECX]
00655B97  52                        PUSH EDX
00655B98  E8 68 EB DA FF            CALL 0x00404705
00655B9D  8B F8                     MOV EDI,EAX
00655B9F  83 C4 30                  ADD ESP,0x30
00655BA2  85 FF                     TEST EDI,EDI
00655BA4  74 48                     JZ 0x00655bee
00655BA6  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00655BA9  33 DB                     XOR EBX,EBX
00655BAB  85 C0                     TEST EAX,EAX
00655BAD  7E 39                     JLE 0x00655be8
00655BAF  3B D8                     CMP EBX,EAX
LAB_00655bb1:
00655BB1  73 0D                     JNC 0x00655bc0
00655BB3  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00655BB6  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
00655BB9  0F AF C3                  IMUL EAX,EBX
00655BBC  03 C1                     ADD EAX,ECX
00655BBE  EB 02                     JMP 0x00655bc2
LAB_00655bc0:
00655BC0  33 C0                     XOR EAX,EAX
LAB_00655bc2:
00655BC2  66 8B 10                  MOV DX,word ptr [EAX]
00655BC5  8B 8D D0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffed0]
00655BCB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00655BCE  51                        PUSH ECX
00655BCF  6A 01                     PUSH 0x1
00655BD1  52                        PUSH EDX
00655BD2  8A 08                     MOV CL,byte ptr [EAX]
00655BD4  51                        PUSH ECX
00655BD5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00655BDB  E8 9D DC DA FF            CALL 0x0040387d
00655BE0  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00655BE3  43                        INC EBX
00655BE4  3B D8                     CMP EBX,EAX
00655BE6  7C C9                     JL 0x00655bb1
LAB_00655be8:
00655BE8  57                        PUSH EDI
00655BE9  E8 22 85 05 00            CALL 0x006ae110
LAB_00655bee:
00655BEE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00655BF1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00655BF4  83 C1 04                  ADD ECX,0x4
00655BF7  48                        DEC EAX
00655BF8  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00655BFB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00655BFE  0F 85 2E FF FF FF         JNZ 0x00655b32
00655C04  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00655C07  E9 67 3E 00 00            JMP 0x00659a73
switchD_00653ded::caseD_590:
00655C0C  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00655C12  52                        PUSH EDX
00655C13  E8 02 03 DB FF            CALL 0x00405f1a
00655C18  83 C4 04                  ADD ESP,0x4
00655C1B  85 C0                     TEST EAX,EAX
00655C1D  0F 84 76 CE FF FF         JZ 0x00652a99
00655C23  8B 06                     MOV EAX,dword ptr [ESI]
00655C25  8B CE                     MOV ECX,ESI
00655C27  FF 50 18                  CALL dword ptr [EAX + 0x18]
00655C2A  83 F8 08                  CMP EAX,0x8
00655C2D  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00655C33  75 09                     JNZ 0x00655c3e
00655C35  83 F8 09                  CMP EAX,0x9
00655C38  0F 84 5B CE FF FF         JZ 0x00652a99
LAB_00655c3e:
00655C3E  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00655C44  8D 4D D0                  LEA ECX,[EBP + -0x30]
00655C47  51                        PUSH ECX
00655C48  52                        PUSH EDX
00655C49  50                        PUSH EAX
00655C4A  8B CE                     MOV ECX,ESI
00655C4C  E8 67 BA DA FF            CALL 0x004016b8
00655C51  85 C0                     TEST EAX,EAX
00655C53  0F 8E 1A 3E 00 00         JLE 0x00659a73
00655C59  8D 4D D0                  LEA ECX,[EBP + -0x30]
00655C5C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00655C5F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00655c62:
00655C62  8B 95 C0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec0]
00655C68  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
00655C6E  8B 8D B8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb8]
00655C74  52                        PUSH EDX
00655C75  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00655C7B  50                        PUSH EAX
00655C7C  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00655C82  51                        PUSH ECX
00655C83  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00655C89  52                        PUSH EDX
00655C8A  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00655C90  50                        PUSH EAX
00655C91  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00655C94  51                        PUSH ECX
00655C95  52                        PUSH EDX
00655C96  66 8B 08                  MOV CX,word ptr [EAX]
00655C99  51                        PUSH ECX
00655C9A  8B CE                     MOV ECX,ESI
00655C9C  E8 86 BE DA FF            CALL 0x00401b27
00655CA1  85 C0                     TEST EAX,EAX
00655CA3  74 1A                     JZ 0x00655cbf
00655CA5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00655CA8  8B 02                     MOV EAX,dword ptr [EDX]
00655CAA  50                        PUSH EAX
00655CAB  57                        PUSH EDI
00655CAC  53                        PUSH EBX
00655CAD  E8 29 FB DA FF            CALL 0x004057db
00655CB2  50                        PUSH EAX
00655CB3  68 55 FF FF FF            PUSH 0xffffff55
00655CB8  8B CE                     MOV ECX,ESI
00655CBA  E8 83 F3 DA FF            CALL 0x00405042
LAB_00655cbf:
00655CBF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00655CC2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00655CC5  83 C1 04                  ADD ECX,0x4
00655CC8  48                        DEC EAX
00655CC9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00655CCC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00655CCF  75 91                     JNZ 0x00655c62
00655CD1  E9 9D 3D 00 00            JMP 0x00659a73
switchD_00653ded::caseD_591:
00655CD6  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00655CDC  51                        PUSH ECX
00655CDD  E8 22 DC DA FF            CALL 0x00403904
00655CE2  83 C4 04                  ADD ESP,0x4
00655CE5  85 C0                     TEST EAX,EAX
00655CE7  0F 84 AC CD FF FF         JZ 0x00652a99
00655CED  8B 16                     MOV EDX,dword ptr [ESI]
00655CEF  8B CE                     MOV ECX,ESI
00655CF1  FF 52 18                  CALL dword ptr [EDX + 0x18]
00655CF4  83 F8 08                  CMP EAX,0x8
00655CF7  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00655CFD  75 09                     JNZ 0x00655d08
00655CFF  83 F8 09                  CMP EAX,0x9
00655D02  0F 84 91 CD FF FF         JZ 0x00652a99
LAB_00655d08:
00655D08  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00655D0E  8D 4D D0                  LEA ECX,[EBP + -0x30]
00655D11  51                        PUSH ECX
00655D12  52                        PUSH EDX
00655D13  50                        PUSH EAX
00655D14  8B CE                     MOV ECX,ESI
00655D16  E8 9D B9 DA FF            CALL 0x004016b8
00655D1B  85 C0                     TEST EAX,EAX
00655D1D  0F 8E 50 3D 00 00         JLE 0x00659a73
00655D23  8D 5D D0                  LEA EBX,[EBP + -0x30]
00655D26  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00655d29:
00655D29  8B 8D C4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec4]
00655D2F  8B 95 C0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec0]
00655D35  8D 85 C8 FE FF FF         LEA EAX,[EBP + 0xfffffec8]
00655D3B  C7 05 FC 18 81 00 00 00 00 00  MOV dword ptr [0x008118fc],0x0
00655D45  50                        PUSH EAX
00655D46  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
00655D4C  68 A1 50 40 00            PUSH 0x4050a1
00655D51  51                        PUSH ECX
00655D52  8B 8D B8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb8]
00655D58  52                        PUSH EDX
00655D59  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00655D5F  50                        PUSH EAX
00655D60  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00655D66  51                        PUSH ECX
00655D67  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00655D6D  52                        PUSH EDX
00655D6E  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00655D74  50                        PUSH EAX
00655D75  66 8B 03                  MOV AX,word ptr [EBX]
00655D78  51                        PUSH ECX
00655D79  52                        PUSH EDX
00655D7A  50                        PUSH EAX
00655D7B  E8 02 DB DA FF            CALL 0x00403882
00655D80  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00655D83  83 C4 2C                  ADD ESP,0x2c
00655D86  83 C3 04                  ADD EBX,0x4
00655D89  48                        DEC EAX
00655D8A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00655D8D  75 9A                     JNZ 0x00655d29
00655D8F  E9 DF 3C 00 00            JMP 0x00659a73
switchD_00653ded::caseD_592:
00655D94  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00655D9A  51                        PUSH ECX
00655D9B  E8 FE E1 DA FF            CALL 0x00403f9e
00655DA0  83 C4 04                  ADD ESP,0x4
00655DA3  85 C0                     TEST EAX,EAX
00655DA5  0F 84 EE CC FF FF         JZ 0x00652a99
00655DAB  8B 95 BC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffebc]
00655DB1  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
00655DB7  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00655DBD  52                        PUSH EDX
00655DBE  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00655DC4  50                        PUSH EAX
00655DC5  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00655DCB  51                        PUSH ECX
00655DCC  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
00655DD2  52                        PUSH EDX
00655DD3  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00655DD9  50                        PUSH EAX
00655DDA  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00655DE0  51                        PUSH ECX
00655DE1  52                        PUSH EDX
00655DE2  50                        PUSH EAX
00655DE3  8B CE                     MOV ECX,ESI
00655DE5  E8 BE CD DA FF            CALL 0x00402ba8
00655DEA  E9 55 01 00 00            JMP 0x00655f44
LAB_00655def:
00655DEF  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00655DF5  51                        PUSH ECX
00655DF6  E8 4F D1 DA FF            CALL 0x00402f4a
00655DFB  83 C4 04                  ADD ESP,0x4
00655DFE  85 C0                     TEST EAX,EAX
00655E00  75 1C                     JNZ 0x00655e1e
00655E02  6A FF                     PUSH -0x1
00655E04  57                        PUSH EDI
00655E05  68 93 05 00 00            PUSH 0x593
00655E0A  E8 CC F9 DA FF            CALL 0x004057db
00655E0F  50                        PUSH EAX
00655E10  6A 83                     PUSH -0x7d
00655E12  8B CE                     MOV ECX,ESI
00655E14  E8 29 F2 DA FF            CALL 0x00405042
00655E19  E9 55 3C 00 00            JMP 0x00659a73
LAB_00655e1e:
00655E1E  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
00655E24  8B 8D B8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb8]
00655E2A  8D 95 C0 FE FF FF         LEA EDX,[EBP + 0xfffffec0]
00655E30  C7 05 FC 18 81 00 00 00 00 00  MOV dword ptr [0x008118fc],0x0
00655E3A  52                        PUSH EDX
00655E3B  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00655E41  68 F2 22 40 00            PUSH 0x4022f2
00655E46  50                        PUSH EAX
00655E47  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00655E4D  51                        PUSH ECX
00655E4E  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00655E54  52                        PUSH EDX
00655E55  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00655E5B  50                        PUSH EAX
00655E5C  8B 85 A4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea4]
00655E62  51                        PUSH ECX
00655E63  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
00655E69  52                        PUSH EDX
00655E6A  50                        PUSH EAX
00655E6B  51                        PUSH ECX
00655E6C  E8 C1 CA DA FF            CALL 0x00402932
00655E71  83 C4 28                  ADD ESP,0x28
00655E74  E9 FA 3B 00 00            JMP 0x00659a73
LAB_00655e79:
00655E79  81 FB C8 05 00 00         CMP EBX,0x5c8
00655E7F  0F 8F 36 11 00 00         JG 0x00656fbb
00655E85  0F 84 3F 10 00 00         JZ 0x00656eca
00655E8B  8D 83 6C FA FF FF         LEA EAX,[EBX + 0xfffffa6c]
00655E91  83 F8 25                  CMP EAX,0x25
00655E94  0F 87 D9 3B 00 00         JA 0x00659a73
switchD_00655e9a::switchD:
00655E9A  FF 24 85 28 9E 65 00      JMP dword ptr [EAX*0x4 + 0x659e28]
switchD_00655e9a::caseD_594:
00655EA1  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00655EA7  52                        PUSH EDX
00655EA8  E8 40 D3 DA FF            CALL 0x004031ed
00655EAD  83 C4 04                  ADD ESP,0x4
00655EB0  85 C0                     TEST EAX,EAX
00655EB2  0F 84 E1 CB FF FF         JZ 0x00652a99
00655EB8  8B 85 A4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea4]
00655EBE  85 C0                     TEST EAX,EAX
00655EC0  0F 84 AD 3B 00 00         JZ 0x00659a73
00655EC6  50                        PUSH EAX
00655EC7  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00655ECD  68 CB 12 40 00            PUSH 0x4012cb
00655ED2  6A FF                     PUSH -0x1
00655ED4  6A FF                     PUSH -0x1
00655ED6  6A FF                     PUSH -0x1
00655ED8  6A 00                     PUSH 0x0
00655EDA  6A 00                     PUSH 0x0
00655EDC  6A 00                     PUSH 0x0
00655EDE  50                        PUSH EAX
00655EDF  6A 00                     PUSH 0x0
00655EE1  E8 4C CA DA FF            CALL 0x00402932
00655EE6  83 C4 28                  ADD ESP,0x28
00655EE9  E9 85 3B 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_598:
00655EEE  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00655EF4  51                        PUSH ECX
00655EF5  E8 26 C3 DA FF            CALL 0x00402220
00655EFA  83 C4 04                  ADD ESP,0x4
00655EFD  85 C0                     TEST EAX,EAX
00655EFF  0F 84 94 CB FF FF         JZ 0x00652a99
00655F05  8B 95 BC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffebc]
00655F0B  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
00655F11  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00655F17  52                        PUSH EDX
00655F18  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00655F1E  50                        PUSH EAX
00655F1F  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00655F25  51                        PUSH ECX
00655F26  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
00655F2C  52                        PUSH EDX
00655F2D  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00655F33  50                        PUSH EAX
00655F34  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00655F3A  51                        PUSH ECX
00655F3B  52                        PUSH EDX
00655F3C  50                        PUSH EAX
00655F3D  8B CE                     MOV ECX,ESI
00655F3F  E8 D9 D4 DA FF            CALL 0x0040341d
LAB_00655f44:
00655F44  85 C0                     TEST EAX,EAX
00655F46  0F 84 27 3B 00 00         JZ 0x00659a73
LAB_00655f4c:
00655F4C  6A FF                     PUSH -0x1
00655F4E  57                        PUSH EDI
00655F4F  53                        PUSH EBX
00655F50  E8 86 F8 DA FF            CALL 0x004057db
00655F55  50                        PUSH EAX
00655F56  68 55 FF FF FF            PUSH 0xffffff55
00655F5B  8B CE                     MOV ECX,ESI
00655F5D  E8 E0 F0 DA FF            CALL 0x00405042
00655F62  E9 0C 3B 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_599:
00655F67  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00655F6D  51                        PUSH ECX
00655F6E  E8 5A E8 DA FF            CALL 0x004047cd
00655F73  83 C4 04                  ADD ESP,0x4
00655F76  85 C0                     TEST EAX,EAX
00655F78  0F 84 1B CB FF FF         JZ 0x00652a99
00655F7E  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
00655F84  8B 8D B8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb8]
00655F8A  8D 95 C0 FE FF FF         LEA EDX,[EBP + 0xfffffec0]
00655F90  C7 05 FC 18 81 00 00 00 00 00  MOV dword ptr [0x008118fc],0x0
00655F9A  52                        PUSH EDX
00655F9B  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00655FA1  68 1A 19 40 00            PUSH 0x40191a
00655FA6  50                        PUSH EAX
00655FA7  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00655FAD  51                        PUSH ECX
00655FAE  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00655FB4  52                        PUSH EDX
00655FB5  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00655FBB  50                        PUSH EAX
00655FBC  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00655FC2  51                        PUSH ECX
00655FC3  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
00655FC9  52                        PUSH EDX
00655FCA  50                        PUSH EAX
00655FCB  51                        PUSH ECX
00655FCC  E8 21 B4 DA FF            CALL 0x004013f2
00655FD1  83 C4 28                  ADD ESP,0x28
00655FD4  E9 9A 3A 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_59a:
00655FD9  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00655FDF  52                        PUSH EDX
00655FE0  E8 42 C0 DA FF            CALL 0x00402027
00655FE5  83 C4 04                  ADD ESP,0x4
00655FE8  85 C0                     TEST EAX,EAX
00655FEA  0F 84 A9 CA FF FF         JZ 0x00652a99
00655FF0  8B 85 A4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea4]
00655FF6  85 C0                     TEST EAX,EAX
00655FF8  0F 84 75 3A 00 00         JZ 0x00659a73
00655FFE  50                        PUSH EAX
00655FFF  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00656005  68 18 3E 40 00            PUSH 0x403e18
0065600A  6A FF                     PUSH -0x1
0065600C  6A FF                     PUSH -0x1
0065600E  6A FF                     PUSH -0x1
00656010  6A 00                     PUSH 0x0
00656012  6A 00                     PUSH 0x0
00656014  6A 00                     PUSH 0x0
00656016  6A FF                     PUSH -0x1
00656018  50                        PUSH EAX
00656019  E8 D4 B3 DA FF            CALL 0x004013f2
0065601E  83 C4 28                  ADD ESP,0x28
00656021  E9 4D 3A 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_595:
00656026  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
0065602C  51                        PUSH ECX
0065602D  E8 03 BC DA FF            CALL 0x00401c35
00656032  83 C4 04                  ADD ESP,0x4
00656035  85 C0                     TEST EAX,EAX
00656037  0F 84 5C CA FF FF         JZ 0x00652a99
0065603D  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
00656043  81 F9 DD 00 00 00         CMP ECX,0xdd
00656049  74 14                     JZ 0x0065605f
0065604B  81 F9 DE 00 00 00         CMP ECX,0xde
00656051  74 0C                     JZ 0x0065605f
00656053  81 F9 E0 00 00 00         CMP ECX,0xe0
00656059  74 04                     JZ 0x0065605f
0065605B  33 C0                     XOR EAX,EAX
0065605D  EB 05                     JMP 0x00656064
LAB_0065605f:
0065605F  B8 01 00 00 00            MOV EAX,0x1
LAB_00656064:
00656064  85 C0                     TEST EAX,EAX
00656066  0F 84 07 3A 00 00         JZ 0x00659a73
0065606C  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00656072  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00656078  89 95 78 FE FF FF         MOV dword ptr [EBP + 0xfffffe78],EDX
0065607E  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00656084  89 85 74 FE FF FF         MOV dword ptr [EBP + 0xfffffe74],EAX
0065608A  8D 85 80 FE FF FF         LEA EAX,[EBP + 0xfffffe80]
00656090  89 95 80 FE FF FF         MOV dword ptr [EBP + 0xfffffe80],EDX
00656096  50                        PUSH EAX
00656097  8D 95 74 FE FF FF         LEA EDX,[EBP + 0xfffffe74]
0065609D  8D 85 78 FE FF FF         LEA EAX,[EBP + 0xfffffe78]
006560A3  52                        PUSH EDX
006560A4  50                        PUSH EAX
006560A5  51                        PUSH ECX
006560A6  E8 62 B6 DA FF            CALL 0x0040170d
006560AB  83 C4 10                  ADD ESP,0x10
006560AE  85 C0                     TEST EAX,EAX
006560B0  0F 84 96 FE FF FF         JZ 0x00655f4c
006560B6  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
006560BC  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
006560C2  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006560C8  51                        PUSH ECX
006560C9  8B 8D 80 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe80]
006560CF  52                        PUSH EDX
006560D0  8B 95 74 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe74]
006560D6  50                        PUSH EAX
006560D7  8B 85 78 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe78]
006560DD  51                        PUSH ECX
006560DE  52                        PUSH EDX
006560DF  50                        PUSH EAX
006560E0  E8 9F FD DA FF            CALL 0x00405e84
006560E5  83 C4 18                  ADD ESP,0x18
006560E8  E9 86 39 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_596:
006560ED  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
006560F3  51                        PUSH ECX
006560F4  E8 B4 FC DA FF            CALL 0x00405dad
006560F9  83 C4 04                  ADD ESP,0x4
006560FC  85 C0                     TEST EAX,EAX
006560FE  0F 84 95 C9 FF FF         JZ 0x00652a99
00656104  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
0065610A  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00656110  8D 95 BC FE FF FF         LEA EDX,[EBP + 0xfffffebc]
00656116  C7 05 FC 18 81 00 00 00 00 00  MOV dword ptr [0x008118fc],0x0
00656120  52                        PUSH EDX
00656121  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00656127  68 E1 47 40 00            PUSH 0x4047e1
0065612C  50                        PUSH EAX
0065612D  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00656133  51                        PUSH ECX
00656134  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
0065613A  52                        PUSH EDX
0065613B  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00656141  50                        PUSH EAX
00656142  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00656148  51                        PUSH ECX
00656149  52                        PUSH EDX
0065614A  50                        PUSH EAX
0065614B  E8 F2 DF DA FF            CALL 0x00404142
00656150  83 C4 24                  ADD ESP,0x24
00656153  E9 1B 39 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_597:
00656158  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
0065615E  51                        PUSH ECX
0065615F  E8 52 B7 DA FF            CALL 0x004018b6
00656164  83 C4 04                  ADD ESP,0x4
00656167  85 C0                     TEST EAX,EAX
00656169  0F 84 2A C9 FF FF         JZ 0x00652a99
0065616F  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00656175  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
0065617B  8B 8D C0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec0]
00656181  25 FF FF 00 00            AND EAX,0xffff
00656186  C1 E2 10                  SHL EDX,0x10
00656189  0B D0                     OR EDX,EAX
0065618B  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
00656191  52                        PUSH EDX
00656192  8B 95 BC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffebc]
00656198  68 6E 5B 40 00            PUSH 0x405b6e
0065619D  51                        PUSH ECX
0065619E  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
006561A4  52                        PUSH EDX
006561A5  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
006561AB  50                        PUSH EAX
006561AC  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
006561B2  51                        PUSH ECX
006561B3  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
006561B9  52                        PUSH EDX
006561BA  50                        PUSH EAX
006561BB  51                        PUSH ECX
006561BC  E8 81 DF DA FF            CALL 0x00404142
006561C1  83 C4 24                  ADD ESP,0x24
006561C4  E9 AA 38 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_59b:
006561C9  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
006561CF  52                        PUSH EDX
006561D0  E8 2D E3 DA FF            CALL 0x00404502
006561D5  83 C4 04                  ADD ESP,0x4
006561D8  85 C0                     TEST EAX,EAX
006561DA  0F 84 B9 C8 FF FF         JZ 0x00652a99
006561E0  8B 06                     MOV EAX,dword ptr [ESI]
006561E2  8B CE                     MOV ECX,ESI
006561E4  FF 50 18                  CALL dword ptr [EAX + 0x18]
006561E7  83 F8 08                  CMP EAX,0x8
006561EA  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006561F0  75 09                     JNZ 0x006561fb
006561F2  83 F8 09                  CMP EAX,0x9
006561F5  0F 84 9E C8 FF FF         JZ 0x00652a99
LAB_006561fb:
006561FB  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00656201  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656204  51                        PUSH ECX
00656205  52                        PUSH EDX
00656206  50                        PUSH EAX
00656207  8B CE                     MOV ECX,ESI
00656209  E8 AA B4 DA FF            CALL 0x004016b8
0065620E  85 C0                     TEST EAX,EAX
00656210  0F 8E 5D 38 00 00         JLE 0x00659a73
00656216  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656219  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065621C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0065621f:
0065621F  8B 95 C4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec4]
00656225  8B 85 C0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec0]
0065622B  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
00656231  52                        PUSH EDX
00656232  8B 95 B8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb8]
00656238  50                        PUSH EAX
00656239  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
0065623F  51                        PUSH ECX
00656240  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00656246  52                        PUSH EDX
00656247  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
0065624D  50                        PUSH EAX
0065624E  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00656254  51                        PUSH ECX
00656255  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00656258  52                        PUSH EDX
00656259  50                        PUSH EAX
0065625A  66 8B 11                  MOV DX,word ptr [ECX]
0065625D  8B CE                     MOV ECX,ESI
0065625F  52                        PUSH EDX
00656260  E8 E5 E0 DA FF            CALL 0x0040434a
00656265  85 C0                     TEST EAX,EAX
00656267  74 1A                     JZ 0x00656283
00656269  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065626C  8B 08                     MOV ECX,dword ptr [EAX]
0065626E  51                        PUSH ECX
0065626F  57                        PUSH EDI
00656270  53                        PUSH EBX
00656271  E8 65 F5 DA FF            CALL 0x004057db
00656276  50                        PUSH EAX
00656277  68 55 FF FF FF            PUSH 0xffffff55
0065627C  8B CE                     MOV ECX,ESI
0065627E  E8 BF ED DA FF            CALL 0x00405042
LAB_00656283:
00656283  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00656286  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00656289  83 C1 04                  ADD ECX,0x4
0065628C  48                        DEC EAX
0065628D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00656290  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00656293  75 8A                     JNZ 0x0065621f
00656295  E9 D9 37 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_59c:
0065629A  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
006562A0  52                        PUSH EDX
006562A1  E8 9D B5 DA FF            CALL 0x00401843
006562A6  83 C4 04                  ADD ESP,0x4
006562A9  85 C0                     TEST EAX,EAX
006562AB  0F 84 E8 C7 FF FF         JZ 0x00652a99
006562B1  8B 06                     MOV EAX,dword ptr [ESI]
006562B3  8B CE                     MOV ECX,ESI
006562B5  FF 50 18                  CALL dword ptr [EAX + 0x18]
006562B8  83 F8 08                  CMP EAX,0x8
006562BB  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006562C1  75 09                     JNZ 0x006562cc
006562C3  83 F8 09                  CMP EAX,0x9
006562C6  0F 84 CD C7 FF FF         JZ 0x00652a99
LAB_006562cc:
006562CC  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006562D2  8D 4D D0                  LEA ECX,[EBP + -0x30]
006562D5  51                        PUSH ECX
006562D6  52                        PUSH EDX
006562D7  50                        PUSH EAX
006562D8  8B CE                     MOV ECX,ESI
006562DA  E8 D9 B3 DA FF            CALL 0x004016b8
006562DF  85 C0                     TEST EAX,EAX
006562E1  0F 8E 8C 37 00 00         JLE 0x00659a73
006562E7  8D 5D D0                  LEA EBX,[EBP + -0x30]
006562EA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006562ed:
006562ED  8B 8D C8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec8]
006562F3  8B 95 C4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec4]
006562F9  8D 85 CC FE FF FF         LEA EAX,[EBP + 0xfffffecc]
006562FF  C7 05 FC 18 81 00 00 00 00 00  MOV dword ptr [0x008118fc],0x0
00656309  50                        PUSH EAX
0065630A  8B 85 C0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec0]
00656310  68 D8 37 40 00            PUSH 0x4037d8
00656315  51                        PUSH ECX
00656316  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
0065631C  52                        PUSH EDX
0065631D  8B 95 B8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb8]
00656323  50                        PUSH EAX
00656324  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
0065632A  51                        PUSH ECX
0065632B  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00656331  52                        PUSH EDX
00656332  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00656338  50                        PUSH EAX
00656339  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
0065633F  51                        PUSH ECX
00656340  8B 0B                     MOV ECX,dword ptr [EBX]
00656342  52                        PUSH EDX
00656343  50                        PUSH EAX
00656344  51                        PUSH ECX
00656345  E8 2B D3 DA FF            CALL 0x00403675
0065634A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065634D  83 C4 30                  ADD ESP,0x30
00656350  83 C3 04                  ADD EBX,0x4
00656353  48                        DEC EAX
00656354  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00656357  75 94                     JNZ 0x006562ed
00656359  E9 15 37 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_59d:
0065635E  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00656364  52                        PUSH EDX
00656365  E8 26 E5 DA FF            CALL 0x00404890
0065636A  83 C4 04                  ADD ESP,0x4
0065636D  85 C0                     TEST EAX,EAX
0065636F  0F 84 24 C7 FF FF         JZ 0x00652a99
00656375  8B 06                     MOV EAX,dword ptr [ESI]
00656377  8B CE                     MOV ECX,ESI
00656379  FF 50 18                  CALL dword ptr [EAX + 0x18]
0065637C  83 F8 08                  CMP EAX,0x8
0065637F  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00656385  75 09                     JNZ 0x00656390
00656387  83 F8 09                  CMP EAX,0x9
0065638A  0F 84 09 C7 FF FF         JZ 0x00652a99
LAB_00656390:
00656390  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00656396  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656399  51                        PUSH ECX
0065639A  52                        PUSH EDX
0065639B  50                        PUSH EAX
0065639C  8B CE                     MOV ECX,ESI
0065639E  E8 15 B3 DA FF            CALL 0x004016b8
006563A3  85 C0                     TEST EAX,EAX
006563A5  0F 8E C8 36 00 00         JLE 0x00659a73
006563AB  8D 5D D0                  LEA EBX,[EBP + -0x30]
006563AE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006563b1:
006563B1  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
006563B7  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
006563BD  8B 95 C8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec8]
006563C3  50                        PUSH EAX
006563C4  8B 85 C4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec4]
006563CA  68 FD 35 40 00            PUSH 0x4035fd
006563CF  51                        PUSH ECX
006563D0  8B 8D C0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec0]
006563D6  52                        PUSH EDX
006563D7  8B 95 BC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffebc]
006563DD  50                        PUSH EAX
006563DE  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
006563E4  51                        PUSH ECX
006563E5  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
006563EB  52                        PUSH EDX
006563EC  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
006563F2  50                        PUSH EAX
006563F3  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
006563F9  51                        PUSH ECX
006563FA  8B 0B                     MOV ECX,dword ptr [EBX]
006563FC  52                        PUSH EDX
006563FD  50                        PUSH EAX
006563FE  51                        PUSH ECX
006563FF  C7 05 FC 18 81 00 00 00 00 00  MOV dword ptr [0x008118fc],0x0
00656409  E8 67 D2 DA FF            CALL 0x00403675
0065640E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00656411  83 C4 30                  ADD ESP,0x30
00656414  83 C3 04                  ADD EBX,0x4
00656417  48                        DEC EAX
00656418  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065641B  75 94                     JNZ 0x006563b1
0065641D  E9 51 36 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_5aa:
00656422  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00656428  52                        PUSH EDX
00656429  E8 5E C0 DA FF            CALL 0x0040248c
0065642E  83 C4 04                  ADD ESP,0x4
00656431  85 C0                     TEST EAX,EAX
00656433  0F 84 60 C6 FF FF         JZ 0x00652a99
00656439  8B 06                     MOV EAX,dword ptr [ESI]
0065643B  8B CE                     MOV ECX,ESI
0065643D  FF 50 18                  CALL dword ptr [EAX + 0x18]
00656440  83 F8 08                  CMP EAX,0x8
00656443  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00656449  75 09                     JNZ 0x00656454
0065644B  83 F8 09                  CMP EAX,0x9
0065644E  0F 84 45 C6 FF FF         JZ 0x00652a99
LAB_00656454:
00656454  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065645A  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065645D  51                        PUSH ECX
0065645E  52                        PUSH EDX
0065645F  50                        PUSH EAX
00656460  8B CE                     MOV ECX,ESI
00656462  E8 51 B2 DA FF            CALL 0x004016b8
00656467  85 C0                     TEST EAX,EAX
00656469  0F 8E 04 36 00 00         JLE 0x00659a73
0065646F  8D 5D D0                  LEA EBX,[EBP + -0x30]
00656472  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00656475:
00656475  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
0065647B  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
00656481  8B 13                     MOV EDX,dword ptr [EBX]
00656483  50                        PUSH EAX
00656484  51                        PUSH ECX
00656485  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065648B  52                        PUSH EDX
0065648C  E8 1D C6 DA FF            CALL 0x00402aae
00656491  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00656494  83 C3 04                  ADD EBX,0x4
00656497  48                        DEC EAX
00656498  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065649B  75 D8                     JNZ 0x00656475
0065649D  E9 D1 35 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_5ab:
006564A2  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
006564A8  50                        PUSH EAX
006564A9  E8 DE BF DA FF            CALL 0x0040248c
006564AE  83 C4 04                  ADD ESP,0x4
006564B1  85 C0                     TEST EAX,EAX
006564B3  0F 84 E0 C5 FF FF         JZ 0x00652a99
006564B9  8B 16                     MOV EDX,dword ptr [ESI]
006564BB  8B CE                     MOV ECX,ESI
006564BD  FF 52 18                  CALL dword ptr [EDX + 0x18]
006564C0  83 F8 08                  CMP EAX,0x8
006564C3  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006564C9  75 09                     JNZ 0x006564d4
006564CB  83 F8 09                  CMP EAX,0x9
006564CE  0F 84 C5 C5 FF FF         JZ 0x00652a99
LAB_006564d4:
006564D4  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006564DA  8D 4D D0                  LEA ECX,[EBP + -0x30]
006564DD  51                        PUSH ECX
006564DE  52                        PUSH EDX
006564DF  50                        PUSH EAX
006564E0  8B CE                     MOV ECX,ESI
006564E2  E8 D1 B1 DA FF            CALL 0x004016b8
006564E7  85 C0                     TEST EAX,EAX
006564E9  0F 8E 84 35 00 00         JLE 0x00659a73
006564EF  8D 5D D0                  LEA EBX,[EBP + -0x30]
006564F2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006564f5:
006564F5  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
006564FB  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
00656501  8B 13                     MOV EDX,dword ptr [EBX]
00656503  50                        PUSH EAX
00656504  51                        PUSH ECX
00656505  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065650B  52                        PUSH EDX
0065650C  E8 3D EE DA FF            CALL 0x0040534e
00656511  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00656514  83 C3 04                  ADD EBX,0x4
00656517  48                        DEC EAX
00656518  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065651B  75 D8                     JNZ 0x006564f5
0065651D  E9 51 35 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_5b1:
00656522  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00656528  50                        PUSH EAX
00656529  E8 DF AC DA FF            CALL 0x0040120d
0065652E  83 C4 04                  ADD ESP,0x4
00656531  85 C0                     TEST EAX,EAX
00656533  0F 84 60 C5 FF FF         JZ 0x00652a99
00656539  8B 16                     MOV EDX,dword ptr [ESI]
0065653B  8B CE                     MOV ECX,ESI
0065653D  FF 52 18                  CALL dword ptr [EDX + 0x18]
00656540  83 F8 08                  CMP EAX,0x8
00656543  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00656549  75 09                     JNZ 0x00656554
0065654B  83 F8 09                  CMP EAX,0x9
0065654E  0F 84 45 C5 FF FF         JZ 0x00652a99
LAB_00656554:
00656554  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065655A  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065655D  51                        PUSH ECX
0065655E  52                        PUSH EDX
0065655F  50                        PUSH EAX
00656560  8B CE                     MOV ECX,ESI
00656562  E8 51 B1 DA FF            CALL 0x004016b8
00656567  85 C0                     TEST EAX,EAX
00656569  0F 8E 04 35 00 00         JLE 0x00659a73
0065656F  8D 5D D0                  LEA EBX,[EBP + -0x30]
00656572  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00656575:
00656575  8B 03                     MOV EAX,dword ptr [EBX]
00656577  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065657D  50                        PUSH EAX
0065657E  E8 C6 ED DA FF            CALL 0x00405349
00656583  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00656586  83 C3 04                  ADD EBX,0x4
00656589  48                        DEC EAX
0065658A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065658D  75 E6                     JNZ 0x00656575
0065658F  E9 DF 34 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_5b2:
00656594  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
0065659A  51                        PUSH ECX
0065659B  E8 6D AC DA FF            CALL 0x0040120d
006565A0  83 C4 04                  ADD ESP,0x4
006565A3  85 C0                     TEST EAX,EAX
006565A5  0F 84 EE C4 FF FF         JZ 0x00652a99
006565AB  8B 16                     MOV EDX,dword ptr [ESI]
006565AD  8B CE                     MOV ECX,ESI
006565AF  FF 52 18                  CALL dword ptr [EDX + 0x18]
006565B2  83 F8 08                  CMP EAX,0x8
006565B5  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006565BB  75 09                     JNZ 0x006565c6
006565BD  83 F8 09                  CMP EAX,0x9
006565C0  0F 84 D3 C4 FF FF         JZ 0x00652a99
LAB_006565c6:
006565C6  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006565CC  8D 4D D0                  LEA ECX,[EBP + -0x30]
006565CF  51                        PUSH ECX
006565D0  52                        PUSH EDX
006565D1  50                        PUSH EAX
006565D2  8B CE                     MOV ECX,ESI
006565D4  E8 DF B0 DA FF            CALL 0x004016b8
006565D9  85 C0                     TEST EAX,EAX
006565DB  0F 8E 92 34 00 00         JLE 0x00659a73
006565E1  8D 5D D0                  LEA EBX,[EBP + -0x30]
006565E4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006565e7:
006565E7  8B 03                     MOV EAX,dword ptr [EBX]
006565E9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006565EF  50                        PUSH EAX
006565F0  E8 FC D1 DA FF            CALL 0x004037f1
006565F5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006565F8  83 C3 04                  ADD EBX,0x4
006565FB  48                        DEC EAX
006565FC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006565FF  75 E6                     JNZ 0x006565e7
00656601  E9 6D 34 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_5ac:
00656606  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
0065660C  51                        PUSH ECX
0065660D  E8 B8 B2 DA FF            CALL 0x004018ca
00656612  83 C4 04                  ADD ESP,0x4
00656615  85 C0                     TEST EAX,EAX
00656617  0F 84 7C C4 FF FF         JZ 0x00652a99
0065661D  8B 16                     MOV EDX,dword ptr [ESI]
0065661F  8B CE                     MOV ECX,ESI
00656621  FF 52 18                  CALL dword ptr [EDX + 0x18]
00656624  83 F8 08                  CMP EAX,0x8
00656627  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
0065662D  75 09                     JNZ 0x00656638
0065662F  83 F8 09                  CMP EAX,0x9
00656632  0F 84 61 C4 FF FF         JZ 0x00652a99
LAB_00656638:
00656638  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065663E  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656641  51                        PUSH ECX
00656642  52                        PUSH EDX
00656643  50                        PUSH EAX
00656644  8B CE                     MOV ECX,ESI
00656646  E8 6D B0 DA FF            CALL 0x004016b8
0065664B  85 C0                     TEST EAX,EAX
0065664D  0F 8E 20 34 00 00         JLE 0x00659a73
00656653  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656656  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00656659  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0065665c:
0065665C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065665F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00656665  8A 02                     MOV AL,byte ptr [EDX]
00656667  50                        PUSH EAX
00656668  E8 58 B7 DA FF            CALL 0x00401dc5
0065666D  85 C0                     TEST EAX,EAX
0065666F  74 20                     JZ 0x00656691
00656671  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00656677  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
0065667D  6A FF                     PUSH -0x1
0065667F  51                        PUSH ECX
00656680  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
00656686  52                        PUSH EDX
00656687  51                        PUSH ECX
00656688  8B C8                     MOV ECX,EAX
0065668A  E8 A8 C7 DA FF            CALL 0x00402e37
0065668F  EB 1A                     JMP 0x006566ab
LAB_00656691:
00656691  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00656694  8B 02                     MOV EAX,dword ptr [EDX]
00656696  50                        PUSH EAX
00656697  57                        PUSH EDI
00656698  53                        PUSH EBX
00656699  E8 3D F1 DA FF            CALL 0x004057db
0065669E  50                        PUSH EAX
0065669F  68 55 FF FF FF            PUSH 0xffffff55
006566A4  8B CE                     MOV ECX,ESI
006566A6  E8 97 E9 DA FF            CALL 0x00405042
LAB_006566ab:
006566AB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006566AE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006566B1  83 C1 04                  ADD ECX,0x4
006566B4  48                        DEC EAX
006566B5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006566B8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006566BB  75 9F                     JNZ 0x0065665c
006566BD  E9 B1 33 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_5ad:
006566C2  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
006566C8  51                        PUSH ECX
006566C9  E8 64 E0 DA FF            CALL 0x00404732
006566CE  83 C4 04                  ADD ESP,0x4
006566D1  85 C0                     TEST EAX,EAX
006566D3  0F 84 C0 C3 FF FF         JZ 0x00652a99
006566D9  8B 16                     MOV EDX,dword ptr [ESI]
006566DB  8B CE                     MOV ECX,ESI
006566DD  FF 52 18                  CALL dword ptr [EDX + 0x18]
006566E0  83 F8 08                  CMP EAX,0x8
006566E3  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006566E9  75 09                     JNZ 0x006566f4
006566EB  83 F8 09                  CMP EAX,0x9
006566EE  0F 84 A5 C3 FF FF         JZ 0x00652a99
LAB_006566f4:
006566F4  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006566FA  8D 4D D0                  LEA ECX,[EBP + -0x30]
006566FD  51                        PUSH ECX
006566FE  52                        PUSH EDX
006566FF  50                        PUSH EAX
00656700  8B CE                     MOV ECX,ESI
00656702  E8 B1 AF DA FF            CALL 0x004016b8
00656707  85 C0                     TEST EAX,EAX
00656709  0F 8E 64 33 00 00         JLE 0x00659a73
0065670F  8D 5D D0                  LEA EBX,[EBP + -0x30]
00656712  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00656715:
00656715  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
0065671B  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
00656721  8B 13                     MOV EDX,dword ptr [EBX]
00656723  50                        PUSH EAX
00656724  51                        PUSH ECX
00656725  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065672B  52                        PUSH EDX
0065672C  E8 FF B9 DA FF            CALL 0x00402130
00656731  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00656734  83 C3 04                  ADD EBX,0x4
00656737  48                        DEC EAX
00656738  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065673B  75 D8                     JNZ 0x00656715
0065673D  E9 31 33 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_5b3:
00656742  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00656748  50                        PUSH EAX
00656749  E8 2A BD DA FF            CALL 0x00402478
0065674E  83 C4 04                  ADD ESP,0x4
00656751  85 C0                     TEST EAX,EAX
00656753  0F 84 40 C3 FF FF         JZ 0x00652a99
00656759  8B 16                     MOV EDX,dword ptr [ESI]
0065675B  8B CE                     MOV ECX,ESI
0065675D  FF 52 18                  CALL dword ptr [EDX + 0x18]
00656760  83 F8 08                  CMP EAX,0x8
00656763  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00656769  75 09                     JNZ 0x00656774
0065676B  83 F8 09                  CMP EAX,0x9
0065676E  0F 84 25 C3 FF FF         JZ 0x00652a99
LAB_00656774:
00656774  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065677A  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065677D  51                        PUSH ECX
0065677E  52                        PUSH EDX
0065677F  50                        PUSH EAX
00656780  8B CE                     MOV ECX,ESI
00656782  E8 31 AF DA FF            CALL 0x004016b8
00656787  85 C0                     TEST EAX,EAX
00656789  0F 8E E4 32 00 00         JLE 0x00659a73
0065678F  8D 5D D0                  LEA EBX,[EBP + -0x30]
00656792  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00656795:
00656795  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
0065679B  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
006567A1  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006567A7  50                        PUSH EAX
006567A8  8B 03                     MOV EAX,dword ptr [EBX]
006567AA  51                        PUSH ECX
006567AB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006567B1  52                        PUSH EDX
006567B2  50                        PUSH EAX
006567B3  E8 70 B2 DA FF            CALL 0x00401a28
006567B8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006567BB  83 C3 04                  ADD EBX,0x4
006567BE  48                        DEC EAX
006567BF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006567C2  75 D1                     JNZ 0x00656795
006567C4  E9 AA 32 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_5ae:
006567C9  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
006567CF  51                        PUSH ECX
006567D0  E8 85 D0 DA FF            CALL 0x0040385a
006567D5  83 C4 04                  ADD ESP,0x4
006567D8  85 C0                     TEST EAX,EAX
006567DA  0F 84 B9 C2 FF FF         JZ 0x00652a99
006567E0  8B 16                     MOV EDX,dword ptr [ESI]
006567E2  8B CE                     MOV ECX,ESI
006567E4  FF 52 18                  CALL dword ptr [EDX + 0x18]
006567E7  83 F8 08                  CMP EAX,0x8
006567EA  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006567F0  75 09                     JNZ 0x006567fb
006567F2  83 F8 09                  CMP EAX,0x9
006567F5  0F 84 9E C2 FF FF         JZ 0x00652a99
LAB_006567fb:
006567FB  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00656801  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656804  51                        PUSH ECX
00656805  52                        PUSH EDX
00656806  50                        PUSH EAX
00656807  8B CE                     MOV ECX,ESI
00656809  E8 AA AE DA FF            CALL 0x004016b8
0065680E  85 C0                     TEST EAX,EAX
00656810  0F 8E 5D 32 00 00         JLE 0x00659a73
00656816  8D 5D D0                  LEA EBX,[EBP + -0x30]
00656819  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0065681c:
0065681C  8B 03                     MOV EAX,dword ptr [EBX]
0065681E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00656824  50                        PUSH EAX
00656825  E8 9C E6 DA FF            CALL 0x00404ec6
0065682A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065682D  83 C3 04                  ADD EBX,0x4
00656830  48                        DEC EAX
00656831  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00656834  75 E6                     JNZ 0x0065681c
00656836  E9 38 32 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_5af:
0065683B  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00656841  51                        PUSH ECX
00656842  E8 A5 CA DA FF            CALL 0x004032ec
00656847  83 C4 04                  ADD ESP,0x4
0065684A  85 C0                     TEST EAX,EAX
0065684C  0F 84 47 C2 FF FF         JZ 0x00652a99
00656852  8B 16                     MOV EDX,dword ptr [ESI]
00656854  8B CE                     MOV ECX,ESI
00656856  FF 52 18                  CALL dword ptr [EDX + 0x18]
00656859  83 F8 08                  CMP EAX,0x8
0065685C  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00656862  75 09                     JNZ 0x0065686d
00656864  83 F8 09                  CMP EAX,0x9
00656867  0F 84 2C C2 FF FF         JZ 0x00652a99
LAB_0065686d:
0065686D  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00656873  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656876  51                        PUSH ECX
00656877  52                        PUSH EDX
00656878  50                        PUSH EAX
00656879  8B CE                     MOV ECX,ESI
0065687B  E8 38 AE DA FF            CALL 0x004016b8
00656880  85 C0                     TEST EAX,EAX
00656882  0F 8E EB 31 00 00         JLE 0x00659a73
00656888  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065688B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065688E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00656891:
00656891  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00656894  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065689A  8A 02                     MOV AL,byte ptr [EDX]
0065689C  50                        PUSH EAX
0065689D  E8 23 B5 DA FF            CALL 0x00401dc5
006568A2  85 C0                     TEST EAX,EAX
006568A4  74 17                     JZ 0x006568bd
006568A6  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
006568AC  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006568B2  51                        PUSH ECX
006568B3  52                        PUSH EDX
006568B4  8B C8                     MOV ECX,EAX
006568B6  E8 5D C1 DA FF            CALL 0x00402a18
006568BB  EB 1A                     JMP 0x006568d7
LAB_006568bd:
006568BD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006568C0  8B 08                     MOV ECX,dword ptr [EAX]
006568C2  51                        PUSH ECX
006568C3  57                        PUSH EDI
006568C4  53                        PUSH EBX
006568C5  E8 11 EF DA FF            CALL 0x004057db
006568CA  50                        PUSH EAX
006568CB  68 55 FF FF FF            PUSH 0xffffff55
006568D0  8B CE                     MOV ECX,ESI
006568D2  E8 6B E7 DA FF            CALL 0x00405042
LAB_006568d7:
006568D7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006568DA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006568DD  83 C1 04                  ADD ECX,0x4
006568E0  48                        DEC EAX
006568E1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006568E4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006568E7  75 A8                     JNZ 0x00656891
006568E9  E9 85 31 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_5b0:
006568EE  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
006568F4  52                        PUSH EDX
006568F5  E8 D6 CC DA FF            CALL 0x004035d0
006568FA  83 C4 04                  ADD ESP,0x4
006568FD  85 C0                     TEST EAX,EAX
006568FF  0F 84 94 C1 FF FF         JZ 0x00652a99
00656905  8B 06                     MOV EAX,dword ptr [ESI]
00656907  8B CE                     MOV ECX,ESI
00656909  FF 50 18                  CALL dword ptr [EAX + 0x18]
0065690C  83 F8 08                  CMP EAX,0x8
0065690F  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00656915  75 09                     JNZ 0x00656920
00656917  83 F8 09                  CMP EAX,0x9
0065691A  0F 84 79 C1 FF FF         JZ 0x00652a99
LAB_00656920:
00656920  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00656926  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656929  51                        PUSH ECX
0065692A  52                        PUSH EDX
0065692B  50                        PUSH EAX
0065692C  8B CE                     MOV ECX,ESI
0065692E  E8 85 AD DA FF            CALL 0x004016b8
00656933  85 C0                     TEST EAX,EAX
00656935  0F 8E 38 31 00 00         JLE 0x00659a73
0065693B  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065693E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00656941  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00656944:
00656944  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00656947  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065694D  8A 02                     MOV AL,byte ptr [EDX]
0065694F  50                        PUSH EAX
00656950  E8 70 B4 DA FF            CALL 0x00401dc5
00656955  85 C0                     TEST EAX,EAX
00656957  74 09                     JZ 0x00656962
00656959  8B C8                     MOV ECX,EAX
0065695B  E8 65 C3 DA FF            CALL 0x00402cc5
00656960  EB 1A                     JMP 0x0065697c
LAB_00656962:
00656962  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00656965  8B 11                     MOV EDX,dword ptr [ECX]
00656967  52                        PUSH EDX
00656968  57                        PUSH EDI
00656969  53                        PUSH EBX
0065696A  E8 6C EE DA FF            CALL 0x004057db
0065696F  50                        PUSH EAX
00656970  68 55 FF FF FF            PUSH 0xffffff55
00656975  8B CE                     MOV ECX,ESI
00656977  E8 C6 E6 DA FF            CALL 0x00405042
LAB_0065697c:
0065697C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065697F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00656982  83 C1 04                  ADD ECX,0x4
00656985  48                        DEC EAX
00656986  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00656989  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065698C  75 B6                     JNZ 0x00656944
0065698E  E9 E0 30 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_5b4:
00656993  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00656999  50                        PUSH EAX
0065699A  E8 66 AB DA FF            CALL 0x00401505
0065699F  83 C4 04                  ADD ESP,0x4
006569A2  85 C0                     TEST EAX,EAX
006569A4  0F 84 EF C0 FF FF         JZ 0x00652a99
006569AA  8B 16                     MOV EDX,dword ptr [ESI]
006569AC  8B CE                     MOV ECX,ESI
006569AE  FF 52 18                  CALL dword ptr [EDX + 0x18]
006569B1  83 F8 08                  CMP EAX,0x8
006569B4  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006569BA  75 09                     JNZ 0x006569c5
006569BC  83 F8 09                  CMP EAX,0x9
006569BF  0F 84 D4 C0 FF FF         JZ 0x00652a99
LAB_006569c5:
006569C5  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006569CB  8D 4D D0                  LEA ECX,[EBP + -0x30]
006569CE  51                        PUSH ECX
006569CF  52                        PUSH EDX
006569D0  50                        PUSH EAX
006569D1  8B CE                     MOV ECX,ESI
006569D3  E8 E0 AC DA FF            CALL 0x004016b8
006569D8  85 C0                     TEST EAX,EAX
006569DA  0F 8E 93 30 00 00         JLE 0x00659a73
006569E0  8D 5D D0                  LEA EBX,[EBP + -0x30]
006569E3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006569e6:
006569E6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006569EC  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
006569F3  85 C9                     TEST ECX,ECX
006569F5  74 0A                     JZ 0x00656a01
006569F7  8A 03                     MOV AL,byte ptr [EBX]
006569F9  50                        PUSH EAX
006569FA  E8 C6 B3 DA FF            CALL 0x00401dc5
006569FF  EB 02                     JMP 0x00656a03
LAB_00656a01:
00656A01  33 C0                     XOR EAX,EAX
LAB_00656a03:
00656A03  85 C0                     TEST EAX,EAX
00656A05  74 26                     JZ 0x00656a2d
00656A07  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00656A0D  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00656A13  51                        PUSH ECX
00656A14  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00656A1A  52                        PUSH EDX
00656A1B  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00656A21  51                        PUSH ECX
00656A22  52                        PUSH EDX
00656A23  8B C8                     MOV ECX,EAX
00656A25  E8 E4 BF DA FF            CALL 0x00402a0e
00656A2A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00656a2d:
00656A2D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00656A30  85 C0                     TEST EAX,EAX
00656A32  7D 14                     JGE 0x00656a48
00656A34  8B 03                     MOV EAX,dword ptr [EBX]
00656A36  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
00656A3C  50                        PUSH EAX
00656A3D  57                        PUSH EDI
00656A3E  51                        PUSH ECX
00656A3F  6A FC                     PUSH -0x4
00656A41  8B CE                     MOV ECX,ESI
00656A43  E8 FA E5 DA FF            CALL 0x00405042
LAB_00656a48:
00656A48  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00656A4B  83 C3 04                  ADD EBX,0x4
00656A4E  48                        DEC EAX
00656A4F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00656A52  75 92                     JNZ 0x006569e6
00656A54  E9 1A 30 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_5b7:
00656A59  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00656A5F  52                        PUSH EDX
00656A60  E8 CD E6 DA FF            CALL 0x00405132
00656A65  83 C4 04                  ADD ESP,0x4
00656A68  85 C0                     TEST EAX,EAX
00656A6A  0F 84 29 C0 FF FF         JZ 0x00652a99
00656A70  8B 06                     MOV EAX,dword ptr [ESI]
00656A72  8B CE                     MOV ECX,ESI
00656A74  FF 50 18                  CALL dword ptr [EAX + 0x18]
00656A77  83 F8 08                  CMP EAX,0x8
00656A7A  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00656A80  75 09                     JNZ 0x00656a8b
00656A82  83 F8 09                  CMP EAX,0x9
00656A85  0F 84 0E C0 FF FF         JZ 0x00652a99
LAB_00656a8b:
00656A8B  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00656A91  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656A94  51                        PUSH ECX
00656A95  52                        PUSH EDX
00656A96  50                        PUSH EAX
00656A97  8B CE                     MOV ECX,ESI
00656A99  E8 1A AC DA FF            CALL 0x004016b8
00656A9E  85 C0                     TEST EAX,EAX
00656AA0  0F 8E CD 2F 00 00         JLE 0x00659a73
00656AA6  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656AA9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00656AAC  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00656aaf:
00656AAF  8B 95 C4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec4]
00656AB5  8B 85 C0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec0]
00656ABB  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
00656AC1  6A 01                     PUSH 0x1
00656AC3  52                        PUSH EDX
00656AC4  8B 95 B8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb8]
00656ACA  50                        PUSH EAX
00656ACB  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00656AD1  51                        PUSH ECX
00656AD2  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00656AD8  52                        PUSH EDX
00656AD9  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00656ADF  50                        PUSH EAX
00656AE0  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00656AE6  51                        PUSH ECX
00656AE7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00656AEA  52                        PUSH EDX
00656AEB  50                        PUSH EAX
00656AEC  8B 11                     MOV EDX,dword ptr [ECX]
00656AEE  52                        PUSH EDX
00656AEF  E8 DF CC DA FF            CALL 0x004037d3
00656AF4  83 C4 28                  ADD ESP,0x28
00656AF7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00656AFA  85 C0                     TEST EAX,EAX
00656AFC  74 1A                     JZ 0x00656b18
00656AFE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00656B01  50                        PUSH EAX
00656B02  8B 11                     MOV EDX,dword ptr [ECX]
00656B04  52                        PUSH EDX
00656B05  E8 66 B7 DA FF            CALL 0x00402270
00656B0A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00656B0D  83 C4 08                  ADD ESP,0x8
00656B10  50                        PUSH EAX
00656B11  E8 FA 75 05 00            CALL 0x006ae110
00656B16  EB 1A                     JMP 0x00656b32
LAB_00656b18:
00656B18  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00656B1B  8B 11                     MOV EDX,dword ptr [ECX]
00656B1D  52                        PUSH EDX
00656B1E  57                        PUSH EDI
00656B1F  53                        PUSH EBX
00656B20  E8 B6 EC DA FF            CALL 0x004057db
00656B25  50                        PUSH EAX
00656B26  68 55 FF FF FF            PUSH 0xffffff55
00656B2B  8B CE                     MOV ECX,ESI
00656B2D  E8 10 E5 DA FF            CALL 0x00405042
LAB_00656b32:
00656B32  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00656B35  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00656B38  83 C1 04                  ADD ECX,0x4
00656B3B  48                        DEC EAX
00656B3C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00656B3F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00656B42  0F 85 67 FF FF FF         JNZ 0x00656aaf
00656B48  E9 26 2F 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_5b8:
00656B4D  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00656B53  50                        PUSH EAX
00656B54  E8 33 AA DA FF            CALL 0x0040158c
00656B59  83 C4 04                  ADD ESP,0x4
00656B5C  85 C0                     TEST EAX,EAX
00656B5E  0F 84 35 BF FF FF         JZ 0x00652a99
00656B64  8B 16                     MOV EDX,dword ptr [ESI]
00656B66  8B CE                     MOV ECX,ESI
00656B68  FF 52 18                  CALL dword ptr [EDX + 0x18]
00656B6B  83 F8 08                  CMP EAX,0x8
00656B6E  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00656B74  75 09                     JNZ 0x00656b7f
00656B76  83 F8 09                  CMP EAX,0x9
00656B79  0F 84 1A BF FF FF         JZ 0x00652a99
LAB_00656b7f:
00656B7F  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00656B85  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656B88  51                        PUSH ECX
00656B89  52                        PUSH EDX
00656B8A  50                        PUSH EAX
00656B8B  8B CE                     MOV ECX,ESI
00656B8D  E8 26 AB DA FF            CALL 0x004016b8
00656B92  85 C0                     TEST EAX,EAX
00656B94  0F 8E D9 2E 00 00         JLE 0x00659a73
00656B9A  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656B9D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00656BA0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00656ba3:
00656BA3  8B 95 C4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec4]
00656BA9  8B 85 C0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec0]
00656BAF  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
00656BB5  6A 01                     PUSH 0x1
00656BB7  52                        PUSH EDX
00656BB8  8B 95 B8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb8]
00656BBE  50                        PUSH EAX
00656BBF  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00656BC5  51                        PUSH ECX
00656BC6  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00656BCC  52                        PUSH EDX
00656BCD  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00656BD3  50                        PUSH EAX
00656BD4  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00656BDA  51                        PUSH ECX
00656BDB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00656BDE  52                        PUSH EDX
00656BDF  50                        PUSH EAX
00656BE0  8B 11                     MOV EDX,dword ptr [ECX]
00656BE2  52                        PUSH EDX
00656BE3  E8 52 E7 DA FF            CALL 0x0040533a
00656BE8  83 C4 28                  ADD ESP,0x28
00656BEB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00656BEE  85 C0                     TEST EAX,EAX
00656BF0  74 1A                     JZ 0x00656c0c
00656BF2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00656BF5  50                        PUSH EAX
00656BF6  8B 11                     MOV EDX,dword ptr [ECX]
00656BF8  52                        PUSH EDX
00656BF9  E8 72 B6 DA FF            CALL 0x00402270
00656BFE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00656C01  83 C4 08                  ADD ESP,0x8
00656C04  50                        PUSH EAX
00656C05  E8 06 75 05 00            CALL 0x006ae110
00656C0A  EB 1A                     JMP 0x00656c26
LAB_00656c0c:
00656C0C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00656C0F  8B 11                     MOV EDX,dword ptr [ECX]
00656C11  52                        PUSH EDX
00656C12  57                        PUSH EDI
00656C13  53                        PUSH EBX
00656C14  E8 C2 EB DA FF            CALL 0x004057db
00656C19  50                        PUSH EAX
00656C1A  68 55 FF FF FF            PUSH 0xffffff55
00656C1F  8B CE                     MOV ECX,ESI
00656C21  E8 1C E4 DA FF            CALL 0x00405042
LAB_00656c26:
00656C26  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00656C29  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00656C2C  83 C1 04                  ADD ECX,0x4
00656C2F  48                        DEC EAX
00656C30  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00656C33  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00656C36  0F 85 67 FF FF FF         JNZ 0x00656ba3
00656C3C  E9 32 2E 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_5b9:
00656C41  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00656C47  50                        PUSH EAX
00656C48  E8 90 E4 DA FF            CALL 0x004050dd
00656C4D  83 C4 04                  ADD ESP,0x4
00656C50  85 C0                     TEST EAX,EAX
00656C52  0F 84 41 BE FF FF         JZ 0x00652a99
00656C58  8B 16                     MOV EDX,dword ptr [ESI]
00656C5A  8B CE                     MOV ECX,ESI
00656C5C  FF 52 18                  CALL dword ptr [EDX + 0x18]
00656C5F  83 F8 08                  CMP EAX,0x8
00656C62  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00656C68  75 09                     JNZ 0x00656c73
00656C6A  83 F8 09                  CMP EAX,0x9
00656C6D  0F 84 26 BE FF FF         JZ 0x00652a99
LAB_00656c73:
00656C73  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00656C79  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656C7C  51                        PUSH ECX
00656C7D  52                        PUSH EDX
00656C7E  50                        PUSH EAX
00656C7F  8B CE                     MOV ECX,ESI
00656C81  E8 32 AA DA FF            CALL 0x004016b8
00656C86  85 C0                     TEST EAX,EAX
00656C88  0F 8E E5 2D 00 00         JLE 0x00659a73
00656C8E  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656C91  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00656C94  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00656c97:
00656C97  8B 95 C4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec4]
00656C9D  8B 85 C0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec0]
00656CA3  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
00656CA9  6A 01                     PUSH 0x1
00656CAB  52                        PUSH EDX
00656CAC  8B 95 B8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb8]
00656CB2  50                        PUSH EAX
00656CB3  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00656CB9  51                        PUSH ECX
00656CBA  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00656CC0  52                        PUSH EDX
00656CC1  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00656CC7  50                        PUSH EAX
00656CC8  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00656CCE  51                        PUSH ECX
00656CCF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00656CD2  52                        PUSH EDX
00656CD3  50                        PUSH EAX
00656CD4  8B 11                     MOV EDX,dword ptr [ECX]
00656CD6  52                        PUSH EDX
00656CD7  E8 52 CF DA FF            CALL 0x00403c2e
00656CDC  83 C4 28                  ADD ESP,0x28
00656CDF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00656CE2  85 C0                     TEST EAX,EAX
00656CE4  74 1A                     JZ 0x00656d00
00656CE6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00656CE9  50                        PUSH EAX
00656CEA  8B 11                     MOV EDX,dword ptr [ECX]
00656CEC  52                        PUSH EDX
00656CED  E8 7E B5 DA FF            CALL 0x00402270
00656CF2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00656CF5  83 C4 08                  ADD ESP,0x8
00656CF8  50                        PUSH EAX
00656CF9  E8 12 74 05 00            CALL 0x006ae110
00656CFE  EB 1A                     JMP 0x00656d1a
LAB_00656d00:
00656D00  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00656D03  8B 11                     MOV EDX,dword ptr [ECX]
00656D05  52                        PUSH EDX
00656D06  57                        PUSH EDI
00656D07  53                        PUSH EBX
00656D08  E8 CE EA DA FF            CALL 0x004057db
00656D0D  50                        PUSH EAX
00656D0E  68 55 FF FF FF            PUSH 0xffffff55
00656D13  8B CE                     MOV ECX,ESI
00656D15  E8 28 E3 DA FF            CALL 0x00405042
LAB_00656d1a:
00656D1A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00656D1D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00656D20  83 C1 04                  ADD ECX,0x4
00656D23  48                        DEC EAX
00656D24  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00656D27  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00656D2A  0F 85 67 FF FF FF         JNZ 0x00656c97
00656D30  E9 3E 2D 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_5b5:
00656D35  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00656D3B  50                        PUSH EAX
00656D3C  E8 2D D5 DA FF            CALL 0x0040426e
00656D41  83 C4 04                  ADD ESP,0x4
00656D44  85 C0                     TEST EAX,EAX
00656D46  0F 84 4D BD FF FF         JZ 0x00652a99
00656D4C  8B 16                     MOV EDX,dword ptr [ESI]
00656D4E  8B CE                     MOV ECX,ESI
00656D50  FF 52 18                  CALL dword ptr [EDX + 0x18]
00656D53  83 F8 08                  CMP EAX,0x8
00656D56  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00656D5C  75 09                     JNZ 0x00656d67
00656D5E  83 F8 09                  CMP EAX,0x9
00656D61  0F 84 32 BD FF FF         JZ 0x00652a99
LAB_00656d67:
00656D67  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00656D6D  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656D70  51                        PUSH ECX
00656D71  52                        PUSH EDX
00656D72  50                        PUSH EAX
00656D73  8B CE                     MOV ECX,ESI
00656D75  E8 3E A9 DA FF            CALL 0x004016b8
00656D7A  85 C0                     TEST EAX,EAX
00656D7C  0F 8E F1 2C 00 00         JLE 0x00659a73
00656D82  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656D85  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00656D88  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00656d8b:
00656D8B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00656D91  85 C9                     TEST ECX,ECX
00656D93  74 0D                     JZ 0x00656da2
00656D95  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00656D98  8A 02                     MOV AL,byte ptr [EDX]
00656D9A  50                        PUSH EAX
00656D9B  E8 25 B0 DA FF            CALL 0x00401dc5
00656DA0  EB 02                     JMP 0x00656da4
LAB_00656da2:
00656DA2  33 C0                     XOR EAX,EAX
LAB_00656da4:
00656DA4  85 C0                     TEST EAX,EAX
00656DA6  74 21                     JZ 0x00656dc9
00656DA8  8A 95 A8 FE FF FF         MOV DL,byte ptr [EBP + 0xfffffea8]
00656DAE  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00656DB4  88 90 44 06 00 00         MOV byte ptr [EAX + 0x644],DL
00656DBA  89 88 40 06 00 00         MOV dword ptr [EAX + 0x640],ECX
00656DC0  8B C8                     MOV ECX,EAX
00656DC2  E8 EF AF DA FF            CALL 0x00401db6
00656DC7  EB 1A                     JMP 0x00656de3
LAB_00656dc9:
00656DC9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00656DCC  8B 08                     MOV ECX,dword ptr [EAX]
00656DCE  51                        PUSH ECX
00656DCF  57                        PUSH EDI
00656DD0  53                        PUSH EBX
00656DD1  E8 05 EA DA FF            CALL 0x004057db
00656DD6  50                        PUSH EAX
00656DD7  68 55 FF FF FF            PUSH 0xffffff55
00656DDC  8B CE                     MOV ECX,ESI
00656DDE  E8 5F E2 DA FF            CALL 0x00405042
LAB_00656de3:
00656DE3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00656DE6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00656DE9  83 C1 04                  ADD ECX,0x4
00656DEC  48                        DEC EAX
00656DED  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00656DF0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00656DF3  75 96                     JNZ 0x00656d8b
00656DF5  E9 79 2C 00 00            JMP 0x00659a73
switchD_00655e9a::caseD_5b6:
00656DFA  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00656E00  52                        PUSH EDX
00656E01  E8 29 EB DA FF            CALL 0x0040592f
00656E06  83 C4 04                  ADD ESP,0x4
00656E09  85 C0                     TEST EAX,EAX
00656E0B  0F 84 88 BC FF FF         JZ 0x00652a99
00656E11  8B 06                     MOV EAX,dword ptr [ESI]
00656E13  8B CE                     MOV ECX,ESI
00656E15  FF 50 18                  CALL dword ptr [EAX + 0x18]
00656E18  83 F8 08                  CMP EAX,0x8
00656E1B  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00656E21  75 09                     JNZ 0x00656e2c
00656E23  83 F8 09                  CMP EAX,0x9
00656E26  0F 84 6D BC FF FF         JZ 0x00652a99
LAB_00656e2c:
00656E2C  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00656E32  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656E35  51                        PUSH ECX
00656E36  52                        PUSH EDX
00656E37  50                        PUSH EAX
00656E38  8B CE                     MOV ECX,ESI
00656E3A  E8 79 A8 DA FF            CALL 0x004016b8
00656E3F  85 C0                     TEST EAX,EAX
00656E41  0F 8E 2C 2C 00 00         JLE 0x00659a73
00656E47  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656E4A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00656E4D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00656e50:
00656E50  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00656E56  85 C9                     TEST ECX,ECX
00656E58  74 0D                     JZ 0x00656e67
00656E5A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00656E5D  8A 02                     MOV AL,byte ptr [EDX]
00656E5F  50                        PUSH EAX
00656E60  E8 60 AF DA FF            CALL 0x00401dc5
00656E65  EB 02                     JMP 0x00656e69
LAB_00656e67:
00656E67  33 C0                     XOR EAX,EAX
LAB_00656e69:
00656E69  85 C0                     TEST EAX,EAX
00656E6B  74 2C                     JZ 0x00656e99
00656E6D  8B 8D B8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb8]
00656E73  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00656E79  51                        PUSH ECX
00656E7A  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00656E80  52                        PUSH EDX
00656E81  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00656E87  51                        PUSH ECX
00656E88  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
00656E8E  52                        PUSH EDX
00656E8F  51                        PUSH ECX
00656E90  8B C8                     MOV ECX,EAX
00656E92  E8 11 AE DA FF            CALL 0x00401ca8
00656E97  EB 1A                     JMP 0x00656eb3
LAB_00656e99:
00656E99  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00656E9C  8B 02                     MOV EAX,dword ptr [EDX]
00656E9E  50                        PUSH EAX
00656E9F  57                        PUSH EDI
00656EA0  53                        PUSH EBX
00656EA1  E8 35 E9 DA FF            CALL 0x004057db
00656EA6  50                        PUSH EAX
00656EA7  68 55 FF FF FF            PUSH 0xffffff55
00656EAC  8B CE                     MOV ECX,ESI
00656EAE  E8 8F E1 DA FF            CALL 0x00405042
LAB_00656eb3:
00656EB3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00656EB6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00656EB9  83 C1 04                  ADD ECX,0x4
00656EBC  48                        DEC EAX
00656EBD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00656EC0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00656EC3  75 8B                     JNZ 0x00656e50
00656EC5  E9 A9 2B 00 00            JMP 0x00659a73
LAB_00656eca:
00656ECA  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00656ED0  51                        PUSH ECX
00656ED1  E8 63 C2 DA FF            CALL 0x00403139
00656ED6  83 C4 04                  ADD ESP,0x4
00656ED9  85 C0                     TEST EAX,EAX
00656EDB  75 1C                     JNZ 0x00656ef9
00656EDD  6A FF                     PUSH -0x1
00656EDF  57                        PUSH EDI
00656EE0  68 C8 05 00 00            PUSH 0x5c8
00656EE5  E8 F1 E8 DA FF            CALL 0x004057db
00656EEA  50                        PUSH EAX
00656EEB  6A 83                     PUSH -0x7d
00656EED  8B CE                     MOV ECX,ESI
00656EEF  E8 4E E1 DA FF            CALL 0x00405042
00656EF4  E9 7A 2B 00 00            JMP 0x00659a73
LAB_00656ef9:
00656EF9  8B 16                     MOV EDX,dword ptr [ESI]
00656EFB  8B CE                     MOV ECX,ESI
00656EFD  FF 52 18                  CALL dword ptr [EDX + 0x18]
00656F00  83 F8 08                  CMP EAX,0x8
00656F03  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00656F09  75 21                     JNZ 0x00656f2c
00656F0B  83 F8 09                  CMP EAX,0x9
00656F0E  75 1C                     JNZ 0x00656f2c
00656F10  6A FF                     PUSH -0x1
00656F12  57                        PUSH EDI
00656F13  68 C8 05 00 00            PUSH 0x5c8
00656F18  E8 BE E8 DA FF            CALL 0x004057db
00656F1D  50                        PUSH EAX
00656F1E  6A 83                     PUSH -0x7d
00656F20  8B CE                     MOV ECX,ESI
00656F22  E8 1B E1 DA FF            CALL 0x00405042
00656F27  E9 47 2B 00 00            JMP 0x00659a73
LAB_00656f2c:
00656F2C  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00656F32  8D 4D D0                  LEA ECX,[EBP + -0x30]
00656F35  51                        PUSH ECX
00656F36  52                        PUSH EDX
00656F37  50                        PUSH EAX
00656F38  8B CE                     MOV ECX,ESI
00656F3A  E8 79 A7 DA FF            CALL 0x004016b8
00656F3F  85 C0                     TEST EAX,EAX
00656F41  0F 8E 2C 2B 00 00         JLE 0x00659a73
00656F47  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
00656F4D  8D 5D D0                  LEA EBX,[EBP + -0x30]
00656F50  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00656f53:
00656F53  83 CA FF                  OR EDX,0xffffffff
00656F56  83 F9 01                  CMP ECX,0x1
00656F59  7C 0C                     JL 0x00656f67
00656F5B  83 F9 29                  CMP ECX,0x29
00656F5E  7D 07                     JGE 0x00656f67
00656F60  B8 01 00 00 00            MOV EAX,0x1
00656F65  EB 02                     JMP 0x00656f69
LAB_00656f67:
00656F67  33 C0                     XOR EAX,EAX
LAB_00656f69:
00656F69  85 C0                     TEST EAX,EAX
00656F6B  74 03                     JZ 0x00656f70
00656F6D  8D 51 41                  LEA EDX,[ECX + 0x41]
LAB_00656f70:
00656F70  83 F9 32                  CMP ECX,0x32
00656F73  7C 0C                     JL 0x00656f81
00656F75  83 F9 74                  CMP ECX,0x74
00656F78  7D 07                     JGE 0x00656f81
00656F7A  B8 01 00 00 00            MOV EAX,0x1
00656F7F  EB 02                     JMP 0x00656f83
LAB_00656f81:
00656F81  33 C0                     XOR EAX,EAX
LAB_00656f83:
00656F83  85 C0                     TEST EAX,EAX
00656F85  74 03                     JZ 0x00656f8a
00656F87  8D 51 CE                  LEA EDX,[ECX + -0x32]
LAB_00656f8a:
00656F8A  85 D2                     TEST EDX,EDX
00656F8C  7C 1C                     JL 0x00656faa
00656F8E  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00656F94  8B 0B                     MOV ECX,dword ptr [EBX]
00656F96  50                        PUSH EAX
00656F97  52                        PUSH EDX
00656F98  51                        PUSH ECX
00656F99  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00656F9F  E8 0B BF DA FF            CALL 0x00402eaf
00656FA4  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
LAB_00656faa:
00656FAA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00656FAD  83 C3 04                  ADD EBX,0x4
00656FB0  48                        DEC EAX
00656FB1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00656FB4  75 9D                     JNZ 0x00656f53
00656FB6  E9 B8 2A 00 00            JMP 0x00659a73
LAB_00656fbb:
00656FBB  81 FB 6C 07 00 00         CMP EBX,0x76c
00656FC1  0F 8F AC 2A 00 00         JG 0x00659a73
00656FC7  0F 84 6E 2A 00 00         JZ 0x00659a3b
00656FCD  8D 83 24 FA FF FF         LEA EAX,[EBX + 0xfffffa24]
00656FD3  83 F8 22                  CMP EAX,0x22
00656FD6  0F 87 97 2A 00 00         JA 0x00659a73
switchD_00656fdc::switchD:
00656FDC  FF 24 85 C0 9E 65 00      JMP dword ptr [EAX*0x4 + 0x659ec0]
switchD_00656fdc::caseD_5dc:
00656FE3  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00656FE9  52                        PUSH EDX
00656FEA  E8 78 AC DA FF            CALL 0x00401c67
00656FEF  83 C4 04                  ADD ESP,0x4
00656FF2  85 C0                     TEST EAX,EAX
00656FF4  0F 84 9F BA FF FF         JZ 0x00652a99
00656FFA  8B 06                     MOV EAX,dword ptr [ESI]
00656FFC  8B CE                     MOV ECX,ESI
00656FFE  FF 50 18                  CALL dword ptr [EAX + 0x18]
00657001  83 F8 08                  CMP EAX,0x8
00657004  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
0065700A  75 09                     JNZ 0x00657015
0065700C  83 F8 09                  CMP EAX,0x9
0065700F  0F 84 84 BA FF FF         JZ 0x00652a99
LAB_00657015:
00657015  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065701B  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065701E  51                        PUSH ECX
0065701F  52                        PUSH EDX
00657020  50                        PUSH EAX
00657021  8B CE                     MOV ECX,ESI
00657023  E8 90 A6 DA FF            CALL 0x004016b8
00657028  85 C0                     TEST EAX,EAX
0065702A  0F 8E 43 2A 00 00         JLE 0x00659a73
00657030  8D 5D D0                  LEA EBX,[EBP + -0x30]
00657033  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00657036:
00657036  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
0065703C  8B 8D B8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb8]
00657042  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00657048  50                        PUSH EAX
00657049  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
0065704F  51                        PUSH ECX
00657050  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00657056  52                        PUSH EDX
00657057  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
0065705D  50                        PUSH EAX
0065705E  8B 03                     MOV EAX,dword ptr [EBX]
00657060  51                        PUSH ECX
00657061  52                        PUSH EDX
00657062  50                        PUSH EAX
00657063  8B CE                     MOV ECX,ESI
00657065  E8 99 BF DA FF            CALL 0x00403003
0065706A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065706D  83 C3 04                  ADD EBX,0x4
00657070  48                        DEC EAX
00657071  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657074  75 C0                     JNZ 0x00657036
00657076  E9 F8 29 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5dd:
0065707B  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00657081  51                        PUSH ECX
00657082  E8 1D D8 DA FF            CALL 0x004048a4
00657087  83 C4 04                  ADD ESP,0x4
0065708A  85 C0                     TEST EAX,EAX
0065708C  0F 84 07 BA FF FF         JZ 0x00652a99
00657092  8B 16                     MOV EDX,dword ptr [ESI]
00657094  8B CE                     MOV ECX,ESI
00657096  FF 52 18                  CALL dword ptr [EDX + 0x18]
00657099  83 F8 08                  CMP EAX,0x8
0065709C  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006570A2  75 09                     JNZ 0x006570ad
006570A4  83 F8 09                  CMP EAX,0x9
006570A7  0F 84 EC B9 FF FF         JZ 0x00652a99
LAB_006570ad:
006570AD  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006570B3  8D 4D D0                  LEA ECX,[EBP + -0x30]
006570B6  51                        PUSH ECX
006570B7  52                        PUSH EDX
006570B8  50                        PUSH EAX
006570B9  8B CE                     MOV ECX,ESI
006570BB  E8 F8 A5 DA FF            CALL 0x004016b8
006570C0  85 C0                     TEST EAX,EAX
006570C2  0F 8E AB 29 00 00         JLE 0x00659a73
006570C8  8D 4D D0                  LEA ECX,[EBP + -0x30]
006570CB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006570CE  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006570d1:
006570D1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006570D4  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006570DA  52                        PUSH EDX
006570DB  8A 08                     MOV CL,byte ptr [EAX]
006570DD  51                        PUSH ECX
006570DE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006570E4  E8 10 EC DA FF            CALL 0x00405cf9
006570E9  85 C0                     TEST EAX,EAX
006570EB  75 1A                     JNZ 0x00657107
006570ED  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006570F0  8B CE                     MOV ECX,ESI
006570F2  8B 02                     MOV EAX,dword ptr [EDX]
006570F4  50                        PUSH EAX
006570F5  57                        PUSH EDI
006570F6  68 A0 16 80 00            PUSH 0x8016a0
006570FB  68 56 FF FF FF            PUSH 0xffffff56
00657100  E8 3D DF DA FF            CALL 0x00405042
00657105  EB 2E                     JMP 0x00657135
LAB_00657107:
00657107  8B C8                     MOV ECX,EAX
00657109  E8 F4 E7 DA FF            CALL 0x00405902
0065710E  85 C0                     TEST EAX,EAX
00657110  75 1C                     JNZ 0x0065712e
00657112  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00657115  8B 11                     MOV EDX,dword ptr [ECX]
00657117  52                        PUSH EDX
00657118  57                        PUSH EDI
00657119  53                        PUSH EBX
0065711A  E8 BC E6 DA FF            CALL 0x004057db
0065711F  50                        PUSH EAX
00657120  68 55 FF FF FF            PUSH 0xffffff55
00657125  8B CE                     MOV ECX,ESI
00657127  E8 16 DF DA FF            CALL 0x00405042
0065712C  EB 07                     JMP 0x00657135
LAB_0065712e:
0065712E  8B C8                     MOV ECX,EAX
00657130  E8 D7 A1 DA FF            CALL 0x0040130c
LAB_00657135:
00657135  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00657138  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065713B  83 C1 04                  ADD ECX,0x4
0065713E  48                        DEC EAX
0065713F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00657142  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657145  75 8A                     JNZ 0x006570d1
00657147  E9 27 29 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5de:
0065714C  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00657152  50                        PUSH EAX
00657153  E8 66 AE DA FF            CALL 0x00401fbe
00657158  83 C4 04                  ADD ESP,0x4
0065715B  85 C0                     TEST EAX,EAX
0065715D  0F 84 36 B9 FF FF         JZ 0x00652a99
00657163  8B 16                     MOV EDX,dword ptr [ESI]
00657165  8B CE                     MOV ECX,ESI
00657167  FF 52 18                  CALL dword ptr [EDX + 0x18]
0065716A  83 F8 08                  CMP EAX,0x8
0065716D  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00657173  75 09                     JNZ 0x0065717e
00657175  83 F8 09                  CMP EAX,0x9
00657178  0F 84 1B B9 FF FF         JZ 0x00652a99
LAB_0065717e:
0065717E  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00657184  8D 4D D0                  LEA ECX,[EBP + -0x30]
00657187  51                        PUSH ECX
00657188  52                        PUSH EDX
00657189  50                        PUSH EAX
0065718A  8B CE                     MOV ECX,ESI
0065718C  E8 27 A5 DA FF            CALL 0x004016b8
00657191  85 C0                     TEST EAX,EAX
00657193  0F 8E DA 28 00 00         JLE 0x00659a73
00657199  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065719C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065719F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006571a2:
006571A2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006571A5  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006571AB  52                        PUSH EDX
006571AC  8A 08                     MOV CL,byte ptr [EAX]
006571AE  51                        PUSH ECX
006571AF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006571B5  E8 3F EB DA FF            CALL 0x00405cf9
006571BA  85 C0                     TEST EAX,EAX
006571BC  75 1A                     JNZ 0x006571d8
006571BE  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006571C1  8B CE                     MOV ECX,ESI
006571C3  8B 02                     MOV EAX,dword ptr [EDX]
006571C5  50                        PUSH EAX
006571C6  57                        PUSH EDI
006571C7  68 A0 16 80 00            PUSH 0x8016a0
006571CC  68 56 FF FF FF            PUSH 0xffffff56
006571D1  E8 6C DE DA FF            CALL 0x00405042
006571D6  EB 2E                     JMP 0x00657206
LAB_006571d8:
006571D8  8B C8                     MOV ECX,EAX
006571DA  E8 23 E7 DA FF            CALL 0x00405902
006571DF  85 C0                     TEST EAX,EAX
006571E1  75 1C                     JNZ 0x006571ff
006571E3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006571E6  8B 11                     MOV EDX,dword ptr [ECX]
006571E8  52                        PUSH EDX
006571E9  57                        PUSH EDI
006571EA  53                        PUSH EBX
006571EB  E8 EB E5 DA FF            CALL 0x004057db
006571F0  50                        PUSH EAX
006571F1  68 55 FF FF FF            PUSH 0xffffff55
006571F6  8B CE                     MOV ECX,ESI
006571F8  E8 45 DE DA FF            CALL 0x00405042
006571FD  EB 07                     JMP 0x00657206
LAB_006571ff:
006571FF  8B C8                     MOV ECX,EAX
00657201  E8 EB AC DA FF            CALL 0x00401ef1
LAB_00657206:
00657206  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00657209  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065720C  83 C1 04                  ADD ECX,0x4
0065720F  48                        DEC EAX
00657210  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00657213  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657216  75 8A                     JNZ 0x006571a2
00657218  E9 56 28 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5df:
0065721D  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00657223  50                        PUSH EAX
00657224  E8 95 AD DA FF            CALL 0x00401fbe
00657229  83 C4 04                  ADD ESP,0x4
0065722C  85 C0                     TEST EAX,EAX
0065722E  0F 84 65 B8 FF FF         JZ 0x00652a99
00657234  8B 16                     MOV EDX,dword ptr [ESI]
00657236  8B CE                     MOV ECX,ESI
00657238  FF 52 18                  CALL dword ptr [EDX + 0x18]
0065723B  83 F8 08                  CMP EAX,0x8
0065723E  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00657244  75 09                     JNZ 0x0065724f
00657246  83 F8 09                  CMP EAX,0x9
00657249  0F 84 4A B8 FF FF         JZ 0x00652a99
LAB_0065724f:
0065724F  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00657255  8D 4D D0                  LEA ECX,[EBP + -0x30]
00657258  51                        PUSH ECX
00657259  52                        PUSH EDX
0065725A  50                        PUSH EAX
0065725B  8B CE                     MOV ECX,ESI
0065725D  E8 56 A4 DA FF            CALL 0x004016b8
00657262  85 C0                     TEST EAX,EAX
00657264  0F 8E 09 28 00 00         JLE 0x00659a73
0065726A  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065726D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00657270  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00657273:
00657273  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00657276  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
0065727C  52                        PUSH EDX
0065727D  8A 08                     MOV CL,byte ptr [EAX]
0065727F  51                        PUSH ECX
00657280  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00657286  E8 6E EA DA FF            CALL 0x00405cf9
0065728B  85 C0                     TEST EAX,EAX
0065728D  75 1A                     JNZ 0x006572a9
0065728F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00657292  8B CE                     MOV ECX,ESI
00657294  8B 02                     MOV EAX,dword ptr [EDX]
00657296  50                        PUSH EAX
00657297  57                        PUSH EDI
00657298  68 A0 16 80 00            PUSH 0x8016a0
0065729D  68 56 FF FF FF            PUSH 0xffffff56
006572A2  E8 9B DD DA FF            CALL 0x00405042
006572A7  EB 5B                     JMP 0x00657304
LAB_006572a9:
006572A9  8B C8                     MOV ECX,EAX
006572AB  E8 52 E6 DA FF            CALL 0x00405902
006572B0  85 C0                     TEST EAX,EAX
006572B2  89 85 88 FE FF FF         MOV dword ptr [EBP + 0xfffffe88],EAX
006572B8  75 1C                     JNZ 0x006572d6
006572BA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006572BD  8B 11                     MOV EDX,dword ptr [ECX]
006572BF  52                        PUSH EDX
006572C0  57                        PUSH EDI
006572C1  53                        PUSH EBX
006572C2  E8 14 E5 DA FF            CALL 0x004057db
006572C7  50                        PUSH EAX
006572C8  68 55 FF FF FF            PUSH 0xffffff55
006572CD  8B CE                     MOV ECX,ESI
006572CF  E8 6E DD DA FF            CALL 0x00405042
006572D4  EB 2E                     JMP 0x00657304
LAB_006572d6:
006572D6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006572D9  8B 08                     MOV ECX,dword ptr [EAX]
006572DB  51                        PUSH ECX
006572DC  E8 C8 DA DA FF            CALL 0x00404da9
006572E1  83 C4 04                  ADD ESP,0x4
006572E4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006572E7  85 C0                     TEST EAX,EAX
006572E9  74 19                     JZ 0x00657304
006572EB  8B 8D 88 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe88]
006572F1  8B D0                     MOV EDX,EAX
006572F3  6A 00                     PUSH 0x0
006572F5  52                        PUSH EDX
006572F6  E8 EF AD DA FF            CALL 0x004020ea
006572FB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006572FE  50                        PUSH EAX
006572FF  E8 0C 6E 05 00            CALL 0x006ae110
LAB_00657304:
00657304  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00657307  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065730A  83 C1 04                  ADD ECX,0x4
0065730D  48                        DEC EAX
0065730E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00657311  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00657314  0F 85 59 FF FF FF         JNZ 0x00657273
0065731A  E9 54 27 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5e0:
0065731F  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00657325  51                        PUSH ECX
00657326  E8 78 C7 DA FF            CALL 0x00403aa3
0065732B  83 C4 04                  ADD ESP,0x4
0065732E  85 C0                     TEST EAX,EAX
00657330  0F 84 63 B7 FF FF         JZ 0x00652a99
00657336  8B 16                     MOV EDX,dword ptr [ESI]
00657338  8B CE                     MOV ECX,ESI
0065733A  FF 52 18                  CALL dword ptr [EDX + 0x18]
0065733D  83 F8 08                  CMP EAX,0x8
00657340  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00657346  75 09                     JNZ 0x00657351
00657348  83 F8 09                  CMP EAX,0x9
0065734B  0F 84 48 B7 FF FF         JZ 0x00652a99
LAB_00657351:
00657351  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00657357  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065735A  51                        PUSH ECX
0065735B  52                        PUSH EDX
0065735C  50                        PUSH EAX
0065735D  8B CE                     MOV ECX,ESI
0065735F  E8 54 A3 DA FF            CALL 0x004016b8
00657364  85 C0                     TEST EAX,EAX
00657366  0F 8E 07 27 00 00         JLE 0x00659a73
0065736C  8D 5D D0                  LEA EBX,[EBP + -0x30]
0065736F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00657372:
00657372  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
00657378  8A 0B                     MOV CL,byte ptr [EBX]
0065737A  50                        PUSH EAX
0065737B  51                        PUSH ECX
0065737C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00657382  E8 72 E9 DA FF            CALL 0x00405cf9
00657387  85 C0                     TEST EAX,EAX
00657389  75 17                     JNZ 0x006573a2
0065738B  8B 13                     MOV EDX,dword ptr [EBX]
0065738D  8B CE                     MOV ECX,ESI
0065738F  52                        PUSH EDX
00657390  57                        PUSH EDI
00657391  68 A0 16 80 00            PUSH 0x8016a0
00657396  68 56 FF FF FF            PUSH 0xffffff56
0065739B  E8 A2 DC DA FF            CALL 0x00405042
006573A0  EB 0E                     JMP 0x006573b0
LAB_006573a2:
006573A2  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
006573A8  51                        PUSH ECX
006573A9  8B C8                     MOV ECX,EAX
006573AB  E8 5B D2 DA FF            CALL 0x0040460b
LAB_006573b0:
006573B0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006573B3  83 C3 04                  ADD EBX,0x4
006573B6  48                        DEC EAX
006573B7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006573BA  75 B6                     JNZ 0x00657372
006573BC  E9 B2 26 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5e1:
006573C1  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
006573C7  52                        PUSH EDX
006573C8  E8 D6 C6 DA FF            CALL 0x00403aa3
006573CD  83 C4 04                  ADD ESP,0x4
006573D0  85 C0                     TEST EAX,EAX
006573D2  0F 84 C1 B6 FF FF         JZ 0x00652a99
006573D8  8B 06                     MOV EAX,dword ptr [ESI]
006573DA  8B CE                     MOV ECX,ESI
006573DC  FF 50 18                  CALL dword ptr [EAX + 0x18]
006573DF  83 F8 08                  CMP EAX,0x8
006573E2  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006573E8  75 09                     JNZ 0x006573f3
006573EA  83 F8 09                  CMP EAX,0x9
006573ED  0F 84 A6 B6 FF FF         JZ 0x00652a99
LAB_006573f3:
006573F3  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006573F9  8D 4D D0                  LEA ECX,[EBP + -0x30]
006573FC  51                        PUSH ECX
006573FD  52                        PUSH EDX
006573FE  50                        PUSH EAX
006573FF  8B CE                     MOV ECX,ESI
00657401  E8 B2 A2 DA FF            CALL 0x004016b8
00657406  85 C0                     TEST EAX,EAX
00657408  0F 8E 65 26 00 00         JLE 0x00659a73
0065740E  8D 5D D0                  LEA EBX,[EBP + -0x30]
00657411  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00657414:
00657414  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
0065741A  8A 0B                     MOV CL,byte ptr [EBX]
0065741C  50                        PUSH EAX
0065741D  51                        PUSH ECX
0065741E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00657424  E8 D0 E8 DA FF            CALL 0x00405cf9
00657429  85 C0                     TEST EAX,EAX
0065742B  75 17                     JNZ 0x00657444
0065742D  8B 13                     MOV EDX,dword ptr [EBX]
0065742F  8B CE                     MOV ECX,ESI
00657431  52                        PUSH EDX
00657432  57                        PUSH EDI
00657433  68 A0 16 80 00            PUSH 0x8016a0
00657438  68 56 FF FF FF            PUSH 0xffffff56
0065743D  E8 00 DC DA FF            CALL 0x00405042
00657442  EB 0E                     JMP 0x00657452
LAB_00657444:
00657444  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
0065744A  51                        PUSH ECX
0065744B  8B C8                     MOV ECX,EAX
0065744D  E8 36 C3 DA FF            CALL 0x00403788
LAB_00657452:
00657452  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00657455  83 C3 04                  ADD EBX,0x4
00657458  48                        DEC EAX
00657459  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065745C  75 B6                     JNZ 0x00657414
0065745E  E9 10 26 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5e2:
00657463  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00657469  52                        PUSH EDX
0065746A  E8 44 E8 DA FF            CALL 0x00405cb3
0065746F  83 C4 04                  ADD ESP,0x4
00657472  85 C0                     TEST EAX,EAX
00657474  0F 84 1F B6 FF FF         JZ 0x00652a99
0065747A  8B 06                     MOV EAX,dword ptr [ESI]
0065747C  8B CE                     MOV ECX,ESI
0065747E  FF 50 18                  CALL dword ptr [EAX + 0x18]
00657481  83 F8 08                  CMP EAX,0x8
00657484  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
0065748A  75 09                     JNZ 0x00657495
0065748C  83 F8 09                  CMP EAX,0x9
0065748F  0F 84 04 B6 FF FF         JZ 0x00652a99
LAB_00657495:
00657495  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065749B  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065749E  51                        PUSH ECX
0065749F  52                        PUSH EDX
006574A0  50                        PUSH EAX
006574A1  8B CE                     MOV ECX,ESI
006574A3  E8 10 A2 DA FF            CALL 0x004016b8
006574A8  85 C0                     TEST EAX,EAX
006574AA  0F 8E C3 25 00 00         JLE 0x00659a73
006574B0  8D 4D D0                  LEA ECX,[EBP + -0x30]
006574B3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006574B6  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006574b9:
006574B9  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006574BC  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006574C2  52                        PUSH EDX
006574C3  8A 08                     MOV CL,byte ptr [EAX]
006574C5  51                        PUSH ECX
006574C6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006574CC  E8 28 E8 DA FF            CALL 0x00405cf9
006574D1  85 C0                     TEST EAX,EAX
006574D3  75 1D                     JNZ 0x006574f2
006574D5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006574D8  8B CE                     MOV ECX,ESI
006574DA  8B 02                     MOV EAX,dword ptr [EDX]
006574DC  50                        PUSH EAX
006574DD  57                        PUSH EDI
006574DE  68 A0 16 80 00            PUSH 0x8016a0
006574E3  68 56 FF FF FF            PUSH 0xffffff56
006574E8  E8 55 DB DA FF            CALL 0x00405042
006574ED  E9 8B 00 00 00            JMP 0x0065757d
LAB_006574f2:
006574F2  8B C8                     MOV ECX,EAX
006574F4  E8 09 E4 DA FF            CALL 0x00405902
006574F9  85 C0                     TEST EAX,EAX
006574FB  89 85 88 FE FF FF         MOV dword ptr [EBP + 0xfffffe88],EAX
00657501  75 1C                     JNZ 0x0065751f
00657503  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00657506  8B 11                     MOV EDX,dword ptr [ECX]
00657508  52                        PUSH EDX
00657509  57                        PUSH EDI
0065750A  53                        PUSH EBX
0065750B  E8 CB E2 DA FF            CALL 0x004057db
00657510  50                        PUSH EAX
00657511  68 55 FF FF FF            PUSH 0xffffff55
00657516  8B CE                     MOV ECX,ESI
00657518  E8 25 DB DA FF            CALL 0x00405042
0065751D  EB 5E                     JMP 0x0065757d
LAB_0065751f:
0065751F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00657525  33 C0                     XOR EAX,EAX
00657527  3B C8                     CMP ECX,EAX
00657529  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0065752C  74 0B                     JZ 0x00657539
0065752E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00657531  8A 10                     MOV DL,byte ptr [EAX]
00657533  52                        PUSH EDX
00657534  E8 8C A8 DA FF            CALL 0x00401dc5
LAB_00657539:
00657539  85 C0                     TEST EAX,EAX
0065753B  74 11                     JZ 0x0065754e
0065753D  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00657543  51                        PUSH ECX
00657544  8B C8                     MOV ECX,EAX
00657546  E8 BB E4 DA FF            CALL 0x00405a06
0065754B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0065754e:
0065754E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00657551  85 C0                     TEST EAX,EAX
00657553  75 19                     JNZ 0x0065756e
00657555  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00657558  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
0065755E  8B 02                     MOV EAX,dword ptr [EDX]
00657560  50                        PUSH EAX
00657561  57                        PUSH EDI
00657562  51                        PUSH ECX
00657563  6A FC                     PUSH -0x4
00657565  8B CE                     MOV ECX,ESI
00657567  E8 D6 DA DA FF            CALL 0x00405042
0065756C  EB 0F                     JMP 0x0065757d
LAB_0065756e:
0065756E  8B 95 88 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe88]
00657574  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00657577  52                        PUSH EDX
00657578  E8 48 E9 DA FF            CALL 0x00405ec5
LAB_0065757d:
0065757D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00657580  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00657583  83 C1 04                  ADD ECX,0x4
00657586  48                        DEC EAX
00657587  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0065758A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065758D  0F 85 26 FF FF FF         JNZ 0x006574b9
00657593  E9 DB 24 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5e3:
00657598  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
0065759E  50                        PUSH EAX
0065759F  E8 49 DA DA FF            CALL 0x00404fed
006575A4  83 C4 04                  ADD ESP,0x4
006575A7  85 C0                     TEST EAX,EAX
006575A9  0F 84 EA B4 FF FF         JZ 0x00652a99
006575AF  8B 16                     MOV EDX,dword ptr [ESI]
006575B1  8B CE                     MOV ECX,ESI
006575B3  FF 52 18                  CALL dword ptr [EDX + 0x18]
006575B6  83 F8 08                  CMP EAX,0x8
006575B9  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006575BF  75 09                     JNZ 0x006575ca
006575C1  83 F8 09                  CMP EAX,0x9
006575C4  0F 84 CF B4 FF FF         JZ 0x00652a99
LAB_006575ca:
006575CA  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006575D0  8D 4D D0                  LEA ECX,[EBP + -0x30]
006575D3  51                        PUSH ECX
006575D4  52                        PUSH EDX
006575D5  50                        PUSH EAX
006575D6  8B CE                     MOV ECX,ESI
006575D8  E8 DB A0 DA FF            CALL 0x004016b8
006575DD  85 C0                     TEST EAX,EAX
006575DF  0F 8E 8E 24 00 00         JLE 0x00659a73
006575E5  8D 4D D0                  LEA ECX,[EBP + -0x30]
006575E8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006575EB  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006575ee:
006575EE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006575F1  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006575F7  52                        PUSH EDX
006575F8  8A 08                     MOV CL,byte ptr [EAX]
006575FA  51                        PUSH ECX
006575FB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00657601  E8 F3 E6 DA FF            CALL 0x00405cf9
00657606  85 C0                     TEST EAX,EAX
00657608  75 1A                     JNZ 0x00657624
0065760A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0065760D  8B CE                     MOV ECX,ESI
0065760F  8B 02                     MOV EAX,dword ptr [EDX]
00657611  50                        PUSH EAX
00657612  57                        PUSH EDI
00657613  68 A0 16 80 00            PUSH 0x8016a0
00657618  68 56 FF FF FF            PUSH 0xffffff56
0065761D  E8 20 DA DA FF            CALL 0x00405042
00657622  EB 2E                     JMP 0x00657652
LAB_00657624:
00657624  8B C8                     MOV ECX,EAX
00657626  E8 D7 E2 DA FF            CALL 0x00405902
0065762B  85 C0                     TEST EAX,EAX
0065762D  75 1C                     JNZ 0x0065764b
0065762F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00657632  8B 11                     MOV EDX,dword ptr [ECX]
00657634  52                        PUSH EDX
00657635  57                        PUSH EDI
00657636  53                        PUSH EBX
00657637  E8 9F E1 DA FF            CALL 0x004057db
0065763C  50                        PUSH EAX
0065763D  68 55 FF FF FF            PUSH 0xffffff55
00657642  8B CE                     MOV ECX,ESI
00657644  E8 F9 D9 DA FF            CALL 0x00405042
00657649  EB 07                     JMP 0x00657652
LAB_0065764b:
0065764B  8B C8                     MOV ECX,EAX
0065764D  E8 95 C1 DA FF            CALL 0x004037e7
LAB_00657652:
00657652  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00657655  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00657658  83 C1 04                  ADD ECX,0x4
0065765B  48                        DEC EAX
0065765C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0065765F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657662  75 8A                     JNZ 0x006575ee
00657664  E9 0A 24 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5e4:
00657669  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
0065766F  50                        PUSH EAX
00657670  E8 E5 9E DA FF            CALL 0x0040155a
00657675  83 C4 04                  ADD ESP,0x4
00657678  85 C0                     TEST EAX,EAX
0065767A  0F 84 19 B4 FF FF         JZ 0x00652a99
00657680  8B 16                     MOV EDX,dword ptr [ESI]
00657682  8B CE                     MOV ECX,ESI
00657684  FF 52 18                  CALL dword ptr [EDX + 0x18]
00657687  83 F8 08                  CMP EAX,0x8
0065768A  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00657690  75 09                     JNZ 0x0065769b
00657692  83 F8 09                  CMP EAX,0x9
00657695  0F 84 FE B3 FF FF         JZ 0x00652a99
LAB_0065769b:
0065769B  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006576A1  8D 4D D0                  LEA ECX,[EBP + -0x30]
006576A4  51                        PUSH ECX
006576A5  52                        PUSH EDX
006576A6  50                        PUSH EAX
006576A7  8B CE                     MOV ECX,ESI
006576A9  E8 0A A0 DA FF            CALL 0x004016b8
006576AE  85 C0                     TEST EAX,EAX
006576B0  0F 8E BD 23 00 00         JLE 0x00659a73
006576B6  8D 4D D0                  LEA ECX,[EBP + -0x30]
006576B9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006576BC  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006576bf:
006576BF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006576C2  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006576C8  52                        PUSH EDX
006576C9  8A 08                     MOV CL,byte ptr [EAX]
006576CB  51                        PUSH ECX
006576CC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006576D2  E8 22 E6 DA FF            CALL 0x00405cf9
006576D7  85 C0                     TEST EAX,EAX
006576D9  75 16                     JNZ 0x006576f1
006576DB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006576DE  8B 02                     MOV EAX,dword ptr [EDX]
006576E0  50                        PUSH EAX
006576E1  57                        PUSH EDI
006576E2  68 A0 16 80 00            PUSH 0x8016a0
006576E7  68 56 FF FF FF            PUSH 0xffffff56
006576EC  E9 BD 00 00 00            JMP 0x006577ae
LAB_006576f1:
006576F1  8B C8                     MOV ECX,EAX
006576F3  E8 0A E2 DA FF            CALL 0x00405902
006576F8  8B D0                     MOV EDX,EAX
006576FA  85 D2                     TEST EDX,EDX
006576FC  0F 84 99 00 00 00         JZ 0x0065779b
00657702  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
00657706  66 3D 01 00               CMP AX,0x1
0065770A  0F 84 8B 00 00 00         JZ 0x0065779b
00657710  66 3D 00 80               CMP AX,0x8000
00657714  0F 84 81 00 00 00         JZ 0x0065779b
0065771A  B9 0D 00 00 00            MOV ECX,0xd
0065771F  33 C0                     XOR EAX,EAX
00657721  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00657724  F3 AB                     STOSD.REP ES:EDI
00657726  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0065772C  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
00657732  8A 8D AC FE FF FF         MOV CL,byte ptr [EBP + 0xfffffeac]
00657738  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0065773B  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00657741  89 45 A5                  MOV dword ptr [EBP + -0x5b],EAX
00657744  66 8B 85 B8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb8]
0065774B  66 89 45 AB               MOV word ptr [EBP + -0x55],AX
0065774F  8B 85 C0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec0]
00657755  88 4D A4                  MOV byte ptr [EBP + -0x5c],CL
00657758  66 8B 8D B4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb4]
0065775F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00657762  66 89 4D A9               MOV word ptr [EBP + -0x57],CX
00657766  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
0065776C  C7 45 9C 01 00 00 00      MOV dword ptr [EBP + -0x64],0x1
00657773  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00657776  89 4D AD                  MOV dword ptr [EBP + -0x53],ECX
00657779  89 45 B1                  MOV dword ptr [EBP + -0x4f],EAX
0065777C  8B 85 C4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec4]
00657782  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00657785  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00657788  8D 45 9C                  LEA EAX,[EBP + -0x64]
0065778B  89 4D B5                  MOV dword ptr [EBP + -0x4b],ECX
0065778E  50                        PUSH EAX
0065778F  8B CA                     MOV ECX,EDX
00657791  E8 BF 9D DA FF            CALL 0x00401555
00657796  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00657799  EB 1A                     JMP 0x006577b5
LAB_0065779b:
0065779B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0065779E  8B 11                     MOV EDX,dword ptr [ECX]
006577A0  52                        PUSH EDX
006577A1  57                        PUSH EDI
006577A2  53                        PUSH EBX
006577A3  E8 33 E0 DA FF            CALL 0x004057db
006577A8  50                        PUSH EAX
006577A9  68 55 FF FF FF            PUSH 0xffffff55
LAB_006577ae:
006577AE  8B CE                     MOV ECX,ESI
006577B0  E8 8D D8 DA FF            CALL 0x00405042
LAB_006577b5:
006577B5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006577B8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006577BB  83 C1 04                  ADD ECX,0x4
006577BE  48                        DEC EAX
006577BF  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006577C2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006577C5  0F 85 F4 FE FF FF         JNZ 0x006576bf
006577CB  E9 A3 22 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5e6:
006577D0  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
006577D6  50                        PUSH EAX
006577D7  E8 0A 9E DA FF            CALL 0x004015e6
006577DC  83 C4 04                  ADD ESP,0x4
006577DF  85 C0                     TEST EAX,EAX
006577E1  0F 84 B2 B2 FF FF         JZ 0x00652a99
006577E7  8B 16                     MOV EDX,dword ptr [ESI]
006577E9  8B CE                     MOV ECX,ESI
006577EB  FF 52 18                  CALL dword ptr [EDX + 0x18]
006577EE  83 F8 08                  CMP EAX,0x8
006577F1  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006577F7  75 09                     JNZ 0x00657802
006577F9  83 F8 09                  CMP EAX,0x9
006577FC  0F 84 97 B2 FF FF         JZ 0x00652a99
LAB_00657802:
00657802  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00657808  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065780B  51                        PUSH ECX
0065780C  52                        PUSH EDX
0065780D  50                        PUSH EAX
0065780E  8B CE                     MOV ECX,ESI
00657810  E8 A3 9E DA FF            CALL 0x004016b8
00657815  85 C0                     TEST EAX,EAX
00657817  0F 8E 56 22 00 00         JLE 0x00659a73
0065781D  8D 4D D0                  LEA ECX,[EBP + -0x30]
00657820  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657823  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00657826:
00657826  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00657829  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
0065782F  52                        PUSH EDX
00657830  8A 08                     MOV CL,byte ptr [EAX]
00657832  51                        PUSH ECX
00657833  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00657839  E8 BB E4 DA FF            CALL 0x00405cf9
0065783E  85 C0                     TEST EAX,EAX
00657840  75 16                     JNZ 0x00657858
00657842  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00657845  8B 02                     MOV EAX,dword ptr [EDX]
00657847  50                        PUSH EAX
00657848  57                        PUSH EDI
00657849  68 A0 16 80 00            PUSH 0x8016a0
0065784E  68 56 FF FF FF            PUSH 0xffffff56
00657853  E9 A6 00 00 00            JMP 0x006578fe
LAB_00657858:
00657858  8B C8                     MOV ECX,EAX
0065785A  E8 A3 E0 DA FF            CALL 0x00405902
0065785F  8B D0                     MOV EDX,EAX
00657861  85 D2                     TEST EDX,EDX
00657863  0F 84 82 00 00 00         JZ 0x006578eb
00657869  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
0065786D  66 3D 01 00               CMP AX,0x1
00657871  74 78                     JZ 0x006578eb
00657873  66 3D 00 80               CMP AX,0x8000
00657877  74 72                     JZ 0x006578eb
00657879  B9 0D 00 00 00            MOV ECX,0xd
0065787E  33 C0                     XOR EAX,EAX
00657880  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00657883  F3 AB                     STOSD.REP ES:EDI
00657885  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0065788B  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
00657891  8A 8D AC FE FF FF         MOV CL,byte ptr [EBP + 0xfffffeac]
00657897  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0065789A  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
006578A0  89 45 A5                  MOV dword ptr [EBP + -0x5b],EAX
006578A3  66 8B 85 B8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb8]
006578AA  88 4D A4                  MOV byte ptr [EBP + -0x5c],CL
006578AD  66 8B 8D B4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb4]
006578B4  66 89 45 AB               MOV word ptr [EBP + -0x55],AX
006578B8  8B 85 C0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec0]
006578BE  66 89 4D A9               MOV word ptr [EBP + -0x57],CX
006578C2  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
006578C8  89 4D B1                  MOV dword ptr [EBP + -0x4f],ECX
006578CB  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006578CE  8D 4D 9C                  LEA ECX,[EBP + -0x64]
006578D1  C7 45 9C 03 00 00 00      MOV dword ptr [EBP + -0x64],0x3
006578D8  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006578DB  51                        PUSH ECX
006578DC  8B CA                     MOV ECX,EDX
006578DE  89 45 AD                  MOV dword ptr [EBP + -0x53],EAX
006578E1  E8 6F 9C DA FF            CALL 0x00401555
006578E6  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006578E9  EB 1A                     JMP 0x00657905
LAB_006578eb:
006578EB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006578EE  8B 02                     MOV EAX,dword ptr [EDX]
006578F0  50                        PUSH EAX
006578F1  57                        PUSH EDI
006578F2  53                        PUSH EBX
006578F3  E8 E3 DE DA FF            CALL 0x004057db
006578F8  50                        PUSH EAX
006578F9  68 55 FF FF FF            PUSH 0xffffff55
LAB_006578fe:
006578FE  8B CE                     MOV ECX,ESI
00657900  E8 3D D7 DA FF            CALL 0x00405042
LAB_00657905:
00657905  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00657908  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065790B  83 C1 04                  ADD ECX,0x4
0065790E  48                        DEC EAX
0065790F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00657912  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657915  0F 85 0B FF FF FF         JNZ 0x00657826
0065791B  E9 53 21 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5e5:
00657920  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00657926  51                        PUSH ECX
00657927  E8 8A 9A DA FF            CALL 0x004013b6
0065792C  83 C4 04                  ADD ESP,0x4
0065792F  85 C0                     TEST EAX,EAX
00657931  0F 84 62 B1 FF FF         JZ 0x00652a99
00657937  8B 16                     MOV EDX,dword ptr [ESI]
00657939  8B CE                     MOV ECX,ESI
0065793B  FF 52 18                  CALL dword ptr [EDX + 0x18]
0065793E  83 F8 08                  CMP EAX,0x8
00657941  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00657947  75 09                     JNZ 0x00657952
00657949  83 F8 09                  CMP EAX,0x9
0065794C  0F 84 47 B1 FF FF         JZ 0x00652a99
LAB_00657952:
00657952  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00657958  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065795B  51                        PUSH ECX
0065795C  52                        PUSH EDX
0065795D  50                        PUSH EAX
0065795E  8B CE                     MOV ECX,ESI
00657960  E8 53 9D DA FF            CALL 0x004016b8
00657965  85 C0                     TEST EAX,EAX
00657967  0F 8E 06 21 00 00         JLE 0x00659a73
0065796D  8D 4D D0                  LEA ECX,[EBP + -0x30]
00657970  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657973  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00657976:
00657976  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00657979  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
0065797F  52                        PUSH EDX
00657980  8A 08                     MOV CL,byte ptr [EAX]
00657982  51                        PUSH ECX
00657983  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00657989  E8 6B E3 DA FF            CALL 0x00405cf9
0065798E  85 C0                     TEST EAX,EAX
00657990  75 16                     JNZ 0x006579a8
00657992  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00657995  8B 02                     MOV EAX,dword ptr [EDX]
00657997  50                        PUSH EAX
00657998  57                        PUSH EDI
00657999  68 A0 16 80 00            PUSH 0x8016a0
0065799E  68 56 FF FF FF            PUSH 0xffffff56
006579A3  E9 99 00 00 00            JMP 0x00657a41
LAB_006579a8:
006579A8  8B C8                     MOV ECX,EAX
006579AA  E8 53 DF DA FF            CALL 0x00405902
006579AF  8B D0                     MOV EDX,EAX
006579B1  85 D2                     TEST EDX,EDX
006579B3  74 79                     JZ 0x00657a2e
006579B5  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
006579B9  66 3D 01 00               CMP AX,0x1
006579BD  74 6F                     JZ 0x00657a2e
006579BF  66 3D 00 80               CMP AX,0x8000
006579C3  74 69                     JZ 0x00657a2e
006579C5  B9 0D 00 00 00            MOV ECX,0xd
006579CA  33 C0                     XOR EAX,EAX
006579CC  8D 7D 9C                  LEA EDI,[EBP + -0x64]
006579CF  F3 AB                     STOSD.REP ES:EDI
006579D1  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006579D7  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
006579DD  8A 8D AC FE FF FF         MOV CL,byte ptr [EBP + 0xfffffeac]
006579E3  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006579E6  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
006579EC  89 45 A5                  MOV dword ptr [EBP + -0x5b],EAX
006579EF  66 8B 85 B8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb8]
006579F6  66 89 45 AB               MOV word ptr [EBP + -0x55],AX
006579FA  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
00657A00  88 4D A4                  MOV byte ptr [EBP + -0x5c],CL
00657A03  66 8B 8D B4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb4]
00657A0A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00657A0D  66 89 4D A9               MOV word ptr [EBP + -0x57],CX
00657A11  C7 45 9C 02 00 00 00      MOV dword ptr [EBP + -0x64],0x2
00657A18  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00657A1B  8D 45 9C                  LEA EAX,[EBP + -0x64]
00657A1E  89 4D AD                  MOV dword ptr [EBP + -0x53],ECX
00657A21  50                        PUSH EAX
00657A22  8B CA                     MOV ECX,EDX
00657A24  E8 2C 9B DA FF            CALL 0x00401555
00657A29  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00657A2C  EB 1A                     JMP 0x00657a48
LAB_00657a2e:
00657A2E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00657A31  8B 11                     MOV EDX,dword ptr [ECX]
00657A33  52                        PUSH EDX
00657A34  57                        PUSH EDI
00657A35  53                        PUSH EBX
00657A36  E8 A0 DD DA FF            CALL 0x004057db
00657A3B  50                        PUSH EAX
00657A3C  68 55 FF FF FF            PUSH 0xffffff55
LAB_00657a41:
00657A41  8B CE                     MOV ECX,ESI
00657A43  E8 FA D5 DA FF            CALL 0x00405042
LAB_00657a48:
00657A48  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00657A4B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00657A4E  83 C1 04                  ADD ECX,0x4
00657A51  48                        DEC EAX
00657A52  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00657A55  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657A58  0F 85 18 FF FF FF         JNZ 0x00657976
00657A5E  E9 10 20 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5e7:
00657A63  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00657A69  50                        PUSH EAX
00657A6A  E8 F7 DE DA FF            CALL 0x00405966
00657A6F  83 C4 04                  ADD ESP,0x4
00657A72  85 C0                     TEST EAX,EAX
00657A74  0F 84 1F B0 FF FF         JZ 0x00652a99
00657A7A  8B 16                     MOV EDX,dword ptr [ESI]
00657A7C  8B CE                     MOV ECX,ESI
00657A7E  FF 52 18                  CALL dword ptr [EDX + 0x18]
00657A81  83 F8 08                  CMP EAX,0x8
00657A84  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00657A8A  75 09                     JNZ 0x00657a95
00657A8C  83 F8 09                  CMP EAX,0x9
00657A8F  0F 84 04 B0 FF FF         JZ 0x00652a99
LAB_00657a95:
00657A95  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00657A9B  8D 4D D0                  LEA ECX,[EBP + -0x30]
00657A9E  51                        PUSH ECX
00657A9F  52                        PUSH EDX
00657AA0  50                        PUSH EAX
00657AA1  8B CE                     MOV ECX,ESI
00657AA3  E8 10 9C DA FF            CALL 0x004016b8
00657AA8  85 C0                     TEST EAX,EAX
00657AAA  0F 8E C3 1F 00 00         JLE 0x00659a73
00657AB0  8D 4D D0                  LEA ECX,[EBP + -0x30]
00657AB3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657AB6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00657ab9:
00657AB9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00657ABC  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00657AC2  52                        PUSH EDX
00657AC3  8A 08                     MOV CL,byte ptr [EAX]
00657AC5  51                        PUSH ECX
00657AC6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00657ACC  E8 28 E2 DA FF            CALL 0x00405cf9
00657AD1  85 C0                     TEST EAX,EAX
00657AD3  75 16                     JNZ 0x00657aeb
00657AD5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00657AD8  8B 02                     MOV EAX,dword ptr [EDX]
00657ADA  50                        PUSH EAX
00657ADB  57                        PUSH EDI
00657ADC  68 A0 16 80 00            PUSH 0x8016a0
00657AE1  68 56 FF FF FF            PUSH 0xffffff56
00657AE6  E9 E3 00 00 00            JMP 0x00657bce
LAB_00657aeb:
00657AEB  8B C8                     MOV ECX,EAX
00657AED  E8 10 DE DA FF            CALL 0x00405902
00657AF2  85 C0                     TEST EAX,EAX
00657AF4  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00657AF7  0F 84 BE 00 00 00         JZ 0x00657bbb
00657AFD  66 81 78 7B 00 80         CMP word ptr [EAX + 0x7b],0x8000
00657B03  0F 84 B2 00 00 00         JZ 0x00657bbb
00657B09  B9 0D 00 00 00            MOV ECX,0xd
00657B0E  33 C0                     XOR EAX,EAX
00657B10  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00657B13  F3 AB                     STOSD.REP ES:EDI
00657B15  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00657B1B  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00657B21  25 FF FF FF 3F            AND EAX,0x3fffffff
00657B26  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00657B2C  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00657B32  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00657B35  66 8B 85 B8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb8]
00657B3C  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
00657B3F  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00657B45  81 E1 FF FF FF 3F         AND ECX,0x3fffffff
00657B4B  66 89 45 B0               MOV word ptr [EBP + -0x50],AX
00657B4F  66 8B 85 C4 FE FF FF      MOV AX,word ptr [EBP + 0xfffffec4]
00657B56  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
00657B59  66 8B 8D BC FE FF FF      MOV CX,word ptr [EBP + 0xfffffebc]
00657B60  81 E2 FF FF FF 3F         AND EDX,0x3fffffff
00657B66  66 89 45 B6               MOV word ptr [EBP + -0x4a],AX
00657B6A  8B 85 CC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffecc]
00657B70  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
00657B73  66 8B 95 C0 FE FF FF      MOV DX,word ptr [EBP + 0xfffffec0]
00657B7A  66 89 4D B2               MOV word ptr [EBP + -0x4e],CX
00657B7E  8A 8D C8 FE FF FF         MOV CL,byte ptr [EBP + 0xfffffec8]
00657B84  85 C0                     TEST EAX,EAX
00657B86  C7 45 9C 04 00 00 00      MOV dword ptr [EBP + -0x64],0x4
00657B8D  66 89 55 B4               MOV word ptr [EBP + -0x4c],DX
00657B91  88 4D B8                  MOV byte ptr [EBP + -0x48],CL
00657B94  75 05                     JNZ 0x00657b9b
00657B96  B8 A0 16 80 00            MOV EAX,0x8016a0
LAB_00657b9b:
00657B9B  6A 0E                     PUSH 0xe
00657B9D  8D 55 B9                  LEA EDX,[EBP + -0x47]
00657BA0  50                        PUSH EAX
00657BA1  52                        PUSH EDX
00657BA2  E8 99 67 0D 00            CALL 0x0072e340
00657BA7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00657BAA  83 C4 0C                  ADD ESP,0xc
00657BAD  8D 45 9C                  LEA EAX,[EBP + -0x64]
00657BB0  50                        PUSH EAX
00657BB1  E8 9F 99 DA FF            CALL 0x00401555
00657BB6  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00657BB9  EB 1A                     JMP 0x00657bd5
LAB_00657bbb:
00657BBB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00657BBE  8B 11                     MOV EDX,dword ptr [ECX]
00657BC0  52                        PUSH EDX
00657BC1  57                        PUSH EDI
00657BC2  53                        PUSH EBX
00657BC3  E8 13 DC DA FF            CALL 0x004057db
00657BC8  50                        PUSH EAX
00657BC9  68 55 FF FF FF            PUSH 0xffffff55
LAB_00657bce:
00657BCE  8B CE                     MOV ECX,ESI
00657BD0  E8 6D D4 DA FF            CALL 0x00405042
LAB_00657bd5:
00657BD5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00657BD8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00657BDB  83 C1 04                  ADD ECX,0x4
00657BDE  48                        DEC EAX
00657BDF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00657BE2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657BE5  0F 85 CE FE FF FF         JNZ 0x00657ab9
00657BEB  E9 83 1E 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5e8:
00657BF0  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00657BF6  50                        PUSH EAX
00657BF7  E8 06 9C DA FF            CALL 0x00401802
00657BFC  83 C4 04                  ADD ESP,0x4
00657BFF  85 C0                     TEST EAX,EAX
00657C01  0F 84 92 AE FF FF         JZ 0x00652a99
00657C07  8B 16                     MOV EDX,dword ptr [ESI]
00657C09  8B CE                     MOV ECX,ESI
00657C0B  FF 52 18                  CALL dword ptr [EDX + 0x18]
00657C0E  83 F8 08                  CMP EAX,0x8
00657C11  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00657C17  75 09                     JNZ 0x00657c22
00657C19  83 F8 09                  CMP EAX,0x9
00657C1C  0F 84 77 AE FF FF         JZ 0x00652a99
LAB_00657c22:
00657C22  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00657C28  8D 4D D0                  LEA ECX,[EBP + -0x30]
00657C2B  51                        PUSH ECX
00657C2C  52                        PUSH EDX
00657C2D  50                        PUSH EAX
00657C2E  8B CE                     MOV ECX,ESI
00657C30  E8 83 9A DA FF            CALL 0x004016b8
00657C35  85 C0                     TEST EAX,EAX
00657C37  0F 8E 36 1E 00 00         JLE 0x00659a73
00657C3D  8D 4D D0                  LEA ECX,[EBP + -0x30]
00657C40  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657C43  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00657c46:
00657C46  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00657C49  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00657C4F  52                        PUSH EDX
00657C50  8A 08                     MOV CL,byte ptr [EAX]
00657C52  51                        PUSH ECX
00657C53  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00657C59  E8 9B E0 DA FF            CALL 0x00405cf9
00657C5E  85 C0                     TEST EAX,EAX
00657C60  75 13                     JNZ 0x00657c75
00657C62  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00657C65  8B 02                     MOV EAX,dword ptr [EDX]
00657C67  50                        PUSH EAX
00657C68  57                        PUSH EDI
00657C69  68 A0 16 80 00            PUSH 0x8016a0
00657C6E  68 56 FF FF FF            PUSH 0xffffff56
00657C73  EB 5A                     JMP 0x00657ccf
LAB_00657c75:
00657C75  8B C8                     MOV ECX,EAX
00657C77  E8 86 DC DA FF            CALL 0x00405902
00657C7C  8B D0                     MOV EDX,EAX
00657C7E  85 D2                     TEST EDX,EDX
00657C80  74 3A                     JZ 0x00657cbc
00657C82  66 81 7A 7B 00 80         CMP word ptr [EDX + 0x7b],0x8000
00657C88  74 32                     JZ 0x00657cbc
00657C8A  B9 0D 00 00 00            MOV ECX,0xd
00657C8F  33 C0                     XOR EAX,EAX
00657C91  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00657C94  F3 AB                     STOSD.REP ES:EDI
00657C96  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00657C9C  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
00657CA2  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00657CA5  51                        PUSH ECX
00657CA6  8B CA                     MOV ECX,EDX
00657CA8  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00657CAB  C7 45 9C 05 00 00 00      MOV dword ptr [EBP + -0x64],0x5
00657CB2  E8 9E 98 DA FF            CALL 0x00401555
00657CB7  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00657CBA  EB 1A                     JMP 0x00657cd6
LAB_00657cbc:
00657CBC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00657CBF  8B 02                     MOV EAX,dword ptr [EDX]
00657CC1  50                        PUSH EAX
00657CC2  57                        PUSH EDI
00657CC3  53                        PUSH EBX
00657CC4  E8 12 DB DA FF            CALL 0x004057db
00657CC9  50                        PUSH EAX
00657CCA  68 55 FF FF FF            PUSH 0xffffff55
LAB_00657ccf:
00657CCF  8B CE                     MOV ECX,ESI
00657CD1  E8 6C D3 DA FF            CALL 0x00405042
LAB_00657cd6:
00657CD6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00657CD9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00657CDC  83 C1 04                  ADD ECX,0x4
00657CDF  48                        DEC EAX
00657CE0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00657CE3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657CE6  0F 85 5A FF FF FF         JNZ 0x00657c46
00657CEC  E9 82 1D 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5e9:
00657CF1  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00657CF7  51                        PUSH ECX
00657CF8  E8 AF D7 DA FF            CALL 0x004054ac
00657CFD  83 C4 04                  ADD ESP,0x4
00657D00  85 C0                     TEST EAX,EAX
00657D02  0F 84 91 AD FF FF         JZ 0x00652a99
00657D08  8B 16                     MOV EDX,dword ptr [ESI]
00657D0A  8B CE                     MOV ECX,ESI
00657D0C  FF 52 18                  CALL dword ptr [EDX + 0x18]
00657D0F  83 F8 08                  CMP EAX,0x8
00657D12  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00657D18  75 09                     JNZ 0x00657d23
00657D1A  83 F8 09                  CMP EAX,0x9
00657D1D  0F 84 76 AD FF FF         JZ 0x00652a99
LAB_00657d23:
00657D23  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00657D29  8D 4D D0                  LEA ECX,[EBP + -0x30]
00657D2C  51                        PUSH ECX
00657D2D  52                        PUSH EDX
00657D2E  50                        PUSH EAX
00657D2F  8B CE                     MOV ECX,ESI
00657D31  E8 82 99 DA FF            CALL 0x004016b8
00657D36  85 C0                     TEST EAX,EAX
00657D38  0F 8E 35 1D 00 00         JLE 0x00659a73
00657D3E  8D 4D D0                  LEA ECX,[EBP + -0x30]
00657D41  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657D44  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00657d47:
00657D47  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00657D4A  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00657D50  52                        PUSH EDX
00657D51  8A 08                     MOV CL,byte ptr [EAX]
00657D53  51                        PUSH ECX
00657D54  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00657D5A  E8 9A DF DA FF            CALL 0x00405cf9
00657D5F  85 C0                     TEST EAX,EAX
00657D61  75 13                     JNZ 0x00657d76
00657D63  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00657D66  8B 02                     MOV EAX,dword ptr [EDX]
00657D68  50                        PUSH EAX
00657D69  57                        PUSH EDI
00657D6A  68 A0 16 80 00            PUSH 0x8016a0
00657D6F  68 56 FF FF FF            PUSH 0xffffff56
00657D74  EB 63                     JMP 0x00657dd9
LAB_00657d76:
00657D76  8B C8                     MOV ECX,EAX
00657D78  E8 85 DB DA FF            CALL 0x00405902
00657D7D  8B D0                     MOV EDX,EAX
00657D7F  85 D2                     TEST EDX,EDX
00657D81  74 43                     JZ 0x00657dc6
00657D83  66 81 7A 7B 00 80         CMP word ptr [EDX + 0x7b],0x8000
00657D89  74 3B                     JZ 0x00657dc6
00657D8B  B9 0D 00 00 00            MOV ECX,0xd
00657D90  33 C0                     XOR EAX,EAX
00657D92  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00657D95  F3 AB                     STOSD.REP ES:EDI
00657D97  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00657D9D  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
00657DA3  8A 8D AC FE FF FF         MOV CL,byte ptr [EBP + 0xfffffeac]
00657DA9  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00657DAC  8D 45 9C                  LEA EAX,[EBP + -0x64]
00657DAF  88 4D A4                  MOV byte ptr [EBP + -0x5c],CL
00657DB2  50                        PUSH EAX
00657DB3  8B CA                     MOV ECX,EDX
00657DB5  C7 45 9C 06 00 00 00      MOV dword ptr [EBP + -0x64],0x6
00657DBC  E8 94 97 DA FF            CALL 0x00401555
00657DC1  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00657DC4  EB 1A                     JMP 0x00657de0
LAB_00657dc6:
00657DC6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00657DC9  8B 11                     MOV EDX,dword ptr [ECX]
00657DCB  52                        PUSH EDX
00657DCC  57                        PUSH EDI
00657DCD  53                        PUSH EBX
00657DCE  E8 08 DA DA FF            CALL 0x004057db
00657DD3  50                        PUSH EAX
00657DD4  68 55 FF FF FF            PUSH 0xffffff55
LAB_00657dd9:
00657DD9  8B CE                     MOV ECX,ESI
00657DDB  E8 62 D2 DA FF            CALL 0x00405042
LAB_00657de0:
00657DE0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00657DE3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00657DE6  83 C1 04                  ADD ECX,0x4
00657DE9  48                        DEC EAX
00657DEA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00657DED  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657DF0  0F 85 51 FF FF FF         JNZ 0x00657d47
00657DF6  E9 78 1C 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5ea:
00657DFB  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00657E01  50                        PUSH EAX
00657E02  E8 1F 94 DA FF            CALL 0x00401226
00657E07  83 C4 04                  ADD ESP,0x4
00657E0A  85 C0                     TEST EAX,EAX
00657E0C  0F 84 87 AC FF FF         JZ 0x00652a99
00657E12  8B 16                     MOV EDX,dword ptr [ESI]
00657E14  8B CE                     MOV ECX,ESI
00657E16  FF 52 18                  CALL dword ptr [EDX + 0x18]
00657E19  83 F8 08                  CMP EAX,0x8
00657E1C  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00657E22  75 09                     JNZ 0x00657e2d
00657E24  83 F8 09                  CMP EAX,0x9
00657E27  0F 84 6C AC FF FF         JZ 0x00652a99
LAB_00657e2d:
00657E2D  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00657E33  8D 4D D0                  LEA ECX,[EBP + -0x30]
00657E36  51                        PUSH ECX
00657E37  52                        PUSH EDX
00657E38  50                        PUSH EAX
00657E39  8B CE                     MOV ECX,ESI
00657E3B  E8 78 98 DA FF            CALL 0x004016b8
00657E40  85 C0                     TEST EAX,EAX
00657E42  0F 8E 2B 1C 00 00         JLE 0x00659a73
00657E48  8D 4D D0                  LEA ECX,[EBP + -0x30]
00657E4B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657E4E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00657e51:
00657E51  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00657E54  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00657E5A  52                        PUSH EDX
00657E5B  8A 08                     MOV CL,byte ptr [EAX]
00657E5D  51                        PUSH ECX
00657E5E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00657E64  E8 90 DE DA FF            CALL 0x00405cf9
00657E69  85 C0                     TEST EAX,EAX
00657E6B  75 16                     JNZ 0x00657e83
00657E6D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00657E70  8B 02                     MOV EAX,dword ptr [EDX]
00657E72  50                        PUSH EAX
00657E73  57                        PUSH EDI
00657E74  68 A0 16 80 00            PUSH 0x8016a0
00657E79  68 56 FF FF FF            PUSH 0xffffff56
00657E7E  E9 99 00 00 00            JMP 0x00657f1c
LAB_00657e83:
00657E83  8B C8                     MOV ECX,EAX
00657E85  E8 78 DA DA FF            CALL 0x00405902
00657E8A  8B D0                     MOV EDX,EAX
00657E8C  85 D2                     TEST EDX,EDX
00657E8E  74 79                     JZ 0x00657f09
00657E90  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
00657E94  66 3D 01 00               CMP AX,0x1
00657E98  74 6F                     JZ 0x00657f09
00657E9A  66 3D 00 80               CMP AX,0x8000
00657E9E  74 69                     JZ 0x00657f09
00657EA0  B9 0D 00 00 00            MOV ECX,0xd
00657EA5  33 C0                     XOR EAX,EAX
00657EA7  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00657EAA  F3 AB                     STOSD.REP ES:EDI
00657EAC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00657EB2  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
00657EB8  8A 8D AC FE FF FF         MOV CL,byte ptr [EBP + 0xfffffeac]
00657EBE  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00657EC1  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00657EC7  89 45 A5                  MOV dword ptr [EBP + -0x5b],EAX
00657ECA  66 8B 85 B8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb8]
00657ED1  66 89 45 AB               MOV word ptr [EBP + -0x55],AX
00657ED5  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
00657EDB  88 4D A4                  MOV byte ptr [EBP + -0x5c],CL
00657EDE  66 8B 8D B4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb4]
00657EE5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00657EE8  66 89 4D A9               MOV word ptr [EBP + -0x57],CX
00657EEC  C7 45 9C 07 00 00 00      MOV dword ptr [EBP + -0x64],0x7
00657EF3  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00657EF6  8D 45 9C                  LEA EAX,[EBP + -0x64]
00657EF9  89 4D AD                  MOV dword ptr [EBP + -0x53],ECX
00657EFC  50                        PUSH EAX
00657EFD  8B CA                     MOV ECX,EDX
00657EFF  E8 51 96 DA FF            CALL 0x00401555
00657F04  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00657F07  EB 1A                     JMP 0x00657f23
LAB_00657f09:
00657F09  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00657F0C  8B 11                     MOV EDX,dword ptr [ECX]
00657F0E  52                        PUSH EDX
00657F0F  57                        PUSH EDI
00657F10  53                        PUSH EBX
00657F11  E8 C5 D8 DA FF            CALL 0x004057db
00657F16  50                        PUSH EAX
00657F17  68 55 FF FF FF            PUSH 0xffffff55
LAB_00657f1c:
00657F1C  8B CE                     MOV ECX,ESI
00657F1E  E8 1F D1 DA FF            CALL 0x00405042
LAB_00657f23:
00657F23  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00657F26  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00657F29  83 C1 04                  ADD ECX,0x4
00657F2C  48                        DEC EAX
00657F2D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00657F30  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657F33  0F 85 18 FF FF FF         JNZ 0x00657e51
00657F39  E9 35 1B 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5eb:
00657F3E  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00657F44  50                        PUSH EAX
00657F45  E8 DF 94 DA FF            CALL 0x00401429
00657F4A  83 C4 04                  ADD ESP,0x4
00657F4D  85 C0                     TEST EAX,EAX
00657F4F  0F 84 44 AB FF FF         JZ 0x00652a99
00657F55  8B 16                     MOV EDX,dword ptr [ESI]
00657F57  8B CE                     MOV ECX,ESI
00657F59  FF 52 18                  CALL dword ptr [EDX + 0x18]
00657F5C  83 F8 08                  CMP EAX,0x8
00657F5F  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00657F65  75 09                     JNZ 0x00657f70
00657F67  83 F8 09                  CMP EAX,0x9
00657F6A  0F 84 29 AB FF FF         JZ 0x00652a99
LAB_00657f70:
00657F70  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00657F76  8D 4D D0                  LEA ECX,[EBP + -0x30]
00657F79  51                        PUSH ECX
00657F7A  52                        PUSH EDX
00657F7B  50                        PUSH EAX
00657F7C  8B CE                     MOV ECX,ESI
00657F7E  E8 35 97 DA FF            CALL 0x004016b8
00657F83  85 C0                     TEST EAX,EAX
00657F85  0F 8E E8 1A 00 00         JLE 0x00659a73
00657F8B  8D 4D D0                  LEA ECX,[EBP + -0x30]
00657F8E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00657F91  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00657f94:
00657F94  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00657F97  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00657F9D  52                        PUSH EDX
00657F9E  8A 08                     MOV CL,byte ptr [EAX]
00657FA0  51                        PUSH ECX
00657FA1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00657FA7  E8 4D DD DA FF            CALL 0x00405cf9
00657FAC  85 C0                     TEST EAX,EAX
00657FAE  75 16                     JNZ 0x00657fc6
00657FB0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00657FB3  8B 02                     MOV EAX,dword ptr [EDX]
00657FB5  50                        PUSH EAX
00657FB6  57                        PUSH EDI
00657FB7  68 A0 16 80 00            PUSH 0x8016a0
00657FBC  68 56 FF FF FF            PUSH 0xffffff56
00657FC1  E9 A8 00 00 00            JMP 0x0065806e
LAB_00657fc6:
00657FC6  8B C8                     MOV ECX,EAX
00657FC8  E8 35 D9 DA FF            CALL 0x00405902
00657FCD  8B D0                     MOV EDX,EAX
00657FCF  85 D2                     TEST EDX,EDX
00657FD1  0F 84 84 00 00 00         JZ 0x0065805b
00657FD7  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
00657FDB  66 3D 01 00               CMP AX,0x1
00657FDF  74 7A                     JZ 0x0065805b
00657FE1  66 3D 00 80               CMP AX,0x8000
00657FE5  74 74                     JZ 0x0065805b
00657FE7  B9 0D 00 00 00            MOV ECX,0xd
00657FEC  33 C0                     XOR EAX,EAX
00657FEE  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00657FF1  F3 AB                     STOSD.REP ES:EDI
00657FF3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00657FF9  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
00657FFF  66 8B 8D AC FE FF FF      MOV CX,word ptr [EBP + 0xfffffeac]
00658006  66 89 4D A4               MOV word ptr [EBP + -0x5c],CX
0065800A  66 8B 8D B4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb4]
00658011  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00658014  66 8B 85 B0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb0]
0065801B  66 89 4D A8               MOV word ptr [EBP + -0x58],CX
0065801F  66 8B 8D BC FE FF FF      MOV CX,word ptr [EBP + 0xfffffebc]
00658026  66 89 45 A6               MOV word ptr [EBP + -0x5a],AX
0065802A  66 8B 85 B8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb8]
00658031  66 89 4D AC               MOV word ptr [EBP + -0x54],CX
00658035  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00658038  66 89 45 AA               MOV word ptr [EBP + -0x56],AX
0065803C  66 8B 85 C0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffec0]
00658043  51                        PUSH ECX
00658044  8B CA                     MOV ECX,EDX
00658046  C7 45 9C 08 00 00 00      MOV dword ptr [EBP + -0x64],0x8
0065804D  66 89 45 AE               MOV word ptr [EBP + -0x52],AX
00658051  E8 FF 94 DA FF            CALL 0x00401555
00658056  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00658059  EB 1A                     JMP 0x00658075
LAB_0065805b:
0065805B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065805E  8B 02                     MOV EAX,dword ptr [EDX]
00658060  50                        PUSH EAX
00658061  57                        PUSH EDI
00658062  53                        PUSH EBX
00658063  E8 73 D7 DA FF            CALL 0x004057db
00658068  50                        PUSH EAX
00658069  68 55 FF FF FF            PUSH 0xffffff55
LAB_0065806e:
0065806E  8B CE                     MOV ECX,ESI
00658070  E8 CD CF DA FF            CALL 0x00405042
LAB_00658075:
00658075  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00658078  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065807B  83 C1 04                  ADD ECX,0x4
0065807E  48                        DEC EAX
0065807F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00658082  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00658085  0F 85 09 FF FF FF         JNZ 0x00657f94
0065808B  E9 E3 19 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5ec:
00658090  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00658096  51                        PUSH ECX
00658097  E8 0E C7 DA FF            CALL 0x004047aa
0065809C  83 C4 04                  ADD ESP,0x4
0065809F  85 C0                     TEST EAX,EAX
006580A1  0F 84 F2 A9 FF FF         JZ 0x00652a99
006580A7  8B 16                     MOV EDX,dword ptr [ESI]
006580A9  8B CE                     MOV ECX,ESI
006580AB  FF 52 18                  CALL dword ptr [EDX + 0x18]
006580AE  83 F8 08                  CMP EAX,0x8
006580B1  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006580B7  75 09                     JNZ 0x006580c2
006580B9  83 F8 09                  CMP EAX,0x9
006580BC  0F 84 D7 A9 FF FF         JZ 0x00652a99
LAB_006580c2:
006580C2  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006580C8  8D 4D D0                  LEA ECX,[EBP + -0x30]
006580CB  51                        PUSH ECX
006580CC  52                        PUSH EDX
006580CD  50                        PUSH EAX
006580CE  8B CE                     MOV ECX,ESI
006580D0  E8 E3 95 DA FF            CALL 0x004016b8
006580D5  85 C0                     TEST EAX,EAX
006580D7  0F 8E 96 19 00 00         JLE 0x00659a73
006580DD  8D 4D D0                  LEA ECX,[EBP + -0x30]
006580E0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006580E3  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006580e6:
006580E6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006580E9  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006580EF  52                        PUSH EDX
006580F0  8A 08                     MOV CL,byte ptr [EAX]
006580F2  51                        PUSH ECX
006580F3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006580F9  E8 FB DB DA FF            CALL 0x00405cf9
006580FE  85 C0                     TEST EAX,EAX
00658100  75 13                     JNZ 0x00658115
00658102  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00658105  8B 02                     MOV EAX,dword ptr [EDX]
00658107  50                        PUSH EAX
00658108  57                        PUSH EDI
00658109  68 A0 16 80 00            PUSH 0x8016a0
0065810E  68 56 FF FF FF            PUSH 0xffffff56
00658113  EB 62                     JMP 0x00658177
LAB_00658115:
00658115  8B C8                     MOV ECX,EAX
00658117  E8 E6 D7 DA FF            CALL 0x00405902
0065811C  8B D0                     MOV EDX,EAX
0065811E  85 D2                     TEST EDX,EDX
00658120  74 42                     JZ 0x00658164
00658122  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
00658126  66 3D 01 00               CMP AX,0x1
0065812A  74 38                     JZ 0x00658164
0065812C  66 3D 00 80               CMP AX,0x8000
00658130  74 32                     JZ 0x00658164
00658132  B9 0D 00 00 00            MOV ECX,0xd
00658137  33 C0                     XOR EAX,EAX
00658139  8D 7D 9C                  LEA EDI,[EBP + -0x64]
0065813C  F3 AB                     STOSD.REP ES:EDI
0065813E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00658144  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
0065814A  8D 4D 9C                  LEA ECX,[EBP + -0x64]
0065814D  51                        PUSH ECX
0065814E  8B CA                     MOV ECX,EDX
00658150  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00658153  C7 45 9C 09 00 00 00      MOV dword ptr [EBP + -0x64],0x9
0065815A  E8 F6 93 DA FF            CALL 0x00401555
0065815F  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00658162  EB 1A                     JMP 0x0065817e
LAB_00658164:
00658164  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00658167  8B 02                     MOV EAX,dword ptr [EDX]
00658169  50                        PUSH EAX
0065816A  57                        PUSH EDI
0065816B  53                        PUSH EBX
0065816C  E8 6A D6 DA FF            CALL 0x004057db
00658171  50                        PUSH EAX
00658172  68 55 FF FF FF            PUSH 0xffffff55
LAB_00658177:
00658177  8B CE                     MOV ECX,ESI
00658179  E8 C4 CE DA FF            CALL 0x00405042
LAB_0065817e:
0065817E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00658181  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00658184  83 C1 04                  ADD ECX,0x4
00658187  48                        DEC EAX
00658188  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0065818B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065818E  0F 85 52 FF FF FF         JNZ 0x006580e6
00658194  E9 DA 18 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5f1:
00658199  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
0065819F  51                        PUSH ECX
006581A0  E8 0D C8 DA FF            CALL 0x004049b2
006581A5  83 C4 04                  ADD ESP,0x4
006581A8  85 C0                     TEST EAX,EAX
006581AA  0F 84 E9 A8 FF FF         JZ 0x00652a99
006581B0  8B 16                     MOV EDX,dword ptr [ESI]
006581B2  8B CE                     MOV ECX,ESI
006581B4  FF 52 18                  CALL dword ptr [EDX + 0x18]
006581B7  83 F8 08                  CMP EAX,0x8
006581BA  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006581C0  75 09                     JNZ 0x006581cb
006581C2  83 F8 09                  CMP EAX,0x9
006581C5  0F 84 CE A8 FF FF         JZ 0x00652a99
LAB_006581cb:
006581CB  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006581D1  8D 4D D0                  LEA ECX,[EBP + -0x30]
006581D4  51                        PUSH ECX
006581D5  52                        PUSH EDX
006581D6  50                        PUSH EAX
006581D7  8B CE                     MOV ECX,ESI
006581D9  E8 DA 94 DA FF            CALL 0x004016b8
006581DE  85 C0                     TEST EAX,EAX
006581E0  0F 8E 8D 18 00 00         JLE 0x00659a73
006581E6  8D 4D D0                  LEA ECX,[EBP + -0x30]
006581E9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006581EC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006581ef:
006581EF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006581F2  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006581F8  52                        PUSH EDX
006581F9  8A 08                     MOV CL,byte ptr [EAX]
006581FB  51                        PUSH ECX
006581FC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00658202  E8 F2 DA DA FF            CALL 0x00405cf9
00658207  85 C0                     TEST EAX,EAX
00658209  75 16                     JNZ 0x00658221
0065820B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065820E  8B 02                     MOV EAX,dword ptr [EDX]
00658210  50                        PUSH EAX
00658211  57                        PUSH EDI
00658212  68 A0 16 80 00            PUSH 0x8016a0
00658217  68 56 FF FF FF            PUSH 0xffffff56
0065821C  E9 92 00 00 00            JMP 0x006582b3
LAB_00658221:
00658221  8B C8                     MOV ECX,EAX
00658223  E8 DA D6 DA FF            CALL 0x00405902
00658228  8B D0                     MOV EDX,EAX
0065822A  85 D2                     TEST EDX,EDX
0065822C  74 72                     JZ 0x006582a0
0065822E  66 81 7A 7B 00 80         CMP word ptr [EDX + 0x7b],0x8000
00658234  74 6A                     JZ 0x006582a0
00658236  B9 0D 00 00 00            MOV ECX,0xd
0065823B  33 C0                     XOR EAX,EAX
0065823D  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00658240  F3 AB                     STOSD.REP ES:EDI
00658242  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00658248  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
0065824E  8A 8D AC FE FF FF         MOV CL,byte ptr [EBP + 0xfffffeac]
00658254  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00658257  66 8B 85 B0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb0]
0065825E  88 4D A4                  MOV byte ptr [EBP + -0x5c],CL
00658261  66 8B 8D B4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb4]
00658268  66 89 45 A5               MOV word ptr [EBP + -0x5b],AX
0065826C  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
00658272  66 89 4D A7               MOV word ptr [EBP + -0x59],CX
00658276  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
0065827C  89 45 A9                  MOV dword ptr [EBP + -0x57],EAX
0065827F  8D 45 9C                  LEA EAX,[EBP + -0x64]
00658282  89 4D AD                  MOV dword ptr [EBP + -0x53],ECX
00658285  50                        PUSH EAX
00658286  8B CA                     MOV ECX,EDX
00658288  C7 45 9C 0A 00 00 00      MOV dword ptr [EBP + -0x64],0xa
0065828F  C7 45 B1 00 00 00 00      MOV dword ptr [EBP + -0x4f],0x0
00658296  E8 BA 92 DA FF            CALL 0x00401555
0065829B  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0065829E  EB 1A                     JMP 0x006582ba
LAB_006582a0:
006582A0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006582A3  8B 11                     MOV EDX,dword ptr [ECX]
006582A5  52                        PUSH EDX
006582A6  57                        PUSH EDI
006582A7  53                        PUSH EBX
006582A8  E8 2E D5 DA FF            CALL 0x004057db
006582AD  50                        PUSH EAX
006582AE  68 55 FF FF FF            PUSH 0xffffff55
LAB_006582b3:
006582B3  8B CE                     MOV ECX,ESI
006582B5  E8 88 CD DA FF            CALL 0x00405042
LAB_006582ba:
006582BA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006582BD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006582C0  83 C1 04                  ADD ECX,0x4
006582C3  48                        DEC EAX
006582C4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006582C7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006582CA  0F 85 1F FF FF FF         JNZ 0x006581ef
006582D0  E9 9E 17 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5f2:
006582D5  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
006582DB  50                        PUSH EAX
006582DC  E8 5A BB DA FF            CALL 0x00403e3b
006582E1  83 C4 04                  ADD ESP,0x4
006582E4  85 C0                     TEST EAX,EAX
006582E6  0F 84 AD A7 FF FF         JZ 0x00652a99
006582EC  8B 16                     MOV EDX,dword ptr [ESI]
006582EE  8B CE                     MOV ECX,ESI
006582F0  FF 52 18                  CALL dword ptr [EDX + 0x18]
006582F3  83 F8 08                  CMP EAX,0x8
006582F6  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006582FC  75 09                     JNZ 0x00658307
006582FE  83 F8 09                  CMP EAX,0x9
00658301  0F 84 92 A7 FF FF         JZ 0x00652a99
LAB_00658307:
00658307  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065830D  8D 4D D0                  LEA ECX,[EBP + -0x30]
00658310  51                        PUSH ECX
00658311  52                        PUSH EDX
00658312  50                        PUSH EAX
00658313  8B CE                     MOV ECX,ESI
00658315  E8 9E 93 DA FF            CALL 0x004016b8
0065831A  85 C0                     TEST EAX,EAX
0065831C  0F 8E 51 17 00 00         JLE 0x00659a73
00658322  8D 4D D0                  LEA ECX,[EBP + -0x30]
00658325  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00658328  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0065832b:
0065832B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065832E  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00658334  52                        PUSH EDX
00658335  8A 08                     MOV CL,byte ptr [EAX]
00658337  51                        PUSH ECX
00658338  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065833E  E8 B6 D9 DA FF            CALL 0x00405cf9
00658343  85 C0                     TEST EAX,EAX
00658345  75 16                     JNZ 0x0065835d
00658347  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065834A  8B 02                     MOV EAX,dword ptr [EDX]
0065834C  50                        PUSH EAX
0065834D  57                        PUSH EDI
0065834E  68 A0 16 80 00            PUSH 0x8016a0
00658353  68 56 FF FF FF            PUSH 0xffffff56
00658358  E9 B9 00 00 00            JMP 0x00658416
LAB_0065835d:
0065835D  8B C8                     MOV ECX,EAX
0065835F  E8 9E D5 DA FF            CALL 0x00405902
00658364  8B D0                     MOV EDX,EAX
00658366  85 D2                     TEST EDX,EDX
00658368  0F 84 95 00 00 00         JZ 0x00658403
0065836E  B9 0D 00 00 00            MOV ECX,0xd
00658373  33 C0                     XOR EAX,EAX
00658375  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00658378  F3 AB                     STOSD.REP ES:EDI
0065837A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00658380  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
00658386  8A 8D AC FE FF FF         MOV CL,byte ptr [EBP + 0xfffffeac]
0065838C  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0065838F  66 8B 85 B0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb0]
00658396  66 89 45 A5               MOV word ptr [EBP + -0x5b],AX
0065839A  66 8B 85 B8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb8]
006583A1  66 89 45 A9               MOV word ptr [EBP + -0x57],AX
006583A5  8B 85 C0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec0]
006583AB  88 4D A4                  MOV byte ptr [EBP + -0x5c],CL
006583AE  66 8B 8D B4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb4]
006583B5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006583B8  66 89 4D A7               MOV word ptr [EBP + -0x59],CX
006583BC  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
006583C2  C7 45 9C 0B 00 00 00      MOV dword ptr [EBP + -0x64],0xb
006583C9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006583CC  89 4D B5                  MOV dword ptr [EBP + -0x4b],ECX
006583CF  66 8B 8D C4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffec4]
006583D6  89 45 AB                  MOV dword ptr [EBP + -0x55],EAX
006583D9  66 8B 85 C8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffec8]
006583E0  66 89 4D AF               MOV word ptr [EBP + -0x51],CX
006583E4  66 8B 8D CC FE FF FF      MOV CX,word ptr [EBP + 0xfffffecc]
006583EB  66 89 45 B1               MOV word ptr [EBP + -0x4f],AX
006583EF  8D 45 9C                  LEA EAX,[EBP + -0x64]
006583F2  66 89 4D B3               MOV word ptr [EBP + -0x4d],CX
006583F6  50                        PUSH EAX
006583F7  8B CA                     MOV ECX,EDX
006583F9  E8 57 91 DA FF            CALL 0x00401555
006583FE  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00658401  EB 1A                     JMP 0x0065841d
LAB_00658403:
00658403  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00658406  8B 11                     MOV EDX,dword ptr [ECX]
00658408  52                        PUSH EDX
00658409  57                        PUSH EDI
0065840A  53                        PUSH EBX
0065840B  E8 CB D3 DA FF            CALL 0x004057db
00658410  50                        PUSH EAX
00658411  68 55 FF FF FF            PUSH 0xffffff55
LAB_00658416:
00658416  8B CE                     MOV ECX,ESI
00658418  E8 25 CC DA FF            CALL 0x00405042
LAB_0065841d:
0065841D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00658420  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00658423  83 C1 04                  ADD ECX,0x4
00658426  48                        DEC EAX
00658427  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0065842A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065842D  0F 85 F8 FE FF FF         JNZ 0x0065832b
00658433  E9 3B 16 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5f3:
00658438  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
0065843E  50                        PUSH EAX
0065843F  E8 7D A7 DA FF            CALL 0x00402bc1
00658444  83 C4 04                  ADD ESP,0x4
00658447  85 C0                     TEST EAX,EAX
00658449  0F 84 4A A6 FF FF         JZ 0x00652a99
0065844F  8B 16                     MOV EDX,dword ptr [ESI]
00658451  8B CE                     MOV ECX,ESI
00658453  FF 52 18                  CALL dword ptr [EDX + 0x18]
00658456  83 F8 08                  CMP EAX,0x8
00658459  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
0065845F  75 09                     JNZ 0x0065846a
00658461  83 F8 09                  CMP EAX,0x9
00658464  0F 84 2F A6 FF FF         JZ 0x00652a99
LAB_0065846a:
0065846A  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00658470  8D 4D D0                  LEA ECX,[EBP + -0x30]
00658473  51                        PUSH ECX
00658474  52                        PUSH EDX
00658475  50                        PUSH EAX
00658476  8B CE                     MOV ECX,ESI
00658478  E8 3B 92 DA FF            CALL 0x004016b8
0065847D  85 C0                     TEST EAX,EAX
0065847F  0F 8E EE 15 00 00         JLE 0x00659a73
00658485  8D 4D D0                  LEA ECX,[EBP + -0x30]
00658488  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065848B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0065848e:
0065848E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00658491  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00658497  52                        PUSH EDX
00658498  8A 08                     MOV CL,byte ptr [EAX]
0065849A  51                        PUSH ECX
0065849B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006584A1  E8 53 D8 DA FF            CALL 0x00405cf9
006584A6  85 C0                     TEST EAX,EAX
006584A8  75 16                     JNZ 0x006584c0
006584AA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006584AD  8B 02                     MOV EAX,dword ptr [EDX]
006584AF  50                        PUSH EAX
006584B0  57                        PUSH EDI
006584B1  68 A0 16 80 00            PUSH 0x8016a0
006584B6  68 56 FF FF FF            PUSH 0xffffff56
006584BB  E9 83 00 00 00            JMP 0x00658543
LAB_006584c0:
006584C0  8B C8                     MOV ECX,EAX
006584C2  E8 3B D4 DA FF            CALL 0x00405902
006584C7  8B D0                     MOV EDX,EAX
006584C9  85 D2                     TEST EDX,EDX
006584CB  74 63                     JZ 0x00658530
006584CD  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
006584D1  66 3D 01 00               CMP AX,0x1
006584D5  74 59                     JZ 0x00658530
006584D7  66 3D 00 80               CMP AX,0x8000
006584DB  74 53                     JZ 0x00658530
006584DD  B9 0D 00 00 00            MOV ECX,0xd
006584E2  33 C0                     XOR EAX,EAX
006584E4  8D 7D 9C                  LEA EDI,[EBP + -0x64]
006584E7  F3 AB                     STOSD.REP ES:EDI
006584E9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006584EF  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
006584F5  8A 8D AC FE FF FF         MOV CL,byte ptr [EBP + 0xfffffeac]
006584FB  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006584FE  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00658504  89 45 A5                  MOV dword ptr [EBP + -0x5b],EAX
00658507  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
0065850D  88 4D A4                  MOV byte ptr [EBP + -0x5c],CL
00658510  C7 45 9C 0C 00 00 00      MOV dword ptr [EBP + -0x64],0xc
00658517  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0065851A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0065851D  8D 45 9C                  LEA EAX,[EBP + -0x64]
00658520  89 4D A9                  MOV dword ptr [EBP + -0x57],ECX
00658523  50                        PUSH EAX
00658524  8B CA                     MOV ECX,EDX
00658526  E8 2A 90 DA FF            CALL 0x00401555
0065852B  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0065852E  EB 1A                     JMP 0x0065854a
LAB_00658530:
00658530  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00658533  8B 11                     MOV EDX,dword ptr [ECX]
00658535  52                        PUSH EDX
00658536  57                        PUSH EDI
00658537  53                        PUSH EBX
00658538  E8 9E D2 DA FF            CALL 0x004057db
0065853D  50                        PUSH EAX
0065853E  68 55 FF FF FF            PUSH 0xffffff55
LAB_00658543:
00658543  8B CE                     MOV ECX,ESI
00658545  E8 F8 CA DA FF            CALL 0x00405042
LAB_0065854a:
0065854A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065854D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00658550  83 C1 04                  ADD ECX,0x4
00658553  48                        DEC EAX
00658554  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00658557  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065855A  0F 85 2E FF FF FF         JNZ 0x0065848e
00658560  E9 0E 15 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5f4:
00658565  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
0065856B  50                        PUSH EAX
0065856C  E8 4B A1 DA FF            CALL 0x004026bc
00658571  83 C4 04                  ADD ESP,0x4
00658574  85 C0                     TEST EAX,EAX
00658576  0F 84 1D A5 FF FF         JZ 0x00652a99
0065857C  8B 16                     MOV EDX,dword ptr [ESI]
0065857E  8B CE                     MOV ECX,ESI
00658580  FF 52 18                  CALL dword ptr [EDX + 0x18]
00658583  83 F8 08                  CMP EAX,0x8
00658586  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
0065858C  75 09                     JNZ 0x00658597
0065858E  83 F8 09                  CMP EAX,0x9
00658591  0F 84 02 A5 FF FF         JZ 0x00652a99
LAB_00658597:
00658597  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065859D  8D 4D D0                  LEA ECX,[EBP + -0x30]
006585A0  51                        PUSH ECX
006585A1  52                        PUSH EDX
006585A2  50                        PUSH EAX
006585A3  8B CE                     MOV ECX,ESI
006585A5  E8 0E 91 DA FF            CALL 0x004016b8
006585AA  85 C0                     TEST EAX,EAX
006585AC  0F 8E C1 14 00 00         JLE 0x00659a73
006585B2  8D 4D D0                  LEA ECX,[EBP + -0x30]
006585B5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006585B8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006585bb:
006585BB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006585BE  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006585C4  52                        PUSH EDX
006585C5  8A 08                     MOV CL,byte ptr [EAX]
006585C7  51                        PUSH ECX
006585C8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006585CE  E8 26 D7 DA FF            CALL 0x00405cf9
006585D3  85 C0                     TEST EAX,EAX
006585D5  75 16                     JNZ 0x006585ed
006585D7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006585DA  8B 02                     MOV EAX,dword ptr [EDX]
006585DC  50                        PUSH EAX
006585DD  57                        PUSH EDI
006585DE  68 A0 16 80 00            PUSH 0x8016a0
006585E3  68 56 FF FF FF            PUSH 0xffffff56
006585E8  E9 83 00 00 00            JMP 0x00658670
LAB_006585ed:
006585ED  8B C8                     MOV ECX,EAX
006585EF  E8 0E D3 DA FF            CALL 0x00405902
006585F4  8B D0                     MOV EDX,EAX
006585F6  85 D2                     TEST EDX,EDX
006585F8  74 63                     JZ 0x0065865d
006585FA  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
006585FE  66 3D 01 00               CMP AX,0x1
00658602  74 59                     JZ 0x0065865d
00658604  66 3D 00 80               CMP AX,0x8000
00658608  74 53                     JZ 0x0065865d
0065860A  B9 0D 00 00 00            MOV ECX,0xd
0065860F  33 C0                     XOR EAX,EAX
00658611  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00658614  F3 AB                     STOSD.REP ES:EDI
00658616  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0065861C  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
00658622  8A 8D AC FE FF FF         MOV CL,byte ptr [EBP + 0xfffffeac]
00658628  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0065862B  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00658631  89 45 A5                  MOV dword ptr [EBP + -0x5b],EAX
00658634  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
0065863A  88 4D A4                  MOV byte ptr [EBP + -0x5c],CL
0065863D  C7 45 9C 0D 00 00 00      MOV dword ptr [EBP + -0x64],0xd
00658644  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00658647  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0065864A  8D 45 9C                  LEA EAX,[EBP + -0x64]
0065864D  89 4D A9                  MOV dword ptr [EBP + -0x57],ECX
00658650  50                        PUSH EAX
00658651  8B CA                     MOV ECX,EDX
00658653  E8 FD 8E DA FF            CALL 0x00401555
00658658  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0065865B  EB 1A                     JMP 0x00658677
LAB_0065865d:
0065865D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00658660  8B 11                     MOV EDX,dword ptr [ECX]
00658662  52                        PUSH EDX
00658663  57                        PUSH EDI
00658664  53                        PUSH EBX
00658665  E8 71 D1 DA FF            CALL 0x004057db
0065866A  50                        PUSH EAX
0065866B  68 55 FF FF FF            PUSH 0xffffff55
LAB_00658670:
00658670  8B CE                     MOV ECX,ESI
00658672  E8 CB C9 DA FF            CALL 0x00405042
LAB_00658677:
00658677  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065867A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065867D  83 C1 04                  ADD ECX,0x4
00658680  48                        DEC EAX
00658681  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00658684  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00658687  0F 85 2E FF FF FF         JNZ 0x006585bb
0065868D  E9 E1 13 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5f5:
00658692  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00658698  50                        PUSH EAX
00658699  E8 23 BE DA FF            CALL 0x004044c1
0065869E  83 C4 04                  ADD ESP,0x4
006586A1  85 C0                     TEST EAX,EAX
006586A3  0F 84 F0 A3 FF FF         JZ 0x00652a99
006586A9  8B 16                     MOV EDX,dword ptr [ESI]
006586AB  8B CE                     MOV ECX,ESI
006586AD  FF 52 18                  CALL dword ptr [EDX + 0x18]
006586B0  83 F8 08                  CMP EAX,0x8
006586B3  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006586B9  75 09                     JNZ 0x006586c4
006586BB  83 F8 09                  CMP EAX,0x9
006586BE  0F 84 D5 A3 FF FF         JZ 0x00652a99
LAB_006586c4:
006586C4  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006586CA  8D 4D D0                  LEA ECX,[EBP + -0x30]
006586CD  51                        PUSH ECX
006586CE  52                        PUSH EDX
006586CF  50                        PUSH EAX
006586D0  8B CE                     MOV ECX,ESI
006586D2  E8 E1 8F DA FF            CALL 0x004016b8
006586D7  85 C0                     TEST EAX,EAX
006586D9  0F 8E 94 13 00 00         JLE 0x00659a73
006586DF  8D 4D D0                  LEA ECX,[EBP + -0x30]
006586E2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006586E5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006586e8:
006586E8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006586EB  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006586F1  52                        PUSH EDX
006586F2  8A 08                     MOV CL,byte ptr [EAX]
006586F4  51                        PUSH ECX
006586F5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006586FB  E8 F9 D5 DA FF            CALL 0x00405cf9
00658700  85 C0                     TEST EAX,EAX
00658702  75 16                     JNZ 0x0065871a
00658704  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00658707  8B 02                     MOV EAX,dword ptr [EDX]
00658709  50                        PUSH EAX
0065870A  57                        PUSH EDI
0065870B  68 A0 16 80 00            PUSH 0x8016a0
00658710  68 56 FF FF FF            PUSH 0xffffff56
00658715  E9 C8 00 00 00            JMP 0x006587e2
LAB_0065871a:
0065871A  8B C8                     MOV ECX,EAX
0065871C  E8 E1 D1 DA FF            CALL 0x00405902
00658721  8B D0                     MOV EDX,EAX
00658723  85 D2                     TEST EDX,EDX
00658725  0F 84 A4 00 00 00         JZ 0x006587cf
0065872B  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
0065872F  66 3D 01 00               CMP AX,0x1
00658733  0F 84 96 00 00 00         JZ 0x006587cf
00658739  66 3D 00 80               CMP AX,0x8000
0065873D  0F 84 8C 00 00 00         JZ 0x006587cf
00658743  B9 0D 00 00 00            MOV ECX,0xd
00658748  33 C0                     XOR EAX,EAX
0065874A  8D 7D 9C                  LEA EDI,[EBP + -0x64]
0065874D  F3 AB                     STOSD.REP ES:EDI
0065874F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00658755  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
0065875B  66 8B 8D AC FE FF FF      MOV CX,word ptr [EBP + 0xfffffeac]
00658762  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00658765  66 8B 85 B0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb0]
0065876C  66 89 45 A6               MOV word ptr [EBP + -0x5a],AX
00658770  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
00658776  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00658779  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
0065877F  66 89 4D A4               MOV word ptr [EBP + -0x5c],CX
00658783  66 8B 8D B4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb4]
0065878A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0065878D  66 89 4D A8               MOV word ptr [EBP + -0x58],CX
00658791  C7 45 9C 0E 00 00 00      MOV dword ptr [EBP + -0x64],0xe
00658798  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0065879B  66 8B 85 C0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffec0]
006587A2  89 4D AA                  MOV dword ptr [EBP + -0x56],ECX
006587A5  66 8B 8D C4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffec4]
006587AC  66 89 4D B0               MOV word ptr [EBP + -0x50],CX
006587B0  8D 4D 9C                  LEA ECX,[EBP + -0x64]
006587B3  66 89 45 AE               MOV word ptr [EBP + -0x52],AX
006587B7  66 8B 85 C8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffec8]
006587BE  51                        PUSH ECX
006587BF  8B CA                     MOV ECX,EDX
006587C1  66 89 45 B2               MOV word ptr [EBP + -0x4e],AX
006587C5  E8 8B 8D DA FF            CALL 0x00401555
006587CA  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006587CD  EB 1A                     JMP 0x006587e9
LAB_006587cf:
006587CF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006587D2  8B 02                     MOV EAX,dword ptr [EDX]
006587D4  50                        PUSH EAX
006587D5  57                        PUSH EDI
006587D6  53                        PUSH EBX
006587D7  E8 FF CF DA FF            CALL 0x004057db
006587DC  50                        PUSH EAX
006587DD  68 55 FF FF FF            PUSH 0xffffff55
LAB_006587e2:
006587E2  8B CE                     MOV ECX,ESI
006587E4  E8 59 C8 DA FF            CALL 0x00405042
LAB_006587e9:
006587E9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006587EC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006587EF  83 C1 04                  ADD ECX,0x4
006587F2  48                        DEC EAX
006587F3  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006587F6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006587F9  0F 85 E9 FE FF FF         JNZ 0x006586e8
006587FF  E9 6F 12 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5f6:
00658804  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
0065880A  51                        PUSH ECX
0065880B  E8 61 D5 DA FF            CALL 0x00405d71
00658810  83 C4 04                  ADD ESP,0x4
00658813  85 C0                     TEST EAX,EAX
00658815  0F 84 7E A2 FF FF         JZ 0x00652a99
0065881B  8B 16                     MOV EDX,dword ptr [ESI]
0065881D  8B CE                     MOV ECX,ESI
0065881F  FF 52 18                  CALL dword ptr [EDX + 0x18]
00658822  83 F8 08                  CMP EAX,0x8
00658825  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
0065882B  75 09                     JNZ 0x00658836
0065882D  83 F8 09                  CMP EAX,0x9
00658830  0F 84 63 A2 FF FF         JZ 0x00652a99
LAB_00658836:
00658836  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065883C  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065883F  51                        PUSH ECX
00658840  52                        PUSH EDX
00658841  50                        PUSH EAX
00658842  8B CE                     MOV ECX,ESI
00658844  E8 6F 8E DA FF            CALL 0x004016b8
00658849  85 C0                     TEST EAX,EAX
0065884B  0F 8E 22 12 00 00         JLE 0x00659a73
00658851  8D 4D D0                  LEA ECX,[EBP + -0x30]
00658854  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00658857  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0065885a:
0065885A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065885D  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00658863  52                        PUSH EDX
00658864  8A 08                     MOV CL,byte ptr [EAX]
00658866  51                        PUSH ECX
00658867  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065886D  E8 87 D4 DA FF            CALL 0x00405cf9
00658872  85 C0                     TEST EAX,EAX
00658874  75 13                     JNZ 0x00658889
00658876  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00658879  8B 02                     MOV EAX,dword ptr [EDX]
0065887B  50                        PUSH EAX
0065887C  57                        PUSH EDI
0065887D  68 A0 16 80 00            PUSH 0x8016a0
00658882  68 56 FF FF FF            PUSH 0xffffff56
00658887  EB 62                     JMP 0x006588eb
LAB_00658889:
00658889  8B C8                     MOV ECX,EAX
0065888B  E8 72 D0 DA FF            CALL 0x00405902
00658890  8B D0                     MOV EDX,EAX
00658892  85 D2                     TEST EDX,EDX
00658894  74 42                     JZ 0x006588d8
00658896  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
0065889A  66 3D 01 00               CMP AX,0x1
0065889E  74 38                     JZ 0x006588d8
006588A0  66 3D 00 80               CMP AX,0x8000
006588A4  74 32                     JZ 0x006588d8
006588A6  B9 0D 00 00 00            MOV ECX,0xd
006588AB  33 C0                     XOR EAX,EAX
006588AD  8D 7D 9C                  LEA EDI,[EBP + -0x64]
006588B0  F3 AB                     STOSD.REP ES:EDI
006588B2  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006588B8  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
006588BE  8D 4D 9C                  LEA ECX,[EBP + -0x64]
006588C1  51                        PUSH ECX
006588C2  8B CA                     MOV ECX,EDX
006588C4  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006588C7  C7 45 9C 0F 00 00 00      MOV dword ptr [EBP + -0x64],0xf
006588CE  E8 82 8C DA FF            CALL 0x00401555
006588D3  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006588D6  EB 1A                     JMP 0x006588f2
LAB_006588d8:
006588D8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006588DB  8B 02                     MOV EAX,dword ptr [EDX]
006588DD  50                        PUSH EAX
006588DE  57                        PUSH EDI
006588DF  53                        PUSH EBX
006588E0  E8 F6 CE DA FF            CALL 0x004057db
006588E5  50                        PUSH EAX
006588E6  68 55 FF FF FF            PUSH 0xffffff55
LAB_006588eb:
006588EB  8B CE                     MOV ECX,ESI
006588ED  E8 50 C7 DA FF            CALL 0x00405042
LAB_006588f2:
006588F2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006588F5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006588F8  83 C1 04                  ADD ECX,0x4
006588FB  48                        DEC EAX
006588FC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006588FF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00658902  0F 85 52 FF FF FF         JNZ 0x0065885a
00658908  E9 66 11 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5f7:
0065890D  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00658913  51                        PUSH ECX
00658914  E8 BA BD DA FF            CALL 0x004046d3
00658919  83 C4 04                  ADD ESP,0x4
0065891C  85 C0                     TEST EAX,EAX
0065891E  0F 84 75 A1 FF FF         JZ 0x00652a99
00658924  8B 16                     MOV EDX,dword ptr [ESI]
00658926  8B CE                     MOV ECX,ESI
00658928  FF 52 18                  CALL dword ptr [EDX + 0x18]
0065892B  83 F8 08                  CMP EAX,0x8
0065892E  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00658934  75 09                     JNZ 0x0065893f
00658936  83 F8 09                  CMP EAX,0x9
00658939  0F 84 5A A1 FF FF         JZ 0x00652a99
LAB_0065893f:
0065893F  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00658945  8D 4D D0                  LEA ECX,[EBP + -0x30]
00658948  51                        PUSH ECX
00658949  52                        PUSH EDX
0065894A  50                        PUSH EAX
0065894B  8B CE                     MOV ECX,ESI
0065894D  E8 66 8D DA FF            CALL 0x004016b8
00658952  85 C0                     TEST EAX,EAX
00658954  0F 8E 19 11 00 00         JLE 0x00659a73
0065895A  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065895D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00658960  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00658963:
00658963  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00658966  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
0065896C  52                        PUSH EDX
0065896D  8A 08                     MOV CL,byte ptr [EAX]
0065896F  51                        PUSH ECX
00658970  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00658976  E8 7E D3 DA FF            CALL 0x00405cf9
0065897B  85 C0                     TEST EAX,EAX
0065897D  75 13                     JNZ 0x00658992
0065897F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00658982  8B 02                     MOV EAX,dword ptr [EDX]
00658984  50                        PUSH EAX
00658985  57                        PUSH EDI
00658986  68 A0 16 80 00            PUSH 0x8016a0
0065898B  68 56 FF FF FF            PUSH 0xffffff56
00658990  EB 6C                     JMP 0x006589fe
LAB_00658992:
00658992  8B C8                     MOV ECX,EAX
00658994  E8 69 CF DA FF            CALL 0x00405902
00658999  8B D0                     MOV EDX,EAX
0065899B  85 D2                     TEST EDX,EDX
0065899D  74 4C                     JZ 0x006589eb
0065899F  66 81 7A 7B 00 80         CMP word ptr [EDX + 0x7b],0x8000
006589A5  74 44                     JZ 0x006589eb
006589A7  B9 0D 00 00 00            MOV ECX,0xd
006589AC  33 C0                     XOR EAX,EAX
006589AE  8D 7D 9C                  LEA EDI,[EBP + -0x64]
006589B1  F3 AB                     STOSD.REP ES:EDI
006589B3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006589B9  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
006589BF  8A 8D AC FE FF FF         MOV CL,byte ptr [EBP + 0xfffffeac]
006589C5  88 4D A4                  MOV byte ptr [EBP + -0x5c],CL
006589C8  8D 4D 9C                  LEA ECX,[EBP + -0x64]
006589CB  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006589CE  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
006589D4  51                        PUSH ECX
006589D5  8B CA                     MOV ECX,EDX
006589D7  C7 45 9C 10 00 00 00      MOV dword ptr [EBP + -0x64],0x10
006589DE  89 45 A5                  MOV dword ptr [EBP + -0x5b],EAX
006589E1  E8 6F 8B DA FF            CALL 0x00401555
006589E6  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006589E9  EB 1A                     JMP 0x00658a05
LAB_006589eb:
006589EB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006589EE  8B 02                     MOV EAX,dword ptr [EDX]
006589F0  50                        PUSH EAX
006589F1  57                        PUSH EDI
006589F2  53                        PUSH EBX
006589F3  E8 E3 CD DA FF            CALL 0x004057db
006589F8  50                        PUSH EAX
006589F9  68 55 FF FF FF            PUSH 0xffffff55
LAB_006589fe:
006589FE  8B CE                     MOV ECX,ESI
00658A00  E8 3D C6 DA FF            CALL 0x00405042
LAB_00658a05:
00658A05  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00658A08  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00658A0B  83 C1 04                  ADD ECX,0x4
00658A0E  48                        DEC EAX
00658A0F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00658A12  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00658A15  0F 85 48 FF FF FF         JNZ 0x00658963
00658A1B  E9 53 10 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5ed:
00658A20  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00658A26  51                        PUSH ECX
00658A27  E8 2C 92 DA FF            CALL 0x00401c58
00658A2C  83 C4 04                  ADD ESP,0x4
00658A2F  85 C0                     TEST EAX,EAX
00658A31  0F 84 62 A0 FF FF         JZ 0x00652a99
00658A37  8B 16                     MOV EDX,dword ptr [ESI]
00658A39  8B CE                     MOV ECX,ESI
00658A3B  FF 52 18                  CALL dword ptr [EDX + 0x18]
00658A3E  83 F8 08                  CMP EAX,0x8
00658A41  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00658A47  75 09                     JNZ 0x00658a52
00658A49  83 F8 09                  CMP EAX,0x9
00658A4C  0F 84 47 A0 FF FF         JZ 0x00652a99
LAB_00658a52:
00658A52  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00658A58  8D 4D D0                  LEA ECX,[EBP + -0x30]
00658A5B  51                        PUSH ECX
00658A5C  52                        PUSH EDX
00658A5D  50                        PUSH EAX
00658A5E  8B CE                     MOV ECX,ESI
00658A60  E8 53 8C DA FF            CALL 0x004016b8
00658A65  85 C0                     TEST EAX,EAX
00658A67  0F 8E 06 10 00 00         JLE 0x00659a73
00658A6D  8D 4D D0                  LEA ECX,[EBP + -0x30]
00658A70  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00658A73  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00658a76:
00658A76  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00658A79  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00658A7F  52                        PUSH EDX
00658A80  8A 08                     MOV CL,byte ptr [EAX]
00658A82  51                        PUSH ECX
00658A83  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00658A89  E8 6B D2 DA FF            CALL 0x00405cf9
00658A8E  85 C0                     TEST EAX,EAX
00658A90  75 16                     JNZ 0x00658aa8
00658A92  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00658A95  8B 02                     MOV EAX,dword ptr [EDX]
00658A97  50                        PUSH EAX
00658A98  57                        PUSH EDI
00658A99  68 A0 16 80 00            PUSH 0x8016a0
00658A9E  68 56 FF FF FF            PUSH 0xffffff56
00658AA3  E9 C8 00 00 00            JMP 0x00658b70
LAB_00658aa8:
00658AA8  8B C8                     MOV ECX,EAX
00658AAA  E8 53 CE DA FF            CALL 0x00405902
00658AAF  8B D0                     MOV EDX,EAX
00658AB1  85 D2                     TEST EDX,EDX
00658AB3  0F 84 A4 00 00 00         JZ 0x00658b5d
00658AB9  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
00658ABD  66 3D 01 00               CMP AX,0x1
00658AC1  0F 84 96 00 00 00         JZ 0x00658b5d
00658AC7  66 3D 00 80               CMP AX,0x8000
00658ACB  0F 84 8C 00 00 00         JZ 0x00658b5d
00658AD1  B9 0D 00 00 00            MOV ECX,0xd
00658AD6  33 C0                     XOR EAX,EAX
00658AD8  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00658ADB  F3 AB                     STOSD.REP ES:EDI
00658ADD  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00658AE3  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
00658AE9  66 8B 8D AC FE FF FF      MOV CX,word ptr [EBP + 0xfffffeac]
00658AF0  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00658AF3  66 8B 85 B0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb0]
00658AFA  66 89 45 A6               MOV word ptr [EBP + -0x5a],AX
00658AFE  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
00658B04  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00658B07  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
00658B0D  66 89 4D A4               MOV word ptr [EBP + -0x5c],CX
00658B11  66 8B 8D B4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb4]
00658B18  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00658B1B  66 89 4D A8               MOV word ptr [EBP + -0x58],CX
00658B1F  C7 45 9C 34 00 00 00      MOV dword ptr [EBP + -0x64],0x34
00658B26  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00658B29  66 8B 85 C0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffec0]
00658B30  89 4D AA                  MOV dword ptr [EBP + -0x56],ECX
00658B33  66 8B 8D C4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffec4]
00658B3A  66 89 4D B0               MOV word ptr [EBP + -0x50],CX
00658B3E  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00658B41  66 89 45 AE               MOV word ptr [EBP + -0x52],AX
00658B45  66 8B 85 C8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffec8]
00658B4C  51                        PUSH ECX
00658B4D  8B CA                     MOV ECX,EDX
00658B4F  66 89 45 B2               MOV word ptr [EBP + -0x4e],AX
00658B53  E8 FD 89 DA FF            CALL 0x00401555
00658B58  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00658B5B  EB 1A                     JMP 0x00658b77
LAB_00658b5d:
00658B5D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00658B60  8B 02                     MOV EAX,dword ptr [EDX]
00658B62  50                        PUSH EAX
00658B63  57                        PUSH EDI
00658B64  53                        PUSH EBX
00658B65  E8 71 CC DA FF            CALL 0x004057db
00658B6A  50                        PUSH EAX
00658B6B  68 55 FF FF FF            PUSH 0xffffff55
LAB_00658b70:
00658B70  8B CE                     MOV ECX,ESI
00658B72  E8 CB C4 DA FF            CALL 0x00405042
LAB_00658b77:
00658B77  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00658B7A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00658B7D  83 C1 04                  ADD ECX,0x4
00658B80  48                        DEC EAX
00658B81  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00658B84  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00658B87  0F 85 E9 FE FF FF         JNZ 0x00658a76
00658B8D  E9 E1 0E 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5ee:
00658B92  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00658B98  51                        PUSH ECX
00658B99  E8 1A 86 DA FF            CALL 0x004011b8
00658B9E  83 C4 04                  ADD ESP,0x4
00658BA1  85 C0                     TEST EAX,EAX
00658BA3  0F 84 F0 9E FF FF         JZ 0x00652a99
00658BA9  8B 16                     MOV EDX,dword ptr [ESI]
00658BAB  8B CE                     MOV ECX,ESI
00658BAD  FF 52 18                  CALL dword ptr [EDX + 0x18]
00658BB0  83 F8 08                  CMP EAX,0x8
00658BB3  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00658BB9  75 09                     JNZ 0x00658bc4
00658BBB  83 F8 09                  CMP EAX,0x9
00658BBE  0F 84 D5 9E FF FF         JZ 0x00652a99
LAB_00658bc4:
00658BC4  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00658BCA  8D 4D D0                  LEA ECX,[EBP + -0x30]
00658BCD  51                        PUSH ECX
00658BCE  52                        PUSH EDX
00658BCF  50                        PUSH EAX
00658BD0  8B CE                     MOV ECX,ESI
00658BD2  E8 E1 8A DA FF            CALL 0x004016b8
00658BD7  85 C0                     TEST EAX,EAX
00658BD9  0F 8E 94 0E 00 00         JLE 0x00659a73
00658BDF  8D 4D D0                  LEA ECX,[EBP + -0x30]
00658BE2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00658BE5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00658be8:
00658BE8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00658BEB  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00658BF1  52                        PUSH EDX
00658BF2  8A 08                     MOV CL,byte ptr [EAX]
00658BF4  51                        PUSH ECX
00658BF5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00658BFB  E8 F9 D0 DA FF            CALL 0x00405cf9
00658C00  85 C0                     TEST EAX,EAX
00658C02  75 16                     JNZ 0x00658c1a
00658C04  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00658C07  8B 02                     MOV EAX,dword ptr [EDX]
00658C09  50                        PUSH EAX
00658C0A  57                        PUSH EDI
00658C0B  68 A0 16 80 00            PUSH 0x8016a0
00658C10  68 56 FF FF FF            PUSH 0xffffff56
00658C15  E9 E7 00 00 00            JMP 0x00658d01
LAB_00658c1a:
00658C1A  8B C8                     MOV ECX,EAX
00658C1C  E8 E1 CC DA FF            CALL 0x00405902
00658C21  85 C0                     TEST EAX,EAX
00658C23  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00658C26  0F 84 C2 00 00 00         JZ 0x00658cee
00658C2C  66 8B 40 7B               MOV AX,word ptr [EAX + 0x7b]
00658C30  66 3D 01 00               CMP AX,0x1
00658C34  0F 84 B4 00 00 00         JZ 0x00658cee
00658C3A  66 3D 00 80               CMP AX,0x8000
00658C3E  0F 84 AA 00 00 00         JZ 0x00658cee
00658C44  B9 0D 00 00 00            MOV ECX,0xd
00658C49  33 C0                     XOR EAX,EAX
00658C4B  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00658C4E  F3 AB                     STOSD.REP ES:EDI
00658C50  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00658C56  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00658C5C  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00658C62  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00658C68  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00658C6B  66 8B 85 B8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb8]
00658C72  66 89 45 B8               MOV word ptr [EBP + -0x48],AX
00658C76  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
00658C7C  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
00658C7F  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00658C85  85 C0                     TEST EAX,EAX
00658C87  C7 45 9C 32 00 00 00      MOV dword ptr [EBP + -0x64],0x32
00658C8E  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
00658C91  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
00658C94  75 05                     JNZ 0x00658c9b
00658C96  B8 A0 16 80 00            MOV EAX,0x8016a0
LAB_00658c9b:
00658C9B  6A 0E                     PUSH 0xe
00658C9D  8D 4D BA                  LEA ECX,[EBP + -0x46]
00658CA0  50                        PUSH EAX
00658CA1  51                        PUSH ECX
00658CA2  E8 99 56 0D 00            CALL 0x0072e340
00658CA7  8B 85 C4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec4]
00658CAD  66 8B 95 C0 FE FF FF      MOV DX,word ptr [EBP + 0xfffffec0]
00658CB4  8B C8                     MOV ECX,EAX
00658CB6  25 00 FF 00 00            AND EAX,0xff00
00658CBB  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00658CBE  8B 85 C8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec8]
00658CC4  66 89 55 C9               MOV word ptr [EBP + -0x37],DX
00658CC8  83 C4 0C                  ADD ESP,0xc
00658CCB  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00658CCE  81 E1 FF 00 00 00         AND ECX,0xff
00658CD4  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
00658CD7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00658CDA  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00658CDD  8D 45 9C                  LEA EAX,[EBP + -0x64]
00658CE0  50                        PUSH EAX
00658CE1  89 55 CB                  MOV dword ptr [EBP + -0x35],EDX
00658CE4  E8 6C 88 DA FF            CALL 0x00401555
00658CE9  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00658CEC  EB 1A                     JMP 0x00658d08
LAB_00658cee:
00658CEE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00658CF1  8B 11                     MOV EDX,dword ptr [ECX]
00658CF3  52                        PUSH EDX
00658CF4  57                        PUSH EDI
00658CF5  53                        PUSH EBX
00658CF6  E8 E0 CA DA FF            CALL 0x004057db
00658CFB  50                        PUSH EAX
00658CFC  68 55 FF FF FF            PUSH 0xffffff55
LAB_00658d01:
00658D01  8B CE                     MOV ECX,ESI
00658D03  E8 3A C3 DA FF            CALL 0x00405042
LAB_00658d08:
00658D08  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00658D0B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00658D0E  83 C1 04                  ADD ECX,0x4
00658D11  48                        DEC EAX
00658D12  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00658D15  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00658D18  0F 85 CA FE FF FF         JNZ 0x00658be8
00658D1E  E9 50 0D 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5ef:
00658D23  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00658D29  50                        PUSH EAX
00658D2A  E8 3F C9 DA FF            CALL 0x0040566e
00658D2F  83 C4 04                  ADD ESP,0x4
00658D32  85 C0                     TEST EAX,EAX
00658D34  0F 84 5F 9D FF FF         JZ 0x00652a99
00658D3A  8B 16                     MOV EDX,dword ptr [ESI]
00658D3C  8B CE                     MOV ECX,ESI
00658D3E  FF 52 18                  CALL dword ptr [EDX + 0x18]
00658D41  83 F8 08                  CMP EAX,0x8
00658D44  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00658D4A  75 09                     JNZ 0x00658d55
00658D4C  83 F8 09                  CMP EAX,0x9
00658D4F  0F 84 44 9D FF FF         JZ 0x00652a99
LAB_00658d55:
00658D55  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00658D5B  8D 4D D0                  LEA ECX,[EBP + -0x30]
00658D5E  51                        PUSH ECX
00658D5F  52                        PUSH EDX
00658D60  50                        PUSH EAX
00658D61  8B CE                     MOV ECX,ESI
00658D63  E8 50 89 DA FF            CALL 0x004016b8
00658D68  85 C0                     TEST EAX,EAX
00658D6A  0F 8E 03 0D 00 00         JLE 0x00659a73
00658D70  8D 4D D0                  LEA ECX,[EBP + -0x30]
00658D73  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00658D76  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00658d79:
00658D79  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00658D7C  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00658D82  52                        PUSH EDX
00658D83  8A 08                     MOV CL,byte ptr [EAX]
00658D85  51                        PUSH ECX
00658D86  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00658D8C  E8 68 CF DA FF            CALL 0x00405cf9
00658D91  85 C0                     TEST EAX,EAX
00658D93  75 16                     JNZ 0x00658dab
00658D95  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00658D98  8B 02                     MOV EAX,dword ptr [EDX]
00658D9A  50                        PUSH EAX
00658D9B  57                        PUSH EDI
00658D9C  68 A0 16 80 00            PUSH 0x8016a0
00658DA1  68 56 FF FF FF            PUSH 0xffffff56
00658DA6  E9 E3 00 00 00            JMP 0x00658e8e
LAB_00658dab:
00658DAB  8B C8                     MOV ECX,EAX
00658DAD  E8 50 CB DA FF            CALL 0x00405902
00658DB2  8B D0                     MOV EDX,EAX
00658DB4  85 D2                     TEST EDX,EDX
00658DB6  0F 84 BF 00 00 00         JZ 0x00658e7b
00658DBC  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
00658DC0  66 3D 01 00               CMP AX,0x1
00658DC4  0F 84 B1 00 00 00         JZ 0x00658e7b
00658DCA  66 3D 00 80               CMP AX,0x8000
00658DCE  0F 84 A7 00 00 00         JZ 0x00658e7b
00658DD4  B9 0D 00 00 00            MOV ECX,0xd
00658DD9  33 C0                     XOR EAX,EAX
00658DDB  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00658DDE  F3 AB                     STOSD.REP ES:EDI
00658DE0  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00658DE6  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
00658DEC  66 8B 8D AC FE FF FF      MOV CX,word ptr [EBP + 0xfffffeac]
00658DF3  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00658DF6  66 8B 85 B0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb0]
00658DFD  66 89 4D AC               MOV word ptr [EBP + -0x54],CX
00658E01  66 8B 8D B4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb4]
00658E08  66 89 45 AE               MOV word ptr [EBP + -0x52],AX
00658E0C  66 8B 85 B8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb8]
00658E13  66 89 4D B0               MOV word ptr [EBP + -0x50],CX
00658E17  66 8B 8D BC FE FF FF      MOV CX,word ptr [EBP + 0xfffffebc]
00658E1E  66 89 45 B2               MOV word ptr [EBP + -0x4e],AX
00658E22  66 8B 85 C0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffec0]
00658E29  66 89 4D B4               MOV word ptr [EBP + -0x4c],CX
00658E2D  66 8B 8D C4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffec4]
00658E34  66 89 45 B6               MOV word ptr [EBP + -0x4a],AX
00658E38  8B 85 C8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec8]
00658E3E  66 89 4D B8               MOV word ptr [EBP + -0x48],CX
00658E42  8B C8                     MOV ECX,EAX
00658E44  25 00 FF 00 00            AND EAX,0xff00
00658E49  81 E1 FF 00 00 00         AND ECX,0xff
00658E4F  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00658E52  8B 85 CC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffecc]
00658E58  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
00658E5B  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00658E5E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00658E61  51                        PUSH ECX
00658E62  8B CA                     MOV ECX,EDX
00658E64  C7 45 9C 33 00 00 00      MOV dword ptr [EBP + -0x64],0x33
00658E6B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00658E6E  89 45 BA                  MOV dword ptr [EBP + -0x46],EAX
00658E71  E8 DF 86 DA FF            CALL 0x00401555
00658E76  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00658E79  EB 1A                     JMP 0x00658e95
LAB_00658e7b:
00658E7B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00658E7E  8B 02                     MOV EAX,dword ptr [EDX]
00658E80  50                        PUSH EAX
00658E81  57                        PUSH EDI
00658E82  53                        PUSH EBX
00658E83  E8 53 C9 DA FF            CALL 0x004057db
00658E88  50                        PUSH EAX
00658E89  68 55 FF FF FF            PUSH 0xffffff55
LAB_00658e8e:
00658E8E  8B CE                     MOV ECX,ESI
00658E90  E8 AD C1 DA FF            CALL 0x00405042
LAB_00658e95:
00658E95  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00658E98  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00658E9B  83 C1 04                  ADD ECX,0x4
00658E9E  48                        DEC EAX
00658E9F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00658EA2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00658EA5  0F 85 CE FE FF FF         JNZ 0x00658d79
00658EAB  E9 C3 0B 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5f0:
00658EB0  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00658EB6  51                        PUSH ECX
00658EB7  E8 EE BD DA FF            CALL 0x00404caa
00658EBC  83 C4 04                  ADD ESP,0x4
00658EBF  85 C0                     TEST EAX,EAX
00658EC1  0F 84 D2 9B FF FF         JZ 0x00652a99
00658EC7  8B 16                     MOV EDX,dword ptr [ESI]
00658EC9  8B CE                     MOV ECX,ESI
00658ECB  FF 52 18                  CALL dword ptr [EDX + 0x18]
00658ECE  83 F8 08                  CMP EAX,0x8
00658ED1  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00658ED7  75 09                     JNZ 0x00658ee2
00658ED9  83 F8 09                  CMP EAX,0x9
00658EDC  0F 84 B7 9B FF FF         JZ 0x00652a99
LAB_00658ee2:
00658EE2  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00658EE8  8D 4D D0                  LEA ECX,[EBP + -0x30]
00658EEB  51                        PUSH ECX
00658EEC  52                        PUSH EDX
00658EED  50                        PUSH EAX
00658EEE  8B CE                     MOV ECX,ESI
00658EF0  E8 C3 87 DA FF            CALL 0x004016b8
00658EF5  85 C0                     TEST EAX,EAX
00658EF7  0F 8E 76 0B 00 00         JLE 0x00659a73
00658EFD  8D 4D D0                  LEA ECX,[EBP + -0x30]
00658F00  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00658F03  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00658f06:
00658F06  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00658F09  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00658F0F  52                        PUSH EDX
00658F10  8A 08                     MOV CL,byte ptr [EAX]
00658F12  51                        PUSH ECX
00658F13  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00658F19  E8 DB CD DA FF            CALL 0x00405cf9
00658F1E  85 C0                     TEST EAX,EAX
00658F20  75 16                     JNZ 0x00658f38
00658F22  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00658F25  8B 02                     MOV EAX,dword ptr [EDX]
00658F27  50                        PUSH EAX
00658F28  57                        PUSH EDI
00658F29  68 A0 16 80 00            PUSH 0x8016a0
00658F2E  68 56 FF FF FF            PUSH 0xffffff56
00658F33  E9 90 00 00 00            JMP 0x00658fc8
LAB_00658f38:
00658F38  8B C8                     MOV ECX,EAX
00658F3A  E8 C3 C9 DA FF            CALL 0x00405902
00658F3F  8B D0                     MOV EDX,EAX
00658F41  85 D2                     TEST EDX,EDX
00658F43  74 70                     JZ 0x00658fb5
00658F45  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
00658F49  66 3D 01 00               CMP AX,0x1
00658F4D  74 66                     JZ 0x00658fb5
00658F4F  66 3D 00 80               CMP AX,0x8000
00658F53  74 60                     JZ 0x00658fb5
00658F55  B9 0D 00 00 00            MOV ECX,0xd
00658F5A  33 C0                     XOR EAX,EAX
00658F5C  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00658F5F  F3 AB                     STOSD.REP ES:EDI
00658F61  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00658F67  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
00658F6D  66 8B 8D AC FE FF FF      MOV CX,word ptr [EBP + 0xfffffeac]
00658F74  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00658F77  66 8B 85 B0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb0]
00658F7E  66 89 45 AA               MOV word ptr [EBP + -0x56],AX
00658F82  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
00658F88  66 89 4D A8               MOV word ptr [EBP + -0x58],CX
00658F8C  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
00658F92  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
00658F95  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00658F98  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00658F9B  C7 45 9C 35 00 00 00      MOV dword ptr [EBP + -0x64],0x35
00658FA2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00658FA5  51                        PUSH ECX
00658FA6  8B CA                     MOV ECX,EDX
00658FA8  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00658FAB  E8 A5 85 DA FF            CALL 0x00401555
00658FB0  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00658FB3  EB 1A                     JMP 0x00658fcf
LAB_00658fb5:
00658FB5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00658FB8  8B 02                     MOV EAX,dword ptr [EDX]
00658FBA  50                        PUSH EAX
00658FBB  57                        PUSH EDI
00658FBC  53                        PUSH EBX
00658FBD  E8 19 C8 DA FF            CALL 0x004057db
00658FC2  50                        PUSH EAX
00658FC3  68 55 FF FF FF            PUSH 0xffffff55
LAB_00658fc8:
00658FC8  8B CE                     MOV ECX,ESI
00658FCA  E8 73 C0 DA FF            CALL 0x00405042
LAB_00658fcf:
00658FCF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00658FD2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00658FD5  83 C1 04                  ADD ECX,0x4
00658FD8  48                        DEC EAX
00658FD9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00658FDC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00658FDF  0F 85 21 FF FF FF         JNZ 0x00658f06
00658FE5  E9 89 0A 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5f8:
00658FEA  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00658FF0  51                        PUSH ECX
00658FF1  E8 6F 9D DA FF            CALL 0x00402d65
00658FF6  83 C4 04                  ADD ESP,0x4
00658FF9  85 C0                     TEST EAX,EAX
00658FFB  0F 84 98 9A FF FF         JZ 0x00652a99
00659001  8B 16                     MOV EDX,dword ptr [ESI]
00659003  8B CE                     MOV ECX,ESI
00659005  FF 52 18                  CALL dword ptr [EDX + 0x18]
00659008  83 F8 08                  CMP EAX,0x8
0065900B  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00659011  75 09                     JNZ 0x0065901c
00659013  83 F8 09                  CMP EAX,0x9
00659016  0F 84 7D 9A FF FF         JZ 0x00652a99
LAB_0065901c:
0065901C  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00659022  8D 4D D0                  LEA ECX,[EBP + -0x30]
00659025  51                        PUSH ECX
00659026  52                        PUSH EDX
00659027  50                        PUSH EAX
00659028  8B CE                     MOV ECX,ESI
0065902A  E8 89 86 DA FF            CALL 0x004016b8
0065902F  85 C0                     TEST EAX,EAX
00659031  0F 8E 3C 0A 00 00         JLE 0x00659a73
00659037  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065903A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065903D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00659040:
00659040  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00659043  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00659049  52                        PUSH EDX
0065904A  8A 08                     MOV CL,byte ptr [EAX]
0065904C  51                        PUSH ECX
0065904D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00659053  E8 A1 CC DA FF            CALL 0x00405cf9
00659058  85 C0                     TEST EAX,EAX
0065905A  75 16                     JNZ 0x00659072
0065905C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065905F  8B 02                     MOV EAX,dword ptr [EDX]
00659061  50                        PUSH EAX
00659062  57                        PUSH EDI
00659063  68 A0 16 80 00            PUSH 0x8016a0
00659068  68 56 FF FF FF            PUSH 0xffffff56
0065906D  E9 D1 00 00 00            JMP 0x00659143
LAB_00659072:
00659072  8B C8                     MOV ECX,EAX
00659074  E8 89 C8 DA FF            CALL 0x00405902
00659079  8B D0                     MOV EDX,EAX
0065907B  85 D2                     TEST EDX,EDX
0065907D  0F 84 AD 00 00 00         JZ 0x00659130
00659083  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
00659087  66 3D 01 00               CMP AX,0x1
0065908B  0F 84 9F 00 00 00         JZ 0x00659130
00659091  66 3D 00 80               CMP AX,0x8000
00659095  0F 84 95 00 00 00         JZ 0x00659130
0065909B  B9 0D 00 00 00            MOV ECX,0xd
006590A0  33 C0                     XOR EAX,EAX
006590A2  8D 7D 9C                  LEA EDI,[EBP + -0x64]
006590A5  F3 AB                     STOSD.REP ES:EDI
006590A7  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006590AD  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
006590B3  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
006590B9  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006590BC  66 8B 85 B0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb0]
006590C3  66 89 45 AC               MOV word ptr [EBP + -0x54],AX
006590C7  66 8B 85 B8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb8]
006590CE  66 89 45 B0               MOV word ptr [EBP + -0x50],AX
006590D2  66 8B 85 C0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffec0]
006590D9  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
006590DC  66 8B 8D B4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb4]
006590E3  66 89 45 B4               MOV word ptr [EBP + -0x4c],AX
006590E7  8B 85 C8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec8]
006590ED  66 89 4D AE               MOV word ptr [EBP + -0x52],CX
006590F1  66 8B 8D BC FE FF FF      MOV CX,word ptr [EBP + 0xfffffebc]
006590F8  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006590FB  8B 85 CC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffecc]
00659101  66 89 4D B2               MOV word ptr [EBP + -0x4e],CX
00659105  66 8B 8D C4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffec4]
0065910C  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0065910F  66 89 4D B6               MOV word ptr [EBP + -0x4a],CX
00659113  C7 45 9C 36 00 00 00      MOV dword ptr [EBP + -0x64],0x36
0065911A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0065911D  8D 45 9C                  LEA EAX,[EBP + -0x64]
00659120  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00659123  50                        PUSH EAX
00659124  8B CA                     MOV ECX,EDX
00659126  E8 2A 84 DA FF            CALL 0x00401555
0065912B  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0065912E  EB 1A                     JMP 0x0065914a
LAB_00659130:
00659130  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00659133  8B 11                     MOV EDX,dword ptr [ECX]
00659135  52                        PUSH EDX
00659136  57                        PUSH EDI
00659137  53                        PUSH EBX
00659138  E8 9E C6 DA FF            CALL 0x004057db
0065913D  50                        PUSH EAX
0065913E  68 55 FF FF FF            PUSH 0xffffff55
LAB_00659143:
00659143  8B CE                     MOV ECX,ESI
00659145  E8 F8 BE DA FF            CALL 0x00405042
LAB_0065914a:
0065914A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065914D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00659150  83 C1 04                  ADD ECX,0x4
00659153  48                        DEC EAX
00659154  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00659157  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065915A  0F 85 E0 FE FF FF         JNZ 0x00659040
00659160  E9 0E 09 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5fd:
00659165  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
0065916B  50                        PUSH EAX
0065916C  E8 FD 7E DA FF            CALL 0x0040106e
00659171  83 C4 04                  ADD ESP,0x4
00659174  85 C0                     TEST EAX,EAX
00659176  0F 84 1D 99 FF FF         JZ 0x00652a99
0065917C  8B 16                     MOV EDX,dword ptr [ESI]
0065917E  8B CE                     MOV ECX,ESI
00659180  FF 52 18                  CALL dword ptr [EDX + 0x18]
00659183  83 F8 08                  CMP EAX,0x8
00659186  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
0065918C  75 09                     JNZ 0x00659197
0065918E  83 F8 09                  CMP EAX,0x9
00659191  0F 84 02 99 FF FF         JZ 0x00652a99
LAB_00659197:
00659197  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065919D  8D 4D D0                  LEA ECX,[EBP + -0x30]
006591A0  51                        PUSH ECX
006591A1  52                        PUSH EDX
006591A2  50                        PUSH EAX
006591A3  8B CE                     MOV ECX,ESI
006591A5  E8 0E 85 DA FF            CALL 0x004016b8
006591AA  85 C0                     TEST EAX,EAX
006591AC  0F 8E C1 08 00 00         JLE 0x00659a73
006591B2  8D 4D D0                  LEA ECX,[EBP + -0x30]
006591B5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006591B8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006591bb:
006591BB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006591BE  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006591C4  52                        PUSH EDX
006591C5  8A 08                     MOV CL,byte ptr [EAX]
006591C7  51                        PUSH ECX
006591C8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006591CE  E8 26 CB DA FF            CALL 0x00405cf9
006591D3  85 C0                     TEST EAX,EAX
006591D5  75 16                     JNZ 0x006591ed
006591D7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006591DA  8B 02                     MOV EAX,dword ptr [EDX]
006591DC  50                        PUSH EAX
006591DD  57                        PUSH EDI
006591DE  68 A0 16 80 00            PUSH 0x8016a0
006591E3  68 56 FF FF FF            PUSH 0xffffff56
006591E8  E9 8D 01 00 00            JMP 0x0065937a
LAB_006591ed:
006591ED  8B C8                     MOV ECX,EAX
006591EF  E8 0E C7 DA FF            CALL 0x00405902
006591F4  85 C0                     TEST EAX,EAX
006591F6  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006591F9  0F 84 68 01 00 00         JZ 0x00659367
006591FF  66 81 78 7B 00 80         CMP word ptr [EAX + 0x7b],0x8000
00659205  0F 84 5C 01 00 00         JZ 0x00659367
0065920B  8B 95 C4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec4]
00659211  B9 12 00 00 00            MOV ECX,0x12
00659216  33 C0                     XOR EAX,EAX
00659218  8D BD F8 FD FF FF         LEA EDI,[EBP + 0xfffffdf8]
0065921E  F3 AB                     STOSD.REP ES:EDI
00659220  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00659226  66 AB                     STOSW ES:EDI
00659228  85 D2                     TEST EDX,EDX
0065922A  89 8D F8 FD FF FF         MOV dword ptr [EBP + 0xfffffdf8],ECX
00659230  66 C7 85 FC FD FF FF FF FF  MOV word ptr [EBP + 0xfffffdfc],0xffff
00659239  66 C7 85 FE FD FF FF 22 56  MOV word ptr [EBP + 0xfffffdfe],0x5622
00659242  C7 85 00 FE FF FF F0 FF FF FF  MOV dword ptr [EBP + 0xfffffe00],0xfffffff0
0065924C  66 C7 85 04 FE FF FF FE FF  MOV word ptr [EBP + 0xfffffe04],0xfffe
00659255  7C 07                     JL 0x0065925e
00659257  66 89 95 04 FE FF FF      MOV word ptr [EBP + 0xfffffe04],DX
LAB_0065925e:
0065925E  8B 85 CC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffecc]
00659264  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00659267  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0065926A  89 85 06 FE FF FF         MOV dword ptr [EBP + 0xfffffe06],EAX
00659270  66 8B 85 B0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb0]
00659277  66 89 85 0E FE FF FF      MOV word ptr [EBP + 0xfffffe0e],AX
0065927E  66 8B 85 B4 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb4]
00659285  66 89 85 10 FE FF FF      MOV word ptr [EBP + 0xfffffe10],AX
0065928C  66 8B 85 B8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb8]
00659293  66 89 85 12 FE FF FF      MOV word ptr [EBP + 0xfffffe12],AX
0065929A  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
006592A0  85 C0                     TEST EAX,EAX
006592A2  7C 05                     JL 0x006592a9
006592A4  83 F8 08                  CMP EAX,0x8
006592A7  7C 14                     JL 0x006592bd
LAB_006592a9:
006592A9  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006592AC  8A 87 81 00 00 00         MOV AL,byte ptr [EDI + 0x81]
006592B2  84 C0                     TEST AL,AL
006592B4  7C 04                     JL 0x006592ba
006592B6  3C 08                     CMP AL,0x8
006592B8  7C 03                     JL 0x006592bd
LAB_006592ba:
006592BA  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
LAB_006592bd:
006592BD  88 85 14 FE FF FF         MOV byte ptr [EBP + 0xfffffe14],AL
006592C3  8B 85 C0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec0]
006592C9  85 C0                     TEST EAX,EAX
006592CB  74 1E                     JZ 0x006592eb
006592CD  6A 0E                     PUSH 0xe
006592CF  8D 8D 15 FE FF FF         LEA ECX,[EBP + 0xfffffe15]
006592D5  50                        PUSH EAX
006592D6  51                        PUSH ECX
006592D7  E8 64 50 0D 00            CALL 0x0072e340
006592DC  8B 95 C4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec4]
006592E2  8B 8D F8 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffdf8]
006592E8  83 C4 0C                  ADD ESP,0xc
LAB_006592eb:
006592EB  81 F9 DD 00 00 00         CMP ECX,0xdd
006592F1  74 1C                     JZ 0x0065930f
006592F3  81 F9 DE 00 00 00         CMP ECX,0xde
006592F9  74 14                     JZ 0x0065930f
006592FB  81 F9 E2 00 00 00         CMP ECX,0xe2
00659301  74 0C                     JZ 0x0065930f
00659303  81 F9 DC 00 00 00         CMP ECX,0xdc
00659309  74 04                     JZ 0x0065930f
0065930B  33 C0                     XOR EAX,EAX
0065930D  EB 05                     JMP 0x00659314
LAB_0065930f:
0065930F  B8 01 00 00 00            MOV EAX,0x1
LAB_00659314:
00659314  F7 D8                     NEG EAX
00659316  1B C0                     SBB EAX,EAX
00659318  B9 0D 00 00 00            MOV ECX,0xd
0065931D  23 C2                     AND EAX,EDX
0065931F  8D BD C4 FD FF FF         LEA EDI,[EBP + 0xfffffdc4]
00659325  89 85 24 FE FF FF         MOV dword ptr [EBP + 0xfffffe24],EAX
0065932B  33 C0                     XOR EAX,EAX
0065932D  F3 AB                     STOSD.REP ES:EDI
0065932F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00659332  8D 85 C4 FD FF FF         LEA EAX,[EBP + 0xfffffdc4]
00659338  8D 95 F8 FD FF FF         LEA EDX,[EBP + 0xfffffdf8]
0065933E  50                        PUSH EAX
0065933F  C6 85 36 FE FF FF 01      MOV byte ptr [EBP + 0xfffffe36],0x1
00659346  C7 85 C4 FD FF FF 68 00 00 00  MOV dword ptr [EBP + 0xfffffdc4],0x68
00659350  89 95 CE FD FF FF         MOV dword ptr [EBP + 0xfffffdce],EDX
00659356  C6 85 CD FD FF FF 01      MOV byte ptr [EBP + 0xfffffdcd],0x1
0065935D  E8 F3 81 DA FF            CALL 0x00401555
00659362  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00659365  EB 1A                     JMP 0x00659381
LAB_00659367:
00659367  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065936A  8B 11                     MOV EDX,dword ptr [ECX]
0065936C  52                        PUSH EDX
0065936D  57                        PUSH EDI
0065936E  53                        PUSH EBX
0065936F  E8 67 C4 DA FF            CALL 0x004057db
00659374  50                        PUSH EAX
00659375  68 55 FF FF FF            PUSH 0xffffff55
LAB_0065937a:
0065937A  8B CE                     MOV ECX,ESI
0065937C  E8 C1 BC DA FF            CALL 0x00405042
LAB_00659381:
00659381  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00659384  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00659387  83 C1 04                  ADD ECX,0x4
0065938A  48                        DEC EAX
0065938B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0065938E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00659391  0F 85 24 FE FF FF         JNZ 0x006591bb
00659397  E9 D7 06 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5f9:
0065939C  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
006593A2  50                        PUSH EAX
006593A3  E8 1F 9C DA FF            CALL 0x00402fc7
006593A8  83 C4 04                  ADD ESP,0x4
006593AB  85 C0                     TEST EAX,EAX
006593AD  0F 84 E6 96 FF FF         JZ 0x00652a99
006593B3  8B 16                     MOV EDX,dword ptr [ESI]
006593B5  8B CE                     MOV ECX,ESI
006593B7  FF 52 18                  CALL dword ptr [EDX + 0x18]
006593BA  83 F8 08                  CMP EAX,0x8
006593BD  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006593C3  75 09                     JNZ 0x006593ce
006593C5  83 F8 09                  CMP EAX,0x9
006593C8  0F 84 CB 96 FF FF         JZ 0x00652a99
LAB_006593ce:
006593CE  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006593D4  8D 4D D0                  LEA ECX,[EBP + -0x30]
006593D7  51                        PUSH ECX
006593D8  52                        PUSH EDX
006593D9  50                        PUSH EAX
006593DA  8B CE                     MOV ECX,ESI
006593DC  E8 D7 82 DA FF            CALL 0x004016b8
006593E1  85 C0                     TEST EAX,EAX
006593E3  0F 8E 8A 06 00 00         JLE 0x00659a73
006593E9  8D 4D D0                  LEA ECX,[EBP + -0x30]
006593EC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006593EF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006593f2:
006593F2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006593F5  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006593FB  52                        PUSH EDX
006593FC  8A 08                     MOV CL,byte ptr [EAX]
006593FE  51                        PUSH ECX
006593FF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00659405  E8 EF C8 DA FF            CALL 0x00405cf9
0065940A  85 C0                     TEST EAX,EAX
0065940C  75 16                     JNZ 0x00659424
0065940E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00659411  8B 02                     MOV EAX,dword ptr [EDX]
00659413  50                        PUSH EAX
00659414  57                        PUSH EDI
00659415  68 A0 16 80 00            PUSH 0x8016a0
0065941A  68 56 FF FF FF            PUSH 0xffffff56
0065941F  E9 C8 00 00 00            JMP 0x006594ec
LAB_00659424:
00659424  8B C8                     MOV ECX,EAX
00659426  E8 D7 C4 DA FF            CALL 0x00405902
0065942B  8B D0                     MOV EDX,EAX
0065942D  85 D2                     TEST EDX,EDX
0065942F  0F 84 A4 00 00 00         JZ 0x006594d9
00659435  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
00659439  66 3D 01 00               CMP AX,0x1
0065943D  0F 84 96 00 00 00         JZ 0x006594d9
00659443  66 3D 00 80               CMP AX,0x8000
00659447  0F 84 8C 00 00 00         JZ 0x006594d9
0065944D  B9 0D 00 00 00            MOV ECX,0xd
00659452  33 C0                     XOR EAX,EAX
00659454  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00659457  F3 AB                     STOSD.REP ES:EDI
00659459  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0065945F  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
00659465  66 8B 8D AC FE FF FF      MOV CX,word ptr [EBP + 0xfffffeac]
0065946C  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0065946F  66 8B 85 B0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb0]
00659476  66 89 45 AA               MOV word ptr [EBP + -0x56],AX
0065947A  66 8B 85 B8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb8]
00659481  66 89 4D A8               MOV word ptr [EBP + -0x58],CX
00659485  66 8B 8D B4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb4]
0065948C  66 89 45 AE               MOV word ptr [EBP + -0x52],AX
00659490  66 8B 85 C0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffec0]
00659497  66 89 4D AC               MOV word ptr [EBP + -0x54],CX
0065949B  66 8B 8D BC FE FF FF      MOV CX,word ptr [EBP + 0xfffffebc]
006594A2  66 89 45 B2               MOV word ptr [EBP + -0x4e],AX
006594A6  8B 85 C8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec8]
006594AC  66 89 4D B0               MOV word ptr [EBP + -0x50],CX
006594B0  8B 8D C4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec4]
006594B6  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
006594B9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006594BC  8D 4D 9C                  LEA ECX,[EBP + -0x64]
006594BF  C7 45 9C 37 00 00 00      MOV dword ptr [EBP + -0x64],0x37
006594C6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006594C9  51                        PUSH ECX
006594CA  8B CA                     MOV ECX,EDX
006594CC  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006594CF  E8 81 80 DA FF            CALL 0x00401555
006594D4  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006594D7  EB 1A                     JMP 0x006594f3
LAB_006594d9:
006594D9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006594DC  8B 02                     MOV EAX,dword ptr [EDX]
006594DE  50                        PUSH EAX
006594DF  57                        PUSH EDI
006594E0  53                        PUSH EBX
006594E1  E8 F5 C2 DA FF            CALL 0x004057db
006594E6  50                        PUSH EAX
006594E7  68 55 FF FF FF            PUSH 0xffffff55
LAB_006594ec:
006594EC  8B CE                     MOV ECX,ESI
006594EE  E8 4F BB DA FF            CALL 0x00405042
LAB_006594f3:
006594F3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006594F6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006594F9  83 C1 04                  ADD ECX,0x4
006594FC  48                        DEC EAX
006594FD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00659500  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00659503  0F 85 E9 FE FF FF         JNZ 0x006593f2
00659509  E9 65 05 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5fa:
0065950E  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00659514  51                        PUSH ECX
00659515  E8 A8 7C DA FF            CALL 0x004011c2
0065951A  83 C4 04                  ADD ESP,0x4
0065951D  85 C0                     TEST EAX,EAX
0065951F  0F 84 74 95 FF FF         JZ 0x00652a99
00659525  8B 16                     MOV EDX,dword ptr [ESI]
00659527  8B CE                     MOV ECX,ESI
00659529  FF 52 18                  CALL dword ptr [EDX + 0x18]
0065952C  83 F8 08                  CMP EAX,0x8
0065952F  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00659535  75 09                     JNZ 0x00659540
00659537  83 F8 09                  CMP EAX,0x9
0065953A  0F 84 59 95 FF FF         JZ 0x00652a99
LAB_00659540:
00659540  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00659546  8D 4D D0                  LEA ECX,[EBP + -0x30]
00659549  51                        PUSH ECX
0065954A  52                        PUSH EDX
0065954B  50                        PUSH EAX
0065954C  8B CE                     MOV ECX,ESI
0065954E  E8 65 81 DA FF            CALL 0x004016b8
00659553  85 C0                     TEST EAX,EAX
00659555  0F 8E 18 05 00 00         JLE 0x00659a73
0065955B  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065955E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00659561  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00659564:
00659564  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00659567  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
0065956D  52                        PUSH EDX
0065956E  8A 08                     MOV CL,byte ptr [EAX]
00659570  51                        PUSH ECX
00659571  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00659577  E8 7D C7 DA FF            CALL 0x00405cf9
0065957C  85 C0                     TEST EAX,EAX
0065957E  75 16                     JNZ 0x00659596
00659580  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00659583  8B 02                     MOV EAX,dword ptr [EDX]
00659585  50                        PUSH EAX
00659586  57                        PUSH EDI
00659587  68 A0 16 80 00            PUSH 0x8016a0
0065958C  68 56 FF FF FF            PUSH 0xffffff56
00659591  E9 AA 00 00 00            JMP 0x00659640
LAB_00659596:
00659596  8B C8                     MOV ECX,EAX
00659598  E8 65 C3 DA FF            CALL 0x00405902
0065959D  8B D0                     MOV EDX,EAX
0065959F  85 D2                     TEST EDX,EDX
006595A1  0F 84 86 00 00 00         JZ 0x0065962d
006595A7  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
006595AB  66 3D 01 00               CMP AX,0x1
006595AF  74 7C                     JZ 0x0065962d
006595B1  66 3D 00 80               CMP AX,0x8000
006595B5  74 76                     JZ 0x0065962d
006595B7  B9 0D 00 00 00            MOV ECX,0xd
006595BC  33 C0                     XOR EAX,EAX
006595BE  8D 7D 9C                  LEA EDI,[EBP + -0x64]
006595C1  F3 AB                     STOSD.REP ES:EDI
006595C3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006595C9  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
006595CF  66 8B 8D AC FE FF FF      MOV CX,word ptr [EBP + 0xfffffeac]
006595D6  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006595D9  66 8B 85 B0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb0]
006595E0  66 89 45 AA               MOV word ptr [EBP + -0x56],AX
006595E4  66 8B 85 B8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb8]
006595EB  66 89 4D A8               MOV word ptr [EBP + -0x58],CX
006595EF  66 8B 8D B4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb4]
006595F6  66 89 45 AE               MOV word ptr [EBP + -0x52],AX
006595FA  8B 85 C0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec0]
00659600  66 89 4D AC               MOV word ptr [EBP + -0x54],CX
00659604  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
0065960A  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
0065960D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00659610  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00659613  C7 45 9C 38 00 00 00      MOV dword ptr [EBP + -0x64],0x38
0065961A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0065961D  51                        PUSH ECX
0065961E  8B CA                     MOV ECX,EDX
00659620  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00659623  E8 2D 7F DA FF            CALL 0x00401555
00659628  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0065962B  EB 1A                     JMP 0x00659647
LAB_0065962d:
0065962D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00659630  8B 02                     MOV EAX,dword ptr [EDX]
00659632  50                        PUSH EAX
00659633  57                        PUSH EDI
00659634  53                        PUSH EBX
00659635  E8 A1 C1 DA FF            CALL 0x004057db
0065963A  50                        PUSH EAX
0065963B  68 55 FF FF FF            PUSH 0xffffff55
LAB_00659640:
00659640  8B CE                     MOV ECX,ESI
00659642  E8 FB B9 DA FF            CALL 0x00405042
LAB_00659647:
00659647  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065964A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065964D  83 C1 04                  ADD ECX,0x4
00659650  48                        DEC EAX
00659651  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00659654  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00659657  0F 85 07 FF FF FF         JNZ 0x00659564
0065965D  E9 11 04 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5fb:
00659662  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
00659668  51                        PUSH ECX
00659669  E8 F0 A2 DA FF            CALL 0x0040395e
0065966E  83 C4 04                  ADD ESP,0x4
00659671  85 C0                     TEST EAX,EAX
00659673  0F 84 20 94 FF FF         JZ 0x00652a99
00659679  8B 16                     MOV EDX,dword ptr [ESI]
0065967B  8B CE                     MOV ECX,ESI
0065967D  FF 52 18                  CALL dword ptr [EDX + 0x18]
00659680  83 F8 08                  CMP EAX,0x8
00659683  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00659689  75 09                     JNZ 0x00659694
0065968B  83 F8 09                  CMP EAX,0x9
0065968E  0F 84 05 94 FF FF         JZ 0x00652a99
LAB_00659694:
00659694  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0065969A  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065969D  51                        PUSH ECX
0065969E  52                        PUSH EDX
0065969F  50                        PUSH EAX
006596A0  8B CE                     MOV ECX,ESI
006596A2  E8 11 80 DA FF            CALL 0x004016b8
006596A7  85 C0                     TEST EAX,EAX
006596A9  0F 8E C4 03 00 00         JLE 0x00659a73
006596AF  8D 4D D0                  LEA ECX,[EBP + -0x30]
006596B2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006596B5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006596b8:
006596B8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006596BB  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
006596C1  52                        PUSH EDX
006596C2  8A 08                     MOV CL,byte ptr [EAX]
006596C4  51                        PUSH ECX
006596C5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006596CB  E8 29 C6 DA FF            CALL 0x00405cf9
006596D0  85 C0                     TEST EAX,EAX
006596D2  75 16                     JNZ 0x006596ea
006596D4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006596D7  8B 02                     MOV EAX,dword ptr [EDX]
006596D9  50                        PUSH EAX
006596DA  57                        PUSH EDI
006596DB  68 A0 16 80 00            PUSH 0x8016a0
006596E0  68 56 FF FF FF            PUSH 0xffffff56
006596E5  E9 9B 00 00 00            JMP 0x00659785
LAB_006596ea:
006596EA  8B C8                     MOV ECX,EAX
006596EC  E8 11 C2 DA FF            CALL 0x00405902
006596F1  8B D0                     MOV EDX,EAX
006596F3  85 D2                     TEST EDX,EDX
006596F5  74 7B                     JZ 0x00659772
006596F7  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
006596FB  66 3D 01 00               CMP AX,0x1
006596FF  74 71                     JZ 0x00659772
00659701  66 3D 00 80               CMP AX,0x8000
00659705  74 6B                     JZ 0x00659772
00659707  B9 0D 00 00 00            MOV ECX,0xd
0065970C  33 C0                     XOR EAX,EAX
0065970E  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00659711  F3 AB                     STOSD.REP ES:EDI
00659713  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00659719  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
0065971F  66 8B 8D AC FE FF FF      MOV CX,word ptr [EBP + 0xfffffeac]
00659726  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00659729  66 8B 85 B0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb0]
00659730  66 89 45 AA               MOV word ptr [EBP + -0x56],AX
00659734  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
0065973A  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0065973D  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
00659743  66 89 4D A8               MOV word ptr [EBP + -0x58],CX
00659747  66 8B 8D B4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb4]
0065974E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00659751  66 89 4D AC               MOV word ptr [EBP + -0x54],CX
00659755  C7 45 9C 39 00 00 00      MOV dword ptr [EBP + -0x64],0x39
0065975C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0065975F  8D 45 9C                  LEA EAX,[EBP + -0x64]
00659762  89 4D AE                  MOV dword ptr [EBP + -0x52],ECX
00659765  50                        PUSH EAX
00659766  8B CA                     MOV ECX,EDX
00659768  E8 E8 7D DA FF            CALL 0x00401555
0065976D  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00659770  EB 1A                     JMP 0x0065978c
LAB_00659772:
00659772  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00659775  8B 11                     MOV EDX,dword ptr [ECX]
00659777  52                        PUSH EDX
00659778  57                        PUSH EDI
00659779  53                        PUSH EBX
0065977A  E8 5C C0 DA FF            CALL 0x004057db
0065977F  50                        PUSH EAX
00659780  68 55 FF FF FF            PUSH 0xffffff55
LAB_00659785:
00659785  8B CE                     MOV ECX,ESI
00659787  E8 B6 B8 DA FF            CALL 0x00405042
LAB_0065978c:
0065978C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065978F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00659792  83 C1 04                  ADD ECX,0x4
00659795  48                        DEC EAX
00659796  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00659799  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065979C  0F 85 16 FF FF FF         JNZ 0x006596b8
006597A2  E9 CC 02 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5fc:
006597A7  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
006597AD  50                        PUSH EAX
006597AE  E8 55 7A DA FF            CALL 0x00401208
006597B3  83 C4 04                  ADD ESP,0x4
006597B6  85 C0                     TEST EAX,EAX
006597B8  0F 84 DB 92 FF FF         JZ 0x00652a99
006597BE  8B 16                     MOV EDX,dword ptr [ESI]
006597C0  8B CE                     MOV ECX,ESI
006597C2  FF 52 18                  CALL dword ptr [EDX + 0x18]
006597C5  83 F8 08                  CMP EAX,0x8
006597C8  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
006597CE  75 09                     JNZ 0x006597d9
006597D0  83 F8 09                  CMP EAX,0x9
006597D3  0F 84 C0 92 FF FF         JZ 0x00652a99
LAB_006597d9:
006597D9  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
006597DF  8D 4D D0                  LEA ECX,[EBP + -0x30]
006597E2  51                        PUSH ECX
006597E3  52                        PUSH EDX
006597E4  50                        PUSH EAX
006597E5  8B CE                     MOV ECX,ESI
006597E7  E8 CC 7E DA FF            CALL 0x004016b8
006597EC  85 C0                     TEST EAX,EAX
006597EE  0F 8E 7F 02 00 00         JLE 0x00659a73
006597F4  8D 4D D0                  LEA ECX,[EBP + -0x30]
006597F7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006597FA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006597fd:
006597FD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00659800  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00659806  52                        PUSH EDX
00659807  8A 08                     MOV CL,byte ptr [EAX]
00659809  51                        PUSH ECX
0065980A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00659810  E8 E4 C4 DA FF            CALL 0x00405cf9
00659815  85 C0                     TEST EAX,EAX
00659817  75 16                     JNZ 0x0065982f
00659819  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065981C  8B 02                     MOV EAX,dword ptr [EDX]
0065981E  50                        PUSH EAX
0065981F  57                        PUSH EDI
00659820  68 A0 16 80 00            PUSH 0x8016a0
00659825  68 56 FF FF FF            PUSH 0xffffff56
0065982A  E9 9B 00 00 00            JMP 0x006598ca
LAB_0065982f:
0065982F  8B C8                     MOV ECX,EAX
00659831  E8 CC C0 DA FF            CALL 0x00405902
00659836  8B D0                     MOV EDX,EAX
00659838  85 D2                     TEST EDX,EDX
0065983A  74 7B                     JZ 0x006598b7
0065983C  66 8B 42 7B               MOV AX,word ptr [EDX + 0x7b]
00659840  66 3D 01 00               CMP AX,0x1
00659844  74 71                     JZ 0x006598b7
00659846  66 3D 00 80               CMP AX,0x8000
0065984A  74 6B                     JZ 0x006598b7
0065984C  B9 0D 00 00 00            MOV ECX,0xd
00659851  33 C0                     XOR EAX,EAX
00659853  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00659856  F3 AB                     STOSD.REP ES:EDI
00659858  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0065985E  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
00659864  66 8B 8D AC FE FF FF      MOV CX,word ptr [EBP + 0xfffffeac]
0065986B  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0065986E  66 8B 85 B0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb0]
00659875  66 89 45 AA               MOV word ptr [EBP + -0x56],AX
00659879  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
0065987F  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00659882  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
00659888  66 89 4D A8               MOV word ptr [EBP + -0x58],CX
0065988C  66 8B 8D B4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb4]
00659893  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00659896  66 89 4D AC               MOV word ptr [EBP + -0x54],CX
0065989A  C7 45 9C 3A 00 00 00      MOV dword ptr [EBP + -0x64],0x3a
006598A1  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
006598A4  8D 45 9C                  LEA EAX,[EBP + -0x64]
006598A7  89 4D AE                  MOV dword ptr [EBP + -0x52],ECX
006598AA  50                        PUSH EAX
006598AB  8B CA                     MOV ECX,EDX
006598AD  E8 A3 7C DA FF            CALL 0x00401555
006598B2  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006598B5  EB 1A                     JMP 0x006598d1
LAB_006598b7:
006598B7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006598BA  8B 11                     MOV EDX,dword ptr [ECX]
006598BC  52                        PUSH EDX
006598BD  57                        PUSH EDI
006598BE  53                        PUSH EBX
006598BF  E8 17 BF DA FF            CALL 0x004057db
006598C4  50                        PUSH EAX
006598C5  68 55 FF FF FF            PUSH 0xffffff55
LAB_006598ca:
006598CA  8B CE                     MOV ECX,ESI
006598CC  E8 71 B7 DA FF            CALL 0x00405042
LAB_006598d1:
006598D1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006598D4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006598D7  83 C1 04                  ADD ECX,0x4
006598DA  48                        DEC EAX
006598DB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006598DE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006598E1  0F 85 16 FF FF FF         JNZ 0x006597fd
006598E7  E9 87 01 00 00            JMP 0x00659a73
switchD_00656fdc::caseD_5fe:
006598EC  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
006598F2  50                        PUSH EAX
006598F3  E8 09 8F DA FF            CALL 0x00402801
006598F8  83 C4 04                  ADD ESP,0x4
006598FB  85 C0                     TEST EAX,EAX
006598FD  0F 84 96 91 FF FF         JZ 0x00652a99
00659903  8B 16                     MOV EDX,dword ptr [ESI]
00659905  8B CE                     MOV ECX,ESI
00659907  FF 52 18                  CALL dword ptr [EDX + 0x18]
0065990A  83 F8 08                  CMP EAX,0x8
0065990D  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00659913  75 09                     JNZ 0x0065991e
00659915  83 F8 09                  CMP EAX,0x9
00659918  0F 84 7B 91 FF FF         JZ 0x00652a99
LAB_0065991e:
0065991E  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00659924  8D 4D D0                  LEA ECX,[EBP + -0x30]
00659927  51                        PUSH ECX
00659928  52                        PUSH EDX
00659929  50                        PUSH EAX
0065992A  8B CE                     MOV ECX,ESI
0065992C  E8 87 7D DA FF            CALL 0x004016b8
00659931  85 C0                     TEST EAX,EAX
00659933  0F 8E 3A 01 00 00         JLE 0x00659a73
00659939  8D 4D D0                  LEA ECX,[EBP + -0x30]
0065993C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065993F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00659942:
00659942  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00659945  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
0065994B  52                        PUSH EDX
0065994C  8A 08                     MOV CL,byte ptr [EAX]
0065994E  51                        PUSH ECX
0065994F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00659955  E8 9F C3 DA FF            CALL 0x00405cf9
0065995A  85 C0                     TEST EAX,EAX
0065995C  75 16                     JNZ 0x00659974
0065995E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00659961  8B 02                     MOV EAX,dword ptr [EDX]
00659963  50                        PUSH EAX
00659964  57                        PUSH EDI
00659965  68 A0 16 80 00            PUSH 0x8016a0
0065996A  68 56 FF FF FF            PUSH 0xffffff56
0065996F  E9 A8 00 00 00            JMP 0x00659a1c
LAB_00659974:
00659974  8B C8                     MOV ECX,EAX
00659976  E8 87 BF DA FF            CALL 0x00405902
0065997B  8B D0                     MOV EDX,EAX
0065997D  85 D2                     TEST EDX,EDX
0065997F  0F 84 84 00 00 00         JZ 0x00659a09
00659985  66 83 7A 7B 01            CMP word ptr [EDX + 0x7b],0x1
0065998A  75 7D                     JNZ 0x00659a09
0065998C  B9 0D 00 00 00            MOV ECX,0xd
00659991  33 C0                     XOR EAX,EAX
00659993  8D 7D 9C                  LEA EDI,[EBP + -0x64]
00659996  F3 AB                     STOSD.REP ES:EDI
00659998  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0065999E  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
006599A4  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
006599AA  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006599AD  66 8B 85 B0 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb0]
006599B4  66 89 45 AC               MOV word ptr [EBP + -0x54],AX
006599B8  66 8B 85 B8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffeb8]
006599BF  66 89 45 B0               MOV word ptr [EBP + -0x50],AX
006599C3  8B 85 C0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec0]
006599C9  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
006599CC  66 8B 8D B4 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb4]
006599D3  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006599D6  8B 85 C4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec4]
006599DC  66 89 4D AE               MOV word ptr [EBP + -0x52],CX
006599E0  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
006599E6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006599E9  89 4D B2                  MOV dword ptr [EBP + -0x4e],ECX
006599EC  C7 45 9C 3B 00 00 00      MOV dword ptr [EBP + -0x64],0x3b
006599F3  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
006599F6  8D 45 9C                  LEA EAX,[EBP + -0x64]
006599F9  89 4D B6                  MOV dword ptr [EBP + -0x4a],ECX
006599FC  50                        PUSH EAX
006599FD  8B CA                     MOV ECX,EDX
006599FF  E8 51 7B DA FF            CALL 0x00401555
00659A04  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00659A07  EB 1A                     JMP 0x00659a23
LAB_00659a09:
00659A09  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00659A0C  8B 11                     MOV EDX,dword ptr [ECX]
00659A0E  52                        PUSH EDX
00659A0F  57                        PUSH EDI
00659A10  53                        PUSH EBX
00659A11  E8 C5 BD DA FF            CALL 0x004057db
00659A16  50                        PUSH EAX
00659A17  68 55 FF FF FF            PUSH 0xffffff55
LAB_00659a1c:
00659A1C  8B CE                     MOV ECX,ESI
00659A1E  E8 1F B6 DA FF            CALL 0x00405042
LAB_00659a23:
00659A23  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00659A26  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00659A29  83 C1 04                  ADD ECX,0x4
00659A2C  48                        DEC EAX
00659A2D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00659A30  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00659A33  0F 85 09 FF FF FF         JNZ 0x00659942
00659A39  EB 38                     JMP 0x00659a73
LAB_00659a3b:
00659A3B  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
00659A41  50                        PUSH EAX
00659A42  E8 95 B7 DA FF            CALL 0x004051dc
00659A47  83 C4 04                  ADD ESP,0x4
00659A4A  85 C0                     TEST EAX,EAX
00659A4C  75 19                     JNZ 0x00659a67
00659A4E  6A FF                     PUSH -0x1
00659A50  57                        PUSH EDI
00659A51  68 6C 07 00 00            PUSH 0x76c
00659A56  E8 80 BD DA FF            CALL 0x004057db
00659A5B  50                        PUSH EAX
00659A5C  6A 83                     PUSH -0x7d
00659A5E  8B CE                     MOV ECX,ESI
00659A60  E8 DD B5 DA FF            CALL 0x00405042
00659A65  EB 0C                     JMP 0x00659a73
LAB_00659a67:
00659A67  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
00659A6D  89 0D 1E C5 80 00         MOV dword ptr [0x0080c51e],ECX
switchD_00652a7f::caseD_3:
00659A73  8B 85 94 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe94]
00659A79  40                        INC EAX
LAB_00659a7a:
00659A7A  89 85 94 FE FF FF         MOV dword ptr [EBP + 0xfffffe94],EAX
LAB_00659a80:
00659A80  8B 95 8C FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe8c]
00659A86  8B 8D 94 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe94]
00659A8C  8B 5A 0F                  MOV EBX,dword ptr [EDX + 0xf]
00659A8F  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00659A92  3B C8                     CMP ECX,EAX
00659A94  0F 8C 30 8F FF FF         JL 0x006529ca
00659A9A  EB 12                     JMP 0x00659aae
LAB_00659a9c:
00659A9C  8B 43 0B                  MOV EAX,dword ptr [EBX + 0xb]
00659A9F  85 C0                     TEST EAX,EAX
00659AA1  76 0B                     JBE 0x00659aae
00659AA3  83 F8 01                  CMP EAX,0x1
00659AA6  75 03                     JNZ 0x00659aab
00659AA8  C6 03 00                  MOV byte ptr [EBX],0x0
LAB_00659aab:
00659AAB  FF 4B 0B                  DEC dword ptr [EBX + 0xb]
LAB_00659aae:
00659AAE  8B 86 EE 04 00 00         MOV EAX,dword ptr [ESI + 0x4ee]
00659AB4  47                        INC EDI
00659AB5  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00659AB8  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00659ABB  3B F9                     CMP EDI,ECX
00659ABD  0F 8C 2C 8E FF FF         JL 0x006528ef
LAB_00659ac3:
00659AC3  8B 86 E2 04 00 00         MOV EAX,dword ptr [ESI + 0x4e2]
00659AC9  8B BD 68 FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffe68]
00659ACF  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00659AD2  3B CF                     CMP ECX,EDI
00659AD4  7E 15                     JLE 0x00659aeb
LAB_00659ad6:
00659AD6  49                        DEC ECX
00659AD7  51                        PUSH ECX
00659AD8  50                        PUSH EAX
00659AD9  E8 52 DD 05 00            CALL 0x006b7830
00659ADE  8B 86 E2 04 00 00         MOV EAX,dword ptr [ESI + 0x4e2]
00659AE4  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00659AE7  3B CF                     CMP ECX,EDI
00659AE9  7F EB                     JG 0x00659ad6
LAB_00659aeb:
00659AEB  81 BD 70 FE FF FF 56 04 00 00  CMP dword ptr [EBP + 0xfffffe70],0x456
00659AF5  75 06                     JNZ 0x00659afd
00659AF7  FF 86 D6 00 00 00         INC dword ptr [ESI + 0xd6]
LAB_00659afd:
00659AFD  8B 85 80 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd80]
00659B03  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00659B08  5F                        POP EDI
00659B09  5E                        POP ESI
00659B0A  5B                        POP EBX
00659B0B  8B E5                     MOV ESP,EBP
00659B0D  5D                        POP EBP
00659B0E  C2 04 00                  RET 0x4
LAB_00659b11:
00659B11  8B 85 84 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe84]
00659B17  8B 8D 80 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd80]
00659B1D  3B C7                     CMP EAX,EDI
00659B1F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00659B25  74 06                     JZ 0x00659b2d
00659B27  50                        PUSH EAX
00659B28  E8 E3 45 05 00            CALL 0x006ae110
LAB_00659b2d:
00659B2D  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00659B30  8B 8D 7C FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe7c]
00659B36  6A FF                     PUSH -0x1
00659B38  52                        PUSH EDX
00659B39  68 A0 16 80 00            PUSH 0x8016a0
00659B3E  56                        PUSH ESI
00659B3F  89 BD 84 FE FF FF         MOV dword ptr [EBP + 0xfffffe84],EDI
00659B45  E8 F8 B4 DA FF            CALL 0x00405042
LAB_00659b4a:
00659B4A  5F                        POP EDI
00659B4B  5E                        POP ESI
00659B4C  5B                        POP EBX
00659B4D  8B E5                     MOV ESP,EBP
00659B4F  5D                        POP EBP
00659B50  C2 04 00                  RET 0x4

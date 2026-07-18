FUN_004ca7b0:
004CA7B0  55                        PUSH EBP
004CA7B1  8B EC                     MOV EBP,ESP
004CA7B3  83 EC 0C                  SUB ESP,0xc
004CA7B6  53                        PUSH EBX
004CA7B7  56                        PUSH ESI
004CA7B8  8B F1                     MOV ESI,ECX
004CA7BA  57                        PUSH EDI
004CA7BB  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004CA7BE  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
004CA7C5  8D 9E D5 01 00 00         LEA EBX,[ESI + 0x1d5]
004CA7CB  57                        PUSH EDI
004CA7CC  8B CB                     MOV ECX,EBX
004CA7CE  E8 D9 7A F3 FF            CALL 0x004022ac
004CA7D3  85 C0                     TEST EAX,EAX
004CA7D5  0F 84 F8 02 00 00         JZ 0x004caad3
004CA7DB  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004CA7E1  8D 4D F4                  LEA ECX,[EBP + -0xc]
004CA7E4  8D 55 08                  LEA EDX,[EBP + 0x8]
004CA7E7  51                        PUSH ECX
004CA7E8  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004CA7EE  52                        PUSH EDX
004CA7EF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004CA7F2  E8 25 B0 F3 FF            CALL 0x0040581c
004CA7F7  50                        PUSH EAX
004CA7F8  57                        PUSH EDI
004CA7F9  8B CE                     MOV ECX,ESI
004CA7FB  E8 01 99 F3 FF            CALL 0x00404101
004CA800  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004CA803  85 C0                     TEST EAX,EAX
004CA805  0F 8C C0 02 00 00         JL 0x004caacb
004CA80B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004CA80E  85 C0                     TEST EAX,EAX
004CA810  0F 8C B5 02 00 00         JL 0x004caacb
004CA816  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
004CA81C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CA81F  85 C0                     TEST EAX,EAX
004CA821  74 12                     JZ 0x004ca835
004CA823  85 C9                     TEST ECX,ECX
004CA825  74 4A                     JZ 0x004ca871
004CA827  83 F9 01                  CMP ECX,0x1
004CA82A  75 40                     JNZ 0x004ca86c
004CA82C  83 BE 4D 02 00 00 04      CMP dword ptr [ESI + 0x24d],0x4
004CA833  75 3C                     JNZ 0x004ca871
LAB_004ca835:
004CA835  85 C0                     TEST EAX,EAX
004CA837  0F 84 DF 01 00 00         JZ 0x004caa1c
004CA83D  83 F9 05                  CMP ECX,0x5
004CA840  0F 85 D6 01 00 00         JNZ 0x004caa1c
004CA846  57                        PUSH EDI
004CA847  8B CB                     MOV ECX,EBX
004CA849  E8 5E 7A F3 FF            CALL 0x004022ac
004CA84E  83 F8 01                  CMP EAX,0x1
004CA851  0F 85 85 00 00 00         JNZ 0x004ca8dc
LAB_004ca857:
004CA857  6A 00                     PUSH 0x0
004CA859  6A 00                     PUSH 0x0
004CA85B  6A 00                     PUSH 0x0
004CA85D  57                        PUSH EDI
004CA85E  8B CB                     MOV ECX,EBX
004CA860  E8 55 76 F3 FF            CALL 0x00401eba
004CA865  6A 00                     PUSH 0x0
004CA867  E9 38 02 00 00            JMP 0x004caaa4
LAB_004ca86c:
004CA86C  83 F9 06                  CMP ECX,0x6
004CA86F  75 C4                     JNZ 0x004ca835
LAB_004ca871:
004CA871  57                        PUSH EDI
004CA872  8B CB                     MOV ECX,EBX
004CA874  E8 33 7A F3 FF            CALL 0x004022ac
004CA879  83 F8 01                  CMP EAX,0x1
004CA87C  74 D9                     JZ 0x004ca857
004CA87E  8B B6 59 02 00 00         MOV ESI,dword ptr [ESI + 0x259]
004CA884  B8 89 88 88 88            MOV EAX,0x88888889
004CA889  F7 EE                     IMUL ESI
004CA88B  03 D6                     ADD EDX,ESI
004CA88D  B9 18 00 00 00            MOV ECX,0x18
004CA892  C1 FA 03                  SAR EDX,0x3
004CA895  8B C2                     MOV EAX,EDX
004CA897  8B 35 FC 73 80 00         MOV ESI,dword ptr [0x008073fc]
004CA89D  C1 E8 1F                  SHR EAX,0x1f
004CA8A0  03 D0                     ADD EDX,EAX
004CA8A2  B8 18 00 00 00            MOV EAX,0x18
004CA8A7  2B C2                     SUB EAX,EDX
004CA8A9  6A 00                     PUSH 0x0
004CA8AB  99                        CDQ
004CA8AC  F7 F9                     IDIV ECX
004CA8AE  B8 04 00 00 00            MOV EAX,0x4
004CA8B3  2B C6                     SUB EAX,ESI
004CA8B5  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004CA8B8  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
004CA8BB  99                        CDQ
004CA8BC  F7 F9                     IDIV ECX
004CA8BE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004CA8C1  8B CB                     MOV ECX,EBX
004CA8C3  8B F2                     MOV ESI,EDX
004CA8C5  0F AF C6                  IMUL EAX,ESI
004CA8C8  50                        PUSH EAX
004CA8C9  50                        PUSH EAX
004CA8CA  57                        PUSH EDI
004CA8CB  E8 EA 75 F3 FF            CALL 0x00401eba
004CA8D0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004CA8D3  0F AF D6                  IMUL EDX,ESI
004CA8D6  52                        PUSH EDX
004CA8D7  E9 C8 01 00 00            JMP 0x004caaa4
LAB_004ca8dc:
004CA8DC  8B 86 7D 02 00 00         MOV EAX,dword ptr [ESI + 0x27d]
004CA8E2  83 F8 18                  CMP EAX,0x18
004CA8E5  75 45                     JNZ 0x004ca92c
004CA8E7  8B 8E 59 02 00 00         MOV ECX,dword ptr [ESI + 0x259]
004CA8ED  B8 89 88 88 88            MOV EAX,0x88888889
004CA8F2  F7 E9                     IMUL ECX
004CA8F4  03 D1                     ADD EDX,ECX
004CA8F6  B9 18 00 00 00            MOV ECX,0x18
004CA8FB  C1 FA 03                  SAR EDX,0x3
004CA8FE  8B C2                     MOV EAX,EDX
004CA900  C1 E8 1F                  SHR EAX,0x1f
004CA903  03 D0                     ADD EDX,EAX
004CA905  B8 18 00 00 00            MOV EAX,0x18
004CA90A  2B C2                     SUB EAX,EDX
004CA90C  99                        CDQ
004CA90D  F7 F9                     IDIV ECX
004CA90F  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
004CA915  B8 04 00 00 00            MOV EAX,0x4
004CA91A  2B C1                     SUB EAX,ECX
004CA91C  B9 18 00 00 00            MOV ECX,0x18
004CA921  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004CA924  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
004CA927  99                        CDQ
004CA928  F7 F9                     IDIV ECX
004CA92A  EB 56                     JMP 0x004ca982
LAB_004ca92c:
004CA92C  83 F8 08                  CMP EAX,0x8
004CA92F  75 54                     JNZ 0x004ca985
004CA931  8B 8E 59 02 00 00         MOV ECX,dword ptr [ESI + 0x259]
004CA937  B8 89 88 88 88            MOV EAX,0x88888889
004CA93C  F7 E9                     IMUL ECX
004CA93E  03 D1                     ADD EDX,ECX
004CA940  B9 18 00 00 00            MOV ECX,0x18
004CA945  C1 FA 03                  SAR EDX,0x3
004CA948  8B C2                     MOV EAX,EDX
004CA94A  C1 E8 1F                  SHR EAX,0x1f
004CA94D  03 D0                     ADD EDX,EAX
004CA94F  B8 18 00 00 00            MOV EAX,0x18
004CA954  2B C2                     SUB EAX,EDX
004CA956  99                        CDQ
004CA957  F7 F9                     IDIV ECX
004CA959  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
004CA95F  B8 04 00 00 00            MOV EAX,0x4
004CA964  2B C1                     SUB EAX,ECX
004CA966  B9 18 00 00 00            MOV ECX,0x18
004CA96B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004CA96E  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
004CA971  99                        CDQ
004CA972  F7 F9                     IDIV ECX
004CA974  B8 56 55 55 55            MOV EAX,0x55555556
004CA979  F7 EA                     IMUL EDX
004CA97B  8B C2                     MOV EAX,EDX
004CA97D  C1 E8 1F                  SHR EAX,0x1f
004CA980  03 D0                     ADD EDX,EAX
LAB_004ca982:
004CA982  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_004ca985:
004CA985  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004CA98B  8D 0C FF                  LEA ECX,[EDI + EDI*0x8]
004CA98E  8B 44 8A 10               MOV EAX,dword ptr [EDX + ECX*0x4 + 0x10]
004CA992  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
004CA995  39 41 14                  CMP dword ptr [ECX + 0x14],EAX
004CA998  7E 0A                     JLE 0x004ca9a4
004CA99A  8B 49 18                  MOV ECX,dword ptr [ECX + 0x18]
004CA99D  2B C8                     SUB ECX,EAX
004CA99F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004CA9A2  EB 06                     JMP 0x004ca9aa
LAB_004ca9a4:
004CA9A4  2B 41 18                  SUB EAX,dword ptr [ECX + 0x18]
004CA9A7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_004ca9aa:
004CA9AA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004CA9AD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004CA9B0  6A 00                     PUSH 0x0
004CA9B2  8D 71 01                  LEA ESI,[ECX + 0x1]
004CA9B5  8B D6                     MOV EDX,ESI
004CA9B7  0F AF D0                  IMUL EDX,EAX
004CA9BA  0F AF C1                  IMUL EAX,ECX
004CA9BD  4A                        DEC EDX
004CA9BE  8B CB                     MOV ECX,EBX
004CA9C0  52                        PUSH EDX
004CA9C1  50                        PUSH EAX
004CA9C2  57                        PUSH EDI
004CA9C3  E8 F2 74 F3 FF            CALL 0x00401eba
004CA9C8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004CA9CB  85 C0                     TEST EAX,EAX
004CA9CD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004CA9D0  74 41                     JZ 0x004caa13
004CA9D2  0F AF F0                  IMUL ESI,EAX
004CA9D5  0F AF 45 F8               IMUL EAX,dword ptr [EBP + -0x8]
004CA9D9  4E                        DEC ESI
004CA9DA  3B F0                     CMP ESI,EAX
004CA9DC  7E 1B                     JLE 0x004ca9f9
004CA9DE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CA9E1  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
004CA9E4  3B D6                     CMP EDX,ESI
004CA9E6  7E 07                     JLE 0x004ca9ef
004CA9E8  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_004ca9ef:
004CA9EF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CA9F2  03 C1                     ADD EAX,ECX
004CA9F4  E9 AA 00 00 00            JMP 0x004caaa3
LAB_004ca9f9:
004CA9F9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CA9FC  8B D0                     MOV EDX,EAX
004CA9FE  2B D1                     SUB EDX,ECX
004CAA00  3B D6                     CMP EDX,ESI
004CAA02  7D 07                     JGE 0x004caa0b
004CAA04  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_004caa0b:
004CAA0B  2B 45 FC                  SUB EAX,dword ptr [EBP + -0x4]
004CAA0E  E9 90 00 00 00            JMP 0x004caaa3
LAB_004caa13:
004CAA13  0F AF 45 F8               IMUL EAX,dword ptr [EBP + -0x8]
004CAA17  E9 87 00 00 00            JMP 0x004caaa3
LAB_004caa1c:
004CAA1C  57                        PUSH EDI
004CAA1D  8B CB                     MOV ECX,EBX
004CAA1F  E8 88 78 F3 FF            CALL 0x004022ac
004CAA24  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004CAA27  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004CAA2A  2B CA                     SUB ECX,EDX
004CAA2C  41                        INC ECX
004CAA2D  3B C1                     CMP EAX,ECX
004CAA2F  7D 12                     JGE 0x004caa43
004CAA31  57                        PUSH EDI
004CAA32  8B CB                     MOV ECX,EBX
004CAA34  E8 73 78 F3 FF            CALL 0x004022ac
004CAA39  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004CAA3C  8D 44 10 FF               LEA EAX,[EAX + EDX*0x1 + -0x1]
004CAA40  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_004caa43:
004CAA43  8B 86 F5 01 00 00         MOV EAX,dword ptr [ESI + 0x1f5]
004CAA49  8D 0C FF                  LEA ECX,[EDI + EDI*0x8]
004CAA4C  8B 74 88 14               MOV ESI,dword ptr [EAX + ECX*0x4 + 0x14]
004CAA50  8D 0C 88                  LEA ECX,[EAX + ECX*0x4]
004CAA53  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
004CAA56  3B F0                     CMP ESI,EAX
004CAA58  8B 71 18                  MOV ESI,dword ptr [ECX + 0x18]
004CAA5B  7E 04                     JLE 0x004caa61
004CAA5D  2B F0                     SUB ESI,EAX
004CAA5F  EB 04                     JMP 0x004caa65
LAB_004caa61:
004CAA61  2B C6                     SUB EAX,ESI
004CAA63  8B F0                     MOV ESI,EAX
LAB_004caa65:
004CAA65  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004CAA68  6A 00                     PUSH 0x0
004CAA6A  51                        PUSH ECX
004CAA6B  52                        PUSH EDX
004CAA6C  57                        PUSH EDI
004CAA6D  8B CB                     MOV ECX,EBX
004CAA6F  E8 46 74 F3 FF            CALL 0x00401eba
004CAA74  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004CAA77  85 C0                     TEST EAX,EAX
004CAA79  74 25                     JZ 0x004caaa0
004CAA7B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004CAA7E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004CAA81  3B C8                     CMP ECX,EAX
004CAA83  7E 0D                     JLE 0x004caa92
004CAA85  8D 14 06                  LEA EDX,[ESI + EAX*0x1]
004CAA88  3B D1                     CMP EDX,ECX
004CAA8A  7E 02                     JLE 0x004caa8e
004CAA8C  33 F6                     XOR ESI,ESI
LAB_004caa8e:
004CAA8E  03 C6                     ADD EAX,ESI
004CAA90  EB 11                     JMP 0x004caaa3
LAB_004caa92:
004CAA92  8B D0                     MOV EDX,EAX
004CAA94  2B D6                     SUB EDX,ESI
004CAA96  3B D1                     CMP EDX,ECX
004CAA98  7D 02                     JGE 0x004caa9c
004CAA9A  33 F6                     XOR ESI,ESI
LAB_004caa9c:
004CAA9C  2B C6                     SUB EAX,ESI
004CAA9E  EB 03                     JMP 0x004caaa3
LAB_004caaa0:
004CAAA0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_004caaa3:
004CAAA3  50                        PUSH EAX
LAB_004caaa4:
004CAAA4  57                        PUSH EDI
004CAAA5  8B CB                     MOV ECX,EBX
004CAAA7  E8 B8 65 F3 FF            CALL 0x00401064
004CAAAC  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004CAAB1  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004CAAB7  51                        PUSH ECX
004CAAB8  57                        PUSH EDI
004CAAB9  8B CB                     MOV ECX,EBX
004CAABB  E8 80 A7 F3 FF            CALL 0x00405240
004CAAC0  5F                        POP EDI
004CAAC1  5E                        POP ESI
004CAAC2  33 C0                     XOR EAX,EAX
004CAAC4  5B                        POP EBX
004CAAC5  8B E5                     MOV ESP,EBP
004CAAC7  5D                        POP EBP
004CAAC8  C2 08 00                  RET 0x8
LAB_004caacb:
004CAACB  57                        PUSH EDI
004CAACC  8B CB                     MOV ECX,EBX
004CAACE  E8 91 97 F3 FF            CALL 0x00404264
LAB_004caad3:
004CAAD3  5F                        POP EDI
004CAAD4  5E                        POP ESI
004CAAD5  33 C0                     XOR EAX,EAX
004CAAD7  5B                        POP EBX
004CAAD8  8B E5                     MOV ESP,EBP
004CAADA  5D                        POP EBP
004CAADB  C2 08 00                  RET 0x8

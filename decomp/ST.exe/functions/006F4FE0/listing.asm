FUN_006f4fe0:
006F4FE0  55                        PUSH EBP
006F4FE1  8B EC                     MOV EBP,ESP
006F4FE3  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006F4FE6  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006F4FE9  53                        PUSH EBX
006F4FEA  56                        PUSH ESI
006F4FEB  57                        PUSH EDI
006F4FEC  A3 E0 6F 85 00            MOV [0x00856fe0],EAX
006F4FF1  89 0D 10 70 85 00         MOV dword ptr [0x00857010],ECX
006F4FF7  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F4FFA  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F4FFD  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F5000  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F5003  C1 E2 10                  SHL EDX,0x10
006F5006  80 3D 00 70 85 00 00      CMP byte ptr [0x00857000],0x0
006F500D  0F 85 D8 00 00 00         JNZ 0x006f50eb
LAB_006f5013:
006F5013  33 C9                     XOR ECX,ECX
006F5015  8A 0E                     MOV CL,byte ptr [ESI]
006F5017  46                        INC ESI
006F5018  0B C9                     OR ECX,ECX
006F501A  0F 84 A8 00 00 00         JZ 0x006f50c8
006F5020  55                        PUSH EBP
006F5021  8B 6D 20                  MOV EBP,dword ptr [EBP + 0x20]
LAB_006f5024:
006F5024  F6 C1 80                  TEST CL,0x80
006F5027  75 19                     JNZ 0x006f5042
LAB_006f5029:
006F5029  03 F9                     ADD EDI,ECX
006F502B  01 0D E0 6F 85 00         ADD dword ptr [0x00856fe0],ECX
006F5031  8D 1C 4B                  LEA EBX,[EBX + ECX*0x2]
006F5034  2B E9                     SUB EBP,ECX
006F5036  7E 6C                     JLE 0x006f50a4
006F5038  33 C9                     XOR ECX,ECX
006F503A  8A 0E                     MOV CL,byte ptr [ESI]
006F503C  46                        INC ESI
006F503D  F6 C1 80                  TEST CL,0x80
006F5040  74 E7                     JZ 0x006f5029
LAB_006f5042:
006F5042  F6 C1 40                  TEST CL,0x40
006F5045  74 28                     JZ 0x006f506f
006F5047  83 E1 3F                  AND ECX,0x3f
006F504A  AC                        LODSB ESI
006F504B  2B E9                     SUB EBP,ECX
LAB_006f504d:
006F504D  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F5050  77 11                     JA 0x006f5063
006F5052  88 07                     MOV byte ptr [EDI],AL
006F5054  83 C3 02                  ADD EBX,0x2
006F5057  47                        INC EDI
006F5058  FF 05 E0 6F 85 00         INC dword ptr [0x00856fe0]
006F505E  49                        DEC ECX
006F505F  7F EC                     JG 0x006f504d
006F5061  EB 36                     JMP 0x006f5099
LAB_006f5063:
006F5063  C6 05 00 70 85 00 01      MOV byte ptr [0x00857000],0x1
006F506A  E9 D3 00 00 00            JMP 0x006f5142
LAB_006f506f:
006F506F  83 E1 3F                  AND ECX,0x3f
006F5072  2B E9                     SUB EBP,ECX
LAB_006f5074:
006F5074  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F5077  77 14                     JA 0x006f508d
006F5079  8A 06                     MOV AL,byte ptr [ESI]
006F507B  46                        INC ESI
006F507C  88 07                     MOV byte ptr [EDI],AL
006F507E  83 C3 02                  ADD EBX,0x2
006F5081  47                        INC EDI
006F5082  FF 05 E0 6F 85 00         INC dword ptr [0x00856fe0]
006F5088  49                        DEC ECX
006F5089  7F E9                     JG 0x006f5074
006F508B  EB 0C                     JMP 0x006f5099
LAB_006f508d:
006F508D  C6 05 00 70 85 00 01      MOV byte ptr [0x00857000],0x1
006F5094  E9 03 01 00 00            JMP 0x006f519c
LAB_006f5099:
006F5099  0B ED                     OR EBP,EBP
006F509B  7E 07                     JLE 0x006f50a4
006F509D  33 C9                     XOR ECX,ECX
006F509F  8A 0E                     MOV CL,byte ptr [ESI]
006F50A1  46                        INC ESI
006F50A2  EB 80                     JMP 0x006f5024
LAB_006f50a4:
006F50A4  5D                        POP EBP
006F50A5  8B 0D E0 6F 85 00         MOV ECX,dword ptr [0x00856fe0]
006F50AB  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F50AE  03 4D 2C                  ADD ECX,dword ptr [EBP + 0x2c]
006F50B1  2B 7D 20                  SUB EDI,dword ptr [EBP + 0x20]
006F50B4  2B 4D 20                  SUB ECX,dword ptr [EBP + 0x20]
006F50B7  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
006F50BA  2B 5D 20                  SUB EBX,dword ptr [EBP + 0x20]
006F50BD  89 0D E0 6F 85 00         MOV dword ptr [0x00856fe0],ECX
006F50C3  2B 5D 20                  SUB EBX,dword ptr [EBP + 0x20]
006F50C6  EB 15                     JMP 0x006f50dd
LAB_006f50c8:
006F50C8  8B 0D E0 6F 85 00         MOV ECX,dword ptr [0x00856fe0]
006F50CE  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F50D1  03 4D 2C                  ADD ECX,dword ptr [EBP + 0x2c]
006F50D4  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
006F50D7  89 0D E0 6F 85 00         MOV dword ptr [0x00856fe0],ECX
LAB_006f50dd:
006F50DD  FF 4D 24                  DEC dword ptr [EBP + 0x24]
006F50E0  0F 8F 2D FF FF FF         JG 0x006f5013
006F50E6  E9 4D 01 00 00            JMP 0x006f5238
LAB_006f50eb:
006F50EB  33 C9                     XOR ECX,ECX
006F50ED  8A 0E                     MOV CL,byte ptr [ESI]
006F50EF  46                        INC ESI
006F50F0  0B C9                     OR ECX,ECX
006F50F2  0F 84 22 01 00 00         JZ 0x006f521a
006F50F8  55                        PUSH EBP
006F50F9  8B 6D 20                  MOV EBP,dword ptr [EBP + 0x20]
LAB_006f50fc:
006F50FC  F6 C1 80                  TEST CL,0x80
006F50FF  75 1D                     JNZ 0x006f511e
LAB_006f5101:
006F5101  03 F9                     ADD EDI,ECX
006F5103  01 0D E0 6F 85 00         ADD dword ptr [0x00856fe0],ECX
006F5109  8D 1C 4B                  LEA EBX,[EBX + ECX*0x2]
006F510C  2B E9                     SUB EBP,ECX
006F510E  0F 8E E2 00 00 00         JLE 0x006f51f6
006F5114  33 C9                     XOR ECX,ECX
006F5116  8A 0E                     MOV CL,byte ptr [ESI]
006F5118  46                        INC ESI
006F5119  F6 C1 80                  TEST CL,0x80
006F511C  74 E3                     JZ 0x006f5101
LAB_006f511e:
006F511E  F6 C1 40                  TEST CL,0x40
006F5121  74 5B                     JZ 0x006f517e
006F5123  83 E1 3F                  AND ECX,0x3f
006F5126  AC                        LODSB ESI
006F5127  2B E9                     SUB EBP,ECX
LAB_006f5129:
006F5129  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F512C  77 14                     JA 0x006f5142
LAB_006f512e:
006F512E  88 07                     MOV byte ptr [EDI],AL
006F5130  83 C3 02                  ADD EBX,0x2
006F5133  47                        INC EDI
006F5134  FF 05 E0 6F 85 00         INC dword ptr [0x00856fe0]
006F513A  49                        DEC ECX
006F513B  7F EC                     JG 0x006f5129
006F513D  E9 A6 00 00 00            JMP 0x006f51e8
LAB_006f5142:
006F5142  56                        PUSH ESI
006F5143  55                        PUSH EBP
006F5144  8B 35 E0 6F 85 00         MOV ESI,dword ptr [0x00856fe0]
006F514A  50                        PUSH EAX
006F514B  8B 2D 10 70 85 00         MOV EBP,dword ptr [0x00857010]
LAB_006f5151:
006F5151  33 C0                     XOR EAX,EAX
006F5153  8A 06                     MOV AL,byte ptr [ESI]
006F5155  46                        INC ESI
006F5156  83 C3 02                  ADD EBX,0x2
006F5159  8A 44 05 00               MOV AL,byte ptr [EBP + EAX*0x1]
006F515D  88 07                     MOV byte ptr [EDI],AL
006F515F  47                        INC EDI
006F5160  49                        DEC ECX
006F5161  7E 10                     JLE 0x006f5173
006F5163  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F5166  77 E9                     JA 0x006f5151
006F5168  58                        POP EAX
006F5169  89 35 E0 6F 85 00         MOV dword ptr [0x00856fe0],ESI
006F516F  5D                        POP EBP
006F5170  5E                        POP ESI
006F5171  EB BB                     JMP 0x006f512e
LAB_006f5173:
006F5173  58                        POP EAX
006F5174  89 35 E0 6F 85 00         MOV dword ptr [0x00856fe0],ESI
006F517A  5D                        POP EBP
006F517B  5E                        POP ESI
006F517C  EB 6A                     JMP 0x006f51e8
LAB_006f517e:
006F517E  83 E1 3F                  AND ECX,0x3f
006F5181  2B E9                     SUB EBP,ECX
LAB_006f5183:
006F5183  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F5186  77 14                     JA 0x006f519c
LAB_006f5188:
006F5188  8A 06                     MOV AL,byte ptr [ESI]
006F518A  46                        INC ESI
006F518B  88 07                     MOV byte ptr [EDI],AL
006F518D  83 C3 02                  ADD EBX,0x2
006F5190  FF 05 E0 6F 85 00         INC dword ptr [0x00856fe0]
006F5196  47                        INC EDI
006F5197  49                        DEC ECX
006F5198  7F E9                     JG 0x006f5183
006F519A  EB 4C                     JMP 0x006f51e8
LAB_006f519c:
006F519C  55                        PUSH EBP
006F519D  89 35 FC 6F 85 00         MOV dword ptr [0x00856ffc],ESI
006F51A3  8B 2D 10 70 85 00         MOV EBP,dword ptr [0x00857010]
006F51A9  8B 35 E0 6F 85 00         MOV ESI,dword ptr [0x00856fe0]
LAB_006f51af:
006F51AF  33 C0                     XOR EAX,EAX
006F51B1  8A 06                     MOV AL,byte ptr [ESI]
006F51B3  83 C3 02                  ADD EBX,0x2
006F51B6  FF 05 FC 6F 85 00         INC dword ptr [0x00856ffc]
006F51BC  8A 44 05 00               MOV AL,byte ptr [EBP + EAX*0x1]
006F51C0  88 07                     MOV byte ptr [EDI],AL
006F51C2  46                        INC ESI
006F51C3  47                        INC EDI
006F51C4  49                        DEC ECX
006F51C5  7E 14                     JLE 0x006f51db
006F51C7  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F51CA  77 E3                     JA 0x006f51af
006F51CC  5D                        POP EBP
006F51CD  89 35 E0 6F 85 00         MOV dword ptr [0x00856fe0],ESI
006F51D3  8B 35 FC 6F 85 00         MOV ESI,dword ptr [0x00856ffc]
006F51D9  EB AD                     JMP 0x006f5188
LAB_006f51db:
006F51DB  5D                        POP EBP
006F51DC  89 35 E0 6F 85 00         MOV dword ptr [0x00856fe0],ESI
006F51E2  8B 35 FC 6F 85 00         MOV ESI,dword ptr [0x00856ffc]
LAB_006f51e8:
006F51E8  0B ED                     OR EBP,EBP
006F51EA  7E 0A                     JLE 0x006f51f6
006F51EC  33 C9                     XOR ECX,ECX
006F51EE  8A 0E                     MOV CL,byte ptr [ESI]
006F51F0  46                        INC ESI
006F51F1  E9 06 FF FF FF            JMP 0x006f50fc
LAB_006f51f6:
006F51F6  5D                        POP EBP
006F51F7  8B 0D E0 6F 85 00         MOV ECX,dword ptr [0x00856fe0]
006F51FD  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F5200  03 4D 2C                  ADD ECX,dword ptr [EBP + 0x2c]
006F5203  2B 7D 20                  SUB EDI,dword ptr [EBP + 0x20]
006F5206  2B 4D 20                  SUB ECX,dword ptr [EBP + 0x20]
006F5209  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
006F520C  2B 5D 20                  SUB EBX,dword ptr [EBP + 0x20]
006F520F  89 0D E0 6F 85 00         MOV dword ptr [0x00856fe0],ECX
006F5215  2B 5D 20                  SUB EBX,dword ptr [EBP + 0x20]
006F5218  EB 15                     JMP 0x006f522f
LAB_006f521a:
006F521A  8B 0D E0 6F 85 00         MOV ECX,dword ptr [0x00856fe0]
006F5220  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F5223  03 4D 2C                  ADD ECX,dword ptr [EBP + 0x2c]
006F5226  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
006F5229  89 0D E0 6F 85 00         MOV dword ptr [0x00856fe0],ECX
LAB_006f522f:
006F522F  FF 4D 24                  DEC dword ptr [EBP + 0x24]
006F5232  0F 8F B3 FE FF FF         JG 0x006f50eb
LAB_006f5238:
006F5238  5F                        POP EDI
006F5239  5E                        POP ESI
006F523A  5B                        POP EBX
006F523B  5D                        POP EBP
006F523C  C2 2C 00                  RET 0x2c

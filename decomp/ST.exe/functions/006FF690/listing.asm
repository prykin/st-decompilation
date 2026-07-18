FUN_006ff690:
006FF690  55                        PUSH EBP
006FF691  8B EC                     MOV EBP,ESP
006FF693  83 EC 1C                  SUB ESP,0x1c
006FF696  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006FF699  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006FF69C  C1 F8 03                  SAR EAX,0x3
006FF69F  03 C8                     ADD ECX,EAX
006FF6A1  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FF6A4  48                        DEC EAX
006FF6A5  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006FF6AF  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
006FF6B2  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FF6B5  0F 88 83 0A 00 00         JS 0x0070013e
006FF6BB  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006FF6BE  53                        PUSH EBX
006FF6BF  56                        PUSH ESI
006FF6C0  57                        PUSH EDI
006FF6C1  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006FF6C4  EB 03                     JMP 0x006ff6c9
LAB_006ff6c6:
006FF6C6  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
LAB_006ff6c9:
006FF6C9  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FF6CC  F6 C2 01                  TEST DL,0x1
006FF6CF  75 4E                     JNZ 0x006ff71f
LAB_006ff6d1:
006FF6D1  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FF6D4  48                        DEC EAX
006FF6D5  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FF6D8  78 42                     JS 0x006ff71c
006FF6DA  33 C0                     XOR EAX,EAX
006FF6DC  8A 06                     MOV AL,byte ptr [ESI]
006FF6DE  46                        INC ESI
006FF6DF  85 C0                     TEST EAX,EAX
006FF6E1  74 2C                     JZ 0x006ff70f
006FF6E3  8B CF                     MOV ECX,EDI
LAB_006ff6e5:
006FF6E5  A8 80                     TEST AL,0x80
006FF6E7  74 16                     JZ 0x006ff6ff
006FF6E9  A8 40                     TEST AL,0x40
006FF6EB  74 06                     JZ 0x006ff6f3
006FF6ED  46                        INC ESI
006FF6EE  83 E0 3F                  AND EAX,0x3f
006FF6F1  EB 0F                     JMP 0x006ff702
LAB_006ff6f3:
006FF6F3  8B D8                     MOV EBX,EAX
006FF6F5  83 E3 3F                  AND EBX,0x3f
006FF6F8  03 F3                     ADD ESI,EBX
006FF6FA  83 E0 3F                  AND EAX,0x3f
006FF6FD  EB 03                     JMP 0x006ff702
LAB_006ff6ff:
006FF6FF  83 E0 7F                  AND EAX,0x7f
LAB_006ff702:
006FF702  2B C8                     SUB ECX,EAX
006FF704  85 C9                     TEST ECX,ECX
006FF706  7E 07                     JLE 0x006ff70f
006FF708  33 C0                     XOR EAX,EAX
006FF70A  8A 06                     MOV AL,byte ptr [ESI]
006FF70C  46                        INC ESI
006FF70D  EB D6                     JMP 0x006ff6e5
LAB_006ff70f:
006FF70F  42                        INC EDX
006FF710  83 FA 04                  CMP EDX,0x4
006FF713  7E 02                     JLE 0x006ff717
006FF715  33 D2                     XOR EDX,EDX
LAB_006ff717:
006FF717  F6 C2 01                  TEST DL,0x1
006FF71A  74 B5                     JZ 0x006ff6d1
LAB_006ff71c:
006FF71C  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
LAB_006ff71f:
006FF71F  33 DB                     XOR EBX,EBX
006FF721  8A 1E                     MOV BL,byte ptr [ESI]
006FF723  46                        INC ESI
006FF724  85 DB                     TEST EBX,EBX
006FF726  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006FF729  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FF72C  0F 84 C2 09 00 00         JZ 0x007000f4
006FF732  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006FF735  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006FF738  8B 45 48                  MOV EAX,dword ptr [EBP + 0x48]
006FF73B  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006FF73E  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006FF741  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006FF744  83 E1 07                  AND ECX,0x7
006FF747  BA 80 00 00 00            MOV EDX,0x80
006FF74C  D3 FA                     SAR EDX,CL
006FF74E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006FF751  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006FF754  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FF757  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006FF75A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_006ff75d:
006FF75D  F6 C3 80                  TEST BL,0x80
006FF760  8B C3                     MOV EAX,EBX
006FF762  74 36                     JZ 0x006ff79a
006FF764  83 E0 3F                  AND EAX,0x3f
006FF767  3B C6                     CMP EAX,ESI
006FF769  7F 45                     JG 0x006ff7b0
006FF76B  F6 C3 40                  TEST BL,0x40
006FF76E  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FF771  74 13                     JZ 0x006ff786
006FF773  43                        INC EBX
006FF774  2B F0                     SUB ESI,EAX
006FF776  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FF779  33 DB                     XOR EBX,EBX
006FF77B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FF77E  8A 18                     MOV BL,byte ptr [EAX]
006FF780  40                        INC EAX
006FF781  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FF784  EB D7                     JMP 0x006ff75d
LAB_006ff786:
006FF786  03 D8                     ADD EBX,EAX
006FF788  2B F0                     SUB ESI,EAX
006FF78A  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FF78D  33 DB                     XOR EBX,EBX
006FF78F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FF792  8A 18                     MOV BL,byte ptr [EAX]
006FF794  40                        INC EAX
006FF795  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FF798  EB C3                     JMP 0x006ff75d
LAB_006ff79a:
006FF79A  83 E0 7F                  AND EAX,0x7f
006FF79D  3B C6                     CMP EAX,ESI
006FF79F  7F 0F                     JG 0x006ff7b0
006FF7A1  2B F0                     SUB ESI,EAX
006FF7A3  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FF7A6  33 DB                     XOR EBX,EBX
006FF7A8  8A 18                     MOV BL,byte ptr [EAX]
006FF7AA  40                        INC EAX
006FF7AB  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FF7AE  EB AD                     JMP 0x006ff75d
LAB_006ff7b0:
006FF7B0  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006FF7B3  81 E3 C0 00 00 00         AND EBX,0xc0
006FF7B9  2B C6                     SUB EAX,ESI
006FF7BB  80 FB 80                  CMP BL,0x80
006FF7BE  75 03                     JNZ 0x006ff7c3
006FF7C0  01 75 1C                  ADD dword ptr [EBP + 0x1c],ESI
LAB_006ff7c3:
006FF7C3  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006FF7C6  3B C6                     CMP EAX,ESI
006FF7C8  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
006FF7CB  0F 8F B8 04 00 00         JG 0x006ffc89
006FF7D1  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
006FF7D4  81 E6 80 00 00 00         AND ESI,0x80
LAB_006ff7da:
006FF7DA  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006FF7DD  2B D8                     SUB EBX,EAX
006FF7DF  85 F6                     TEST ESI,ESI
006FF7E1  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FF7E4  0F 84 52 04 00 00         JZ 0x006ffc3c
006FF7EA  F6 45 E8 40               TEST byte ptr [EBP + -0x18],0x40
006FF7EE  0F 84 0C 02 00 00         JZ 0x006ffa00
006FF7F4  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FF7F7  8B 7D 44                  MOV EDI,dword ptr [EBP + 0x44]
006FF7FA  33 DB                     XOR EBX,EBX
006FF7FC  8A 1E                     MOV BL,byte ptr [ESI]
006FF7FE  8B F3                     MOV ESI,EBX
006FF800  33 DB                     XOR EBX,EBX
006FF802  8A 1C 3E                  MOV BL,byte ptr [ESI + EDI*0x1]
006FF805  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FF808  47                        INC EDI
006FF809  85 C9                     TEST ECX,ECX
006FF80B  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FF80E  0F 8E F8 00 00 00         JLE 0x006ff90c
006FF814  8D 71 FF                  LEA ESI,[ECX + -0x1]
006FF817  83 FE 03                  CMP ESI,0x3
006FF81A  0F 87 EC 00 00 00         JA 0x006ff90c
switchD_006ff820::switchD:
006FF820  FF 24 B5 44 01 70 00      JMP dword ptr [ESI*0x4 + 0x700144]
switchD_006ff820::caseD_1:
006FF827  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF82A  84 11                     TEST byte ptr [ECX],DL
006FF82C  75 2A                     JNZ 0x006ff858
006FF82E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FF831  33 C9                     XOR ECX,ECX
006FF833  66 8B 0E                  MOV CX,word ptr [ESI]
006FF836  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FF839  3B F1                     CMP ESI,ECX
006FF83B  77 07                     JA 0x006ff844
006FF83D  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006FF840  88 1F                     MOV byte ptr [EDI],BL
006FF842  EB 17                     JMP 0x006ff85b
LAB_006ff844:
006FF844  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FF847  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006FF84A  33 C9                     XOR ECX,ECX
006FF84C  8A 0E                     MOV CL,byte ptr [ESI]
006FF84E  8B 75 50                  MOV ESI,dword ptr [EBP + 0x50]
006FF851  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006FF854  88 0F                     MOV byte ptr [EDI],CL
006FF856  EB 03                     JMP 0x006ff85b
LAB_006ff858:
006FF858  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_006ff85b:
006FF85B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FF85E  B9 02 00 00 00            MOV ECX,0x2
006FF863  03 F1                     ADD ESI,ECX
006FF865  47                        INC EDI
006FF866  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FF869  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FF86C  46                        INC ESI
006FF86D  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006FF870  D1 EA                     SHR EDX,0x1
006FF872  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FF875  75 0C                     JNZ 0x006ff883
006FF877  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FF87A  BA 80 00 00 00            MOV EDX,0x80
006FF87F  46                        INC ESI
006FF880  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_006ff883:
006FF883  48                        DEC EAX
006FF884  85 C0                     TEST EAX,EAX
006FF886  0F 8E 8A 03 00 00         JLE 0x006ffc16
006FF88C  EB 03                     JMP 0x006ff891
switchD_006ff820::caseD_2:
006FF88E  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_006ff891:
006FF891  48                        DEC EAX
006FF892  B9 03 00 00 00            MOV ECX,0x3
006FF897  85 C0                     TEST EAX,EAX
006FF899  0F 8E 77 03 00 00         JLE 0x006ffc16
006FF89F  EB 03                     JMP 0x006ff8a4
switchD_006ff820::caseD_3:
006FF8A1  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_006ff8a4:
006FF8A4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF8A7  84 11                     TEST byte ptr [ECX],DL
006FF8A9  75 22                     JNZ 0x006ff8cd
006FF8AB  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FF8AE  33 C9                     XOR ECX,ECX
006FF8B0  66 8B 0E                  MOV CX,word ptr [ESI]
006FF8B3  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FF8B6  3B F1                     CMP ESI,ECX
006FF8B8  77 04                     JA 0x006ff8be
006FF8BA  88 1F                     MOV byte ptr [EDI],BL
006FF8BC  EB 0F                     JMP 0x006ff8cd
LAB_006ff8be:
006FF8BE  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FF8C1  33 C9                     XOR ECX,ECX
006FF8C3  8A 0E                     MOV CL,byte ptr [ESI]
006FF8C5  8B 75 50                  MOV ESI,dword ptr [EBP + 0x50]
006FF8C8  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006FF8CB  88 0F                     MOV byte ptr [EDI],CL
LAB_006ff8cd:
006FF8CD  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FF8D0  83 C6 02                  ADD ESI,0x2
006FF8D3  47                        INC EDI
006FF8D4  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FF8D7  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FF8DA  46                        INC ESI
006FF8DB  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006FF8DE  D1 EA                     SHR EDX,0x1
006FF8E0  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FF8E3  75 0C                     JNZ 0x006ff8f1
006FF8E5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF8E8  BA 80 00 00 00            MOV EDX,0x80
006FF8ED  41                        INC ECX
006FF8EE  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ff8f1:
006FF8F1  48                        DEC EAX
006FF8F2  B9 04 00 00 00            MOV ECX,0x4
006FF8F7  85 C0                     TEST EAX,EAX
006FF8F9  0F 8E 17 03 00 00         JLE 0x006ffc16
006FF8FF  33 C9                     XOR ECX,ECX
006FF901  48                        DEC EAX
006FF902  EB 0B                     JMP 0x006ff90f
switchD_006ff820::caseD_4:
006FF904  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006FF907  33 C9                     XOR ECX,ECX
006FF909  48                        DEC EAX
006FF90A  EB 03                     JMP 0x006ff90f
LAB_006ff90c:
006FF90C  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
switchD_006ff820::default:
006FF90F  85 C0                     TEST EAX,EAX
006FF911  0F 8E FF 02 00 00         JLE 0x006ffc16
006FF917  48                        DEC EAX
006FF918  B9 01 00 00 00            MOV ECX,0x1
006FF91D  85 C0                     TEST EAX,EAX
006FF91F  0F 8E F1 02 00 00         JLE 0x006ffc16
LAB_006ff925:
006FF925  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF928  84 11                     TEST byte ptr [ECX],DL
006FF92A  75 22                     JNZ 0x006ff94e
006FF92C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FF92F  33 C9                     XOR ECX,ECX
006FF931  66 8B 0E                  MOV CX,word ptr [ESI]
006FF934  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FF937  3B F1                     CMP ESI,ECX
006FF939  77 04                     JA 0x006ff93f
006FF93B  88 1F                     MOV byte ptr [EDI],BL
006FF93D  EB 0F                     JMP 0x006ff94e
LAB_006ff93f:
006FF93F  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FF942  33 C9                     XOR ECX,ECX
006FF944  8A 0E                     MOV CL,byte ptr [ESI]
006FF946  8B 75 50                  MOV ESI,dword ptr [EBP + 0x50]
006FF949  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006FF94C  88 0F                     MOV byte ptr [EDI],CL
LAB_006ff94e:
006FF94E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FF951  B9 02 00 00 00            MOV ECX,0x2
006FF956  03 F1                     ADD ESI,ECX
006FF958  47                        INC EDI
006FF959  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FF95C  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FF95F  46                        INC ESI
006FF960  D1 EA                     SHR EDX,0x1
006FF962  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FF965  75 0C                     JNZ 0x006ff973
006FF967  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FF96A  BA 80 00 00 00            MOV EDX,0x80
006FF96F  46                        INC ESI
006FF970  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_006ff973:
006FF973  48                        DEC EAX
006FF974  85 C0                     TEST EAX,EAX
006FF976  0F 8E 97 02 00 00         JLE 0x006ffc13
006FF97C  48                        DEC EAX
006FF97D  B9 03 00 00 00            MOV ECX,0x3
006FF982  85 C0                     TEST EAX,EAX
006FF984  0F 8E 89 02 00 00         JLE 0x006ffc13
006FF98A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF98D  84 11                     TEST byte ptr [ECX],DL
006FF98F  75 22                     JNZ 0x006ff9b3
006FF991  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FF994  33 C9                     XOR ECX,ECX
006FF996  66 8B 0E                  MOV CX,word ptr [ESI]
006FF999  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FF99C  3B F1                     CMP ESI,ECX
006FF99E  77 04                     JA 0x006ff9a4
006FF9A0  88 1F                     MOV byte ptr [EDI],BL
006FF9A2  EB 0F                     JMP 0x006ff9b3
LAB_006ff9a4:
006FF9A4  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FF9A7  33 C9                     XOR ECX,ECX
006FF9A9  8A 0E                     MOV CL,byte ptr [ESI]
006FF9AB  8B 75 50                  MOV ESI,dword ptr [EBP + 0x50]
006FF9AE  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006FF9B1  88 0F                     MOV byte ptr [EDI],CL
LAB_006ff9b3:
006FF9B3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FF9B6  83 C6 02                  ADD ESI,0x2
006FF9B9  47                        INC EDI
006FF9BA  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FF9BD  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FF9C0  46                        INC ESI
006FF9C1  D1 EA                     SHR EDX,0x1
006FF9C3  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FF9C6  75 0C                     JNZ 0x006ff9d4
006FF9C8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FF9CB  BA 80 00 00 00            MOV EDX,0x80
006FF9D0  41                        INC ECX
006FF9D1  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ff9d4:
006FF9D4  48                        DEC EAX
006FF9D5  B9 04 00 00 00            MOV ECX,0x4
006FF9DA  85 C0                     TEST EAX,EAX
006FF9DC  0F 8E 31 02 00 00         JLE 0x006ffc13
006FF9E2  33 C9                     XOR ECX,ECX
006FF9E4  48                        DEC EAX
006FF9E5  85 C0                     TEST EAX,EAX
006FF9E7  0F 8E 26 02 00 00         JLE 0x006ffc13
006FF9ED  48                        DEC EAX
006FF9EE  B9 01 00 00 00            MOV ECX,0x1
006FF9F3  85 C0                     TEST EAX,EAX
006FF9F5  0F 8F 2A FF FF FF         JG 0x006ff925
006FF9FB  E9 13 02 00 00            JMP 0x006ffc13
LAB_006ffa00:
006FFA00  85 C9                     TEST ECX,ECX
006FFA02  0F 8E 16 01 00 00         JLE 0x006ffb1e
006FFA08  8D 71 FF                  LEA ESI,[ECX + -0x1]
006FFA0B  83 FE 03                  CMP ESI,0x3
006FFA0E  0F 87 0A 01 00 00         JA 0x006ffb1e
switchD_006ffa14::switchD:
006FFA14  FF 24 B5 54 01 70 00      JMP dword ptr [ESI*0x4 + 0x700154]
switchD_006ffa14::caseD_1:
006FFA1B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFA1E  84 11                     TEST byte ptr [ECX],DL
006FFA20  75 2F                     JNZ 0x006ffa51
006FFA22  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FFA25  33 C9                     XOR ECX,ECX
006FFA27  66 8B 0E                  MOV CX,word ptr [ESI]
006FFA2A  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FFA2D  3B F1                     CMP ESI,ECX
006FFA2F  77 11                     JA 0x006ffa42
006FFA31  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FFA34  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FFA37  33 C9                     XOR ECX,ECX
006FFA39  8A 0E                     MOV CL,byte ptr [ESI]
006FFA3B  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FFA3E  88 0F                     MOV byte ptr [EDI],CL
006FFA40  EB 12                     JMP 0x006ffa54
LAB_006ffa42:
006FFA42  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FFA45  33 C9                     XOR ECX,ECX
006FFA47  8A 0E                     MOV CL,byte ptr [ESI]
006FFA49  8B 75 50                  MOV ESI,dword ptr [EBP + 0x50]
006FFA4C  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006FFA4F  88 0F                     MOV byte ptr [EDI],CL
LAB_006ffa51:
006FFA51  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
LAB_006ffa54:
006FFA54  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFA57  B9 02 00 00 00            MOV ECX,0x2
006FFA5C  03 D9                     ADD EBX,ECX
006FFA5E  47                        INC EDI
006FFA5F  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FFA62  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FFA65  43                        INC EBX
006FFA66  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006FFA69  D1 EA                     SHR EDX,0x1
006FFA6B  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FFA6E  75 0C                     JNZ 0x006ffa7c
006FFA70  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FFA73  BA 80 00 00 00            MOV EDX,0x80
006FFA78  43                        INC EBX
006FFA79  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_006ffa7c:
006FFA7C  46                        INC ESI
006FFA7D  48                        DEC EAX
006FFA7E  85 C0                     TEST EAX,EAX
006FFA80  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FFA83  0F 8E 8D 01 00 00         JLE 0x006ffc16
006FFA89  EB 03                     JMP 0x006ffa8e
switchD_006ffa14::caseD_2:
006FFA8B  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
LAB_006ffa8e:
006FFA8E  46                        INC ESI
006FFA8F  48                        DEC EAX
006FFA90  85 C0                     TEST EAX,EAX
006FFA92  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FFA95  B9 03 00 00 00            MOV ECX,0x3
006FFA9A  0F 8E 76 01 00 00         JLE 0x006ffc16
006FFAA0  EB 03                     JMP 0x006ffaa5
switchD_006ffa14::caseD_3:
006FFAA2  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
LAB_006ffaa5:
006FFAA5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFAA8  84 11                     TEST byte ptr [ECX],DL
006FFAAA  75 27                     JNZ 0x006ffad3
006FFAAC  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFAAF  33 C9                     XOR ECX,ECX
006FFAB1  66 8B 0B                  MOV CX,word ptr [EBX]
006FFAB4  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FFAB7  3B D9                     CMP EBX,ECX
006FFAB9  77 09                     JA 0x006ffac4
006FFABB  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FFABE  33 C9                     XOR ECX,ECX
006FFAC0  8A 0E                     MOV CL,byte ptr [ESI]
006FFAC2  EB 0A                     JMP 0x006fface
LAB_006ffac4:
006FFAC4  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FFAC7  33 C9                     XOR ECX,ECX
006FFAC9  8A 0B                     MOV CL,byte ptr [EBX]
006FFACB  8B 5D 50                  MOV EBX,dword ptr [EBP + 0x50]
LAB_006fface:
006FFACE  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FFAD1  88 0F                     MOV byte ptr [EDI],CL
LAB_006ffad3:
006FFAD3  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFAD6  83 C3 02                  ADD EBX,0x2
006FFAD9  47                        INC EDI
006FFADA  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FFADD  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FFAE0  43                        INC EBX
006FFAE1  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006FFAE4  D1 EA                     SHR EDX,0x1
006FFAE6  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FFAE9  75 0C                     JNZ 0x006ffaf7
006FFAEB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFAEE  BA 80 00 00 00            MOV EDX,0x80
006FFAF3  41                        INC ECX
006FFAF4  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ffaf7:
006FFAF7  46                        INC ESI
006FFAF8  48                        DEC EAX
006FFAF9  85 C0                     TEST EAX,EAX
006FFAFB  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FFAFE  B9 04 00 00 00            MOV ECX,0x4
006FFB03  0F 8E 0D 01 00 00         JLE 0x006ffc16
006FFB09  46                        INC ESI
006FFB0A  33 C9                     XOR ECX,ECX
006FFB0C  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FFB0F  48                        DEC EAX
006FFB10  EB 0F                     JMP 0x006ffb21
switchD_006ffa14::caseD_4:
006FFB12  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FFB15  33 C9                     XOR ECX,ECX
006FFB17  46                        INC ESI
006FFB18  48                        DEC EAX
006FFB19  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FFB1C  EB 03                     JMP 0x006ffb21
LAB_006ffb1e:
006FFB1E  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
switchD_006ffa14::default:
006FFB21  85 C0                     TEST EAX,EAX
006FFB23  0F 8E ED 00 00 00         JLE 0x006ffc16
006FFB29  46                        INC ESI
006FFB2A  48                        DEC EAX
006FFB2B  85 C0                     TEST EAX,EAX
006FFB2D  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FFB30  B9 01 00 00 00            MOV ECX,0x1
006FFB35  0F 8E DB 00 00 00         JLE 0x006ffc16
LAB_006ffb3b:
006FFB3B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFB3E  84 11                     TEST byte ptr [ECX],DL
006FFB40  75 27                     JNZ 0x006ffb69
006FFB42  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFB45  33 C9                     XOR ECX,ECX
006FFB47  66 8B 0B                  MOV CX,word ptr [EBX]
006FFB4A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FFB4D  3B D9                     CMP EBX,ECX
006FFB4F  77 09                     JA 0x006ffb5a
006FFB51  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FFB54  33 C9                     XOR ECX,ECX
006FFB56  8A 0E                     MOV CL,byte ptr [ESI]
006FFB58  EB 0A                     JMP 0x006ffb64
LAB_006ffb5a:
006FFB5A  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FFB5D  33 C9                     XOR ECX,ECX
006FFB5F  8A 0B                     MOV CL,byte ptr [EBX]
006FFB61  8B 5D 50                  MOV EBX,dword ptr [EBP + 0x50]
LAB_006ffb64:
006FFB64  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FFB67  88 0F                     MOV byte ptr [EDI],CL
LAB_006ffb69:
006FFB69  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFB6C  B9 02 00 00 00            MOV ECX,0x2
006FFB71  03 D9                     ADD EBX,ECX
006FFB73  47                        INC EDI
006FFB74  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FFB77  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FFB7A  43                        INC EBX
006FFB7B  D1 EA                     SHR EDX,0x1
006FFB7D  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FFB80  75 0C                     JNZ 0x006ffb8e
006FFB82  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FFB85  BA 80 00 00 00            MOV EDX,0x80
006FFB8A  43                        INC EBX
006FFB8B  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_006ffb8e:
006FFB8E  46                        INC ESI
006FFB8F  48                        DEC EAX
006FFB90  85 C0                     TEST EAX,EAX
006FFB92  7E 7C                     JLE 0x006ffc10
006FFB94  46                        INC ESI
006FFB95  48                        DEC EAX
006FFB96  85 C0                     TEST EAX,EAX
006FFB98  B9 03 00 00 00            MOV ECX,0x3
006FFB9D  7E 71                     JLE 0x006ffc10
006FFB9F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFBA2  84 11                     TEST byte ptr [ECX],DL
006FFBA4  75 27                     JNZ 0x006ffbcd
006FFBA6  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFBA9  33 C9                     XOR ECX,ECX
006FFBAB  66 8B 0B                  MOV CX,word ptr [EBX]
006FFBAE  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FFBB1  3B D9                     CMP EBX,ECX
006FFBB3  77 09                     JA 0x006ffbbe
006FFBB5  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FFBB8  33 C9                     XOR ECX,ECX
006FFBBA  8A 0E                     MOV CL,byte ptr [ESI]
006FFBBC  EB 0A                     JMP 0x006ffbc8
LAB_006ffbbe:
006FFBBE  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FFBC1  33 C9                     XOR ECX,ECX
006FFBC3  8A 0B                     MOV CL,byte ptr [EBX]
006FFBC5  8B 5D 50                  MOV EBX,dword ptr [EBP + 0x50]
LAB_006ffbc8:
006FFBC8  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FFBCB  88 0F                     MOV byte ptr [EDI],CL
LAB_006ffbcd:
006FFBCD  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFBD0  83 C3 02                  ADD EBX,0x2
006FFBD3  47                        INC EDI
006FFBD4  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FFBD7  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FFBDA  43                        INC EBX
006FFBDB  D1 EA                     SHR EDX,0x1
006FFBDD  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FFBE0  75 0C                     JNZ 0x006ffbee
006FFBE2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFBE5  BA 80 00 00 00            MOV EDX,0x80
006FFBEA  41                        INC ECX
006FFBEB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ffbee:
006FFBEE  46                        INC ESI
006FFBEF  48                        DEC EAX
006FFBF0  85 C0                     TEST EAX,EAX
006FFBF2  B9 04 00 00 00            MOV ECX,0x4
006FFBF7  7E 17                     JLE 0x006ffc10
006FFBF9  46                        INC ESI
006FFBFA  33 C9                     XOR ECX,ECX
006FFBFC  48                        DEC EAX
006FFBFD  85 C0                     TEST EAX,EAX
006FFBFF  7E 0F                     JLE 0x006ffc10
006FFC01  46                        INC ESI
006FFC02  48                        DEC EAX
006FFC03  85 C0                     TEST EAX,EAX
006FFC05  B9 01 00 00 00            MOV ECX,0x1
006FFC0A  0F 8F 2B FF FF FF         JG 0x006ffb3b
LAB_006ffc10:
006FFC10  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006ffc13:
006FFC13  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_006ffc16:
006FFC16  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006FFC19  85 C0                     TEST EAX,EAX
006FFC1B  7E 6A                     JLE 0x006ffc87
006FFC1D  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FFC20  33 C0                     XOR EAX,EAX
006FFC22  8A 03                     MOV AL,byte ptr [EBX]
006FFC24  8B F0                     MOV ESI,EAX
006FFC26  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006FFC29  81 E6 80 00 00 00         AND ESI,0x80
006FFC2F  43                        INC EBX
006FFC30  85 F6                     TEST ESI,ESI
006FFC32  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FFC35  74 42                     JZ 0x006ffc79
006FFC37  83 E0 3F                  AND EAX,0x3f
006FFC3A  EB 40                     JMP 0x006ffc7c
LAB_006ffc3c:
006FFC3C  48                        DEC EAX
006FFC3D  78 D7                     JS 0x006ffc16
006FFC3F  8D 70 01                  LEA ESI,[EAX + 0x1]
LAB_006ffc42:
006FFC42  8B C1                     MOV EAX,ECX
006FFC44  83 E0 01                  AND EAX,0x1
006FFC47  3C 01                     CMP AL,0x1
006FFC49  75 21                     JNZ 0x006ffc6c
006FFC4B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006FFC4E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFC51  47                        INC EDI
006FFC52  40                        INC EAX
006FFC53  83 C3 02                  ADD EBX,0x2
006FFC56  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006FFC59  D1 EA                     SHR EDX,0x1
006FFC5B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FFC5E  75 0C                     JNZ 0x006ffc6c
006FFC60  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FFC63  BA 80 00 00 00            MOV EDX,0x80
006FFC68  40                        INC EAX
006FFC69  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006ffc6c:
006FFC6C  41                        INC ECX
006FFC6D  83 F9 04                  CMP ECX,0x4
006FFC70  7E 02                     JLE 0x006ffc74
006FFC72  33 C9                     XOR ECX,ECX
LAB_006ffc74:
006FFC74  4E                        DEC ESI
006FFC75  75 CB                     JNZ 0x006ffc42
006FFC77  EB 9A                     JMP 0x006ffc13
LAB_006ffc79:
006FFC79  83 E0 7F                  AND EAX,0x7f
LAB_006ffc7c:
006FFC7C  3B 45 EC                  CMP EAX,dword ptr [EBP + -0x14]
006FFC7F  0F 8E 55 FB FF FF         JLE 0x006ff7da
006FFC85  EB 02                     JMP 0x006ffc89
LAB_006ffc87:
006FFC87  33 C0                     XOR EAX,EAX
LAB_006ffc89:
006FFC89  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006FFC8C  2B C6                     SUB EAX,ESI
006FFC8E  85 F6                     TEST ESI,ESI
006FFC90  0F 8E 06 04 00 00         JLE 0x0070009c
006FFC96  8A 5D E8                  MOV BL,byte ptr [EBP + -0x18]
006FFC99  F6 C3 80                  TEST BL,0x80
006FFC9C  0F 84 FA 03 00 00         JZ 0x0070009c
006FFCA2  F6 C3 40                  TEST BL,0x40
006FFCA5  0F 84 EB 01 00 00         JZ 0x006ffe96
006FFCAB  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FFCAE  8B 7D 44                  MOV EDI,dword ptr [EBP + 0x44]
006FFCB1  33 DB                     XOR EBX,EBX
006FFCB3  8A 1E                     MOV BL,byte ptr [ESI]
006FFCB5  8B F3                     MOV ESI,EBX
006FFCB7  33 DB                     XOR EBX,EBX
006FFCB9  8A 1C 3E                  MOV BL,byte ptr [ESI + EDI*0x1]
006FFCBC  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FFCBF  47                        INC EDI
006FFCC0  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006FFCC3  85 C9                     TEST ECX,ECX
006FFCC5  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FFCC8  0F 8E F7 00 00 00         JLE 0x006ffdc5
006FFCCE  49                        DEC ECX
006FFCCF  83 F9 03                  CMP ECX,0x3
006FFCD2  0F 87 ED 00 00 00         JA 0x006ffdc5
switchD_006ffcd8::switchD:
006FFCD8  FF 24 8D 64 01 70 00      JMP dword ptr [ECX*0x4 + 0x700164]
switchD_006ffcd8::caseD_1:
006FFCDF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFCE2  84 11                     TEST byte ptr [ECX],DL
006FFCE4  75 2A                     JNZ 0x006ffd10
006FFCE6  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FFCE9  33 C9                     XOR ECX,ECX
006FFCEB  66 8B 0E                  MOV CX,word ptr [ESI]
006FFCEE  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FFCF1  3B F1                     CMP ESI,ECX
006FFCF3  77 07                     JA 0x006ffcfc
006FFCF5  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FFCF8  88 1E                     MOV byte ptr [ESI],BL
006FFCFA  EB 17                     JMP 0x006ffd13
LAB_006ffcfc:
006FFCFC  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FFCFF  8B 75 50                  MOV ESI,dword ptr [EBP + 0x50]
006FFD02  33 C9                     XOR ECX,ECX
006FFD04  8A 0F                     MOV CL,byte ptr [EDI]
006FFD06  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006FFD09  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FFD0C  88 0E                     MOV byte ptr [ESI],CL
006FFD0E  EB 06                     JMP 0x006ffd16
LAB_006ffd10:
006FFD10  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_006ffd13:
006FFD13  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006ffd16:
006FFD16  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFD19  83 C3 02                  ADD EBX,0x2
006FFD1C  46                        INC ESI
006FFD1D  47                        INC EDI
006FFD1E  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FFD21  D1 EA                     SHR EDX,0x1
006FFD23  75 0C                     JNZ 0x006ffd31
006FFD25  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFD28  BA 80 00 00 00            MOV EDX,0x80
006FFD2D  41                        INC ECX
006FFD2E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ffd31:
006FFD31  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006FFD34  49                        DEC ECX
006FFD35  85 C9                     TEST ECX,ECX
006FFD37  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006FFD3A  0F 8E 5C 03 00 00         JLE 0x0070009c
006FFD40  EB 06                     JMP 0x006ffd48
switchD_006ffcd8::caseD_2:
006FFD42  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FFD45  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006ffd48:
006FFD48  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006FFD4B  49                        DEC ECX
006FFD4C  85 C9                     TEST ECX,ECX
006FFD4E  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006FFD51  0F 8E 45 03 00 00         JLE 0x0070009c
006FFD57  EB 06                     JMP 0x006ffd5f
switchD_006ffcd8::caseD_3:
006FFD59  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FFD5C  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006ffd5f:
006FFD5F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFD62  84 11                     TEST byte ptr [ECX],DL
006FFD64  75 20                     JNZ 0x006ffd86
006FFD66  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFD69  33 C9                     XOR ECX,ECX
006FFD6B  66 8B 0B                  MOV CX,word ptr [EBX]
006FFD6E  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FFD71  3B D9                     CMP EBX,ECX
006FFD73  77 05                     JA 0x006ffd7a
006FFD75  8A 4D E4                  MOV CL,byte ptr [EBP + -0x1c]
006FFD78  EB 0A                     JMP 0x006ffd84
LAB_006ffd7a:
006FFD7A  8B 5D 50                  MOV EBX,dword ptr [EBP + 0x50]
006FFD7D  33 C9                     XOR ECX,ECX
006FFD7F  8A 0F                     MOV CL,byte ptr [EDI]
006FFD81  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006ffd84:
006FFD84  88 0E                     MOV byte ptr [ESI],CL
LAB_006ffd86:
006FFD86  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFD89  83 C3 02                  ADD EBX,0x2
006FFD8C  46                        INC ESI
006FFD8D  47                        INC EDI
006FFD8E  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FFD91  D1 EA                     SHR EDX,0x1
006FFD93  75 0C                     JNZ 0x006ffda1
006FFD95  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFD98  BA 80 00 00 00            MOV EDX,0x80
006FFD9D  41                        INC ECX
006FFD9E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ffda1:
006FFDA1  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006FFDA4  49                        DEC ECX
006FFDA5  85 C9                     TEST ECX,ECX
006FFDA7  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006FFDAA  0F 8E EC 02 00 00         JLE 0x0070009c
006FFDB0  49                        DEC ECX
006FFDB1  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006FFDB4  EB 15                     JMP 0x006ffdcb
switchD_006ffcd8::caseD_4:
006FFDB6  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006FFDB9  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FFDBC  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FFDBF  49                        DEC ECX
006FFDC0  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006FFDC3  EB 06                     JMP 0x006ffdcb
LAB_006ffdc5:
006FFDC5  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FFDC8  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
switchD_006ffcd8::default:
006FFDCB  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006FFDCE  85 C9                     TEST ECX,ECX
006FFDD0  0F 8E C6 02 00 00         JLE 0x0070009c
006FFDD6  49                        DEC ECX
006FFDD7  85 C9                     TEST ECX,ECX
006FFDD9  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006FFDDC  0F 8E BA 02 00 00         JLE 0x0070009c
LAB_006ffde2:
006FFDE2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFDE5  84 11                     TEST byte ptr [ECX],DL
006FFDE7  75 20                     JNZ 0x006ffe09
006FFDE9  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFDEC  33 C9                     XOR ECX,ECX
006FFDEE  66 8B 0B                  MOV CX,word ptr [EBX]
006FFDF1  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FFDF4  3B D9                     CMP EBX,ECX
006FFDF6  77 05                     JA 0x006ffdfd
006FFDF8  8A 4D E4                  MOV CL,byte ptr [EBP + -0x1c]
006FFDFB  EB 0A                     JMP 0x006ffe07
LAB_006ffdfd:
006FFDFD  8B 5D 50                  MOV EBX,dword ptr [EBP + 0x50]
006FFE00  33 C9                     XOR ECX,ECX
006FFE02  8A 0F                     MOV CL,byte ptr [EDI]
006FFE04  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006ffe07:
006FFE07  88 0E                     MOV byte ptr [ESI],CL
LAB_006ffe09:
006FFE09  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFE0C  83 C3 02                  ADD EBX,0x2
006FFE0F  46                        INC ESI
006FFE10  47                        INC EDI
006FFE11  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FFE14  D1 EA                     SHR EDX,0x1
006FFE16  75 0C                     JNZ 0x006ffe24
006FFE18  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFE1B  BA 80 00 00 00            MOV EDX,0x80
006FFE20  41                        INC ECX
006FFE21  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ffe24:
006FFE24  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006FFE27  83 E9 02                  SUB ECX,0x2
006FFE2A  85 C9                     TEST ECX,ECX
006FFE2C  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006FFE2F  0F 8E 67 02 00 00         JLE 0x0070009c
006FFE35  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFE38  84 11                     TEST byte ptr [ECX],DL
006FFE3A  75 20                     JNZ 0x006ffe5c
006FFE3C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFE3F  33 C9                     XOR ECX,ECX
006FFE41  66 8B 0B                  MOV CX,word ptr [EBX]
006FFE44  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FFE47  3B D9                     CMP EBX,ECX
006FFE49  77 05                     JA 0x006ffe50
006FFE4B  8A 4D E4                  MOV CL,byte ptr [EBP + -0x1c]
006FFE4E  EB 0A                     JMP 0x006ffe5a
LAB_006ffe50:
006FFE50  8B 5D 50                  MOV EBX,dword ptr [EBP + 0x50]
006FFE53  33 C9                     XOR ECX,ECX
006FFE55  8A 0F                     MOV CL,byte ptr [EDI]
006FFE57  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006ffe5a:
006FFE5A  88 0E                     MOV byte ptr [ESI],CL
LAB_006ffe5c:
006FFE5C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFE5F  83 C3 02                  ADD EBX,0x2
006FFE62  46                        INC ESI
006FFE63  47                        INC EDI
006FFE64  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FFE67  D1 EA                     SHR EDX,0x1
006FFE69  75 0C                     JNZ 0x006ffe77
006FFE6B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFE6E  BA 80 00 00 00            MOV EDX,0x80
006FFE73  41                        INC ECX
006FFE74  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006ffe77:
006FFE77  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006FFE7A  83 E9 02                  SUB ECX,0x2
006FFE7D  85 C9                     TEST ECX,ECX
006FFE7F  0F 8E 17 02 00 00         JLE 0x0070009c
006FFE85  49                        DEC ECX
006FFE86  85 C9                     TEST ECX,ECX
006FFE88  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006FFE8B  0F 8F 51 FF FF FF         JG 0x006ffde2
006FFE91  E9 06 02 00 00            JMP 0x0070009c
LAB_006ffe96:
006FFE96  85 C9                     TEST ECX,ECX
006FFE98  0F 8E 08 01 00 00         JLE 0x006fffa6
006FFE9E  49                        DEC ECX
006FFE9F  83 F9 03                  CMP ECX,0x3
006FFEA2  0F 87 FE 00 00 00         JA 0x006fffa6
switchD_006ffea8::switchD:
006FFEA8  FF 24 8D 74 01 70 00      JMP dword ptr [ECX*0x4 + 0x700174]
switchD_006ffea8::caseD_1:
006FFEAF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFEB2  84 11                     TEST byte ptr [ECX],DL
006FFEB4  75 2A                     JNZ 0x006ffee0
006FFEB6  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FFEB9  33 C9                     XOR ECX,ECX
006FFEBB  66 8B 0E                  MOV CX,word ptr [ESI]
006FFEBE  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FFEC1  3B F1                     CMP ESI,ECX
006FFEC3  77 0C                     JA 0x006ffed1
006FFEC5  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FFEC8  33 C9                     XOR ECX,ECX
006FFECA  8A 0E                     MOV CL,byte ptr [ESI]
006FFECC  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FFECF  EB 0A                     JMP 0x006ffedb
LAB_006ffed1:
006FFED1  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FFED4  33 C9                     XOR ECX,ECX
006FFED6  8A 0E                     MOV CL,byte ptr [ESI]
006FFED8  8B 75 50                  MOV ESI,dword ptr [EBP + 0x50]
LAB_006ffedb:
006FFEDB  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006FFEDE  88 0F                     MOV byte ptr [EDI],CL
LAB_006ffee0:
006FFEE0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FFEE3  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FFEE6  83 C1 02                  ADD ECX,0x2
006FFEE9  47                        INC EDI
006FFEEA  46                        INC ESI
006FFEEB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FFEEE  D1 EA                     SHR EDX,0x1
006FFEF0  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FFEF3  75 0C                     JNZ 0x006fff01
006FFEF5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFEF8  BA 80 00 00 00            MOV EDX,0x80
006FFEFD  41                        INC ECX
006FFEFE  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fff01:
006FFF01  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FFF04  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006FFF07  41                        INC ECX
006FFF08  4E                        DEC ESI
006FFF09  85 F6                     TEST ESI,ESI
006FFF0B  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FFF0E  0F 8E 88 01 00 00         JLE 0x0070009c
006FFF14  EB 03                     JMP 0x006fff19
switchD_006ffea8::caseD_2:
006FFF16  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_006fff19:
006FFF19  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FFF1C  41                        INC ECX
006FFF1D  4E                        DEC ESI
006FFF1E  85 F6                     TEST ESI,ESI
006FFF20  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FFF23  0F 8E 73 01 00 00         JLE 0x0070009c
006FFF29  EB 03                     JMP 0x006fff2e
switchD_006ffea8::caseD_3:
006FFF2B  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_006fff2e:
006FFF2E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFF31  84 11                     TEST byte ptr [ECX],DL
006FFF33  75 2A                     JNZ 0x006fff5f
006FFF35  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFF38  33 C9                     XOR ECX,ECX
006FFF3A  66 8B 0B                  MOV CX,word ptr [EBX]
006FFF3D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FFF40  3B D9                     CMP EBX,ECX
006FFF42  77 0C                     JA 0x006fff50
006FFF44  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FFF47  33 C9                     XOR ECX,ECX
006FFF49  8A 0B                     MOV CL,byte ptr [EBX]
006FFF4B  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FFF4E  EB 0A                     JMP 0x006fff5a
LAB_006fff50:
006FFF50  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FFF53  33 C9                     XOR ECX,ECX
006FFF55  8A 0B                     MOV CL,byte ptr [EBX]
006FFF57  8B 5D 50                  MOV EBX,dword ptr [EBP + 0x50]
LAB_006fff5a:
006FFF5A  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FFF5D  88 0F                     MOV byte ptr [EDI],CL
LAB_006fff5f:
006FFF5F  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFF62  83 C3 02                  ADD EBX,0x2
006FFF65  47                        INC EDI
006FFF66  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FFF69  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FFF6C  43                        INC EBX
006FFF6D  D1 EA                     SHR EDX,0x1
006FFF6F  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006FFF72  75 0C                     JNZ 0x006fff80
006FFF74  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFF77  BA 80 00 00 00            MOV EDX,0x80
006FFF7C  41                        INC ECX
006FFF7D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fff80:
006FFF80  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FFF83  41                        INC ECX
006FFF84  4E                        DEC ESI
006FFF85  85 F6                     TEST ESI,ESI
006FFF87  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FFF8A  0F 8E 0C 01 00 00         JLE 0x0070009c
006FFF90  8B D9                     MOV EBX,ECX
006FFF92  43                        INC EBX
006FFF93  4E                        DEC ESI
006FFF94  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FFF97  EB 10                     JMP 0x006fffa9
switchD_006ffea8::caseD_4:
006FFF99  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FFF9C  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006FFF9F  43                        INC EBX
006FFFA0  4E                        DEC ESI
006FFFA1  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FFFA4  EB 03                     JMP 0x006fffa9
LAB_006fffa6:
006FFFA6  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
switchD_006ffea8::default:
006FFFA9  85 F6                     TEST ESI,ESI
006FFFAB  0F 8E EB 00 00 00         JLE 0x0070009c
006FFFB1  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FFFB4  41                        INC ECX
006FFFB5  4E                        DEC ESI
006FFFB6  85 F6                     TEST ESI,ESI
006FFFB8  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FFFBB  0F 8E DB 00 00 00         JLE 0x0070009c
LAB_006fffc1:
006FFFC1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FFFC4  84 11                     TEST byte ptr [ECX],DL
006FFFC6  75 2A                     JNZ 0x006ffff2
006FFFC8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFFCB  33 C9                     XOR ECX,ECX
006FFFCD  66 8B 0B                  MOV CX,word ptr [EBX]
006FFFD0  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FFFD3  3B D9                     CMP EBX,ECX
006FFFD5  77 0C                     JA 0x006fffe3
006FFFD7  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FFFDA  33 C9                     XOR ECX,ECX
006FFFDC  8A 0B                     MOV CL,byte ptr [EBX]
006FFFDE  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FFFE1  EB 0A                     JMP 0x006fffed
LAB_006fffe3:
006FFFE3  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FFFE6  33 C9                     XOR ECX,ECX
006FFFE8  8A 0B                     MOV CL,byte ptr [EBX]
006FFFEA  8B 5D 50                  MOV EBX,dword ptr [EBP + 0x50]
LAB_006fffed:
006FFFED  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FFFF0  88 0F                     MOV byte ptr [EDI],CL
LAB_006ffff2:
006FFFF2  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FFFF5  83 C3 02                  ADD EBX,0x2
006FFFF8  47                        INC EDI
006FFFF9  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FFFFC  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FFFFF  43                        INC EBX
00700000  D1 EA                     SHR EDX,0x1
00700002  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00700005  75 0C                     JNZ 0x00700013
00700007  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070000A  BA 80 00 00 00            MOV EDX,0x80
0070000F  41                        INC ECX
00700010  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00700013:
00700013  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00700016  41                        INC ECX
00700017  4E                        DEC ESI
00700018  85 F6                     TEST ESI,ESI
0070001A  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
0070001D  7E 7D                     JLE 0x0070009c
0070001F  41                        INC ECX
00700020  4E                        DEC ESI
00700021  85 F6                     TEST ESI,ESI
00700023  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00700026  7E 74                     JLE 0x0070009c
00700028  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070002B  84 11                     TEST byte ptr [ECX],DL
0070002D  75 2A                     JNZ 0x00700059
0070002F  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00700032  33 C9                     XOR ECX,ECX
00700034  66 8B 0B                  MOV CX,word ptr [EBX]
00700037  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070003A  3B D9                     CMP EBX,ECX
0070003C  77 0C                     JA 0x0070004a
0070003E  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00700041  33 C9                     XOR ECX,ECX
00700043  8A 0B                     MOV CL,byte ptr [EBX]
00700045  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
00700048  EB 0A                     JMP 0x00700054
LAB_0070004a:
0070004A  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0070004D  33 C9                     XOR ECX,ECX
0070004F  8A 0B                     MOV CL,byte ptr [EBX]
00700051  8B 5D 50                  MOV EBX,dword ptr [EBP + 0x50]
LAB_00700054:
00700054  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00700057  88 0F                     MOV byte ptr [EDI],CL
LAB_00700059:
00700059  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070005C  83 C3 02                  ADD EBX,0x2
0070005F  47                        INC EDI
00700060  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00700063  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00700066  43                        INC EBX
00700067  D1 EA                     SHR EDX,0x1
00700069  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0070006C  75 0C                     JNZ 0x0070007a
0070006E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00700071  BA 80 00 00 00            MOV EDX,0x80
00700076  41                        INC ECX
00700077  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0070007a:
0070007A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0070007D  41                        INC ECX
0070007E  4E                        DEC ESI
0070007F  85 F6                     TEST ESI,ESI
00700081  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00700084  7E 16                     JLE 0x0070009c
00700086  41                        INC ECX
00700087  4E                        DEC ESI
00700088  85 F6                     TEST ESI,ESI
0070008A  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
0070008D  7E 0D                     JLE 0x0070009c
0070008F  41                        INC ECX
00700090  4E                        DEC ESI
00700091  85 F6                     TEST ESI,ESI
00700093  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00700096  0F 8F 25 FF FF FF         JG 0x006fffc1
LAB_0070009c:
0070009C  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0070009F  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
007000A2  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
007000A5  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007000A8  2B CF                     SUB ECX,EDI
007000AA  2B CE                     SUB ECX,ESI
007000AC  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
007000AF  3B C1                     CMP EAX,ECX
007000B1  7D 2E                     JGE 0x007000e1
LAB_007000b3:
007000B3  81 E2 C0 00 00 00         AND EDX,0xc0
007000B9  2B C8                     SUB ECX,EAX
007000BB  80 FA 80                  CMP DL,0x80
007000BE  75 02                     JNZ 0x007000c2
007000C0  03 F0                     ADD ESI,EAX
LAB_007000c2:
007000C2  33 D2                     XOR EDX,EDX
007000C4  8A 16                     MOV DL,byte ptr [ESI]
007000C6  8B C2                     MOV EAX,EDX
007000C8  24 80                     AND AL,0x80
007000CA  46                        INC ESI
007000CB  84 C0                     TEST AL,AL
007000CD  8B C2                     MOV EAX,EDX
007000CF  74 09                     JZ 0x007000da
007000D1  83 E0 3F                  AND EAX,0x3f
007000D4  F6 C2 40                  TEST DL,0x40
007000D7  74 01                     JZ 0x007000da
007000D9  46                        INC ESI
LAB_007000da:
007000DA  3B C1                     CMP EAX,ECX
007000DC  7C D5                     JL 0x007000b3
007000DE  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_007000e1:
007000E1  81 E2 C0 00 00 00         AND EDX,0xc0
007000E7  80 FA 80                  CMP DL,0x80
007000EA  75 05                     JNZ 0x007000f1
007000EC  03 F1                     ADD ESI,ECX
007000EE  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_007000f1:
007000F1  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
LAB_007000f4:
007000F4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007000F7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007000FA  8B 5D 48                  MOV EBX,dword ptr [EBP + 0x48]
007000FD  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00700100  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
00700103  03 C1                     ADD EAX,ECX
00700105  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00700108  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0070010B  8B 45 4C                  MOV EAX,dword ptr [EBP + 0x4c]
0070010E  03 F9                     ADD EDI,ECX
00700110  03 D8                     ADD EBX,EAX
00700112  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
00700115  03 F0                     ADD ESI,EAX
00700117  42                        INC EDX
00700118  83 FA 04                  CMP EDX,0x4
0070011B  89 5D 48                  MOV dword ptr [EBP + 0x48],EBX
0070011E  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00700121  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
00700124  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
00700127  7E 05                     JLE 0x0070012e
00700129  33 D2                     XOR EDX,EDX
0070012B  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
LAB_0070012e:
0070012E  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00700131  48                        DEC EAX
00700132  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
00700135  0F 89 8B F5 FF FF         JNS 0x006ff6c6
0070013B  5F                        POP EDI
0070013C  5E                        POP ESI
0070013D  5B                        POP EBX
LAB_0070013e:
0070013E  8B E5                     MOV ESP,EBP
00700140  5D                        POP EBP
00700141  C2 4C 00                  RET 0x4c

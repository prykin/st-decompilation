FUN_006da660:
006DA660  C8 04 00 00               ENTER 0x4,0x0
006DA664  53                        PUSH EBX
006DA665  56                        PUSH ESI
006DA666  57                        PUSH EDI
006DA667  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006DA66A  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006DA66D  2B D2                     SUB EDX,EDX
LAB_006da66f:
006DA66F  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006DA672  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006DA675  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006DA678  8A 16                     MOV DL,byte ptr [ESI]
006DA67A  46                        INC ESI
006DA67B  0A D2                     OR DL,DL
006DA67D  0F 84 22 04 00 00         JZ 0x006daaa5
006DA683  8A 23                     MOV AH,byte ptr [EBX]
006DA685  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006DA688  43                        INC EBX
006DA689  D2 C4                     ROL AH,CL
006DA68B  80 F1 07                  XOR CL,0x7
006DA68E  41                        INC ECX
LAB_006da68f:
006DA68F  F6 C2 80                  TEST DL,0x80
006DA692  0F 84 D0 03 00 00         JZ 0x006daa68
006DA698  F6 C2 40                  TEST DL,0x40
006DA69B  0F 84 9A 01 00 00         JZ 0x006da83b
006DA6A1  8A 06                     MOV AL,byte ptr [ESI]
006DA6A3  80 E2 3F                  AND DL,0x3f
006DA6A6  46                        INC ESI
006DA6A7  29 55 FC                  SUB dword ptr [EBP + -0x4],EDX
006DA6AA  3B D1                     CMP EDX,ECX
006DA6AC  0F 8E FA 00 00 00         JLE 0x006da7ac
006DA6B2  80 FC AA                  CMP AH,0xaa
006DA6B5  74 0C                     JZ 0x006da6c3
006DA6B7  80 FC 55                  CMP AH,0x55
006DA6BA  74 1B                     JZ 0x006da6d7
006DA6BC  FF 24 8D FF AA 6D 00      JMP dword ptr [ECX*0x4 + 0x6daaff]
LAB_006da6c3:
006DA6C3  FF 24 8D B7 AA 6D 00      JMP dword ptr [ECX*0x4 + 0x6daab7]
LAB_006da6d7:
006DA6D7  FF 24 8D DB AA 6D 00      JMP dword ptr [ECX*0x4 + 0x6daadb]
LAB_006da7ac:
006DA7AC  80 FC AA                  CMP AH,0xaa
006DA7AF  74 0C                     JZ 0x006da7bd
006DA7B1  80 FC 55                  CMP AH,0x55
006DA7B4  74 1B                     JZ 0x006da7d1
006DA7B6  FF 24 95 6B AB 6D 00      JMP dword ptr [EDX*0x4 + 0x6dab6b]
LAB_006da7bd:
006DA7BD  FF 24 95 23 AB 6D 00      JMP dword ptr [EDX*0x4 + 0x6dab23]
LAB_006da7d1:
006DA7D1  FF 24 95 47 AB 6D 00      JMP dword ptr [EDX*0x4 + 0x6dab47]
LAB_006da83b:
006DA83B  80 E2 3F                  AND DL,0x3f
006DA83E  29 55 FC                  SUB dword ptr [EBP + -0x4],EDX
006DA841  3B D1                     CMP EDX,ECX
006DA843  0F 8E 63 01 00 00         JLE 0x006da9ac
006DA849  80 FC AA                  CMP AH,0xaa
006DA84C  74 0C                     JZ 0x006da85a
006DA84E  80 FC 55                  CMP AH,0x55
006DA851  74 26                     JZ 0x006da879
006DA853  FF 24 8D D7 AB 6D 00      JMP dword ptr [ECX*0x4 + 0x6dabd7]
LAB_006da85a:
006DA85A  FF 24 8D 8F AB 6D 00      JMP dword ptr [ECX*0x4 + 0x6dab8f]
LAB_006da879:
006DA879  FF 24 8D B3 AB 6D 00      JMP dword ptr [ECX*0x4 + 0x6dabb3]
LAB_006da9ac:
006DA9AC  80 FC AA                  CMP AH,0xaa
006DA9AF  74 0C                     JZ 0x006da9bd
006DA9B1  80 FC 55                  CMP AH,0x55
006DA9B4  74 26                     JZ 0x006da9dc
006DA9B6  FF 24 95 43 AC 6D 00      JMP dword ptr [EDX*0x4 + 0x6dac43]
LAB_006da9bd:
006DA9BD  FF 24 95 FB AB 6D 00      JMP dword ptr [EDX*0x4 + 0x6dabfb]
LAB_006da9dc:
006DA9DC  FF 24 95 1F AC 6D 00      JMP dword ptr [EDX*0x4 + 0x6dac1f]
LAB_006daa68:
006DAA68  29 55 FC                  SUB dword ptr [EBP + -0x4],EDX
006DAA6B  03 FA                     ADD EDI,EDX
006DAA6D  49                        DEC ECX
006DAA6E  80 F1 07                  XOR CL,0x7
006DAA71  03 CA                     ADD ECX,EDX
006DAA73  8B D1                     MOV EDX,ECX
006DAA75  C1 EA 03                  SHR EDX,0x3
006DAA78  83 E1 07                  AND ECX,0x7
006DAA7B  8A 24 13                  MOV AH,byte ptr [EBX + EDX*0x1]
006DAA7E  03 DA                     ADD EBX,EDX
006DAA80  D2 C4                     ROL AH,CL
006DAA82  80 F1 07                  XOR CL,0x7
006DAA85  41                        INC ECX
006DAA86  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
006DAA8A  7E 08                     JLE 0x006daa94
006DAA8C  8A 16                     MOV DL,byte ptr [ESI]
006DAA8E  46                        INC ESI
006DAA8F  E9 FB FB FF FF            JMP 0x006da68f
LAB_006daa94:
006DAA94  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006DAA97  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006DAA9A  03 5D 18                  ADD EBX,dword ptr [EBP + 0x18]
006DAA9D  2B 7D 20                  SUB EDI,dword ptr [EBP + 0x20]
006DAAA0  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
006DAAA3  EB 03                     JMP 0x006daaa8
LAB_006daaa5:
006DAAA5  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
LAB_006daaa8:
006DAAA8  FF 4D 24                  DEC dword ptr [EBP + 0x24]
006DAAAB  7E 05                     JLE 0x006daab2
006DAAAD  E9 BD FB FF FF            JMP 0x006da66f
LAB_006daab2:
006DAAB2  E9 B0 01 00 00            JMP 0x006dac67
LAB_006dac67:
006DAC67  5F                        POP EDI
006DAC68  5E                        POP ESI
006DAC69  5B                        POP EBX
006DAC6A  C9                        LEAVE
006DAC6B  C3                        RET

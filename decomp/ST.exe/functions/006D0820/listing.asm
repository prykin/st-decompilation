FUN_006d0820:
006D0820  55                        PUSH EBP
006D0821  8B EC                     MOV EBP,ESP
006D0823  83 EC 20                  SUB ESP,0x20
006D0826  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D0829  53                        PUSH EBX
006D082A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006D082D  56                        PUSH ESI
006D082E  57                        PUSH EDI
006D082F  33 FF                     XOR EDI,EDI
006D0831  3B C7                     CMP EAX,EDI
006D0833  75 09                     JNZ 0x006d083e
006D0835  53                        PUSH EBX
006D0836  E8 65 47 FE FF            CALL 0x006b4fa0
006D083B  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_006d083e:
006D083E  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006D0841  33 F6                     XOR ESI,ESI
006D0843  66 8B 73 0E               MOV SI,word ptr [EBX + 0xe]
006D0847  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006D084A  0F AF F0                  IMUL ESI,EAX
006D084D  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006D0850  83 C6 1F                  ADD ESI,0x1f
006D0853  C1 EE 03                  SHR ESI,0x3
006D0856  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
006D085C  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006D085F  F7 DE                     NEG ESI
006D0861  3B C7                     CMP EAX,EDI
006D0863  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
006D0866  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
006D0869  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006D086C  7D 0A                     JGE 0x006d0878
006D086E  F7 D8                     NEG EAX
006D0870  F7 DE                     NEG ESI
006D0872  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006D0875  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
LAB_006d0878:
006D0878  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006D087B  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D087E  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006D0881  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006D0884  8D 4D E0                  LEA ECX,[EBP + -0x20]
006D0887  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006D088A  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006D088D  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006D0890  51                        PUSH ECX
006D0891  8D 55 F0                  LEA EDX,[EBP + -0x10]
006D0894  8D 4D F0                  LEA ECX,[EBP + -0x10]
006D0897  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D089A  E8 C1 FB FD FF            CALL 0x006b0460
006D089F  85 C0                     TEST EAX,EAX
006D08A1  0F 84 6D 01 00 00         JZ 0x006d0a14
006D08A7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006D08AA  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006D08AD  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D08B0  8B F8                     MOV EDI,EAX
006D08B2  2B F9                     SUB EDI,ECX
006D08B4  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D08B7  03 FA                     ADD EDI,EDX
006D08B9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D08BC  0F AF 7D 0C               IMUL EDI,dword ptr [EBP + 0xc]
006D08C0  2B F9                     SUB EDI,ECX
006D08C2  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D08C5  03 F9                     ADD EDI,ECX
006D08C7  03 FA                     ADD EDI,EDX
006D08C9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D08CC  03 FA                     ADD EDI,EDX
006D08CE  85 F6                     TEST ESI,ESI
006D08D0  7C 0A                     JL 0x006d08dc
006D08D2  0F AF C6                  IMUL EAX,ESI
006D08D5  03 45 1C                  ADD EAX,dword ptr [EBP + 0x1c]
006D08D8  8B F0                     MOV ESI,EAX
006D08DA  EB 0E                     JMP 0x006d08ea
LAB_006d08dc:
006D08DC  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006D08DF  2B D0                     SUB EDX,EAX
006D08E1  4A                        DEC EDX
006D08E2  0F AF D6                  IMUL EDX,ESI
006D08E5  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006D08E8  2B F2                     SUB ESI,EDX
LAB_006d08ea:
006D08EA  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
006D08ED  8D 34 4E                  LEA ESI,[ESI + ECX*0x2]
006D08F0  83 F8 03                  CMP EAX,0x3
006D08F3  0F 85 93 00 00 00         JNZ 0x006d098c
006D08F9  81 7B 28 00 F8 00 00      CMP dword ptr [EBX + 0x28],0xf800
006D0900  0F 85 86 00 00 00         JNZ 0x006d098c
006D0906  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D0909  8B C8                     MOV ECX,EAX
006D090B  48                        DEC EAX
006D090C  85 C9                     TEST ECX,ECX
006D090E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D0911  0F 8E FD 00 00 00         JLE 0x006d0a14
006D0917  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006D091A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_006d091d:
006D091D  85 C0                     TEST EAX,EAX
006D091F  7E 44                     JLE 0x006d0965
006D0921  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_006d0924:
006D0924  33 C9                     XOR ECX,ECX
006D0926  33 C0                     XOR EAX,EAX
006D0928  66 8B 0E                  MOV CX,word ptr [ESI]
006D092B  83 C6 02                  ADD ESI,0x2
006D092E  81 F9 00 80 00 00         CMP ECX,0x8000
006D0934  8A 04 19                  MOV AL,byte ptr [ECX + EBX*0x1]
006D0937  7E 0B                     JLE 0x006d0944
006D0939  85 C0                     TEST EAX,EAX
006D093B  75 19                     JNZ 0x006d0956
006D093D  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006D0940  51                        PUSH ECX
006D0941  52                        PUSH EDX
006D0942  EB 0C                     JMP 0x006d0950
LAB_006d0944:
006D0944  3D FF 00 00 00            CMP EAX,0xff
006D0949  75 0B                     JNZ 0x006d0956
006D094B  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006D094E  51                        PUSH ECX
006D094F  50                        PUSH EAX
LAB_006d0950:
006D0950  53                        PUSH EBX
006D0951  E8 7A FE FF FF            CALL 0x006d07d0
LAB_006d0956:
006D0956  88 07                     MOV byte ptr [EDI],AL
006D0958  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D095B  47                        INC EDI
006D095C  48                        DEC EAX
006D095D  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006D0960  75 C2                     JNZ 0x006d0924
006D0962  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_006d0965:
006D0965  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D0968  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006D096B  2B C8                     SUB ECX,EAX
006D096D  03 F9                     ADD EDI,ECX
006D096F  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D0972  2B CA                     SUB ECX,EDX
006D0974  03 F1                     ADD ESI,ECX
006D0976  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D0979  8B D1                     MOV EDX,ECX
006D097B  49                        DEC ECX
006D097C  85 D2                     TEST EDX,EDX
006D097E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006D0981  7F 9A                     JG 0x006d091d
006D0983  5F                        POP EDI
006D0984  5E                        POP ESI
006D0985  5B                        POP EBX
006D0986  8B E5                     MOV ESP,EBP
006D0988  5D                        POP EBP
006D0989  C2 30 00                  RET 0x30
LAB_006d098c:
006D098C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D098F  8B C8                     MOV ECX,EAX
006D0991  48                        DEC EAX
006D0992  85 C9                     TEST ECX,ECX
006D0994  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D0997  7E 7B                     JLE 0x006d0a14
006D0999  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006D099C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_006d099f:
006D099F  85 C0                     TEST EAX,EAX
006D09A1  7E 53                     JLE 0x006d09f6
006D09A3  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_006d09a6:
006D09A6  33 C0                     XOR EAX,EAX
006D09A8  66 8B 06                  MOV AX,word ptr [ESI]
006D09AB  83 C6 02                  ADD ESI,0x2
006D09AE  8B C8                     MOV ECX,EAX
006D09B0  83 E0 1F                  AND EAX,0x1f
006D09B3  81 E1 E0 7F 00 00         AND ECX,0x7fe0
006D09B9  D1 E1                     SHL ECX,0x1
006D09BB  0B C8                     OR ECX,EAX
006D09BD  33 C0                     XOR EAX,EAX
006D09BF  81 F9 00 80 00 00         CMP ECX,0x8000
006D09C5  8A 04 19                  MOV AL,byte ptr [ECX + EBX*0x1]
006D09C8  7E 0B                     JLE 0x006d09d5
006D09CA  85 C0                     TEST EAX,EAX
006D09CC  75 19                     JNZ 0x006d09e7
006D09CE  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006D09D1  51                        PUSH ECX
006D09D2  52                        PUSH EDX
006D09D3  EB 0C                     JMP 0x006d09e1
LAB_006d09d5:
006D09D5  3D FF 00 00 00            CMP EAX,0xff
006D09DA  75 0B                     JNZ 0x006d09e7
006D09DC  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006D09DF  51                        PUSH ECX
006D09E0  50                        PUSH EAX
LAB_006d09e1:
006D09E1  53                        PUSH EBX
006D09E2  E8 E9 FD FF FF            CALL 0x006d07d0
LAB_006d09e7:
006D09E7  88 07                     MOV byte ptr [EDI],AL
006D09E9  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D09EC  47                        INC EDI
006D09ED  48                        DEC EAX
006D09EE  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006D09F1  75 B3                     JNZ 0x006d09a6
006D09F3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_006d09f6:
006D09F6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D09F9  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006D09FC  2B C8                     SUB ECX,EAX
006D09FE  03 F9                     ADD EDI,ECX
006D0A00  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D0A03  2B CA                     SUB ECX,EDX
006D0A05  03 F1                     ADD ESI,ECX
006D0A07  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D0A0A  8B D1                     MOV EDX,ECX
006D0A0C  49                        DEC ECX
006D0A0D  85 D2                     TEST EDX,EDX
006D0A0F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006D0A12  7F 8B                     JG 0x006d099f
LAB_006d0a14:
006D0A14  5F                        POP EDI
006D0A15  5E                        POP ESI
006D0A16  5B                        POP EBX
006D0A17  8B E5                     MOV ESP,EBP
006D0A19  5D                        POP EBP
006D0A1A  C2 30 00                  RET 0x30

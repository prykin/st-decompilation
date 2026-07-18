FUN_006c5000:
006C5000  55                        PUSH EBP
006C5001  8B EC                     MOV EBP,ESP
006C5003  6A FF                     PUSH -0x1
006C5005  68 A0 D9 79 00            PUSH 0x79d9a0
006C500A  68 64 D9 72 00            PUSH 0x72d964
006C500F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006C5015  50                        PUSH EAX
006C5016  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006C501D  83 EC 28                  SUB ESP,0x28
006C5020  53                        PUSH EBX
006C5021  56                        PUSH ESI
006C5022  57                        PUSH EDI
006C5023  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006C5026  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
006C502D  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006C5030  85 C0                     TEST EAX,EAX
006C5032  0F 8E BC 01 00 00         JLE 0x006c51f4
006C5038  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006C503B  85 C0                     TEST EAX,EAX
006C503D  0F 8E B1 01 00 00         JLE 0x006c51f4
006C5043  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C5046  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006C5049  25 00 11 00 00            AND EAX,0x1100
006C504E  3D 00 01 00 00            CMP EAX,0x100
006C5053  0F 84 9B 01 00 00         JZ 0x006c51f4
006C5059  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006C505C  85 C0                     TEST EAX,EAX
006C505E  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006C5061  75 09                     JNZ 0x006c506c
006C5063  57                        PUSH EDI
006C5064  E8 37 FF FE FF            CALL 0x006b4fa0
006C5069  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_006c506c:
006C506C  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006C5073  74 0D                     JZ 0x006c5082
006C5075  8D 8E F0 04 00 00         LEA ECX,[ESI + 0x4f0]
006C507B  51                        PUSH ECX
006C507C  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006c5082:
006C5082  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006C5085  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006C5088  03 D3                     ADD EDX,EBX
006C508A  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006C508D  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006C5090  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
006C5093  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006C5096  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C5099  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006C509C  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C509F  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006C50A2  8D 86 84 04 00 00         LEA EAX,[ESI + 0x484]
006C50A8  50                        PUSH EAX
006C50A9  8D 4D CC                  LEA ECX,[EBP + -0x34]
006C50AC  51                        PUSH ECX
006C50AD  8D 55 CC                  LEA EDX,[EBP + -0x34]
006C50B0  52                        PUSH EDX
006C50B1  E8 FA AD 00 00            CALL 0x006cfeb0
006C50B6  83 C4 0C                  ADD ESP,0xc
006C50B9  85 C0                     TEST EAX,EAX
006C50BB  0F 84 ED 00 00 00         JZ 0x006c51ae
006C50C1  56                        PUSH ESI
006C50C2  E8 E9 67 FF FF            CALL 0x006bb8b0
006C50C7  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006C50CA  85 C0                     TEST EAX,EAX
006C50CC  0F 85 C7 00 00 00         JNZ 0x006c5199
006C50D2  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006C50D5  2B 46 10                  SUB EAX,dword ptr [ESI + 0x10]
006C50D8  2B C3                     SUB EAX,EBX
006C50DA  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C50DD  03 D0                     ADD EDX,EAX
006C50DF  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006C50E2  2B 4E 14                  SUB ECX,dword ptr [ESI + 0x14]
006C50E5  2B 4D 10                  SUB ECX,dword ptr [EBP + 0x10]
006C50E8  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006C50EB  03 D9                     ADD EBX,ECX
006C50ED  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
006C50F0  85 C9                     TEST ECX,ECX
006C50F2  7C 1D                     JL 0x006c5111
006C50F4  33 C0                     XOR EAX,EAX
006C50F6  66 8B 47 0E               MOV AX,word ptr [EDI + 0xe]
006C50FA  0F AF 47 04               IMUL EAX,dword ptr [EDI + 0x4]
006C50FE  83 C0 1F                  ADD EAX,0x1f
006C5101  C1 E8 03                  SHR EAX,0x3
006C5104  25 FC FF FF 1F            AND EAX,0x1ffffffc
006C5109  2B CB                     SUB ECX,EBX
006C510B  49                        DEC ECX
006C510C  0F AF C8                  IMUL ECX,EAX
006C510F  EB 1A                     JMP 0x006c512b
LAB_006c5111:
006C5111  33 C0                     XOR EAX,EAX
006C5113  66 8B 47 0E               MOV AX,word ptr [EDI + 0xe]
006C5117  0F AF 47 04               IMUL EAX,dword ptr [EDI + 0x4]
006C511B  83 C0 1F                  ADD EAX,0x1f
006C511E  C1 E8 03                  SHR EAX,0x3
006C5121  25 FC FF FF 1F            AND EAX,0x1ffffffc
006C5126  8B C8                     MOV ECX,EAX
006C5128  0F AF CB                  IMUL ECX,EBX
LAB_006c512b:
006C512B  03 CA                     ADD ECX,EDX
006C512D  8B BE 78 04 00 00         MOV EDI,dword ptr [ESI + 0x478]
006C5133  8B D7                     MOV EDX,EDI
006C5135  0F AF 55 D0               IMUL EDX,dword ptr [EBP + -0x30]
006C5139  03 55 CC                  ADD EDX,dword ptr [EBP + -0x34]
006C513C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006C5143  6A FF                     PUSH -0x1
006C5145  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006C5148  53                        PUSH EBX
006C5149  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
006C514C  53                        PUSH EBX
006C514D  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006C5150  53                        PUSH EBX
006C5151  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
006C5154  53                        PUSH EBX
006C5155  F7 D8                     NEG EAX
006C5157  50                        PUSH EAX
006C5158  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006C515B  03 C8                     ADD ECX,EAX
006C515D  51                        PUSH ECX
006C515E  57                        PUSH EDI
006C515F  8B 8E 74 04 00 00         MOV ECX,dword ptr [ESI + 0x474]
006C5165  03 CA                     ADD ECX,EDX
006C5167  51                        PUSH ECX
006C5168  E8 E3 BD 00 00            CALL 0x006d0f50
006C516D  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C5174  EB 1A                     JMP 0x006c5190
LAB_006c5190:
006C5190  56                        PUSH ESI
006C5191  E8 EA 67 FF FF            CALL 0x006bb980
006C5196  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
LAB_006c5199:
006C5199  3D A0 00 76 88            CMP EAX,0x887600a0
006C519E  74 07                     JZ 0x006c51a7
006C51A0  3D AE 01 76 88            CMP EAX,0x887601ae
006C51A5  75 07                     JNZ 0x006c51ae
LAB_006c51a7:
006C51A7  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
LAB_006c51ae:
006C51AE  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006C51B5  74 0D                     JZ 0x006c51c4
006C51B7  81 C6 F0 04 00 00         ADD ESI,0x4f0
006C51BD  56                        PUSH ESI
006C51BE  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006c51c4:
006C51C4  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
006C51C7  85 F6                     TEST ESI,ESI
006C51C9  74 29                     JZ 0x006c51f4
006C51CB  6A 3A                     PUSH 0x3a
006C51CD  68 5C DF 7E 00            PUSH 0x7edf5c
006C51D2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C51D8  52                        PUSH EDX
006C51D9  56                        PUSH ESI
006C51DA  E8 61 0C FE FF            CALL 0x006a5e40
006C51DF  8B C6                     MOV EAX,ESI
006C51E1  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C51E4  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C51EB  5F                        POP EDI
006C51EC  5E                        POP ESI
006C51ED  5B                        POP EBX
006C51EE  8B E5                     MOV ESP,EBP
006C51F0  5D                        POP EBP
006C51F1  C2 2C 00                  RET 0x2c
LAB_006c51f4:
006C51F4  33 C0                     XOR EAX,EAX
006C51F6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C51F9  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C5200  5F                        POP EDI
006C5201  5E                        POP ESI
006C5202  5B                        POP EBX
006C5203  8B E5                     MOV ESP,EBP
006C5205  5D                        POP EBP
006C5206  C2 2C 00                  RET 0x2c

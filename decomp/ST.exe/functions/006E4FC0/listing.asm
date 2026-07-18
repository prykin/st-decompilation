FUN_006e4fc0:
006E4FC0  55                        PUSH EBP
006E4FC1  8B EC                     MOV EBP,ESP
006E4FC3  83 EC 68                  SUB ESP,0x68
006E4FC6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E4FCB  56                        PUSH ESI
006E4FCC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006E4FCF  57                        PUSH EDI
006E4FD0  8D 55 9C                  LEA EDX,[EBP + -0x64]
006E4FD3  8D 4D 98                  LEA ECX,[EBP + -0x68]
006E4FD6  6A 00                     PUSH 0x0
006E4FD8  52                        PUSH EDX
006E4FD9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006E4FE0  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
006E4FE3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E4FE9  E8 02 88 04 00            CALL 0x0072d7f0
006E4FEE  8B F0                     MOV ESI,EAX
006E4FF0  83 C4 08                  ADD ESP,0x8
006E4FF3  85 F6                     TEST ESI,ESI
006E4FF5  0F 85 00 01 00 00         JNZ 0x006e50fb
006E4FFB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006E4FFE  85 C0                     TEST EAX,EAX
006E5000  0F 85 E3 00 00 00         JNZ 0x006e50e9
006E5006  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_006e5009:
006E5009  6A 01                     PUSH 0x1
006E500B  6A 00                     PUSH 0x0
006E500D  6A 00                     PUSH 0x0
006E500F  8D 45 DC                  LEA EAX,[EBP + -0x24]
006E5012  6A 00                     PUSH 0x0
006E5014  50                        PUSH EAX
006E5015  FF 15 FC BD 85 00         CALL dword ptr [0x0085bdfc]
006E501B  85 C0                     TEST EAX,EAX
006E501D  74 23                     JZ 0x006e5042
006E501F  83 7D E0 12               CMP dword ptr [EBP + -0x20],0x12
006E5023  75 07                     JNZ 0x006e502c
006E5025  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_006e502c:
006E502C  8D 4D DC                  LEA ECX,[EBP + -0x24]
006E502F  51                        PUSH ECX
006E5030  FF 15 F4 BD 85 00         CALL dword ptr [0x0085bdf4]
006E5036  8D 55 DC                  LEA EDX,[EBP + -0x24]
006E5039  52                        PUSH EDX
006E503A  FF 15 F8 BD 85 00         CALL dword ptr [0x0085bdf8]
006E5040  EB 78                     JMP 0x006e50ba
LAB_006e5042:
006E5042  A1 7C 6D 85 00            MOV EAX,[0x00856d7c]
006E5047  85 C0                     TEST EAX,EAX
006E5049  74 11                     JZ 0x006e505c
006E504B  A1 74 6D 85 00            MOV EAX,[0x00856d74]
006E5050  85 C0                     TEST EAX,EAX
006E5052  75 08                     JNZ 0x006e505c
006E5054  FF 15 6C BE 85 00         CALL dword ptr [0x0085be6c]
006E505A  EB 5E                     JMP 0x006e50ba
LAB_006e505c:
006E505C  6A 13                     PUSH 0x13
006E505E  FF 15 F0 BD 85 00         CALL dword ptr [0x0085bdf0]
006E5064  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
006E5067  85 C0                     TEST EAX,EAX
006E5069  75 4F                     JNZ 0x006e50ba
006E506B  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
006E5071  8B 7E 34                  MOV EDI,dword ptr [ESI + 0x34]
006E5074  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006E5077  2B F8                     SUB EDI,EAX
006E5079  03 F9                     ADD EDI,ECX
006E507B  85 FF                     TEST EDI,EDI
006E507D  7E 14                     JLE 0x006e5093
006E507F  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
006E5082  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006E5085  85 C9                     TEST ECX,ECX
006E5087  75 08                     JNZ 0x006e5091
006E5089  8B 16                     MOV EDX,dword ptr [ESI]
006E508B  57                        PUSH EDI
006E508C  8B CE                     MOV ECX,ESI
006E508E  FF 52 10                  CALL dword ptr [EDX + 0x10]
LAB_006e5091:
006E5091  85 FF                     TEST EDI,EDI
LAB_006e5093:
006E5093  7D 0E                     JGE 0x006e50a3
006E5095  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006E5098  99                        CDQ
006E5099  2B C2                     SUB EAX,EDX
006E509B  D1 F8                     SAR EAX,0x1
006E509D  F7 D8                     NEG EAX
006E509F  3B F8                     CMP EDI,EAX
006E50A1  7F 02                     JG 0x006e50a5
LAB_006e50a3:
006E50A3  33 FF                     XOR EDI,EDI
LAB_006e50a5:
006E50A5  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
006E50AB  03 C7                     ADD EAX,EDI
006E50AD  8B CE                     MOV ECX,ESI
006E50AF  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
006E50B2  E8 29 FE FF FF            CALL 0x006e4ee0
006E50B7  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_006e50ba:
006E50BA  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006E50BD  85 C0                     TEST EAX,EAX
006E50BF  74 1D                     JZ 0x006e50de
006E50C1  8B 06                     MOV EAX,dword ptr [ESI]
006E50C3  8B CE                     MOV ECX,ESI
006E50C5  FF 50 04                  CALL dword ptr [EAX + 0x4]
006E50C8  6A 00                     PUSH 0x0
006E50CA  FF 15 E0 BD 85 00         CALL dword ptr [0x0085bde0]
006E50D0  C7 46 1C 00 00 00 00      MOV dword ptr [ESI + 0x1c],0x0
006E50D7  C7 46 20 01 00 00 00      MOV dword ptr [ESI + 0x20],0x1
LAB_006e50de:
006E50DE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006E50E1  85 C0                     TEST EAX,EAX
006E50E3  0F 84 20 FF FF FF         JZ 0x006e5009
LAB_006e50e9:
006E50E9  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
006E50EC  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006E50EF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E50F5  5F                        POP EDI
006E50F6  5E                        POP ESI
006E50F7  8B E5                     MOV ESP,EBP
006E50F9  5D                        POP EBP
006E50FA  C3                        RET
LAB_006e50fb:
006E50FB  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
006E50FE  68 60 EA 7E 00            PUSH 0x7eea60
006E5103  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E5108  56                        PUSH ESI
006E5109  6A 00                     PUSH 0x0
006E510B  68 36 03 00 00            PUSH 0x336
006E5110  68 8C E7 7E 00            PUSH 0x7ee78c
006E5115  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E511B  E8 B0 83 FC FF            CALL 0x006ad4d0
006E5120  83 C4 18                  ADD ESP,0x18
006E5123  85 C0                     TEST EAX,EAX
006E5125  74 01                     JZ 0x006e5128
006E5127  CC                        INT3
LAB_006e5128:
006E5128  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006E512B  8B 01                     MOV EAX,dword ptr [ECX]
006E512D  FF 50 08                  CALL dword ptr [EAX + 0x8]
006E5130  68 38 03 00 00            PUSH 0x338
006E5135  68 8C E7 7E 00            PUSH 0x7ee78c
006E513A  6A 00                     PUSH 0x0
006E513C  56                        PUSH ESI
006E513D  E8 FE 0C FC FF            CALL 0x006a5e40
006E5142  8B C6                     MOV EAX,ESI
006E5144  5F                        POP EDI
006E5145  5E                        POP ESI
006E5146  8B E5                     MOV ESP,EBP
006E5148  5D                        POP EBP
006E5149  C3                        RET

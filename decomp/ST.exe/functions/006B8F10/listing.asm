FUN_006b8f10:
006B8F10  55                        PUSH EBP
006B8F11  8B EC                     MOV EBP,ESP
006B8F13  81 EC B0 00 00 00         SUB ESP,0xb0
006B8F19  53                        PUSH EBX
006B8F1A  56                        PUSH ESI
006B8F1B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B8F1E  33 DB                     XOR EBX,EBX
006B8F20  8B 06                     MOV EAX,dword ptr [ESI]
006B8F22  39 58 40                  CMP dword ptr [EAX + 0x40],EBX
006B8F25  75 0A                     JNZ 0x006b8f31
006B8F27  5E                        POP ESI
006B8F28  33 C0                     XOR EAX,EAX
006B8F2A  5B                        POP EBX
006B8F2B  8B E5                     MOV ESP,EBP
006B8F2D  5D                        POP EBP
006B8F2E  C2 08 00                  RET 0x8
LAB_006b8f31:
006B8F31  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B8F34  89 58 0C                  MOV dword ptr [EAX + 0xc],EBX
006B8F37  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
006B8F3A  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006B8F3D  F6 C5 80                  TEST CH,0x80
006B8F40  74 1A                     JZ 0x006b8f5c
006B8F42  8D 4E 10                  LEA ECX,[ESI + 0x10]
006B8F45  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006B8F48  89 10                     MOV dword ptr [EAX],EDX
006B8F4A  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006B8F4D  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006B8F50  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006B8F53  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
006B8F56  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006B8F59  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
LAB_006b8f5c:
006B8F5C  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B8F5F  57                        PUSH EDI
006B8F60  F6 C4 40                  TEST AH,0x40
006B8F63  74 10                     JZ 0x006b8f75
006B8F65  56                        PUSH ESI
006B8F66  E8 C5 FE FF FF            CALL 0x006b8e30
006B8F6B  8B F8                     MOV EDI,EAX
006B8F6D  3B FB                     CMP EDI,EBX
006B8F6F  0F 85 1B 02 00 00         JNZ 0x006b9190
LAB_006b8f75:
006B8F75  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B8F78  8B 7E 20                  MOV EDI,dword ptr [ESI + 0x20]
006B8F7B  80 E4 EF                  AND AH,0xef
006B8F7E  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
006B8F81  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006B8F84  8B C8                     MOV ECX,EAX
006B8F86  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006B8F89  2B C7                     SUB EAX,EDI
006B8F8B  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006B8F8E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006B8F91  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006B8F94  2B C2                     SUB EAX,EDX
006B8F96  F7 C1 00 00 00 08         TEST ECX,0x8000000
006B8F9C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006B8F9F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006B8FA2  74 1A                     JZ 0x006b8fbe
006B8FA4  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006B8FA7  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006B8FAA  8B 04 90                  MOV EAX,dword ptr [EAX + EDX*0x4]
006B8FAD  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B8FB0  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006B8FB3  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006B8FB6  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006B8FB9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006B8FBC  EB 71                     JMP 0x006b902f
LAB_006b8fbe:
006B8FBE  F7 C1 00 00 00 20         TEST ECX,0x20000000
006B8FC4  74 14                     JZ 0x006b8fda
006B8FC6  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006B8FC9  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
006B8FCC  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
006B8FCF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B8FD2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006B8FD5  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006B8FD8  EB 55                     JMP 0x006b902f
LAB_006b8fda:
006B8FDA  F7 C1 00 00 00 A0         TEST ECX,0xa0000000
006B8FE0  0F 84 A5 01 00 00         JZ 0x006b918b
006B8FE6  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006B8FE9  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
006B8FEC  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006B8FEF  8D 8D 50 FF FF FF         LEA ECX,[EBP + 0xffffff50]
006B8FF5  C7 85 50 FF FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xffffff50],0x7c
006B8FFF  C7 85 54 FF FF FF 06 00 00 00  MOV dword ptr [EBP + 0xffffff54],0x6
006B9009  8B 10                     MOV EDX,dword ptr [EAX]
006B900B  51                        PUSH ECX
006B900C  50                        PUSH EAX
006B900D  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B9010  FF 52 58                  CALL dword ptr [EDX + 0x58]
006B9013  8B F8                     MOV EDI,EAX
006B9015  3B FB                     CMP EDI,EBX
006B9017  0F 85 73 01 00 00         JNZ 0x006b9190
006B901D  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
006B9023  8B 85 58 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff58]
006B9029  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006B902C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006b902f:
006B902F  8D 4D F0                  LEA ECX,[EBP + -0x10]
006B9032  51                        PUSH ECX
006B9033  56                        PUSH ESI
006B9034  E8 67 01 00 00            CALL 0x006b91a0
006B9039  8B F8                     MOV EDI,EAX
006B903B  3B FB                     CMP EDI,EBX
006B903D  0F 85 4D 01 00 00         JNZ 0x006b9190
006B9043  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006B9046  8D 56 10                  LEA EDX,[ESI + 0x10]
006B9049  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B904C  8B CA                     MOV ECX,EDX
006B904E  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006B9051  89 11                     MOV dword ptr [ECX],EDX
006B9053  89 59 04                  MOV dword ptr [ECX + 0x4],EBX
006B9056  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
006B9059  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B905C  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
006B905F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006B9062  85 C9                     TEST ECX,ECX
006B9064  0F 84 26 01 00 00         JZ 0x006b9190
006B906A  85 C0                     TEST EAX,EAX
006B906C  0F 84 1E 01 00 00         JZ 0x006b9190
006B9072  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B9075  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006B9078  8B CA                     MOV ECX,EDX
006B907A  2B C8                     SUB ECX,EAX
006B907C  8B C3                     MOV EAX,EBX
006B907E  2B C7                     SUB EAX,EDI
006B9080  8B 7E 04                  MOV EDI,dword ptr [ESI + 0x4]
006B9083  F7 C7 00 00 00 08         TEST EDI,0x8000000
006B9089  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006B908C  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006B908F  74 2E                     JZ 0x006b90bf
006B9091  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006B9094  57                        PUSH EDI
006B9095  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006B9098  57                        PUSH EDI
006B9099  50                        PUSH EAX
006B909A  51                        PUSH ECX
006B909B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B909E  51                        PUSH ECX
006B909F  53                        PUSH EBX
006B90A0  52                        PUSH EDX
006B90A1  8B 16                     MOV EDX,dword ptr [ESI]
006B90A3  52                        PUSH EDX
006B90A4  E8 37 F2 FF FF            CALL 0x006b82e0
006B90A9  8B F8                     MOV EDI,EAX
006B90AB  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B90AE  80 CC 40                  OR AH,0x40
006B90B1  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006B90B4  8B C7                     MOV EAX,EDI
006B90B6  5F                        POP EDI
006B90B7  5E                        POP ESI
006B90B8  5B                        POP EBX
006B90B9  8B E5                     MOV ESP,EBP
006B90BB  5D                        POP EBP
006B90BC  C2 08 00                  RET 0x8
LAB_006b90bf:
006B90BF  F7 C7 00 00 00 20         TEST EDI,0x20000000
006B90C5  74 10                     JZ 0x006b90d7
006B90C7  8B 7E 2C                  MOV EDI,dword ptr [ESI + 0x2c]
006B90CA  2B 7E 28                  SUB EDI,dword ptr [ESI + 0x28]
006B90CD  4F                        DEC EDI
006B90CE  0F AF 7E 34               IMUL EDI,dword ptr [ESI + 0x34]
006B90D2  03 C7                     ADD EAX,EDI
006B90D4  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_006b90d7:
006B90D7  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006B90DA  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006B90DD  03 CF                     ADD ECX,EDI
006B90DF  03 FA                     ADD EDI,EDX
006B90E1  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006B90E4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B90E7  03 C1                     ADD EAX,ECX
006B90E9  03 CB                     ADD ECX,EBX
006B90EB  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006B90EE  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
006B90F1  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
006B90F4  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006B90F7  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
LAB_006b90fe:
006B90FE  8B 06                     MOV EAX,dword ptr [ESI]
006B9100  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B9103  6A 00                     PUSH 0x0
006B9105  8D 55 DC                  LEA EDX,[EBP + -0x24]
006B9108  8B 40 40                  MOV EAX,dword ptr [EAX + 0x40]
006B910B  68 00 80 00 01            PUSH 0x1008000
006B9110  52                        PUSH EDX
006B9111  8D 55 CC                  LEA EDX,[EBP + -0x34]
006B9114  8B 08                     MOV ECX,dword ptr [EAX]
006B9116  53                        PUSH EBX
006B9117  52                        PUSH EDX
006B9118  50                        PUSH EAX
006B9119  FF 51 14                  CALL dword ptr [ECX + 0x14]
006B911C  8B F8                     MOV EDI,EAX
006B911E  85 FF                     TEST EDI,EDI
006B9120  74 43                     JZ 0x006b9165
006B9122  81 FF C2 01 76 88         CMP EDI,0x887601c2
006B9128  75 10                     JNZ 0x006b913a
006B912A  8B 03                     MOV EAX,dword ptr [EBX]
006B912C  53                        PUSH EBX
006B912D  FF 50 6C                  CALL dword ptr [EAX + 0x6c]
006B9130  8B 0E                     MOV ECX,dword ptr [ESI]
006B9132  51                        PUSH ECX
006B9133  E8 08 5B 01 00            CALL 0x006cec40
006B9138  EB 1F                     JMP 0x006b9159
LAB_006b913a:
006B913A  81 FF A0 00 76 88         CMP EDI,0x887600a0
006B9140  74 08                     JZ 0x006b914a
006B9142  81 FF AE 01 76 88         CMP EDI,0x887601ae
006B9148  75 1B                     JNZ 0x006b9165
LAB_006b914a:
006B914A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B914D  85 C0                     TEST EAX,EAX
006B914F  75 14                     JNZ 0x006b9165
006B9151  6A 02                     PUSH 0x2
006B9153  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006b9159:
006B9159  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B915C  40                        INC EAX
006B915D  83 F8 02                  CMP EAX,0x2
006B9160  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006B9163  7C 99                     JL 0x006b90fe
LAB_006b9165:
006B9165  81 FF A0 00 76 88         CMP EDI,0x887600a0
006B916B  74 08                     JZ 0x006b9175
006B916D  81 FF AE 01 76 88         CMP EDI,0x887601ae
006B9173  75 02                     JNZ 0x006b9177
LAB_006b9175:
006B9175  33 FF                     XOR EDI,EDI
LAB_006b9177:
006B9177  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B917A  80 CC 40                  OR AH,0x40
006B917D  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006B9180  8B C7                     MOV EAX,EDI
006B9182  5F                        POP EDI
006B9183  5E                        POP ESI
006B9184  5B                        POP EBX
006B9185  8B E5                     MOV ESP,EBP
006B9187  5D                        POP EBP
006B9188  C2 08 00                  RET 0x8
LAB_006b918b:
006B918B  BF AF FF FF FF            MOV EDI,0xffffffaf
LAB_006b9190:
006B9190  8B C7                     MOV EAX,EDI
006B9192  5F                        POP EDI
006B9193  5E                        POP ESI
006B9194  5B                        POP EBX
006B9195  8B E5                     MOV ESP,EBP
006B9197  5D                        POP EBP
006B9198  C2 08 00                  RET 0x8

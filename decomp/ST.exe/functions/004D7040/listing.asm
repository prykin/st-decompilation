FUN_004d7040:
004D7040  55                        PUSH EBP
004D7041  8B EC                     MOV EBP,ESP
004D7043  51                        PUSH ECX
004D7044  56                        PUSH ESI
004D7045  8B F1                     MOV ESI,ECX
004D7047  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D704D  57                        PUSH EDI
004D704E  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004D7051  6A 4E                     PUSH 0x4e
004D7053  50                        PUSH EAX
004D7054  E8 12 A8 F2 FF            CALL 0x0040186b
004D7059  8B F8                     MOV EDI,EAX
004D705B  83 FF 03                  CMP EDI,0x3
004D705E  7E 05                     JLE 0x004d7065
004D7060  BF 03 00 00 00            MOV EDI,0x3
LAB_004d7065:
004D7065  8B 16                     MOV EDX,dword ptr [ESI]
004D7067  8B CE                     MOV ECX,ESI
004D7069  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004D706C  83 F8 32                  CMP EAX,0x32
004D706F  7C 45                     JL 0x004d70b6
004D7071  8B 06                     MOV EAX,dword ptr [ESI]
004D7073  8B CE                     MOV ECX,ESI
004D7075  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004D7078  83 F8 74                  CMP EAX,0x74
004D707B  7D 39                     JGE 0x004d70b6
004D707D  8B 16                     MOV EDX,dword ptr [ESI]
004D707F  8B CE                     MOV ECX,ESI
004D7081  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004D7084  8D 84 87 38 FF FF FF      LEA EAX,[EDI + EAX*0x4 + 0xffffff38]
004D708B  8B 0C 85 18 35 7E 00      MOV ECX,dword ptr [EAX*0x4 + 0x7e3518]
004D7092  B8 F1 19 76 05            MOV EAX,0x57619f1
004D7097  F7 E9                     IMUL ECX
004D7099  C1 FA 05                  SAR EDX,0x5
004D709C  8B CA                     MOV ECX,EDX
004D709E  C1 E9 1F                  SHR ECX,0x1f
004D70A1  03 D1                     ADD EDX,ECX
004D70A3  8B CE                     MOV ECX,ESI
004D70A5  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004D70A8  8B 16                     MOV EDX,dword ptr [ESI]
004D70AA  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004D70AD  8B 3C 85 EC 27 7E 00      MOV EDI,dword ptr [EAX*0x4 + 0x7e27ec]
004D70B4  EB 53                     JMP 0x004d7109
LAB_004d70b6:
004D70B6  8B 06                     MOV EAX,dword ptr [ESI]
004D70B8  8B CE                     MOV ECX,ESI
004D70BA  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004D70BD  83 F8 01                  CMP EAX,0x1
004D70C0  0F 8C 2D 01 00 00         JL 0x004d71f3
004D70C6  8B 16                     MOV EDX,dword ptr [ESI]
004D70C8  8B CE                     MOV ECX,ESI
004D70CA  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004D70CD  83 F8 29                  CMP EAX,0x29
004D70D0  0F 8D 1D 01 00 00         JGE 0x004d71f3
004D70D6  8B 06                     MOV EAX,dword ptr [ESI]
004D70D8  8B CE                     MOV ECX,ESI
004D70DA  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004D70DD  8D 0C 87                  LEA ECX,[EDI + EAX*0x4]
004D70E0  B8 F1 19 76 05            MOV EAX,0x57619f1
004D70E5  8B 0C 8D 90 0A 7E 00      MOV ECX,dword ptr [ECX*0x4 + 0x7e0a90]
004D70EC  F7 E9                     IMUL ECX
004D70EE  C1 FA 05                  SAR EDX,0x5
004D70F1  8B C2                     MOV EAX,EDX
004D70F3  8B CE                     MOV ECX,ESI
004D70F5  C1 E8 1F                  SHR EAX,0x1f
004D70F8  03 D0                     ADD EDX,EAX
004D70FA  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004D70FD  8B 16                     MOV EDX,dword ptr [ESI]
004D70FF  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004D7102  8B 3C 85 DC 06 7E 00      MOV EDI,dword ptr [EAX*0x4 + 0x7e06dc]
LAB_004d7109:
004D7109  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004D710C  85 C0                     TEST EAX,EAX
004D710E  0F 84 DF 00 00 00         JZ 0x004d71f3
004D7114  85 FF                     TEST EDI,EDI
004D7116  0F 84 D7 00 00 00         JZ 0x004d71f3
004D711C  8B 06                     MOV EAX,dword ptr [ESI]
004D711E  53                        PUSH EBX
004D711F  8B CE                     MOV ECX,ESI
004D7121  FF 90 C4 00 00 00         CALL dword ptr [EAX + 0xc4]
004D7127  8B D8                     MOV EBX,EAX
004D7129  85 DB                     TEST EBX,EBX
004D712B  0F 84 B9 00 00 00         JZ 0x004d71ea
004D7131  8B 16                     MOV EDX,dword ptr [ESI]
004D7133  8B CE                     MOV ECX,ESI
004D7135  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
004D7138  83 F8 64                  CMP EAX,0x64
004D713B  0F 8D A9 00 00 00         JGE 0x004d71ea
004D7141  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004D7144  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D714A  6A 66                     PUSH 0x66
004D714C  50                        PUSH EAX
004D714D  E8 19 A7 F2 FF            CALL 0x0040186b
004D7152  85 C0                     TEST EAX,EAX
004D7154  74 11                     JZ 0x004d7167
004D7156  8D 0C BF                  LEA ECX,[EDI + EDI*0x4]
004D7159  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004D715E  D1 E1                     SHL ECX,0x1
004D7160  F7 E1                     MUL ECX
004D7162  C1 EA 05                  SHR EDX,0x5
004D7165  03 FA                     ADD EDI,EDX
LAB_004d7167:
004D7167  6A 64                     PUSH 0x64
004D7169  E8 5E A1 1D 00            CALL 0x006b12cc
004D716E  83 C4 04                  ADD ESP,0x4
004D7171  50                        PUSH EAX
004D7172  53                        PUSH EBX
004D7173  E8 54 A1 1D 00            CALL 0x006b12cc
004D7178  83 C4 04                  ADD ESP,0x4
004D717B  50                        PUSH EAX
004D717C  57                        PUSH EDI
004D717D  E8 4A A1 1D 00            CALL 0x006b12cc
004D7182  83 C4 04                  ADD ESP,0x4
004D7185  50                        PUSH EAX
004D7186  E8 31 A1 1D 00            CALL 0x006b12bc
004D718B  83 C4 0C                  ADD ESP,0xc
004D718E  50                        PUSH EAX
004D718F  68 DC 05 00 00            PUSH 0x5dc
004D7194  E8 33 A1 1D 00            CALL 0x006b12cc
004D7199  83 C4 04                  ADD ESP,0x4
004D719C  50                        PUSH EAX
004D719D  E8 06 A1 1D 00            CALL 0x006b12a8
004D71A2  50                        PUSH EAX
004D71A3  E8 D8 A0 1D 00            CALL 0x006b1280
004D71A8  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D71AE  83 C4 0C                  ADD ESP,0xc
004D71B1  8B 8A E4 00 00 00         MOV ECX,dword ptr [EDX + 0xe4]
004D71B7  8B 96 19 01 00 00         MOV EDX,dword ptr [ESI + 0x119]
004D71BD  03 D0                     ADD EDX,EAX
004D71BF  3B CA                     CMP ECX,EDX
004D71C1  76 27                     JBE 0x004d71ea
004D71C3  8B 3E                     MOV EDI,dword ptr [ESI]
004D71C5  89 8E 19 01 00 00         MOV dword ptr [ESI + 0x119],ECX
004D71CB  8B CE                     MOV ECX,ESI
004D71CD  FF 57 78                  CALL dword ptr [EDI + 0x78]
004D71D0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004D71D3  03 C1                     ADD EAX,ECX
004D71D5  8B CE                     MOV ECX,ESI
004D71D7  50                        PUSH EAX
004D71D8  FF 97 80 00 00 00         CALL dword ptr [EDI + 0x80]
004D71DE  8B 06                     MOV EAX,dword ptr [ESI]
004D71E0  4B                        DEC EBX
004D71E1  53                        PUSH EBX
004D71E2  8B CE                     MOV ECX,ESI
004D71E4  FF 90 C8 00 00 00         CALL dword ptr [EAX + 0xc8]
LAB_004d71ea:
004D71EA  5B                        POP EBX
004D71EB  5F                        POP EDI
004D71EC  33 C0                     XOR EAX,EAX
004D71EE  5E                        POP ESI
004D71EF  8B E5                     MOV ESP,EBP
004D71F1  5D                        POP EBP
004D71F2  C3                        RET
LAB_004d71f3:
004D71F3  5F                        POP EDI
004D71F4  33 C0                     XOR EAX,EAX
004D71F6  5E                        POP ESI
004D71F7  8B E5                     MOV ESP,EBP
004D71F9  5D                        POP EBP
004D71FA  C3                        RET

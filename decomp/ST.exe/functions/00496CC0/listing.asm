FUN_00496cc0:
00496CC0  55                        PUSH EBP
00496CC1  8B EC                     MOV EBP,ESP
00496CC3  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00496CC6  53                        PUSH EBX
00496CC7  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00496CCA  56                        PUSH ESI
00496CCB  8B F1                     MOV ESI,ECX
00496CCD  8D 45 10                  LEA EAX,[EBP + 0x10]
00496CD0  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00496CD3  57                        PUSH EDI
00496CD4  50                        PUSH EAX
00496CD5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00496CD8  51                        PUSH ECX
00496CD9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00496CDC  52                        PUSH EDX
00496CDD  53                        PUSH EBX
00496CDE  50                        PUSH EAX
00496CDF  51                        PUSH ECX
00496CE0  8B CE                     MOV ECX,ESI
00496CE2  E8 A4 D1 F6 FF            CALL 0x00403e8b
00496CE7  8B F8                     MOV EDI,EAX
00496CE9  85 FF                     TEST EDI,EDI
00496CEB  7C 62                     JL 0x00496d4f
00496CED  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00496CF0  85 C0                     TEST EAX,EAX
00496CF2  0F 84 EB 00 00 00         JZ 0x00496de3
00496CF8  8B 0D 70 B2 7F 00         MOV ECX,dword ptr [0x007fb270]
00496CFE  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
00496D01  73 0D                     JNC 0x00496d10
00496D03  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00496D06  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00496D09  0F AF C7                  IMUL EAX,EDI
00496D0C  03 C2                     ADD EAX,EDX
00496D0E  EB 02                     JMP 0x00496d12
LAB_00496d10:
00496D10  33 C0                     XOR EAX,EAX
LAB_00496d12:
00496D12  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00496D15  6A 00                     PUSH 0x0
00496D17  52                        PUSH EDX
00496D18  57                        PUSH EDI
00496D19  8B CE                     MOV ECX,ESI
00496D1B  E8 19 C9 F6 FF            CALL 0x00403639
00496D20  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00496D23  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00496D26  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00496D29  57                        PUSH EDI
00496D2A  50                        PUSH EAX
00496D2B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00496D2E  51                        PUSH ECX
00496D2F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00496D32  52                        PUSH EDX
00496D33  53                        PUSH EBX
00496D34  50                        PUSH EAX
00496D35  51                        PUSH ECX
00496D36  8B CE                     MOV ECX,ESI
00496D38  E8 E7 BF F6 FF            CALL 0x00402d24
00496D3D  6A 01                     PUSH 0x1
00496D3F  53                        PUSH EBX
00496D40  57                        PUSH EDI
00496D41  8B CE                     MOV ECX,ESI
00496D43  E8 F1 C8 F6 FF            CALL 0x00403639
00496D48  5F                        POP EDI
00496D49  5E                        POP ESI
00496D4A  5B                        POP EBX
00496D4B  5D                        POP EBP
00496D4C  C2 18 00                  RET 0x18
LAB_00496d4f:
00496D4F  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00496D52  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00496D55  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00496D58  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00496D5B  57                        PUSH EDI
00496D5C  52                        PUSH EDX
00496D5D  53                        PUSH EBX
00496D5E  50                        PUSH EAX
00496D5F  51                        PUSH ECX
00496D60  8B CE                     MOV ECX,ESI
00496D62  E8 95 BA F6 FF            CALL 0x004027fc
00496D67  85 C0                     TEST EAX,EAX
00496D69  7E 78                     JLE 0x00496de3
00496D6B  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00496D6E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00496D71  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00496D74  6A FF                     PUSH -0x1
00496D76  57                        PUSH EDI
00496D77  52                        PUSH EDX
00496D78  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00496D7B  50                        PUSH EAX
00496D7C  53                        PUSH EBX
00496D7D  51                        PUSH ECX
00496D7E  52                        PUSH EDX
00496D7F  8B CE                     MOV ECX,ESI
00496D81  E8 9E BF F6 FF            CALL 0x00402d24
00496D86  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
00496D89  8B 04 9D 4C B2 7F 00      MOV EAX,dword ptr [EBX*0x4 + 0x7fb24c]
00496D90  85 C0                     TEST EAX,EAX
00496D92  75 41                     JNZ 0x00496dd5
00496D94  0F BF 05 32 B2 7F 00      MOVSX EAX,word ptr [0x007fb232]
00496D9B  0F BF 0D 30 B2 7F 00      MOVSX ECX,word ptr [0x007fb230]
00496DA2  0F AF C1                  IMUL EAX,ECX
00496DA5  50                        PUSH EAX
00496DA6  E8 C5 3E 21 00            CALL 0x006aac70
00496DAB  0F BF 0D 32 B2 7F 00      MOVSX ECX,word ptr [0x007fb232]
00496DB2  0F BF 15 30 B2 7F 00      MOVSX EDX,word ptr [0x007fb230]
00496DB9  0F AF CA                  IMUL ECX,EDX
00496DBC  8B D1                     MOV EDX,ECX
00496DBE  8B F8                     MOV EDI,EAX
00496DC0  33 C0                     XOR EAX,EAX
00496DC2  89 3C 9D 4C B2 7F 00      MOV dword ptr [EBX*0x4 + 0x7fb24c],EDI
00496DC9  C1 E9 02                  SHR ECX,0x2
00496DCC  F3 AB                     STOSD.REP ES:EDI
00496DCE  8B CA                     MOV ECX,EDX
00496DD0  83 E1 03                  AND ECX,0x3
00496DD3  F3 AA                     STOSB.REP ES:EDI
LAB_00496dd5:
00496DD5  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00496DD8  6A 01                     PUSH 0x1
00496DDA  53                        PUSH EBX
00496DDB  50                        PUSH EAX
00496DDC  8B CE                     MOV ECX,ESI
00496DDE  E8 56 C8 F6 FF            CALL 0x00403639
LAB_00496de3:
00496DE3  5F                        POP EDI
00496DE4  5E                        POP ESI
00496DE5  5B                        POP EBX
00496DE6  5D                        POP EBP
00496DE7  C2 18 00                  RET 0x18

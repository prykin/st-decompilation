CGenerate::sub_006971B0:
006971B0  55                        PUSH EBP
006971B1  8B EC                     MOV EBP,ESP
006971B3  6A FF                     PUSH -0x1
006971B5  68 88 D7 79 00            PUSH 0x79d788
006971BA  68 64 D9 72 00            PUSH 0x72d964
006971BF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006971C5  50                        PUSH EAX
006971C6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006971CD  83 EC 30                  SUB ESP,0x30
006971D0  53                        PUSH EBX
006971D1  56                        PUSH ESI
006971D2  57                        PUSH EDI
006971D3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006971D6  8B D9                     MOV EBX,ECX
006971D8  33 FF                     XOR EDI,EDI
006971DA  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006971DD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006971E0  8B B3 3B 58 00 00         MOV ESI,dword ptr [EBX + 0x583b]
006971E6  C1 E6 02                  SHL ESI,0x2
006971E9  8B C6                     MOV EAX,ESI
006971EB  83 C0 03                  ADD EAX,0x3
006971EE  24 FC                     AND AL,0xfc
006971F0  E8 4B 68 09 00            CALL 0x0072da40
006971F5  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006971F8  8B D4                     MOV EDX,ESP
006971FA  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006971FD  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00697204  39 BB 53 58 00 00         CMP dword ptr [EBX + 0x5853],EDI
0069720A  0F 84 BF 00 00 00         JZ 0x006972cf
00697210  3B D7                     CMP EDX,EDI
00697212  0F 84 B7 00 00 00         JZ 0x006972cf
00697218  8B CE                     MOV ECX,ESI
0069721A  33 C0                     XOR EAX,EAX
0069721C  8B FA                     MOV EDI,EDX
0069721E  C1 E9 02                  SHR ECX,0x2
00697221  F3 AB                     STOSD.REP ES:EDI
00697223  8B CE                     MOV ECX,ESI
00697225  83 E1 03                  AND ECX,0x3
00697228  F3 AA                     STOSB.REP ES:EDI
0069722A  8B 83 53 58 00 00         MOV EAX,dword ptr [EBX + 0x5853]
00697230  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00697233  33 F6                     XOR ESI,ESI
00697235  85 FF                     TEST EDI,EDI
00697237  7E 2B                     JLE 0x00697264
LAB_00697239:
00697239  8B 8B 53 58 00 00         MOV ECX,dword ptr [EBX + 0x5853]
0069723F  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
00697242  73 0B                     JNC 0x0069724f
00697244  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00697247  0F AF C6                  IMUL EAX,ESI
0069724A  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0069724D  EB 02                     JMP 0x00697251
LAB_0069724f:
0069724F  33 C0                     XOR EAX,EAX
LAB_00697251:
00697251  85 C0                     TEST EAX,EAX
00697253  74 0A                     JZ 0x0069725f
00697255  8B 08                     MOV ECX,dword ptr [EAX]
00697257  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
0069725A  8B 40 11                  MOV EAX,dword ptr [EAX + 0x11]
0069725D  01 01                     ADD dword ptr [ECX],EAX
LAB_0069725f:
0069725F  46                        INC ESI
00697260  3B F7                     CMP ESI,EDI
00697262  7C D5                     JL 0x00697239
LAB_00697264:
00697264  83 C8 FF                  OR EAX,0xffffffff
00697267  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0069726A  33 C9                     XOR ECX,ECX
0069726C  33 F6                     XOR ESI,ESI
0069726E  8B BB 3B 58 00 00         MOV EDI,dword ptr [EBX + 0x583b]
00697274  85 FF                     TEST EDI,EDI
00697276  7E 50                     JLE 0x006972c8
00697278  8B BB 2F 58 00 00         MOV EDI,dword ptr [EBX + 0x582f]
0069727E  EB 03                     JMP 0x00697283
LAB_00697280:
00697280  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
LAB_00697283:
00697283  8B 04 B2                  MOV EAX,dword ptr [EDX + ESI*0x4]
00697286  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00697289  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0069728C  C1 E0 02                  SHL EAX,0x2
0069728F  99                        CDQ
00697290  F7 FF                     IDIV EDI
00697292  85 F6                     TEST ESI,ESI
00697294  75 12                     JNZ 0x006972a8
00697296  2B 83 43 58 00 00         SUB EAX,dword ptr [EBX + 0x5843]
0069729C  99                        CDQ
0069729D  8B C8                     MOV ECX,EAX
0069729F  33 CA                     XOR ECX,EDX
006972A1  2B CA                     SUB ECX,EDX
006972A3  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
006972A6  EB 14                     JMP 0x006972bc
LAB_006972a8:
006972A8  2B 83 43 58 00 00         SUB EAX,dword ptr [EBX + 0x5843]
006972AE  99                        CDQ
006972AF  33 C2                     XOR EAX,EDX
006972B1  2B C2                     SUB EAX,EDX
006972B3  3B C8                     CMP ECX,EAX
006972B5  7E 05                     JLE 0x006972bc
006972B7  8B C8                     MOV ECX,EAX
006972B9  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
LAB_006972bc:
006972BC  46                        INC ESI
006972BD  3B B3 3B 58 00 00         CMP ESI,dword ptr [EBX + 0x583b]
006972C3  7C BB                     JL 0x00697280
006972C5  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
LAB_006972c8:
006972C8  85 C0                     TEST EAX,EAX
006972CA  7C 03                     JL 0x006972cf
006972CC  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_006972cf:
006972CF  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006972D2  8D 65 B4                  LEA ESP,[EBP + -0x4c]
006972D5  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006972D8  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006972DF  5F                        POP EDI
006972E0  5E                        POP ESI
006972E1  5B                        POP EBX
006972E2  8B E5                     MOV ESP,EBP
006972E4  5D                        POP EBP
006972E5  C3                        RET

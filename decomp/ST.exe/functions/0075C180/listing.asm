FUN_0075c180:
0075C180  55                        PUSH EBP
0075C181  8B EC                     MOV EBP,ESP
0075C183  83 EC 48                  SUB ESP,0x48
0075C186  53                        PUSH EBX
0075C187  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075C18A  56                        PUSH ESI
0075C18B  57                        PUSH EDI
0075C18C  8B 83 8A 01 00 00         MOV EAX,dword ptr [EBX + 0x18a]
0075C192  8B 93 AA 01 00 00         MOV EDX,dword ptr [EBX + 0x1aa]
0075C198  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0075C19B  8B 83 0C 01 00 00         MOV EAX,dword ptr [EBX + 0x10c]
0075C1A1  85 C0                     TEST EAX,EAX
0075C1A3  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0075C1A6  74 1F                     JZ 0x0075c1c7
0075C1A8  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
0075C1AB  85 C0                     TEST EAX,EAX
0075C1AD  75 18                     JNZ 0x0075c1c7
0075C1AF  53                        PUSH EBX
0075C1B0  E8 FB 01 00 00            CALL 0x0075c3b0
0075C1B5  85 C0                     TEST EAX,EAX
0075C1B7  75 0B                     JNZ 0x0075c1c4
LAB_0075c1b9:
0075C1B9  5F                        POP EDI
0075C1BA  5E                        POP ESI
0075C1BB  33 C0                     XOR EAX,EAX
0075C1BD  5B                        POP EBX
0075C1BE  8B E5                     MOV ESP,EBP
0075C1C0  5D                        POP EBP
0075C1C1  C2 08 00                  RET 0x8
LAB_0075c1c4:
0075C1C4  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_0075c1c7:
0075C1C7  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
0075C1CA  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
0075C1CD  8D 72 14                  LEA ESI,[EDX + 0x14]
0075C1D0  8D 7D D4                  LEA EDI,[EBP + -0x2c]
0075C1D3  8B 08                     MOV ECX,dword ptr [EAX]
0075C1D5  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0075C1DC  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
0075C1DF  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0075C1E2  8B 8B 8E 01 00 00         MOV ECX,dword ptr [EBX + 0x18e]
0075C1E8  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0075C1EB  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
0075C1EE  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0075C1F1  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075C1F4  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0075C1F7  8D 4A 10                  LEA ECX,[EDX + 0x10]
0075C1FA  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0075C1FD  B9 05 00 00 00            MOV ECX,0x5
0075C202  F3 A5                     MOVSD.REP ES:EDI,ESI
0075C204  8B 8B 52 01 00 00         MOV ECX,dword ptr [EBX + 0x152]
0075C20A  85 C9                     TEST ECX,ECX
0075C20C  0F 8E 4A 01 00 00         JLE 0x0075c35c
0075C212  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075C215  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0075C218  8D 8B 56 01 00 00         LEA ECX,[EBX + 0x156]
0075C21E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0075c221:
0075C221  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075C224  83 F8 08                  CMP EAX,0x8
0075C227  8B 09                     MOV ECX,dword ptr [ECX]
0075C229  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0075C22C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075C22F  8B 09                     MOV ECX,dword ptr [ECX]
0075C231  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0075C234  8B 8C 8B 3A 01 00 00      MOV ECX,dword ptr [EBX + ECX*0x4 + 0x13a]
0075C23B  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0075C23E  8B 74 8A 2C               MOV ESI,dword ptr [EDX + ECX*0x4 + 0x2c]
0075C242  7D 2D                     JGE 0x0075c271
0075C244  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075C247  6A 00                     PUSH 0x0
0075C249  50                        PUSH EAX
0075C24A  8D 45 B8                  LEA EAX,[EBP + -0x48]
0075C24D  52                        PUSH EDX
0075C24E  50                        PUSH EAX
0075C24F  E8 CC F4 FF FF            CALL 0x0075b720
0075C254  85 C0                     TEST EAX,EAX
0075C256  0F 84 5D FF FF FF         JZ 0x0075c1b9
0075C25C  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0075C25F  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0075C262  83 F8 08                  CMP EAX,0x8
0075C265  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0075C268  7D 07                     JGE 0x0075c271
0075C26A  B9 01 00 00 00            MOV ECX,0x1
0075C26F  EB 2D                     JMP 0x0075c29e
LAB_0075c271:
0075C271  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075C274  8D 48 F8                  LEA ECX,[EAX + -0x8]
0075C277  D3 FA                     SAR EDX,CL
0075C279  81 E2 FF 00 00 00         AND EDX,0xff
0075C27F  8B 8C 96 D4 00 00 00      MOV ECX,dword ptr [ESI + EDX*0x4 + 0xd4]
0075C286  85 C9                     TEST ECX,ECX
0075C288  74 0F                     JZ 0x0075c299
0075C28A  2B C1                     SUB EAX,ECX
0075C28C  33 C9                     XOR ECX,ECX
0075C28E  8A 8C 32 D4 04 00 00      MOV CL,byte ptr [EDX + ESI*0x1 + 0x4d4]
0075C295  8B F1                     MOV ESI,ECX
0075C297  EB 28                     JMP 0x0075c2c1
LAB_0075c299:
0075C299  B9 09 00 00 00            MOV ECX,0x9
LAB_0075c29e:
0075C29E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075C2A1  51                        PUSH ECX
0075C2A2  56                        PUSH ESI
0075C2A3  50                        PUSH EAX
0075C2A4  8D 45 B8                  LEA EAX,[EBP + -0x48]
0075C2A7  52                        PUSH EDX
0075C2A8  50                        PUSH EAX
0075C2A9  E8 52 F5 FF FF            CALL 0x0075b800
0075C2AE  8B F0                     MOV ESI,EAX
0075C2B0  85 F6                     TEST ESI,ESI
0075C2B2  0F 8C 01 FF FF FF         JL 0x0075c1b9
0075C2B8  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0075C2BB  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0075C2BE  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_0075c2c1:
0075C2C1  85 F6                     TEST ESI,ESI
0075C2C3  74 51                     JZ 0x0075c316
0075C2C5  3B C6                     CMP EAX,ESI
0075C2C7  7D 20                     JGE 0x0075c2e9
0075C2C9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075C2CC  56                        PUSH ESI
0075C2CD  50                        PUSH EAX
0075C2CE  8D 45 B8                  LEA EAX,[EBP + -0x48]
0075C2D1  52                        PUSH EDX
0075C2D2  50                        PUSH EAX
0075C2D3  E8 48 F4 FF FF            CALL 0x0075b720
0075C2D8  85 C0                     TEST EAX,EAX
0075C2DA  0F 84 D9 FE FF FF         JZ 0x0075c1b9
0075C2E0  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0075C2E3  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0075C2E6  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_0075c2e9:
0075C2E9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075C2EC  BA 01 00 00 00            MOV EDX,0x1
0075C2F1  8B CE                     MOV ECX,ESI
0075C2F3  2B C6                     SUB EAX,ESI
0075C2F5  D3 E2                     SHL EDX,CL
0075C2F7  8B C8                     MOV ECX,EAX
0075C2F9  D3 FF                     SAR EDI,CL
0075C2FB  8B 0C B5 54 20 7A 00      MOV ECX,dword ptr [ESI*0x4 + 0x7a2054]
0075C302  4A                        DEC EDX
0075C303  23 D7                     AND EDX,EDI
0075C305  3B D1                     CMP EDX,ECX
0075C307  7D 0B                     JGE 0x0075c314
0075C309  8B 34 B5 94 20 7A 00      MOV ESI,dword ptr [ESI*0x4 + 0x7a2094]
0075C310  03 F2                     ADD ESI,EDX
0075C312  EB 02                     JMP 0x0075c316
LAB_0075c314:
0075C314  8B F2                     MOV ESI,EDX
LAB_0075c316:
0075C316  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0075C319  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0075C31C  8D 4C 95 D8               LEA ECX,[EBP + EDX*0x4 + -0x28]
0075C320  8B 54 95 D8               MOV EDX,dword ptr [EBP + EDX*0x4 + -0x28]
0075C324  03 F2                     ADD ESI,EDX
0075C326  BA 04 00 00 00            MOV EDX,0x4
0075C32B  89 31                     MOV dword ptr [ECX],ESI
0075C32D  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0075C330  D3 E6                     SHL ESI,CL
0075C332  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0075C335  03 FA                     ADD EDI,EDX
0075C337  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
0075C33A  89 31                     MOV dword ptr [ECX],ESI
0075C33C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0075C33F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0075C342  03 F2                     ADD ESI,EDX
0075C344  8B 93 52 01 00 00         MOV EDX,dword ptr [EBX + 0x152]
0075C34A  41                        INC ECX
0075C34B  3B CA                     CMP ECX,EDX
0075C34D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0075C350  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0075C353  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0075C356  0F 8C C5 FE FF FF         JL 0x0075c221
LAB_0075c35c:
0075C35C  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
0075C35F  8B 75 B8                  MOV ESI,dword ptr [EBP + -0x48]
0075C362  8D 7A 14                  LEA EDI,[EDX + 0x14]
0075C365  89 31                     MOV dword ptr [ECX],ESI
0075C367  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
0075C36A  8B 75 BC                  MOV ESI,dword ptr [EBP + -0x44]
0075C36D  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
0075C370  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
0075C373  89 8B 8E 01 00 00         MOV dword ptr [EBX + 0x18e],ECX
0075C379  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075C37C  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
0075C37F  89 42 0C                  MOV dword ptr [EDX + 0xc],EAX
0075C382  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
0075C385  B9 05 00 00 00            MOV ECX,0x5
0075C38A  8D 75 D4                  LEA ESI,[EBP + -0x2c]
0075C38D  48                        DEC EAX
0075C38E  F3 A5                     MOVSD.REP ES:EDI,ESI
0075C390  5F                        POP EDI
0075C391  89 42 28                  MOV dword ptr [EDX + 0x28],EAX
0075C394  5E                        POP ESI
0075C395  B8 01 00 00 00            MOV EAX,0x1
0075C39A  5B                        POP EBX
0075C39B  8B E5                     MOV ESP,EBP
0075C39D  5D                        POP EBP
0075C39E  C2 08 00                  RET 0x8

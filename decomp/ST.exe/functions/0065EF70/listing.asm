FUN_0065ef70:
0065EF70  55                        PUSH EBP
0065EF71  8B EC                     MOV EBP,ESP
0065EF73  83 EC 18                  SUB ESP,0x18
0065EF76  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
0065EF7B  53                        PUSH EBX
0065EF7C  8B D9                     MOV EBX,ECX
0065EF7E  56                        PUSH ESI
0065EF7F  85 C0                     TEST EAX,EAX
0065EF81  57                        PUSH EDI
0065EF82  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0065EF85  0F 84 93 01 00 00         JZ 0x0065f11e
0065EF8B  8B 83 2F 02 00 00         MOV EAX,dword ptr [EBX + 0x22f]
0065EF91  33 D2                     XOR EDX,EDX
0065EF93  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0065EF96  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0065EF99  85 C9                     TEST ECX,ECX
0065EF9B  0F 8E 7D 01 00 00         JLE 0x0065f11e
0065EFA1  3B D1                     CMP EDX,ECX
LAB_0065efa3:
0065EFA3  73 17                     JNC 0x0065efbc
0065EFA5  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0065EFA8  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0065EFAB  0F AF F2                  IMUL ESI,EDX
0065EFAE  03 F1                     ADD ESI,ECX
0065EFB0  33 D2                     XOR EDX,EDX
0065EFB2  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0065EFB5  BF E9 87 80 00            MOV EDI,0x8087e9
0065EFBA  EB 11                     JMP 0x0065efcd
LAB_0065efbc:
0065EFBC  33 F6                     XOR ESI,ESI
0065EFBE  33 D2                     XOR EDX,EDX
0065EFC0  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0065EFC3  BF E9 87 80 00            MOV EDI,0x8087e9
0065EFC8  EB 03                     JMP 0x0065efcd
LAB_0065efca:
0065EFCA  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0065efcd:
0065EFCD  81 FF 71 8A 80 00         CMP EDI,0x808a71
0065EFD3  0F 8D 14 01 00 00         JGE 0x0065f0ed
0065EFD9  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0065EFDE  85 C0                     TEST EAX,EAX
0065EFE0  74 09                     JZ 0x0065efeb
0065EFE2  80 3F 08                  CMP byte ptr [EDI],0x8
0065EFE5  0F 83 02 01 00 00         JNC 0x0065f0ed
LAB_0065efeb:
0065EFEB  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
0065EFF1  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0065EFF4  84 C9                     TEST CL,CL
0065EFF6  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
0065EFF9  74 2C                     JZ 0x0065f027
0065EFFB  8B C2                     MOV EAX,EDX
0065EFFD  33 DB                     XOR EBX,EBX
0065EFFF  25 FF 00 00 00            AND EAX,0xff
0065F004  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0065F007  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065F00A  25 FF 00 00 00            AND EAX,0xff
0065F00F  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0065F012  8A 84 C0 EA 87 80 00      MOV AL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0065F019  3A 84 C9 EA 87 80 00      CMP AL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0065F020  0F 95 C3                  SETNZ BL
0065F023  8B C3                     MOV EAX,EBX
0065F025  EB 79                     JMP 0x0065f0a0
LAB_0065f027:
0065F027  3A D0                     CMP DL,AL
0065F029  74 6A                     JZ 0x0065f095
0065F02B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0065F02E  8B C2                     MOV EAX,EDX
0065F030  25 FF 00 00 00            AND EAX,0xff
0065F035  81 E1 FF 00 00 00         AND ECX,0xff
0065F03B  8A 9C C1 4F 8A 80 00      MOV BL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0065F042  84 DB                     TEST BL,BL
0065F044  75 10                     JNZ 0x0065f056
0065F046  38 9C C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],BL
0065F04D  75 07                     JNZ 0x0065f056
0065F04F  B8 FE FF FF FF            MOV EAX,0xfffffffe
0065F054  EB 41                     JMP 0x0065f097
LAB_0065f056:
0065F056  80 FB 01                  CMP BL,0x1
0065F059  75 0F                     JNZ 0x0065f06a
0065F05B  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0065F063  75 05                     JNZ 0x0065f06a
0065F065  83 C8 FF                  OR EAX,0xffffffff
0065F068  EB 2D                     JMP 0x0065f097
LAB_0065f06a:
0065F06A  84 DB                     TEST BL,BL
0065F06C  75 11                     JNZ 0x0065f07f
0065F06E  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0065F076  75 07                     JNZ 0x0065f07f
0065F078  B8 01 00 00 00            MOV EAX,0x1
0065F07D  EB 18                     JMP 0x0065f097
LAB_0065f07f:
0065F07F  80 FB 01                  CMP BL,0x1
0065F082  75 11                     JNZ 0x0065f095
0065F084  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0065F08C  75 07                     JNZ 0x0065f095
0065F08E  B8 02 00 00 00            MOV EAX,0x2
0065F093  EB 02                     JMP 0x0065f097
LAB_0065f095:
0065F095  33 C0                     XOR EAX,EAX
LAB_0065f097:
0065F097  33 C9                     XOR ECX,ECX
0065F099  85 C0                     TEST EAX,EAX
0065F09B  0F 9C C1                  SETL CL
0065F09E  8B C1                     MOV EAX,ECX
LAB_0065f0a0:
0065F0A0  33 C9                     XOR ECX,ECX
0065F0A2  3B C1                     CMP EAX,ECX
0065F0A4  74 47                     JZ 0x0065f0ed
0065F0A6  8D 45 F0                  LEA EAX,[EBP + -0x10]
0065F0A9  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0065F0AC  50                        PUSH EAX
0065F0AD  8D 45 F4                  LEA EAX,[EBP + -0xc]
0065F0B0  50                        PUSH EAX
0065F0B1  66 8B 46 08               MOV AX,word ptr [ESI + 0x8]
0065F0B5  51                        PUSH ECX
0065F0B6  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0065F0B9  51                        PUSH ECX
0065F0BA  66 8B 4E 0A               MOV CX,word ptr [ESI + 0xa]
0065F0BE  51                        PUSH ECX
0065F0BF  66 8B 4E 06               MOV CX,word ptr [ESI + 0x6]
0065F0C3  50                        PUSH EAX
0065F0C4  66 8B 46 04               MOV AX,word ptr [ESI + 0x4]
0065F0C8  51                        PUSH ECX
0065F0C9  66 8B 4E 02               MOV CX,word ptr [ESI + 0x2]
0065F0CD  50                        PUSH EAX
0065F0CE  66 8B 06                  MOV AX,word ptr [ESI]
0065F0D1  51                        PUSH ECX
0065F0D2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065F0D8  50                        PUSH EAX
0065F0D9  52                        PUSH EDX
0065F0DA  E8 8A 47 DA FF            CALL 0x00403869
0065F0DF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0065F0E2  85 C0                     TEST EAX,EAX
0065F0E4  7F 41                     JG 0x0065f127
0065F0E6  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0065F0E9  85 C0                     TEST EAX,EAX
0065F0EB  7F 3A                     JG 0x0065f127
LAB_0065f0ed:
0065F0ED  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0065F0F0  83 C7 51                  ADD EDI,0x51
0065F0F3  42                        INC EDX
0065F0F4  81 FF 71 8A 80 00         CMP EDI,0x808a71
0065F0FA  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0065F0FD  0F 8C C7 FE FF FF         JL 0x0065efca
0065F103  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0065F106  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0065F109  42                        INC EDX
0065F10A  8B 83 2F 02 00 00         MOV EAX,dword ptr [EBX + 0x22f]
0065F110  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0065F113  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0065F116  3B D1                     CMP EDX,ECX
0065F118  0F 8C 85 FE FF FF         JL 0x0065efa3
LAB_0065f11e:
0065F11E  5F                        POP EDI
0065F11F  5E                        POP ESI
0065F120  33 C0                     XOR EAX,EAX
0065F122  5B                        POP EBX
0065F123  8B E5                     MOV ESP,EBP
0065F125  5D                        POP EBP
0065F126  C3                        RET
LAB_0065f127:
0065F127  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065F12A  8B 16                     MOV EDX,dword ptr [ESI]
0065F12C  81 C1 95 01 00 00         ADD ECX,0x195
0065F132  5F                        POP EDI
0065F133  89 11                     MOV dword ptr [ECX],EDX
0065F135  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0065F138  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0065F13B  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0065F13E  5E                        POP ESI
0065F13F  B8 01 00 00 00            MOV EAX,0x1
0065F144  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
0065F147  5B                        POP EBX
0065F148  8B E5                     MOV ESP,EBP
0065F14A  5D                        POP EBP
0065F14B  C3                        RET

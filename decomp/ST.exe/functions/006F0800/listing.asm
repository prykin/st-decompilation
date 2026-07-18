FUN_006f0800:
006F0800  55                        PUSH EBP
006F0801  8B EC                     MOV EBP,ESP
006F0803  83 EC 5C                  SUB ESP,0x5c
006F0806  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F080B  53                        PUSH EBX
006F080C  56                        PUSH ESI
006F080D  57                        PUSH EDI
006F080E  8D 55 A8                  LEA EDX,[EBP + -0x58]
006F0811  8D 4D A4                  LEA ECX,[EBP + -0x5c]
006F0814  6A 00                     PUSH 0x0
006F0816  52                        PUSH EDX
006F0817  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006F081A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F0820  E8 CB CF 03 00            CALL 0x0072d7f0
006F0825  8B F0                     MOV ESI,EAX
006F0827  83 C4 08                  ADD ESP,0x8
006F082A  85 F6                     TEST ESI,ESI
006F082C  0F 85 D4 01 00 00         JNZ 0x006f0a06
006F0832  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006F0835  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006F0838  85 DB                     TEST EBX,EBX
006F083A  74 04                     JZ 0x006f0840
006F083C  85 F6                     TEST ESI,ESI
006F083E  75 17                     JNZ 0x006f0857
LAB_006f0840:
006F0840  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006F0845  68 47 02 00 00            PUSH 0x247
006F084A  68 88 EF 7E 00            PUSH 0x7eef88
006F084F  50                        PUSH EAX
006F0850  6A CC                     PUSH -0x34
006F0852  E8 E9 55 FB FF            CALL 0x006a5e40
LAB_006f0857:
006F0857  8B 06                     MOV EAX,dword ptr [ESI]
006F0859  8D 7E 08                  LEA EDI,[ESI + 0x8]
006F085C  0F AF 46 04               IMUL EAX,dword ptr [ESI + 0x4]
006F0860  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
006F0867  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
006F086E  2B C8                     SUB ECX,EAX
006F0870  33 C0                     XOR EAX,EAX
006F0872  D1 E1                     SHL ECX,0x1
006F0874  8B D1                     MOV EDX,ECX
006F0876  C1 E9 02                  SHR ECX,0x2
006F0879  F3 AB                     STOSD.REP ES:EDI
006F087B  8B CA                     MOV ECX,EDX
006F087D  83 E1 03                  AND ECX,0x3
006F0880  F3 AA                     STOSB.REP ES:EDI
006F0882  8B 83 55 04 00 00         MOV EAX,dword ptr [EBX + 0x455]
006F0888  85 C0                     TEST EAX,EAX
006F088A  0F 8E 64 01 00 00         JLE 0x006f09f4
006F0890  8D BB 59 04 00 00         LEA EDI,[EBX + 0x459]
006F0896  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_006f0899:
006F0899  8B 07                     MOV EAX,dword ptr [EDI]
006F089B  85 C0                     TEST EAX,EAX
006F089D  0F 84 36 01 00 00         JZ 0x006f09d9
006F08A3  66 83 78 4E 00            CMP word ptr [EAX + 0x4e],0x0
006F08A8  75 17                     JNZ 0x006f08c1
006F08AA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006F08AF  68 4E 02 00 00            PUSH 0x24e
006F08B4  68 88 EF 7E 00            PUSH 0x7eef88
006F08B9  50                        PUSH EAX
006F08BA  6A FB                     PUSH -0x5
006F08BC  E8 7F 55 FB FF            CALL 0x006a5e40
LAB_006f08c1:
006F08C1  8B 0F                     MOV ECX,dword ptr [EDI]
006F08C3  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
006F08CA  0F BF 41 04               MOVSX EAX,word ptr [ECX + 0x4]
006F08CE  99                        CDQ
006F08CF  2B C2                     SUB EAX,EDX
006F08D1  8B F8                     MOV EDI,EAX
006F08D3  0F BF 41 06               MOVSX EAX,word ptr [ECX + 0x6]
006F08D7  99                        CDQ
006F08D8  2B C2                     SUB EAX,EDX
006F08DA  8B D8                     MOV EBX,EAX
006F08DC  66 8B 41 4E               MOV AX,word ptr [ECX + 0x4e]
006F08E0  0F BF 51 08               MOVSX EDX,word ptr [ECX + 0x8]
006F08E4  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006F08E7  C1 E8 08                  SHR EAX,0x8
006F08EA  D1 FF                     SAR EDI,0x1
006F08EC  D1 FB                     SAR EBX,0x1
006F08EE  83 E0 0F                  AND EAX,0xf
006F08F1  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006F08F4  0F 8E D9 00 00 00         JLE 0x006f09d3
006F08FA  8B C2                     MOV EAX,EDX
006F08FC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F08FF  EB 03                     JMP 0x006f0904
LAB_006f0901:
006F0901  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006f0904:
006F0904  85 FF                     TEST EDI,EDI
006F0906  0F 8C 96 00 00 00         JL 0x006f09a2
006F090C  3B 3E                     CMP EDI,dword ptr [ESI]
006F090E  0F 8D 8E 00 00 00         JGE 0x006f09a2
006F0914  85 DB                     TEST EBX,EBX
006F0916  0F 8C 86 00 00 00         JL 0x006f09a2
006F091C  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006F091F  3B D9                     CMP EBX,ECX
006F0921  7D 7F                     JGE 0x006f09a2
006F0923  85 C0                     TEST EAX,EAX
006F0925  7C 7B                     JL 0x006f09a2
006F0927  83 F8 06                  CMP EAX,0x6
006F092A  7D 76                     JGE 0x006f09a2
006F092C  0F AF C1                  IMUL EAX,ECX
006F092F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F0932  03 C3                     ADD EAX,EBX
006F0934  0F AF 06                  IMUL EAX,dword ptr [ESI]
006F0937  8B 12                     MOV EDX,dword ptr [EDX]
006F0939  03 C7                     ADD EAX,EDI
006F093B  66 8B 4A 4C               MOV CX,word ptr [EDX + 0x4c]
006F093F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006F0942  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006F0945  F7 DA                     NEG EDX
006F0947  1B D2                     SBB EDX,EDX
006F0949  66 89 4C 46 0A            MOV word ptr [ESI + EAX*0x2 + 0xa],CX
006F094E  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006F0951  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006F0954  F7 D2                     NOT EDX
006F0956  23 D1                     AND EDX,ECX
006F0958  33 C9                     XOR ECX,ECX
006F095A  80 E2 0F                  AND DL,0xf
006F095D  25 FF F0 00 00            AND EAX,0xf0ff
006F0962  8A EA                     MOV CH,DL
006F0964  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F0967  0B C8                     OR ECX,EAX
006F0969  8B C2                     MOV EAX,EDX
006F096B  0F AF 46 04               IMUL EAX,dword ptr [ESI + 0x4]
006F096F  03 C3                     ADD EAX,EBX
006F0971  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006F0974  0F AF 06                  IMUL EAX,dword ptr [ESI]
006F0977  8D 44 38 02               LEA EAX,[EAX + EDI*0x1 + 0x2]
006F097B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006F097E  66 89 0C 46               MOV word ptr [ESI + EAX*0x2],CX
006F0982  8B C2                     MOV EAX,EDX
006F0984  0F AF 46 04               IMUL EAX,dword ptr [ESI + 0x4]
006F0988  03 C3                     ADD EAX,EBX
006F098A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006F098D  0F AF 06                  IMUL EAX,dword ptr [ESI]
006F0990  8B 09                     MOV ECX,dword ptr [ECX]
006F0992  03 C7                     ADD EAX,EDI
006F0994  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006F0997  66 8B 41 4A               MOV AX,word ptr [ECX + 0x4a]
006F099B  66 89 44 56 08            MOV word ptr [ESI + EDX*0x2 + 0x8],AX
006F09A0  EB 18                     JMP 0x006f09ba
LAB_006f09a2:
006F09A2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006F09A8  68 5C 02 00 00            PUSH 0x25c
006F09AD  68 88 EF 7E 00            PUSH 0x7eef88
006F09B2  51                        PUSH ECX
006F09B3  6A FB                     PUSH -0x5
006F09B5  E8 86 54 FB FF            CALL 0x006a5e40
LAB_006f09ba:
006F09BA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006F09BD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F09C0  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006F09C3  40                        INC EAX
006F09C4  4A                        DEC EDX
006F09C5  3B C1                     CMP EAX,ECX
006F09C7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006F09CA  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006F09CD  0F 8C 2E FF FF FF         JL 0x006f0901
LAB_006f09d3:
006F09D3  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006F09D6  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_006f09d9:
006F09D9  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006F09DC  8B 8B 55 04 00 00         MOV ECX,dword ptr [EBX + 0x455]
006F09E2  40                        INC EAX
006F09E3  83 C7 04                  ADD EDI,0x4
006F09E6  3B C1                     CMP EAX,ECX
006F09E8  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006F09EB  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006F09EE  0F 8C A5 FE FF FF         JL 0x006f0899
LAB_006f09f4:
006F09F4  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
006F09F7  33 C0                     XOR EAX,EAX
006F09F9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F09FF  5F                        POP EDI
006F0A00  5E                        POP ESI
006F0A01  5B                        POP EBX
006F0A02  8B E5                     MOV ESP,EBP
006F0A04  5D                        POP EBP
006F0A05  C3                        RET
LAB_006f0a06:
006F0A06  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006F0A09  68 64 F0 7E 00            PUSH 0x7ef064
006F0A0E  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F0A13  56                        PUSH ESI
006F0A14  6A 00                     PUSH 0x0
006F0A16  68 62 02 00 00            PUSH 0x262
006F0A1B  68 88 EF 7E 00            PUSH 0x7eef88
006F0A20  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F0A25  E8 A6 CA FB FF            CALL 0x006ad4d0
006F0A2A  83 C4 18                  ADD ESP,0x18
006F0A2D  85 C0                     TEST EAX,EAX
006F0A2F  74 01                     JZ 0x006f0a32
006F0A31  CC                        INT3
LAB_006f0a32:
006F0A32  68 64 02 00 00            PUSH 0x264
006F0A37  68 88 EF 7E 00            PUSH 0x7eef88
006F0A3C  6A 00                     PUSH 0x0
006F0A3E  56                        PUSH ESI
006F0A3F  E8 FC 53 FB FF            CALL 0x006a5e40
006F0A44  8B C6                     MOV EAX,ESI
006F0A46  5F                        POP EDI
006F0A47  5E                        POP ESI
006F0A48  5B                        POP EBX
006F0A49  8B E5                     MOV ESP,EBP
006F0A4B  5D                        POP EBP
006F0A4C  C3                        RET

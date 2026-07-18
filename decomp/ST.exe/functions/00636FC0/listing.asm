FUN_00636fc0:
00636FC0  55                        PUSH EBP
00636FC1  8B EC                     MOV EBP,ESP
00636FC3  83 EC 10                  SUB ESP,0x10
00636FC6  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00636FC9  53                        PUSH EBX
00636FCA  56                        PUSH ESI
00636FCB  57                        PUSH EDI
00636FCC  85 D2                     TEST EDX,EDX
00636FCE  B8 79 19 8C 02            MOV EAX,0x28c1979
00636FD3  7C 10                     JL 0x00636fe5
00636FD5  F7 EA                     IMUL EDX
00636FD7  D1 FA                     SAR EDX,0x1
00636FD9  8B C2                     MOV EAX,EDX
00636FDB  C1 E8 1F                  SHR EAX,0x1f
00636FDE  03 D0                     ADD EDX,EAX
00636FE0  0F BF DA                  MOVSX EBX,DX
00636FE3  EB 0F                     JMP 0x00636ff4
LAB_00636fe5:
00636FE5  F7 EA                     IMUL EDX
00636FE7  D1 FA                     SAR EDX,0x1
00636FE9  8B C2                     MOV EAX,EDX
00636FEB  C1 E8 1F                  SHR EAX,0x1f
00636FEE  03 D0                     ADD EDX,EAX
00636FF0  0F BF DA                  MOVSX EBX,DX
00636FF3  4B                        DEC EBX
LAB_00636ff4:
00636FF4  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
00636FF7  B8 79 19 8C 02            MOV EAX,0x28c1979
00636FFC  85 D2                     TEST EDX,EDX
00636FFE  7C 10                     JL 0x00637010
00637000  F7 EA                     IMUL EDX
00637002  D1 FA                     SAR EDX,0x1
00637004  8B C2                     MOV EAX,EDX
00637006  C1 E8 1F                  SHR EAX,0x1f
00637009  03 D0                     ADD EDX,EAX
0063700B  0F BF F2                  MOVSX ESI,DX
0063700E  EB 0F                     JMP 0x0063701f
LAB_00637010:
00637010  F7 EA                     IMUL EDX
00637012  D1 FA                     SAR EDX,0x1
00637014  8B C2                     MOV EAX,EDX
00637016  C1 E8 1F                  SHR EAX,0x1f
00637019  03 D0                     ADD EDX,EAX
0063701B  0F BF F2                  MOVSX ESI,DX
0063701E  4E                        DEC ESI
LAB_0063701f:
0063701F  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
00637022  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00637027  85 C9                     TEST ECX,ECX
00637029  7C 14                     JL 0x0063703f
0063702B  F7 E9                     IMUL ECX
0063702D  C1 FA 06                  SAR EDX,0x6
00637030  8B CA                     MOV ECX,EDX
00637032  C1 E9 1F                  SHR ECX,0x1f
00637035  03 D1                     ADD EDX,ECX
00637037  0F BF D2                  MOVSX EDX,DX
0063703A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0063703D  EB 13                     JMP 0x00637052
LAB_0063703f:
0063703F  F7 E9                     IMUL ECX
00637041  C1 FA 06                  SAR EDX,0x6
00637044  8B C2                     MOV EAX,EDX
00637046  C1 E8 1F                  SHR EAX,0x1f
00637049  03 D0                     ADD EDX,EAX
0063704B  0F BF C2                  MOVSX EAX,DX
0063704E  48                        DEC EAX
0063704F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00637052:
00637052  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637058  3B 59 48                  CMP EBX,dword ptr [ECX + 0x48]
0063705B  0F 8C AA 00 00 00         JL 0x0063710b
00637061  3B 59 58                  CMP EBX,dword ptr [ECX + 0x58]
00637064  0F 8F A1 00 00 00         JG 0x0063710b
0063706A  3B 71 44                  CMP ESI,dword ptr [ECX + 0x44]
0063706D  0F 8C 98 00 00 00         JL 0x0063710b
00637073  3B 71 54                  CMP ESI,dword ptr [ECX + 0x54]
00637076  0F 8F 8F 00 00 00         JG 0x0063710b
0063707C  6A 00                     PUSH 0x0
0063707E  56                        PUSH ESI
0063707F  53                        PUSH EBX
00637080  E8 4B 6B 0A 00            CALL 0x006ddbd0
00637085  85 C0                     TEST EAX,EAX
00637087  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0063708A  0F 84 82 00 00 00         JZ 0x00637112
00637090  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00637096  85 FF                     TEST EDI,EDI
00637098  74 78                     JZ 0x00637112
0063709A  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
006370A1  74 6F                     JZ 0x00637112
006370A3  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
006370A9  85 C0                     TEST EAX,EAX
006370AB  74 65                     JZ 0x00637112
006370AD  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
006370B3  8D 4D F0                  LEA ECX,[EBP + -0x10]
006370B6  8D 55 F4                  LEA EDX,[EBP + -0xc]
006370B9  51                        PUSH ECX
006370BA  52                        PUSH EDX
006370BB  56                        PUSH ESI
006370BC  53                        PUSH EBX
006370BD  50                        PUSH EAX
006370BE  8B CF                     MOV ECX,EDI
006370C0  E8 8E CE DC FF            CALL 0x00403f53
006370C5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006370C8  85 C0                     TEST EAX,EAX
006370CA  7C 46                     JL 0x00637112
006370CC  83 F8 05                  CMP EAX,0x5
006370CF  7D 41                     JGE 0x00637112
006370D1  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006370D4  85 D2                     TEST EDX,EDX
006370D6  7C 3A                     JL 0x00637112
006370D8  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
006370DB  3B D1                     CMP EDX,ECX
006370DD  7D 33                     JGE 0x00637112
006370DF  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
006370E6  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006370E9  03 C6                     ADD EAX,ESI
006370EB  85 C0                     TEST EAX,EAX
006370ED  7C 23                     JL 0x00637112
006370EF  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
006370F2  7D 1E                     JGE 0x00637112
006370F4  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
006370F7  85 FF                     TEST EDI,EDI
006370F9  74 17                     JZ 0x00637112
006370FB  0F AF C1                  IMUL EAX,ECX
006370FE  03 C7                     ADD EAX,EDI
00637100  33 C9                     XOR ECX,ECX
00637102  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
00637105  8B C1                     MOV EAX,ECX
00637107  85 C0                     TEST EAX,EAX
00637109  75 07                     JNZ 0x00637112
LAB_0063710b:
0063710B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_00637112:
00637112  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00637115  5F                        POP EDI
00637116  5E                        POP ESI
00637117  5B                        POP EBX
00637118  8B E5                     MOV ESP,EBP
0063711A  5D                        POP EBP
0063711B  C3                        RET

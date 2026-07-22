STRubbishC::sub_0062FEA0:
0062FEA0  55                        PUSH EBP
0062FEA1  8B EC                     MOV EBP,ESP
0062FEA3  51                        PUSH ECX
0062FEA4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0062FEA7  53                        PUSH EBX
0062FEA8  8B D9                     MOV EBX,ECX
0062FEAA  56                        PUSH ESI
0062FEAB  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0062FEB1  57                        PUSH EDI
0062FEB2  3B 51 48                  CMP EDX,dword ptr [ECX + 0x48]
0062FEB5  0F 8C C2 00 00 00         JL 0x0062ff7d
0062FEBB  3B 51 58                  CMP EDX,dword ptr [ECX + 0x58]
0062FEBE  0F 8F B9 00 00 00         JG 0x0062ff7d
0062FEC4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062FEC7  8B 71 44                  MOV ESI,dword ptr [ECX + 0x44]
0062FECA  3B C6                     CMP EAX,ESI
0062FECC  0F 8C AB 00 00 00         JL 0x0062ff7d
0062FED2  3B 41 54                  CMP EAX,dword ptr [ECX + 0x54]
0062FED5  0F 8F A2 00 00 00         JG 0x0062ff7d
0062FEDB  6A 00                     PUSH 0x0
0062FEDD  50                        PUSH EAX
0062FEDE  52                        PUSH EDX
0062FEDF  E8 EC DC 0A 00            CALL 0x006ddbd0
0062FEE4  85 C0                     TEST EAX,EAX
0062FEE6  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0062FEE9  0F 84 95 00 00 00         JZ 0x0062ff84
0062FEEF  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0062FEF5  85 F6                     TEST ESI,ESI
0062FEF7  0F 84 87 00 00 00         JZ 0x0062ff84
0062FEFD  A0 4D 87 80 00            MOV AL,[0x0080874d]
0062FF02  8B BB DD 01 00 00         MOV EDI,dword ptr [EBX + 0x1dd]
0062FF08  3C FF                     CMP AL,0xff
0062FF0A  74 78                     JZ 0x0062ff84
0062FF0C  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
0062FF12  85 C0                     TEST EAX,EAX
0062FF14  74 6E                     JZ 0x0062ff84
0062FF16  8B 93 D9 01 00 00         MOV EDX,dword ptr [EBX + 0x1d9]
0062FF1C  8D 45 FC                  LEA EAX,[EBP + -0x4]
0062FF1F  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0062FF22  50                        PUSH EAX
0062FF23  8B 83 D5 01 00 00         MOV EAX,dword ptr [EBX + 0x1d5]
0062FF29  51                        PUSH ECX
0062FF2A  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
0062FF30  52                        PUSH EDX
0062FF31  50                        PUSH EAX
0062FF32  51                        PUSH ECX
0062FF33  8B CE                     MOV ECX,ESI
0062FF35  E8 19 40 DD FF            CALL 0x00403f53
0062FF3A  85 FF                     TEST EDI,EDI
0062FF3C  7C 46                     JL 0x0062ff84
0062FF3E  83 FF 05                  CMP EDI,0x5
0062FF41  7D 41                     JGE 0x0062ff84
0062FF43  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0062FF46  85 D2                     TEST EDX,EDX
0062FF48  7C 3A                     JL 0x0062ff84
0062FF4A  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0062FF4D  3B D1                     CMP EDX,ECX
0062FF4F  7D 33                     JGE 0x0062ff84
0062FF51  8B 04 BD D0 AE 79 00      MOV EAX,dword ptr [EDI*0x4 + 0x79aed0]
0062FF58  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0062FF5B  03 C7                     ADD EAX,EDI
0062FF5D  85 C0                     TEST EAX,EAX
0062FF5F  7C 23                     JL 0x0062ff84
0062FF61  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0062FF64  7D 1E                     JGE 0x0062ff84
0062FF66  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
0062FF69  85 F6                     TEST ESI,ESI
0062FF6B  74 17                     JZ 0x0062ff84
0062FF6D  0F AF C1                  IMUL EAX,ECX
0062FF70  03 C6                     ADD EAX,ESI
0062FF72  33 C9                     XOR ECX,ECX
0062FF74  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0062FF77  8B C1                     MOV EAX,ECX
0062FF79  85 C0                     TEST EAX,EAX
0062FF7B  75 07                     JNZ 0x0062ff84
LAB_0062ff7d:
0062FF7D  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_0062ff84:
0062FF84  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062FF87  5F                        POP EDI
0062FF88  5E                        POP ESI
0062FF89  5B                        POP EBX
0062FF8A  8B E5                     MOV ESP,EBP
0062FF8C  5D                        POP EBP
0062FF8D  C2 0C 00                  RET 0xc

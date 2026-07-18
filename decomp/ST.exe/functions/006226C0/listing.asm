FUN_006226c0:
006226C0  55                        PUSH EBP
006226C1  8B EC                     MOV EBP,ESP
006226C3  51                        PUSH ECX
006226C4  56                        PUSH ESI
006226C5  8B F1                     MOV ESI,ECX
006226C7  8B 86 AE 02 00 00         MOV EAX,dword ptr [ESI + 0x2ae]
006226CD  85 C0                     TEST EAX,EAX
006226CF  74 05                     JZ 0x006226d6
006226D1  83 F8 01                  CMP EAX,0x1
006226D4  75 4C                     JNZ 0x00622722
LAB_006226d6:
006226D6  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
006226D9  33 C0                     XOR EAX,EAX
006226DB  A0 4D 87 80 00            MOV AL,[0x0080874d]
006226E0  3B C8                     CMP ECX,EAX
006226E2  74 3E                     JZ 0x00622722
006226E4  33 C9                     XOR ECX,ECX
006226E6  8A 8E AD 02 00 00         MOV CL,byte ptr [ESI + 0x2ad]
006226EC  83 F9 03                  CMP ECX,0x3
006226EF  77 31                     JA 0x00622722
switchD_006226f1::switchD:
006226F1  FF 24 8D 08 28 62 00      JMP dword ptr [ECX*0x4 + 0x622808]
switchD_006226f1::caseD_0:
006226F8  50                        PUSH EAX
006226F9  8B CE                     MOV ECX,ESI
006226FB  E8 65 01 DE FF            CALL 0x00402865
00622700  85 C0                     TEST EAX,EAX
00622702  75 1E                     JNZ 0x00622722
00622704  32 C0                     XOR AL,AL
00622706  5E                        POP ESI
00622707  8B E5                     MOV ESP,EBP
00622709  5D                        POP EBP
0062270A  C2 0C 00                  RET 0xc
switchD_006226f1::caseD_1:
0062270D  50                        PUSH EAX
0062270E  8B CE                     MOV ECX,ESI
00622710  E8 FC F0 DD FF            CALL 0x00401811
00622715  85 C0                     TEST EAX,EAX
00622717  75 09                     JNZ 0x00622722
switchD_006226f1::caseD_3:
00622719  32 C0                     XOR AL,AL
0062271B  5E                        POP ESI
0062271C  8B E5                     MOV ESP,EBP
0062271E  5D                        POP EBP
0062271F  C2 0C 00                  RET 0xc
switchD_006226f1::default:
00622722  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00622728  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0062272B  53                        PUSH EBX
0062272C  57                        PUSH EDI
0062272D  3B 51 48                  CMP EDX,dword ptr [ECX + 0x48]
00622730  0F 8C BC 00 00 00         JL 0x006227f2
00622736  3B 51 58                  CMP EDX,dword ptr [ECX + 0x58]
00622739  0F 8F B3 00 00 00         JG 0x006227f2
0062273F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00622742  8B 79 44                  MOV EDI,dword ptr [ECX + 0x44]
00622745  3B C7                     CMP EAX,EDI
00622747  0F 8C A5 00 00 00         JL 0x006227f2
0062274D  3B 41 54                  CMP EAX,dword ptr [ECX + 0x54]
00622750  0F 8F 9C 00 00 00         JG 0x006227f2
00622756  6A 00                     PUSH 0x0
00622758  50                        PUSH EAX
00622759  52                        PUSH EDX
0062275A  E8 71 B4 0B 00            CALL 0x006ddbd0
0062275F  85 C0                     TEST EAX,EAX
00622761  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00622764  0F 84 8F 00 00 00         JZ 0x006227f9
0062276A  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00622770  85 FF                     TEST EDI,EDI
00622772  0F 84 81 00 00 00         JZ 0x006227f9
00622778  A0 4D 87 80 00            MOV AL,[0x0080874d]
0062277D  0F BF 5E 4B               MOVSX EBX,word ptr [ESI + 0x4b]
00622781  3C FF                     CMP AL,0xff
00622783  74 74                     JZ 0x006227f9
00622785  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
0062278B  85 C0                     TEST EAX,EAX
0062278D  74 6A                     JZ 0x006227f9
0062278F  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00622793  8D 45 FC                  LEA EAX,[EBP + -0x4]
00622796  8D 4D 0C                  LEA ECX,[EBP + 0xc]
00622799  50                        PUSH EAX
0062279A  51                        PUSH ECX
0062279B  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0062279F  8B 8F 0C 01 00 00         MOV ECX,dword ptr [EDI + 0x10c]
006227A5  52                        PUSH EDX
006227A6  50                        PUSH EAX
006227A7  51                        PUSH ECX
006227A8  8B CF                     MOV ECX,EDI
006227AA  E8 A4 17 DE FF            CALL 0x00403f53
006227AF  85 DB                     TEST EBX,EBX
006227B1  7C 46                     JL 0x006227f9
006227B3  83 FB 05                  CMP EBX,0x5
006227B6  7D 41                     JGE 0x006227f9
006227B8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006227BB  85 D2                     TEST EDX,EDX
006227BD  7C 3A                     JL 0x006227f9
006227BF  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
006227C2  3B D1                     CMP EDX,ECX
006227C4  7D 33                     JGE 0x006227f9
006227C6  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
006227CD  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006227D0  03 C6                     ADD EAX,ESI
006227D2  85 C0                     TEST EAX,EAX
006227D4  7C 23                     JL 0x006227f9
006227D6  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
006227D9  7D 1E                     JGE 0x006227f9
006227DB  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
006227DE  85 FF                     TEST EDI,EDI
006227E0  74 17                     JZ 0x006227f9
006227E2  0F AF C1                  IMUL EAX,ECX
006227E5  03 C7                     ADD EAX,EDI
006227E7  33 C9                     XOR ECX,ECX
006227E9  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
006227EC  8B C1                     MOV EAX,ECX
006227EE  85 C0                     TEST EAX,EAX
006227F0  75 07                     JNZ 0x006227f9
LAB_006227f2:
006227F2  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_006227f9:
006227F9  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
006227FC  5F                        POP EDI
006227FD  5B                        POP EBX
006227FE  5E                        POP ESI
006227FF  8B E5                     MOV ESP,EBP
00622801  5D                        POP EBP
00622802  C2 0C 00                  RET 0xc

FUN_004e4f30:
004E4F30  56                        PUSH ESI
004E4F31  8B F1                     MOV ESI,ECX
004E4F33  57                        PUSH EDI
004E4F34  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E4F3A  83 F8 5D                  CMP EAX,0x5d
004E4F3D  74 09                     JZ 0x004e4f48
004E4F3F  83 F8 3D                  CMP EAX,0x3d
004E4F42  0F 85 83 01 00 00         JNZ 0x004e50cb
LAB_004e4f48:
004E4F48  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004E4F4E  85 C0                     TEST EAX,EAX
004E4F50  74 1F                     JZ 0x004e4f71
004E4F52  8B 86 39 02 00 00         MOV EAX,dword ptr [ESI + 0x239]
004E4F58  8B 0C 85 BC 8F 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x798fbc]
004E4F5F  51                        PUSH ECX
004E4F60  8B CE                     MOV ECX,ESI
004E4F62  E8 D5 CF F1 FF            CALL 0x00401f3c
004E4F67  C7 86 E0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4e0],0x0
LAB_004e4f71:
004E4F71  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004E4F74  8B 86 3D 02 00 00         MOV EAX,dword ptr [ESI + 0x23d]
004E4F7A  3B D0                     CMP EDX,EAX
004E4F7C  74 43                     JZ 0x004e4fc1
004E4F7E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E4F84  50                        PUSH EAX
004E4F85  E8 2D FA F1 FF            CALL 0x004049b7
004E4F8A  8A C8                     MOV CL,AL
004E4F8C  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004E4F92  81 E1 FF 00 00 00         AND ECX,0xff
004E4F98  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004E4F9B  03 CA                     ADD ECX,EDX
004E4F9D  8B C1                     MOV EAX,ECX
004E4F9F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E4FA5  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
004E4FA8  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004E4FAB  50                        PUSH EAX
004E4FAC  E8 06 FA F1 FF            CALL 0x004049b7
004E4FB1  25 FF 00 00 00            AND EAX,0xff
004E4FB6  8A 8C 07 84 19 7E 00      MOV CL,byte ptr [EDI + EAX*0x1 + 0x7e1984]
004E4FBD  84 C9                     TEST CL,CL
004E4FBF  74 3D                     JZ 0x004e4ffe
LAB_004e4fc1:
004E4FC1  83 BE AC 05 00 00 5D      CMP dword ptr [ESI + 0x5ac],0x5d
004E4FC8  75 15                     JNZ 0x004e4fdf
004E4FCA  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E4FCD  6A 46                     PUSH 0x46
004E4FCF  51                        PUSH ECX
004E4FD0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E4FD6  E8 90 C8 F1 FF            CALL 0x0040186b
004E4FDB  85 C0                     TEST EAX,EAX
004E4FDD  74 1F                     JZ 0x004e4ffe
LAB_004e4fdf:
004E4FDF  8B 96 39 02 00 00         MOV EDX,dword ptr [ESI + 0x239]
004E4FE5  8B CE                     MOV ECX,ESI
004E4FE7  8B 04 95 BC 8F 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x798fbc]
004E4FEE  50                        PUSH EAX
004E4FEF  E8 26 D8 F1 FF            CALL 0x0040281a
004E4FF4  C7 86 E0 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4e0],0x1
LAB_004e4ffe:
004E4FFE  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E5004  83 F8 5D                  CMP EAX,0x5d
004E5007  75 07                     JNZ 0x004e5010
004E5009  BF 4A 00 00 00            MOV EDI,0x4a
004E500E  EB 21                     JMP 0x004e5031
LAB_004e5010:
004E5010  83 F8 3D                  CMP EAX,0x3d
004E5013  75 1A                     JNZ 0x004e502f
004E5015  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004E5018  51                        PUSH ECX
004E5019  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E501F  E8 93 F9 F1 FF            CALL 0x004049b7
004E5024  3C 01                     CMP AL,0x1
004E5026  75 07                     JNZ 0x004e502f
004E5028  BF 12 00 00 00            MOV EDI,0x12
004E502D  EB 02                     JMP 0x004e5031
LAB_004e502f:
004E502F  33 FF                     XOR EDI,EDI
LAB_004e5031:
004E5031  8B 86 E4 04 00 00         MOV EAX,dword ptr [ESI + 0x4e4]
004E5037  85 C0                     TEST EAX,EAX
004E5039  74 13                     JZ 0x004e504e
004E503B  6A 0A                     PUSH 0xa
004E503D  8B CE                     MOV ECX,ESI
004E503F  E8 28 D1 F1 FF            CALL 0x0040216c
004E5044  C7 86 E4 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4e4],0x0
LAB_004e504e:
004E504E  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004E5051  8B 86 3D 02 00 00         MOV EAX,dword ptr [ESI + 0x23d]
004E5057  3B D0                     CMP EDX,EAX
004E5059  74 45                     JZ 0x004e50a0
004E505B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E5061  53                        PUSH EBX
004E5062  50                        PUSH EAX
004E5063  E8 4F F9 F1 FF            CALL 0x004049b7
004E5068  8A C8                     MOV CL,AL
004E506A  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004E5070  81 E1 FF 00 00 00         AND ECX,0xff
004E5076  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004E5079  03 CA                     ADD ECX,EDX
004E507B  8B C1                     MOV EAX,ECX
004E507D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E5083  8D 1C 40                  LEA EBX,[EAX + EAX*0x2]
004E5086  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004E5089  50                        PUSH EAX
004E508A  E8 28 F9 F1 FF            CALL 0x004049b7
004E508F  25 FF 00 00 00            AND EAX,0xff
004E5094  8A 8C 03 84 19 7E 00      MOV CL,byte ptr [EBX + EAX*0x1 + 0x7e1984]
004E509B  5B                        POP EBX
004E509C  84 C9                     TEST CL,CL
004E509E  74 2B                     JZ 0x004e50cb
LAB_004e50a0:
004E50A0  85 FF                     TEST EDI,EDI
004E50A2  74 14                     JZ 0x004e50b8
004E50A4  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E50A7  57                        PUSH EDI
004E50A8  51                        PUSH ECX
004E50A9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E50AF  E8 B7 C7 F1 FF            CALL 0x0040186b
004E50B4  85 C0                     TEST EAX,EAX
004E50B6  74 13                     JZ 0x004e50cb
LAB_004e50b8:
004E50B8  6A 0A                     PUSH 0xa
004E50BA  8B CE                     MOV ECX,ESI
004E50BC  E8 7E DA F1 FF            CALL 0x00402b3f
004E50C1  C7 86 E4 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4e4],0x1
LAB_004e50cb:
004E50CB  5F                        POP EDI
004E50CC  33 C0                     XOR EAX,EAX
004E50CE  5E                        POP ESI
004E50CF  C3                        RET

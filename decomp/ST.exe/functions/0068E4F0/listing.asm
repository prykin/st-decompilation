FUN_0068e4f0:
0068E4F0  55                        PUSH EBP
0068E4F1  8B EC                     MOV EBP,ESP
0068E4F3  83 EC 0C                  SUB ESP,0xc
0068E4F6  53                        PUSH EBX
0068E4F7  56                        PUSH ESI
0068E4F8  57                        PUSH EDI
0068E4F9  6A 14                     PUSH 0x14
0068E4FB  6A 02                     PUSH 0x2
0068E4FD  8B F9                     MOV EDI,ECX
0068E4FF  6A 14                     PUSH 0x14
0068E501  6A 00                     PUSH 0x0
0068E503  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0068E506  E8 85 FD 01 00            CALL 0x006ae290
0068E50B  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
0068E511  8B D8                     MOV EBX,EAX
0068E513  33 F6                     XOR ESI,ESI
0068E515  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068E518  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0068E51B  85 C0                     TEST EAX,EAX
0068E51D  0F 8E 80 00 00 00         JLE 0x0068e5a3
0068E523  3B F0                     CMP ESI,EAX
LAB_0068e525:
0068E525  73 0D                     JNC 0x0068e534
0068E527  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068E52A  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0068E52D  0F AF C6                  IMUL EAX,ESI
0068E530  03 C2                     ADD EAX,EDX
0068E532  EB 02                     JMP 0x0068e536
LAB_0068e534:
0068E534  33 C0                     XOR EAX,EAX
LAB_0068e536:
0068E536  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0068E539  85 C0                     TEST EAX,EAX
0068E53B  74 52                     JZ 0x0068e58f
0068E53D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0068E540  51                        PUSH ECX
0068E541  8B C8                     MOV ECX,EAX
0068E543  E8 6E 74 D7 FF            CALL 0x004059b6
0068E548  8B F8                     MOV EDI,EAX
0068E54A  85 FF                     TEST EDI,EDI
0068E54C  74 41                     JZ 0x0068e58f
0068E54E  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0068E551  85 C0                     TEST EAX,EAX
0068E553  74 34                     JZ 0x0068e589
0068E555  33 F6                     XOR ESI,ESI
0068E557  85 C0                     TEST EAX,EAX
0068E559  7E 2B                     JLE 0x0068e586
0068E55B  3B F0                     CMP ESI,EAX
LAB_0068e55d:
0068E55D  73 0D                     JNC 0x0068e56c
0068E55F  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0068E562  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0068E565  0F AF C6                  IMUL EAX,ESI
0068E568  03 C1                     ADD EAX,ECX
0068E56A  EB 02                     JMP 0x0068e56e
LAB_0068e56c:
0068E56C  33 C0                     XOR EAX,EAX
LAB_0068e56e:
0068E56E  66 8B 10                  MOV DX,word ptr [EAX]
0068E571  8D 45 F8                  LEA EAX,[EBP + -0x8]
0068E574  50                        PUSH EAX
0068E575  53                        PUSH EBX
0068E576  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0068E579  E8 42 FC 01 00            CALL 0x006ae1c0
0068E57E  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0068E581  46                        INC ESI
0068E582  3B F0                     CMP ESI,EAX
0068E584  7C D7                     JL 0x0068e55d
LAB_0068e586:
0068E586  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_0068e589:
0068E589  57                        PUSH EDI
0068E58A  E8 81 FB 01 00            CALL 0x006ae110
LAB_0068e58f:
0068E58F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0068E592  46                        INC ESI
0068E593  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0068E596  8B 89 A5 00 00 00         MOV ECX,dword ptr [ECX + 0xa5]
0068E59C  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068E59F  3B F0                     CMP ESI,EAX
0068E5A1  7C 82                     JL 0x0068e525
LAB_0068e5a3:
0068E5A3  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0068E5A6  85 C0                     TEST EAX,EAX
0068E5A8  75 11                     JNZ 0x0068e5bb
0068E5AA  53                        PUSH EBX
0068E5AB  E8 60 FB 01 00            CALL 0x006ae110
0068E5B0  5F                        POP EDI
0068E5B1  5E                        POP ESI
0068E5B2  33 C0                     XOR EAX,EAX
0068E5B4  5B                        POP EBX
0068E5B5  8B E5                     MOV ESP,EBP
0068E5B7  5D                        POP EBP
0068E5B8  C2 04 00                  RET 0x4
LAB_0068e5bb:
0068E5BB  5F                        POP EDI
0068E5BC  8B C3                     MOV EAX,EBX
0068E5BE  5E                        POP ESI
0068E5BF  5B                        POP EBX
0068E5C0  8B E5                     MOV ESP,EBP
0068E5C2  5D                        POP EBP
0068E5C3  C2 04 00                  RET 0x4

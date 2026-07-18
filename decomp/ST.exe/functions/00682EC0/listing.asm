FUN_00682ec0:
00682EC0  56                        PUSH ESI
00682EC1  8B 35 18 2D 7D 00         MOV ESI,dword ptr [0x007d2d18]
00682EC7  57                        PUSH EDI
00682EC8  33 FF                     XOR EDI,EDI
00682ECA  8D 46 FF                  LEA EAX,[ESI + -0x1]
00682ECD  83 F8 3C                  CMP EAX,0x3c
00682ED0  77 1D                     JA 0x00682eef
00682ED2  33 C9                     XOR ECX,ECX
00682ED4  8A 88 40 2F 68 00         MOV CL,byte ptr [EAX + 0x682f40]
switchD_00682eda::switchD:
00682EDA  FF 24 8D 34 2F 68 00      JMP dword ptr [ECX*0x4 + 0x682f34]
switchD_00682eda::caseD_9:
00682EE1  BF 01 00 00 00            MOV EDI,0x1
00682EE6  EB 02                     JMP 0x00682eea
switchD_00682eda::caseD_1:
00682EE8  33 FF                     XOR EDI,EDI
LAB_00682eea:
00682EEA  E8 7A F5 D7 FF            CALL 0x00402469
switchD_00682eda::caseD_2:
00682EEF  E8 82 24 D8 FF            CALL 0x00405376
00682EF4  85 FF                     TEST EDI,EDI
00682EF6  74 39                     JZ 0x00682f31
00682EF8  83 FE 09                  CMP ESI,0x9
00682EFB  74 28                     JZ 0x00682f25
00682EFD  83 FE 32                  CMP ESI,0x32
00682F00  74 14                     JZ 0x00682f16
00682F02  83 FE 3D                  CMP ESI,0x3d
00682F05  75 2A                     JNZ 0x00682f31
00682F07  6A 01                     PUSH 0x1
00682F09  6A 41                     PUSH 0x41
00682F0B  E8 5D 2D D8 FF            CALL 0x00405c6d
00682F10  83 C4 08                  ADD ESP,0x8
00682F13  5F                        POP EDI
00682F14  5E                        POP ESI
00682F15  C3                        RET
LAB_00682f16:
00682F16  6A 01                     PUSH 0x1
00682F18  6A 32                     PUSH 0x32
00682F1A  E8 4E 2D D8 FF            CALL 0x00405c6d
00682F1F  83 C4 08                  ADD ESP,0x8
00682F22  5F                        POP EDI
00682F23  5E                        POP ESI
00682F24  C3                        RET
LAB_00682f25:
00682F25  6A 01                     PUSH 0x1
00682F27  6A 09                     PUSH 0x9
00682F29  E8 3F 2D D8 FF            CALL 0x00405c6d
00682F2E  83 C4 08                  ADD ESP,0x8
LAB_00682f31:
00682F31  5F                        POP EDI
00682F32  5E                        POP ESI
00682F33  C3                        RET

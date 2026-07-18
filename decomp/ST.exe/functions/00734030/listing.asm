FUN_00734030:
00734030  55                        PUSH EBP
00734031  8B EC                     MOV EBP,ESP
00734033  83 EC 10                  SUB ESP,0x10
00734036  83 3D 10 72 85 00 00      CMP dword ptr [0x00857210],0x0
0073403D  75 1D                     JNZ 0x0073405c
0073403F  83 7D 08 61               CMP dword ptr [EBP + 0x8],0x61
00734043  7C 0F                     JL 0x00734054
00734045  83 7D 08 7A               CMP dword ptr [EBP + 0x8],0x7a
00734049  7F 09                     JG 0x00734054
0073404B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073404E  83 E8 20                  SUB EAX,0x20
00734051  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00734054:
00734054  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734057  E9 FB 00 00 00            JMP 0x00734157
LAB_0073405c:
0073405C  81 7D 08 00 01 00 00      CMP dword ptr [EBP + 0x8],0x100
00734063  7D 3E                     JGE 0x007340a3
00734065  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0073406C  7E 13                     JLE 0x00734081
0073406E  6A 02                     PUSH 0x2
00734070  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00734073  51                        PUSH ECX
00734074  E8 97 C5 FF FF            CALL 0x00730610
00734079  83 C4 08                  ADD ESP,0x8
0073407C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0073407F  EB 14                     JMP 0x00734095
LAB_00734081:
00734081  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00734084  A1 80 12 7F 00            MOV EAX,[0x007f1280]
00734089  33 C9                     XOR ECX,ECX
0073408B  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
0073408F  83 E1 02                  AND ECX,0x2
00734092  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_00734095:
00734095  83 7D F0 00               CMP dword ptr [EBP + -0x10],0x0
00734099  75 08                     JNZ 0x007340a3
0073409B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073409E  E9 B4 00 00 00            JMP 0x00734157
LAB_007340a3:
007340A3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007340A6  C1 FA 08                  SAR EDX,0x8
007340A9  81 E2 FF 00 00 00         AND EDX,0xff
007340AF  81 E2 FF 00 00 00         AND EDX,0xff
007340B5  A1 80 12 7F 00            MOV EAX,[0x007f1280]
007340BA  33 C9                     XOR ECX,ECX
007340BC  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
007340C0  81 E1 00 80 00 00         AND ECX,0x8000
007340C6  85 C9                     TEST ECX,ECX
007340C8  74 22                     JZ 0x007340ec
007340CA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007340CD  C1 FA 08                  SAR EDX,0x8
007340D0  81 E2 FF 00 00 00         AND EDX,0xff
007340D6  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
007340D9  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
007340DC  88 45 F9                  MOV byte ptr [EBP + -0x7],AL
007340DF  C6 45 FA 00               MOV byte ptr [EBP + -0x6],0x0
007340E3  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
007340EA  EB 11                     JMP 0x007340fd
LAB_007340ec:
007340EC  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
007340EF  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
007340F2  C6 45 F9 00               MOV byte ptr [EBP + -0x7],0x0
007340F6  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_007340fd:
007340FD  6A 01                     PUSH 0x1
007340FF  6A 00                     PUSH 0x0
00734101  6A 03                     PUSH 0x3
00734103  8D 55 F4                  LEA EDX,[EBP + -0xc]
00734106  52                        PUSH EDX
00734107  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073410A  50                        PUSH EAX
0073410B  8D 4D F8                  LEA ECX,[EBP + -0x8]
0073410E  51                        PUSH ECX
0073410F  68 00 02 00 00            PUSH 0x200
00734114  8B 15 10 72 85 00         MOV EDX,dword ptr [0x00857210]
0073411A  52                        PUSH EDX
0073411B  E8 F0 88 00 00            CALL 0x0073ca10
00734120  83 C4 20                  ADD ESP,0x20
00734123  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00734126  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0073412A  75 05                     JNZ 0x00734131
0073412C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073412F  EB 26                     JMP 0x00734157
LAB_00734131:
00734131  83 7D FC 01               CMP dword ptr [EBP + -0x4],0x1
00734135  75 0A                     JNZ 0x00734141
00734137  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073413A  25 FF 00 00 00            AND EAX,0xff
0073413F  EB 16                     JMP 0x00734157
LAB_00734141:
00734141  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00734144  25 FF 00 00 00            AND EAX,0xff
00734149  8B 4D F5                  MOV ECX,dword ptr [EBP + -0xb]
0073414C  81 E1 FF 00 00 00         AND ECX,0xff
00734152  C1 E1 08                  SHL ECX,0x8
00734155  0B C1                     OR EAX,ECX
LAB_00734157:
00734157  8B E5                     MOV ESP,EBP
00734159  5D                        POP EBP
0073415A  C3                        RET

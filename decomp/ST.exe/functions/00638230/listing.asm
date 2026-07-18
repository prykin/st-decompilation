FUN_00638230:
00638230  55                        PUSH EBP
00638231  8B EC                     MOV EBP,ESP
00638233  51                        PUSH ECX
00638234  A1 74 67 80 00            MOV EAX,[0x00806774]
00638239  56                        PUSH ESI
0063823A  6A 00                     PUSH 0x0
0063823C  6A 00                     PUSH 0x0
0063823E  6A 01                     PUSH 0x1
00638240  6A 00                     PUSH 0x0
00638242  6A FF                     PUSH -0x1
00638244  68 98 1C 7D 00            PUSH 0x7d1c98
00638249  6A 1D                     PUSH 0x1d
0063824B  50                        PUSH EAX
0063824C  E8 9F 18 0D 00            CALL 0x00709af0
00638251  8B F0                     MOV ESI,EAX
00638253  83 C4 20                  ADD ESP,0x20
00638256  85 F6                     TEST ESI,ESI
00638258  0F 84 1A 01 00 00         JZ 0x00638378
0063825E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00638264  85 C9                     TEST ECX,ECX
00638266  0F 84 0C 01 00 00         JZ 0x00638378
0063826C  53                        PUSH EBX
0063826D  57                        PUSH EDI
0063826E  8B 7E 0D                  MOV EDI,dword ptr [ESI + 0xd]
00638271  8B 5E 09                  MOV EBX,dword ptr [ESI + 0x9]
00638274  8B C7                     MOV EAX,EDI
00638276  6A 00                     PUSH 0x0
00638278  99                        CDQ
00638279  2B C2                     SUB EAX,EDX
0063827B  D1 F8                     SAR EAX,0x1
0063827D  83 E8 17                  SUB EAX,0x17
00638280  50                        PUSH EAX
00638281  8B C3                     MOV EAX,EBX
00638283  99                        CDQ
00638284  2B C2                     SUB EAX,EDX
00638286  8D 55 FC                  LEA EDX,[EBP + -0x4]
00638289  D1 F8                     SAR EAX,0x1
0063828B  50                        PUSH EAX
0063828C  57                        PUSH EDI
0063828D  53                        PUSH EBX
0063828E  6A 00                     PUSH 0x0
00638290  6A 01                     PUSH 0x1
00638292  52                        PUSH EDX
00638293  E8 C8 03 0B 00            CALL 0x006e8660
00638298  8B 46 21                  MOV EAX,dword ptr [ESI + 0x21]
0063829B  8B 0E                     MOV ECX,dword ptr [ESI]
0063829D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006382A0  6A 01                     PUSH 0x1
006382A2  50                        PUSH EAX
006382A3  51                        PUSH ECX
006382A4  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006382AA  6A 00                     PUSH 0x0
006382AC  52                        PUSH EDX
006382AD  E8 2E 16 0B 00            CALL 0x006e98e0
006382B2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006382B5  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006382BB  6A 00                     PUSH 0x0
006382BD  6A 00                     PUSH 0x0
006382BF  50                        PUSH EAX
006382C0  E8 AB 1F 0B 00            CALL 0x006ea270
006382C5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006382C8  6A 00                     PUSH 0x0
006382CA  6A 02                     PUSH 0x2
006382CC  6A 00                     PUSH 0x0
006382CE  51                        PUSH ECX
006382CF  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006382D5  E8 C6 25 0B 00            CALL 0x006ea8a0
006382DA  DB 45 18                  FILD dword ptr [EBP + 0x18]
006382DD  51                        PUSH ECX
006382DE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006382E1  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006382E7  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006382ED  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
006382F3  D9 1C 24                  FSTP float ptr [ESP]
006382F6  DB 45 14                  FILD dword ptr [EBP + 0x14]
006382F9  51                        PUSH ECX
006382FA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00638300  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00638306  D9 1C 24                  FSTP float ptr [ESP]
00638309  DB 45 10                  FILD dword ptr [EBP + 0x10]
0063830C  51                        PUSH ECX
0063830D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00638313  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00638319  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063831F  D9 1C 24                  FSTP float ptr [ESP]
00638322  52                        PUSH EDX
00638323  E8 38 26 0B 00            CALL 0x006ea960
00638328  8B 46 0D                  MOV EAX,dword ptr [ESI + 0xd]
0063832B  99                        CDQ
0063832C  2B C2                     SUB EAX,EDX
0063832E  D1 F8                     SAR EAX,0x1
00638330  83 E8 17                  SUB EAX,0x17
00638333  50                        PUSH EAX
00638334  8B 46 09                  MOV EAX,dword ptr [ESI + 0x9]
00638337  99                        CDQ
00638338  2B C2                     SUB EAX,EDX
0063833A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00638340  D1 F8                     SAR EAX,0x1
00638342  50                        PUSH EAX
00638343  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00638346  6A 01                     PUSH 0x1
00638348  50                        PUSH EAX
00638349  E8 92 21 0B 00            CALL 0x006ea4e0
0063834E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00638351  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00638354  51                        PUSH ECX
00638355  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0063835B  6A FF                     PUSH -0x1
0063835D  6A 01                     PUSH 0x1
0063835F  52                        PUSH EDX
00638360  E8 EB 1C 0B 00            CALL 0x006ea050
00638365  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00638368  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0063836E  6A 00                     PUSH 0x0
00638370  50                        PUSH EAX
00638371  E8 2A 27 0B 00            CALL 0x006eaaa0
00638376  5F                        POP EDI
00638377  5B                        POP EBX
LAB_00638378:
00638378  5E                        POP ESI
00638379  8B E5                     MOV ESP,EBP
0063837B  5D                        POP EBP
0063837C  C3                        RET

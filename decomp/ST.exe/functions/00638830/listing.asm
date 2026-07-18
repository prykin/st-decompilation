FUN_00638830:
00638830  55                        PUSH EBP
00638831  8B EC                     MOV EBP,ESP
00638833  51                        PUSH ECX
00638834  A1 74 67 80 00            MOV EAX,[0x00806774]
00638839  56                        PUSH ESI
0063883A  6A 00                     PUSH 0x0
0063883C  6A 00                     PUSH 0x0
0063883E  6A 01                     PUSH 0x1
00638840  6A 00                     PUSH 0x0
00638842  6A FF                     PUSH -0x1
00638844  68 A0 1C 7D 00            PUSH 0x7d1ca0
00638849  6A 1D                     PUSH 0x1d
0063884B  50                        PUSH EAX
0063884C  E8 9F 12 0D 00            CALL 0x00709af0
00638851  8B F0                     MOV ESI,EAX
00638853  83 C4 20                  ADD ESP,0x20
00638856  85 F6                     TEST ESI,ESI
00638858  0F 84 1F 01 00 00         JZ 0x0063897d
0063885E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00638864  85 C9                     TEST ECX,ECX
00638866  0F 84 11 01 00 00         JZ 0x0063897d
0063886C  53                        PUSH EBX
0063886D  57                        PUSH EDI
0063886E  8B 7E 0D                  MOV EDI,dword ptr [ESI + 0xd]
00638871  8B 5E 09                  MOV EBX,dword ptr [ESI + 0x9]
00638874  8B C7                     MOV EAX,EDI
00638876  6A 00                     PUSH 0x0
00638878  99                        CDQ
00638879  2B C2                     SUB EAX,EDX
0063887B  D1 F8                     SAR EAX,0x1
0063887D  83 E8 17                  SUB EAX,0x17
00638880  50                        PUSH EAX
00638881  8B C3                     MOV EAX,EBX
00638883  99                        CDQ
00638884  2B C2                     SUB EAX,EDX
00638886  8D 55 FC                  LEA EDX,[EBP + -0x4]
00638889  D1 F8                     SAR EAX,0x1
0063888B  50                        PUSH EAX
0063888C  57                        PUSH EDI
0063888D  53                        PUSH EBX
0063888E  6A 00                     PUSH 0x0
00638890  6A 01                     PUSH 0x1
00638892  52                        PUSH EDX
00638893  E8 C8 FD 0A 00            CALL 0x006e8660
00638898  8B 46 21                  MOV EAX,dword ptr [ESI + 0x21]
0063889B  8B 0E                     MOV ECX,dword ptr [ESI]
0063889D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006388A0  6A 01                     PUSH 0x1
006388A2  50                        PUSH EAX
006388A3  51                        PUSH ECX
006388A4  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006388AA  6A 00                     PUSH 0x0
006388AC  52                        PUSH EDX
006388AD  E8 2E 10 0B 00            CALL 0x006e98e0
006388B2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006388B5  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006388BB  6A 00                     PUSH 0x0
006388BD  6A 00                     PUSH 0x0
006388BF  50                        PUSH EAX
006388C0  E8 AB 19 0B 00            CALL 0x006ea270
006388C5  8B 0D BC 32 80 00         MOV ECX,dword ptr [0x008032bc]
006388CB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006388CE  51                        PUSH ECX
006388CF  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006388D5  6A 02                     PUSH 0x2
006388D7  6A 00                     PUSH 0x0
006388D9  52                        PUSH EDX
006388DA  E8 C1 1F 0B 00            CALL 0x006ea8a0
006388DF  DB 45 18                  FILD dword ptr [EBP + 0x18]
006388E2  51                        PUSH ECX
006388E3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006388E6  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006388EC  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006388F2  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
006388F8  D9 1C 24                  FSTP float ptr [ESP]
006388FB  DB 45 14                  FILD dword ptr [EBP + 0x14]
006388FE  51                        PUSH ECX
006388FF  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00638905  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063890B  D9 1C 24                  FSTP float ptr [ESP]
0063890E  DB 45 10                  FILD dword ptr [EBP + 0x10]
00638911  51                        PUSH ECX
00638912  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00638918  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063891E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00638924  D9 1C 24                  FSTP float ptr [ESP]
00638927  50                        PUSH EAX
00638928  E8 33 20 0B 00            CALL 0x006ea960
0063892D  8B 46 0D                  MOV EAX,dword ptr [ESI + 0xd]
00638930  99                        CDQ
00638931  2B C2                     SUB EAX,EDX
00638933  D1 F8                     SAR EAX,0x1
00638935  83 E8 17                  SUB EAX,0x17
00638938  50                        PUSH EAX
00638939  8B 46 09                  MOV EAX,dword ptr [ESI + 0x9]
0063893C  99                        CDQ
0063893D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00638940  2B C2                     SUB EAX,EDX
00638942  D1 F8                     SAR EAX,0x1
00638944  50                        PUSH EAX
00638945  6A 01                     PUSH 0x1
00638947  51                        PUSH ECX
00638948  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0063894E  E8 8D 1B 0B 00            CALL 0x006ea4e0
00638953  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00638956  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00638959  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0063895F  52                        PUSH EDX
00638960  6A FF                     PUSH -0x1
00638962  6A 02                     PUSH 0x2
00638964  50                        PUSH EAX
00638965  E8 E6 16 0B 00            CALL 0x006ea050
0063896A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0063896D  6A 00                     PUSH 0x0
0063896F  51                        PUSH ECX
00638970  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00638976  E8 25 21 0B 00            CALL 0x006eaaa0
0063897B  5F                        POP EDI
0063897C  5B                        POP EBX
LAB_0063897d:
0063897D  5E                        POP ESI
0063897E  8B E5                     MOV ESP,EBP
00638980  5D                        POP EBP
00638981  C3                        RET

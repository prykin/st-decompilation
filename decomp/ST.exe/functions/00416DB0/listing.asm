FUN_00416db0:
00416DB0  55                        PUSH EBP
00416DB1  8B EC                     MOV EBP,ESP
00416DB3  6A FF                     PUSH -0x1
00416DB5  68 E0 04 79 00            PUSH 0x7904e0
00416DBA  68 64 D9 72 00            PUSH 0x72d964
00416DBF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00416DC5  50                        PUSH EAX
00416DC6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
00416DCD  83 EC 24                  SUB ESP,0x24
00416DD0  53                        PUSH EBX
00416DD1  56                        PUSH ESI
00416DD2  57                        PUSH EDI
00416DD3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00416DD6  9B                        WAIT
00416DD7  33 F6                     XOR ESI,ESI
00416DD9  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00416DDC  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
00416DE0  0F BF 4D 14               MOVSX ECX,word ptr [EBP + 0x14]
00416DE4  2B C8                     SUB ECX,EAX
00416DE6  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00416DE9  DB 45 D0                  FILD dword ptr [EBP + -0x30]
00416DEC  D9 55 D4                  FST float ptr [EBP + -0x2c]
00416DEF  0F BF 55 0C               MOVSX EDX,word ptr [EBP + 0xc]
00416DF3  0F BF 45 18               MOVSX EAX,word ptr [EBP + 0x18]
00416DF7  2B C2                     SUB EAX,EDX
00416DF9  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00416DFC  DB 45 CC                  FILD dword ptr [EBP + -0x34]
00416DFF  D9 5D D8                  FSTP float ptr [EBP + -0x28]
00416E02  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
00416E05  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416E0B  DF E0                     FNSTSW AX
00416E0D  F6 C4 40                  TEST AH,0x40
00416E10  74 17                     JZ 0x00416e29
00416E12  D9 45 D8                  FLD float ptr [EBP + -0x28]
00416E15  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416E1B  DF E0                     FNSTSW AX
00416E1D  F6 C4 40                  TEST AH,0x40
00416E20  74 07                     JZ 0x00416e29
00416E22  C7 45 D4 00 00 80 3F      MOV dword ptr [EBP + -0x2c],0x3f800000
LAB_00416e29:
00416E29  8D 4D D4                  LEA ECX,[EBP + -0x2c]
00416E2C  51                        PUSH ECX
00416E2D  E8 F2 57 31 00            CALL 0x0072c624
00416E32  D8 7D D8                  FDIVR float ptr [EBP + -0x28]
00416E35  D9 55 E4                  FST float ptr [EBP + -0x1c]
00416E38  DC 1D D0 04 79 00         FCOMP double ptr [0x007904d0]
00416E3E  DF E0                     FNSTSW AX
00416E40  F6 C4 01                  TEST AH,0x1
00416E43  74 0C                     JZ 0x00416e51
00416E45  C7 45 E0 0C 00 00 00      MOV dword ptr [EBP + -0x20],0xc
00416E4C  E9 6F 06 00 00            JMP 0x004174c0
LAB_00416e51:
00416E51  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416E54  DC 1D D0 04 79 00         FCOMP double ptr [0x007904d0]
00416E5A  DF E0                     FNSTSW AX
00416E5C  F6 C4 41                  TEST AH,0x41
00416E5F  75 38                     JNZ 0x00416e99
00416E61  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416E64  DC 1D C0 04 79 00         FCOMP double ptr [0x007904c0]
00416E6A  DF E0                     FNSTSW AX
00416E6C  F6 C4 01                  TEST AH,0x1
00416E6F  74 28                     JZ 0x00416e99
00416E71  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00416E74  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416E7A  DF E0                     FNSTSW AX
00416E7C  F6 C4 41                  TEST AH,0x41
00416E7F  75 0C                     JNZ 0x00416e8d
00416E81  C7 45 E0 0B 00 00 00      MOV dword ptr [EBP + -0x20],0xb
00416E88  E9 33 06 00 00            JMP 0x004174c0
LAB_00416e8d:
00416E8D  C7 45 E0 0D 00 00 00      MOV dword ptr [EBP + -0x20],0xd
00416E94  E9 27 06 00 00            JMP 0x004174c0
LAB_00416e99:
00416E99  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416E9C  DC 1D C0 04 79 00         FCOMP double ptr [0x007904c0]
00416EA2  DF E0                     FNSTSW AX
00416EA4  F6 C4 41                  TEST AH,0x41
00416EA7  75 38                     JNZ 0x00416ee1
00416EA9  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416EAC  DC 1D B0 04 79 00         FCOMP double ptr [0x007904b0]
00416EB2  DF E0                     FNSTSW AX
00416EB4  F6 C4 01                  TEST AH,0x1
00416EB7  74 28                     JZ 0x00416ee1
00416EB9  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00416EBC  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416EC2  DF E0                     FNSTSW AX
00416EC4  F6 C4 41                  TEST AH,0x41
00416EC7  75 0C                     JNZ 0x00416ed5
00416EC9  C7 45 E0 0A 00 00 00      MOV dword ptr [EBP + -0x20],0xa
00416ED0  E9 EB 05 00 00            JMP 0x004174c0
LAB_00416ed5:
00416ED5  C7 45 E0 0E 00 00 00      MOV dword ptr [EBP + -0x20],0xe
00416EDC  E9 DF 05 00 00            JMP 0x004174c0
LAB_00416ee1:
00416EE1  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416EE4  DC 1D B0 04 79 00         FCOMP double ptr [0x007904b0]
00416EEA  DF E0                     FNSTSW AX
00416EEC  F6 C4 41                  TEST AH,0x41
00416EEF  75 38                     JNZ 0x00416f29
00416EF1  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416EF4  DC 1D A0 04 79 00         FCOMP double ptr [0x007904a0]
00416EFA  DF E0                     FNSTSW AX
00416EFC  F6 C4 01                  TEST AH,0x1
00416EFF  74 28                     JZ 0x00416f29
00416F01  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00416F04  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416F0A  DF E0                     FNSTSW AX
00416F0C  F6 C4 41                  TEST AH,0x41
00416F0F  75 0C                     JNZ 0x00416f1d
00416F11  C7 45 E0 09 00 00 00      MOV dword ptr [EBP + -0x20],0x9
00416F18  E9 A3 05 00 00            JMP 0x004174c0
LAB_00416f1d:
00416F1D  C7 45 E0 0F 00 00 00      MOV dword ptr [EBP + -0x20],0xf
00416F24  E9 97 05 00 00            JMP 0x004174c0
LAB_00416f29:
00416F29  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416F2C  DC 1D A0 04 79 00         FCOMP double ptr [0x007904a0]
00416F32  DF E0                     FNSTSW AX
00416F34  F6 C4 41                  TEST AH,0x41
00416F37  75 38                     JNZ 0x00416f71
00416F39  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416F3C  DC 1D 90 04 79 00         FCOMP double ptr [0x00790490]
00416F42  DF E0                     FNSTSW AX
00416F44  F6 C4 01                  TEST AH,0x1
00416F47  74 28                     JZ 0x00416f71
00416F49  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00416F4C  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416F52  DF E0                     FNSTSW AX
00416F54  F6 C4 41                  TEST AH,0x41
00416F57  75 0C                     JNZ 0x00416f65
00416F59  C7 45 E0 08 00 00 00      MOV dword ptr [EBP + -0x20],0x8
00416F60  E9 5B 05 00 00            JMP 0x004174c0
LAB_00416f65:
00416F65  C7 45 E0 10 00 00 00      MOV dword ptr [EBP + -0x20],0x10
00416F6C  E9 4F 05 00 00            JMP 0x004174c0
LAB_00416f71:
00416F71  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416F74  DC 1D 90 04 79 00         FCOMP double ptr [0x00790490]
00416F7A  DF E0                     FNSTSW AX
00416F7C  F6 C4 41                  TEST AH,0x41
00416F7F  75 38                     JNZ 0x00416fb9
00416F81  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416F84  DC 1D 80 04 79 00         FCOMP double ptr [0x00790480]
00416F8A  DF E0                     FNSTSW AX
00416F8C  F6 C4 01                  TEST AH,0x1
00416F8F  74 28                     JZ 0x00416fb9
00416F91  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00416F94  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416F9A  DF E0                     FNSTSW AX
00416F9C  F6 C4 41                  TEST AH,0x41
00416F9F  75 0C                     JNZ 0x00416fad
00416FA1  C7 45 E0 07 00 00 00      MOV dword ptr [EBP + -0x20],0x7
00416FA8  E9 13 05 00 00            JMP 0x004174c0
LAB_00416fad:
00416FAD  C7 45 E0 11 00 00 00      MOV dword ptr [EBP + -0x20],0x11
00416FB4  E9 07 05 00 00            JMP 0x004174c0
LAB_00416fb9:
00416FB9  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416FBC  DC 1D 80 04 79 00         FCOMP double ptr [0x00790480]
00416FC2  DF E0                     FNSTSW AX
00416FC4  F6 C4 41                  TEST AH,0x41
00416FC7  75 38                     JNZ 0x00417001
00416FC9  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416FCC  DC 1D 70 04 79 00         FCOMP double ptr [0x00790470]
00416FD2  DF E0                     FNSTSW AX
00416FD4  F6 C4 01                  TEST AH,0x1
00416FD7  74 28                     JZ 0x00417001
00416FD9  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00416FDC  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416FE2  DF E0                     FNSTSW AX
00416FE4  F6 C4 41                  TEST AH,0x41
00416FE7  75 0C                     JNZ 0x00416ff5
00416FE9  C7 45 E0 06 00 00 00      MOV dword ptr [EBP + -0x20],0x6
00416FF0  E9 CB 04 00 00            JMP 0x004174c0
LAB_00416ff5:
00416FF5  C7 45 E0 12 00 00 00      MOV dword ptr [EBP + -0x20],0x12
00416FFC  E9 BF 04 00 00            JMP 0x004174c0
LAB_00417001:
00417001  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417004  DC 1D 70 04 79 00         FCOMP double ptr [0x00790470]
0041700A  DF E0                     FNSTSW AX
0041700C  F6 C4 41                  TEST AH,0x41
0041700F  75 38                     JNZ 0x00417049
00417011  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417014  DC 1D 60 04 79 00         FCOMP double ptr [0x00790460]
0041701A  DF E0                     FNSTSW AX
0041701C  F6 C4 01                  TEST AH,0x1
0041701F  74 28                     JZ 0x00417049
00417021  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00417024  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0041702A  DF E0                     FNSTSW AX
0041702C  F6 C4 41                  TEST AH,0x41
0041702F  75 0C                     JNZ 0x0041703d
00417031  C7 45 E0 05 00 00 00      MOV dword ptr [EBP + -0x20],0x5
00417038  E9 83 04 00 00            JMP 0x004174c0
LAB_0041703d:
0041703D  C7 45 E0 13 00 00 00      MOV dword ptr [EBP + -0x20],0x13
00417044  E9 77 04 00 00            JMP 0x004174c0
LAB_00417049:
00417049  D9 45 E4                  FLD float ptr [EBP + -0x1c]
0041704C  DC 1D 60 04 79 00         FCOMP double ptr [0x00790460]
00417052  DF E0                     FNSTSW AX
00417054  F6 C4 41                  TEST AH,0x41
00417057  75 38                     JNZ 0x00417091
00417059  D9 45 E4                  FLD float ptr [EBP + -0x1c]
0041705C  DC 1D 50 04 79 00         FCOMP double ptr [0x00790450]
00417062  DF E0                     FNSTSW AX
00417064  F6 C4 01                  TEST AH,0x1
00417067  74 28                     JZ 0x00417091
00417069  D9 45 D4                  FLD float ptr [EBP + -0x2c]
0041706C  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00417072  DF E0                     FNSTSW AX
00417074  F6 C4 41                  TEST AH,0x41
00417077  75 0C                     JNZ 0x00417085
00417079  C7 45 E0 04 00 00 00      MOV dword ptr [EBP + -0x20],0x4
00417080  E9 3B 04 00 00            JMP 0x004174c0
LAB_00417085:
00417085  C7 45 E0 14 00 00 00      MOV dword ptr [EBP + -0x20],0x14
0041708C  E9 2F 04 00 00            JMP 0x004174c0
LAB_00417091:
00417091  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417094  DC 1D 50 04 79 00         FCOMP double ptr [0x00790450]
0041709A  DF E0                     FNSTSW AX
0041709C  F6 C4 41                  TEST AH,0x41
0041709F  75 38                     JNZ 0x004170d9
004170A1  D9 45 E4                  FLD float ptr [EBP + -0x1c]
004170A4  DC 1D 40 04 79 00         FCOMP double ptr [0x00790440]
004170AA  DF E0                     FNSTSW AX
004170AC  F6 C4 01                  TEST AH,0x1
004170AF  74 28                     JZ 0x004170d9
004170B1  D9 45 D4                  FLD float ptr [EBP + -0x2c]
004170B4  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004170BA  DF E0                     FNSTSW AX
004170BC  F6 C4 41                  TEST AH,0x41
004170BF  75 0C                     JNZ 0x004170cd
004170C1  C7 45 E0 03 00 00 00      MOV dword ptr [EBP + -0x20],0x3
004170C8  E9 F3 03 00 00            JMP 0x004174c0
LAB_004170cd:
004170CD  C7 45 E0 15 00 00 00      MOV dword ptr [EBP + -0x20],0x15
004170D4  E9 E7 03 00 00            JMP 0x004174c0
LAB_004170d9:
004170D9  D9 45 E4                  FLD float ptr [EBP + -0x1c]
004170DC  DC 1D 40 04 79 00         FCOMP double ptr [0x00790440]
004170E2  DF E0                     FNSTSW AX
004170E4  F6 C4 41                  TEST AH,0x41
004170E7  75 38                     JNZ 0x00417121
004170E9  D9 45 E4                  FLD float ptr [EBP + -0x1c]
004170EC  DC 1D 30 04 79 00         FCOMP double ptr [0x00790430]
004170F2  DF E0                     FNSTSW AX
004170F4  F6 C4 01                  TEST AH,0x1
004170F7  74 28                     JZ 0x00417121
004170F9  D9 45 D4                  FLD float ptr [EBP + -0x2c]
004170FC  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00417102  DF E0                     FNSTSW AX
00417104  F6 C4 41                  TEST AH,0x41
00417107  75 0C                     JNZ 0x00417115
00417109  C7 45 E0 02 00 00 00      MOV dword ptr [EBP + -0x20],0x2
00417110  E9 AB 03 00 00            JMP 0x004174c0
LAB_00417115:
00417115  C7 45 E0 16 00 00 00      MOV dword ptr [EBP + -0x20],0x16
0041711C  E9 9F 03 00 00            JMP 0x004174c0
LAB_00417121:
00417121  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417124  DC 1D 30 04 79 00         FCOMP double ptr [0x00790430]
0041712A  DF E0                     FNSTSW AX
0041712C  F6 C4 41                  TEST AH,0x41
0041712F  75 38                     JNZ 0x00417169
00417131  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417134  DC 1D 20 04 79 00         FCOMP double ptr [0x00790420]
0041713A  DF E0                     FNSTSW AX
0041713C  F6 C4 01                  TEST AH,0x1
0041713F  74 28                     JZ 0x00417169
00417141  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00417144  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0041714A  DF E0                     FNSTSW AX
0041714C  F6 C4 41                  TEST AH,0x41
0041714F  75 0C                     JNZ 0x0041715d
00417151  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
00417158  E9 63 03 00 00            JMP 0x004174c0
LAB_0041715d:
0041715D  C7 45 E0 17 00 00 00      MOV dword ptr [EBP + -0x20],0x17
00417164  E9 57 03 00 00            JMP 0x004174c0
LAB_00417169:
00417169  D9 45 E4                  FLD float ptr [EBP + -0x1c]
0041716C  DC 1D 20 04 79 00         FCOMP double ptr [0x00790420]
00417172  DF E0                     FNSTSW AX
00417174  F6 C4 41                  TEST AH,0x41
00417177  75 34                     JNZ 0x004171ad
00417179  D9 45 E4                  FLD float ptr [EBP + -0x1c]
0041717C  DC 1D 10 04 79 00         FCOMP double ptr [0x00790410]
00417182  DF E0                     FNSTSW AX
00417184  F6 C4 01                  TEST AH,0x1
00417187  74 24                     JZ 0x004171ad
00417189  D9 45 D4                  FLD float ptr [EBP + -0x2c]
0041718C  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00417192  DF E0                     FNSTSW AX
00417194  F6 C4 41                  TEST AH,0x41
00417197  75 08                     JNZ 0x004171a1
00417199  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
0041719C  E9 1F 03 00 00            JMP 0x004174c0
LAB_004171a1:
004171A1  C7 45 E0 18 00 00 00      MOV dword ptr [EBP + -0x20],0x18
004171A8  E9 13 03 00 00            JMP 0x004174c0
LAB_004171ad:
004171AD  D9 45 E4                  FLD float ptr [EBP + -0x1c]
004171B0  DC 1D 00 04 79 00         FCOMP double ptr [0x00790400]
004171B6  DF E0                     FNSTSW AX
004171B8  F6 C4 01                  TEST AH,0x1
004171BB  74 38                     JZ 0x004171f5
004171BD  D9 45 E4                  FLD float ptr [EBP + -0x1c]
004171C0  DC 1D 10 04 79 00         FCOMP double ptr [0x00790410]
004171C6  DF E0                     FNSTSW AX
004171C8  F6 C4 41                  TEST AH,0x41
004171CB  75 28                     JNZ 0x004171f5
004171CD  D9 45 D4                  FLD float ptr [EBP + -0x2c]
004171D0  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004171D6  DF E0                     FNSTSW AX
004171D8  F6 C4 41                  TEST AH,0x41
004171DB  75 0C                     JNZ 0x004171e9
004171DD  C7 45 E0 2F 00 00 00      MOV dword ptr [EBP + -0x20],0x2f
004171E4  E9 D7 02 00 00            JMP 0x004174c0
LAB_004171e9:
004171E9  C7 45 E0 19 00 00 00      MOV dword ptr [EBP + -0x20],0x19
004171F0  E9 CB 02 00 00            JMP 0x004174c0
LAB_004171f5:
004171F5  D9 45 E4                  FLD float ptr [EBP + -0x1c]
004171F8  DC 1D F0 03 79 00         FCOMP double ptr [0x007903f0]
004171FE  DF E0                     FNSTSW AX
00417200  F6 C4 01                  TEST AH,0x1
00417203  74 38                     JZ 0x0041723d
00417205  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417208  DC 1D 00 04 79 00         FCOMP double ptr [0x00790400]
0041720E  DF E0                     FNSTSW AX
00417210  F6 C4 41                  TEST AH,0x41
00417213  75 28                     JNZ 0x0041723d
00417215  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00417218  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0041721E  DF E0                     FNSTSW AX
00417220  F6 C4 41                  TEST AH,0x41
00417223  75 0C                     JNZ 0x00417231
00417225  C7 45 E0 2E 00 00 00      MOV dword ptr [EBP + -0x20],0x2e
0041722C  E9 8F 02 00 00            JMP 0x004174c0
LAB_00417231:
00417231  C7 45 E0 1A 00 00 00      MOV dword ptr [EBP + -0x20],0x1a
00417238  E9 83 02 00 00            JMP 0x004174c0
LAB_0041723d:
0041723D  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417240  DC 1D E0 03 79 00         FCOMP double ptr [0x007903e0]
00417246  DF E0                     FNSTSW AX
00417248  F6 C4 01                  TEST AH,0x1
0041724B  74 38                     JZ 0x00417285
0041724D  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417250  DC 1D F0 03 79 00         FCOMP double ptr [0x007903f0]
00417256  DF E0                     FNSTSW AX
00417258  F6 C4 41                  TEST AH,0x41
0041725B  75 28                     JNZ 0x00417285
0041725D  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00417260  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00417266  DF E0                     FNSTSW AX
00417268  F6 C4 41                  TEST AH,0x41
0041726B  75 0C                     JNZ 0x00417279
0041726D  C7 45 E0 2D 00 00 00      MOV dword ptr [EBP + -0x20],0x2d
00417274  E9 47 02 00 00            JMP 0x004174c0
LAB_00417279:
00417279  C7 45 E0 1B 00 00 00      MOV dword ptr [EBP + -0x20],0x1b
00417280  E9 3B 02 00 00            JMP 0x004174c0
LAB_00417285:
00417285  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417288  DC 1D D0 03 79 00         FCOMP double ptr [0x007903d0]
0041728E  DF E0                     FNSTSW AX
00417290  F6 C4 01                  TEST AH,0x1
00417293  74 38                     JZ 0x004172cd
00417295  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417298  DC 1D E0 03 79 00         FCOMP double ptr [0x007903e0]
0041729E  DF E0                     FNSTSW AX
004172A0  F6 C4 41                  TEST AH,0x41
004172A3  75 28                     JNZ 0x004172cd
004172A5  D9 45 D4                  FLD float ptr [EBP + -0x2c]
004172A8  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004172AE  DF E0                     FNSTSW AX
004172B0  F6 C4 41                  TEST AH,0x41
004172B3  75 0C                     JNZ 0x004172c1
004172B5  C7 45 E0 2C 00 00 00      MOV dword ptr [EBP + -0x20],0x2c
004172BC  E9 FF 01 00 00            JMP 0x004174c0
LAB_004172c1:
004172C1  C7 45 E0 1C 00 00 00      MOV dword ptr [EBP + -0x20],0x1c
004172C8  E9 F3 01 00 00            JMP 0x004174c0
LAB_004172cd:
004172CD  D9 45 E4                  FLD float ptr [EBP + -0x1c]
004172D0  DC 1D C0 03 79 00         FCOMP double ptr [0x007903c0]
004172D6  DF E0                     FNSTSW AX
004172D8  F6 C4 01                  TEST AH,0x1
004172DB  74 38                     JZ 0x00417315
004172DD  D9 45 E4                  FLD float ptr [EBP + -0x1c]
004172E0  DC 1D D0 03 79 00         FCOMP double ptr [0x007903d0]
004172E6  DF E0                     FNSTSW AX
004172E8  F6 C4 41                  TEST AH,0x41
004172EB  75 28                     JNZ 0x00417315
004172ED  D9 45 D4                  FLD float ptr [EBP + -0x2c]
004172F0  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004172F6  DF E0                     FNSTSW AX
004172F8  F6 C4 41                  TEST AH,0x41
004172FB  75 0C                     JNZ 0x00417309
004172FD  C7 45 E0 2B 00 00 00      MOV dword ptr [EBP + -0x20],0x2b
00417304  E9 B7 01 00 00            JMP 0x004174c0
LAB_00417309:
00417309  C7 45 E0 1D 00 00 00      MOV dword ptr [EBP + -0x20],0x1d
00417310  E9 AB 01 00 00            JMP 0x004174c0
LAB_00417315:
00417315  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417318  DC 1D B0 03 79 00         FCOMP double ptr [0x007903b0]
0041731E  DF E0                     FNSTSW AX
00417320  F6 C4 01                  TEST AH,0x1
00417323  74 38                     JZ 0x0041735d
00417325  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417328  DC 1D C0 03 79 00         FCOMP double ptr [0x007903c0]
0041732E  DF E0                     FNSTSW AX
00417330  F6 C4 41                  TEST AH,0x41
00417333  75 28                     JNZ 0x0041735d
00417335  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00417338  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0041733E  DF E0                     FNSTSW AX
00417340  F6 C4 41                  TEST AH,0x41
00417343  75 0C                     JNZ 0x00417351
00417345  C7 45 E0 2A 00 00 00      MOV dword ptr [EBP + -0x20],0x2a
0041734C  E9 6F 01 00 00            JMP 0x004174c0
LAB_00417351:
00417351  C7 45 E0 1E 00 00 00      MOV dword ptr [EBP + -0x20],0x1e
00417358  E9 63 01 00 00            JMP 0x004174c0
LAB_0041735d:
0041735D  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417360  DC 1D A0 03 79 00         FCOMP double ptr [0x007903a0]
00417366  DF E0                     FNSTSW AX
00417368  F6 C4 01                  TEST AH,0x1
0041736B  74 38                     JZ 0x004173a5
0041736D  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417370  DC 1D B0 03 79 00         FCOMP double ptr [0x007903b0]
00417376  DF E0                     FNSTSW AX
00417378  F6 C4 41                  TEST AH,0x41
0041737B  75 28                     JNZ 0x004173a5
0041737D  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00417380  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00417386  DF E0                     FNSTSW AX
00417388  F6 C4 41                  TEST AH,0x41
0041738B  75 0C                     JNZ 0x00417399
0041738D  C7 45 E0 29 00 00 00      MOV dword ptr [EBP + -0x20],0x29
00417394  E9 27 01 00 00            JMP 0x004174c0
LAB_00417399:
00417399  C7 45 E0 1F 00 00 00      MOV dword ptr [EBP + -0x20],0x1f
004173A0  E9 1B 01 00 00            JMP 0x004174c0
LAB_004173a5:
004173A5  D9 45 E4                  FLD float ptr [EBP + -0x1c]
004173A8  DC 1D 90 03 79 00         FCOMP double ptr [0x00790390]
004173AE  DF E0                     FNSTSW AX
004173B0  F6 C4 01                  TEST AH,0x1
004173B3  74 38                     JZ 0x004173ed
004173B5  D9 45 E4                  FLD float ptr [EBP + -0x1c]
004173B8  DC 1D A0 03 79 00         FCOMP double ptr [0x007903a0]
004173BE  DF E0                     FNSTSW AX
004173C0  F6 C4 41                  TEST AH,0x41
004173C3  75 28                     JNZ 0x004173ed
004173C5  D9 45 D4                  FLD float ptr [EBP + -0x2c]
004173C8  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004173CE  DF E0                     FNSTSW AX
004173D0  F6 C4 41                  TEST AH,0x41
004173D3  75 0C                     JNZ 0x004173e1
004173D5  C7 45 E0 28 00 00 00      MOV dword ptr [EBP + -0x20],0x28
004173DC  E9 DF 00 00 00            JMP 0x004174c0
LAB_004173e1:
004173E1  C7 45 E0 20 00 00 00      MOV dword ptr [EBP + -0x20],0x20
004173E8  E9 D3 00 00 00            JMP 0x004174c0
LAB_004173ed:
004173ED  D9 45 E4                  FLD float ptr [EBP + -0x1c]
004173F0  DC 1D 80 03 79 00         FCOMP double ptr [0x00790380]
004173F6  DF E0                     FNSTSW AX
004173F8  F6 C4 01                  TEST AH,0x1
004173FB  74 38                     JZ 0x00417435
004173FD  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417400  DC 1D 90 03 79 00         FCOMP double ptr [0x00790390]
00417406  DF E0                     FNSTSW AX
00417408  F6 C4 41                  TEST AH,0x41
0041740B  75 28                     JNZ 0x00417435
0041740D  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00417410  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00417416  DF E0                     FNSTSW AX
00417418  F6 C4 41                  TEST AH,0x41
0041741B  75 0C                     JNZ 0x00417429
0041741D  C7 45 E0 27 00 00 00      MOV dword ptr [EBP + -0x20],0x27
00417424  E9 97 00 00 00            JMP 0x004174c0
LAB_00417429:
00417429  C7 45 E0 21 00 00 00      MOV dword ptr [EBP + -0x20],0x21
00417430  E9 8B 00 00 00            JMP 0x004174c0
LAB_00417435:
00417435  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417438  DC 1D 70 03 79 00         FCOMP double ptr [0x00790370]
0041743E  DF E0                     FNSTSW AX
00417440  F6 C4 01                  TEST AH,0x1
00417443  74 32                     JZ 0x00417477
00417445  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00417448  DC 1D 80 03 79 00         FCOMP double ptr [0x00790380]
0041744E  DF E0                     FNSTSW AX
00417450  F6 C4 41                  TEST AH,0x41
00417453  75 22                     JNZ 0x00417477
00417455  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00417458  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0041745E  DF E0                     FNSTSW AX
00417460  F6 C4 41                  TEST AH,0x41
00417463  75 09                     JNZ 0x0041746e
00417465  C7 45 E0 26 00 00 00      MOV dword ptr [EBP + -0x20],0x26
0041746C  EB 52                     JMP 0x004174c0
LAB_0041746e:
0041746E  C7 45 E0 22 00 00 00      MOV dword ptr [EBP + -0x20],0x22
00417475  EB 49                     JMP 0x004174c0
LAB_00417477:
00417477  D9 45 E4                  FLD float ptr [EBP + -0x1c]
0041747A  DC 1D 60 03 79 00         FCOMP double ptr [0x00790360]
00417480  DF E0                     FNSTSW AX
00417482  F6 C4 01                  TEST AH,0x1
00417485  74 32                     JZ 0x004174b9
00417487  D9 45 E4                  FLD float ptr [EBP + -0x1c]
0041748A  DC 1D 70 03 79 00         FCOMP double ptr [0x00790370]
00417490  DF E0                     FNSTSW AX
00417492  F6 C4 41                  TEST AH,0x41
00417495  75 22                     JNZ 0x004174b9
00417497  D9 45 D4                  FLD float ptr [EBP + -0x2c]
0041749A  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004174A0  DF E0                     FNSTSW AX
004174A2  F6 C4 41                  TEST AH,0x41
004174A5  75 09                     JNZ 0x004174b0
004174A7  C7 45 E0 25 00 00 00      MOV dword ptr [EBP + -0x20],0x25
004174AE  EB 10                     JMP 0x004174c0
LAB_004174b0:
004174B0  C7 45 E0 23 00 00 00      MOV dword ptr [EBP + -0x20],0x23
004174B7  EB 07                     JMP 0x004174c0
LAB_004174b9:
004174B9  C7 45 E0 24 00 00 00      MOV dword ptr [EBP + -0x20],0x24
LAB_004174c0:
004174C0  9B                        WAIT
004174C1  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
004174C8  E8 00 00 00 00            CALL 0x004174cd
LAB_004174cd:
004174CD  8B 65 E8                  MOV ESP,dword ptr [EBP + -0x18]
004174D0  66 8B 45 E0               MOV AX,word ptr [EBP + -0x20]
004174D4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004174D7  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
004174DE  5F                        POP EDI
004174DF  5E                        POP ESI
004174E0  5B                        POP EBX
004174E1  8B E5                     MOV ESP,EBP
004174E3  5D                        POP EBP
004174E4  C2 18 00                  RET 0x18

FUN_004ab530:
004AB530  55                        PUSH EBP
004AB531  8B EC                     MOV EBP,ESP
004AB533  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004AB536  B8 01 00 00 00            MOV EAX,0x1
004AB53B  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
004AB541  3B D0                     CMP EDX,EAX
004AB543  0F 85 AC 00 00 00         JNZ 0x004ab5f5
004AB549  DB 45 0C                  FILD dword ptr [EBP + 0xc]
004AB54C  8B 0D D4 73 80 00         MOV ECX,dword ptr [0x008073d4]
004AB552  A3 E0 73 80 00            MOV [0x008073e0],EAX
004AB557  A1 D0 73 80 00            MOV EAX,[0x008073d0]
004AB55C  89 0D EC 73 80 00         MOV dword ptr [0x008073ec],ECX
004AB562  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AB568  33 C9                     XOR ECX,ECX
004AB56A  33 D2                     XOR EDX,EDX
004AB56C  8A 15 3A 73 80 00         MOV DL,byte ptr [0x0080733a]
004AB572  A3 E8 73 80 00            MOV [0x008073e8],EAX
004AB577  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
004AB57D  D9 1D F0 73 80 00         FSTP float ptr [0x008073f0]
004AB583  DB 45 10                  FILD dword ptr [EBP + 0x10]
004AB586  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AB58C  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
004AB592  D9 15 F4 73 80 00         FST float ptr [0x008073f4]
004AB598  D8 25 D4 73 80 00         FSUB float ptr [0x008073d4]
004AB59E  D9 05 F0 73 80 00         FLD float ptr [0x008073f0]
004AB5A4  D8 25 D0 73 80 00         FSUB float ptr [0x008073d0]
004AB5AA  D9 C0                     FLD ST0
004AB5AC  D8 C9                     FMUL ST1
004AB5AE  D9 C2                     FLD ST2
004AB5B0  D8 CB                     FMUL ST3
004AB5B2  DE C1                     FADDP
004AB5B4  D9 FA                     FSQRT
004AB5B6  D9 1D F8 73 80 00         FSTP float ptr [0x008073f8]
004AB5BC  DD D8                     FSTP ST0
004AB5BE  DD D8                     FSTP ST0
LAB_004ab5c0:
004AB5C0  41                        INC ECX
004AB5C1  89 0D 61 74 80 00         MOV dword ptr [0x00807461],ECX
004AB5C7  DB 05 61 74 80 00         FILD dword ptr [0x00807461]
004AB5CD  D8 0C 95 84 C5 7A 00      FMUL float ptr [EDX*0x4 + 0x7ac584]
004AB5D4  D8 0D 8C 07 79 00         FMUL float ptr [0x0079078c]
004AB5DA  DE C1                     FADDP
004AB5DC  D8 15 F8 73 80 00         FCOM float ptr [0x008073f8]
004AB5E2  DF E0                     FNSTSW AX
004AB5E4  F6 C4 01                  TEST AH,0x1
004AB5E7  75 D7                     JNZ 0x004ab5c0
004AB5E9  DD D8                     FSTP ST0
004AB5EB  89 0D E4 73 80 00         MOV dword ptr [0x008073e4],ECX
004AB5F1  5D                        POP EBP
004AB5F2  C2 0C 00                  RET 0xc
LAB_004ab5f5:
004AB5F5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004AB5F8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004AB5FB  52                        PUSH EDX
004AB5FC  50                        PUSH EAX
004AB5FD  DD D8                     FSTP ST0
004AB5FF  E8 1C 71 F5 FF            CALL 0x00402720
004AB604  5D                        POP EBP
004AB605  C2 0C 00                  RET 0xc

FUN_00718d50:
00718D50  55                        PUSH EBP
00718D51  8B EC                     MOV EBP,ESP
00718D53  83 EC 64                  SUB ESP,0x64
00718D56  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00718D5B  53                        PUSH EBX
00718D5C  56                        PUSH ESI
00718D5D  57                        PUSH EDI
00718D5E  8D 55 A0                  LEA EDX,[EBP + -0x60]
00718D61  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00718D64  6A 00                     PUSH 0x0
00718D66  52                        PUSH EDX
00718D67  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00718D6A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00718D70  E8 7B 4A 01 00            CALL 0x0072d7f0
00718D75  8B F0                     MOV ESI,EAX
00718D77  83 C4 08                  ADD ESP,0x8
00718D7A  85 F6                     TEST ESI,ESI
00718D7C  0F 85 69 01 00 00         JNZ 0x00718eeb
00718D82  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00718D85  85 F6                     TEST ESI,ESI
00718D87  74 05                     JZ 0x00718d8e
00718D89  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00718D8C  EB 13                     JMP 0x00718da1
LAB_00718d8e:
00718D8E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00718D91  8D 0C 85 00 00 00 00      LEA ECX,[EAX*0x4 + 0x0]
00718D98  51                        PUSH ECX
00718D99  E8 72 1E F9 FF            CALL 0x006aac10
00718D9E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00718da1:
00718DA1  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00718DA4  33 FF                     XOR EDI,EDI
00718DA6  85 C0                     TEST EAX,EAX
00718DA8  0F 8E 2A 01 00 00         JLE 0x00718ed8
00718DAE  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00718DB1  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00718DB4  81 E2 FF 00 00 00         AND EDX,0xff
00718DBA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00718DBD  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00718DC0  25 FF 00 00 00            AND EAX,0xff
00718DC5  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00718DC8  F7 DE                     NEG ESI
00718DCA  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00718DCD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00718DD0  D9 5D F0                  FSTP float ptr [EBP + -0x10]
00718DD3  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00718DD6  1B F6                     SBB ESI,ESI
00718DD8  23 F0                     AND ESI,EAX
00718DDA  D9 5D EC                  FSTP float ptr [EBP + -0x14]
00718DDD  8B DE                     MOV EBX,ESI
00718DDF  8D 74 81 02               LEA ESI,[ECX + EAX*0x4 + 0x2]
LAB_00718de3:
00718DE3  8A 56 FE                  MOV DL,byte ptr [ESI + -0x2]
00718DE6  8A 46 FF                  MOV AL,byte ptr [ESI + -0x1]
00718DE9  8A 0E                     MOV CL,byte ptr [ESI]
00718DEB  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
00718DEE  88 45 FD                  MOV byte ptr [EBP + -0x3],AL
00718DF1  8D 55 E0                  LEA EDX,[EBP + -0x20]
00718DF4  8D 45 FC                  LEA EAX,[EBP + -0x4]
00718DF7  52                        PUSH EDX
00718DF8  50                        PUSH EAX
00718DF9  88 4D FE                  MOV byte ptr [EBP + -0x2],CL
00718DFC  E8 2F F3 FF FF            CALL 0x00718130
00718E01  D9 45 E0                  FLD float ptr [EBP + -0x20]
00718E04  D8 1D 80 E2 79 00         FCOMP float ptr [0x0079e280]
00718E0A  83 C4 08                  ADD ESP,0x8
00718E0D  DF E0                     FNSTSW AX
00718E0F  F6 C4 40                  TEST AH,0x40
00718E12  75 1B                     JNZ 0x00718e2f
00718E14  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00718E17  81 E1 FF 00 00 00         AND ECX,0xff
00718E1D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00718E20  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00718E23  D8 4D E0                  FMUL float ptr [EBP + -0x20]
00718E26  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
00718E2C  D9 5D E0                  FSTP float ptr [EBP + -0x20]
LAB_00718e2f:
00718E2F  D9 45 F0                  FLD float ptr [EBP + -0x10]
00718E32  D8 4D E4                  FMUL float ptr [EBP + -0x1c]
00718E35  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
00718E3B  D9 55 E4                  FST float ptr [EBP + -0x1c]
00718E3E  D9 45 EC                  FLD float ptr [EBP + -0x14]
00718E41  D8 4D E8                  FMUL float ptr [EBP + -0x18]
00718E44  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
00718E4A  D9 5D E8                  FSTP float ptr [EBP + -0x18]
00718E4D  D9 45 E0                  FLD float ptr [EBP + -0x20]
00718E50  D8 1D 50 E2 79 00         FCOMP float ptr [0x0079e250]
00718E56  DF E0                     FNSTSW AX
00718E58  F6 C4 41                  TEST AH,0x41
00718E5B  75 17                     JNZ 0x00718e74
00718E5D  D9 45 E0                  FLD float ptr [EBP + -0x20]
00718E60  D8 1D 80 E2 79 00         FCOMP float ptr [0x0079e280]
00718E66  DF E0                     FNSTSW AX
00718E68  F6 C4 40                  TEST AH,0x40
00718E6B  75 07                     JNZ 0x00718e74
00718E6D  C7 45 E0 00 00 B4 43      MOV dword ptr [EBP + -0x20],0x43b40000
LAB_00718e74:
00718E74  D8 1D D0 DF 79 00         FCOMP float ptr [0x0079dfd0]
00718E7A  DF E0                     FNSTSW AX
00718E7C  F6 C4 41                  TEST AH,0x41
00718E7F  75 07                     JNZ 0x00718e88
00718E81  C7 45 E4 00 00 80 3F      MOV dword ptr [EBP + -0x1c],0x3f800000
LAB_00718e88:
00718E88  D9 45 E8                  FLD float ptr [EBP + -0x18]
00718E8B  D8 1D D0 DF 79 00         FCOMP float ptr [0x0079dfd0]
00718E91  DF E0                     FNSTSW AX
00718E93  F6 C4 41                  TEST AH,0x41
00718E96  75 07                     JNZ 0x00718e9f
00718E98  C7 45 E8 00 00 80 3F      MOV dword ptr [EBP + -0x18],0x3f800000
LAB_00718e9f:
00718E9F  8D 55 FC                  LEA EDX,[EBP + -0x4]
00718EA2  8D 45 E0                  LEA EAX,[EBP + -0x20]
00718EA5  52                        PUSH EDX
00718EA6  50                        PUSH EAX
00718EA7  E8 14 F5 FF FF            CALL 0x007183c0
00718EAC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00718EAF  8D 0C 3B                  LEA ECX,[EBX + EDI*0x1]
00718EB2  83 C4 08                  ADD ESP,0x8
00718EB5  47                        INC EDI
00718EB6  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
00718EB9  8A 4D FC                  MOV CL,byte ptr [EBP + -0x4]
00718EBC  83 C6 04                  ADD ESI,0x4
00718EBF  88 08                     MOV byte ptr [EAX],CL
00718EC1  8A 55 FD                  MOV DL,byte ptr [EBP + -0x3]
00718EC4  88 50 01                  MOV byte ptr [EAX + 0x1],DL
00718EC7  8A 4D FE                  MOV CL,byte ptr [EBP + -0x2]
00718ECA  88 48 02                  MOV byte ptr [EAX + 0x2],CL
00718ECD  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00718ED0  3B F8                     CMP EDI,EAX
00718ED2  0F 8C 0B FF FF FF         JL 0x00718de3
LAB_00718ed8:
00718ED8  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00718EDB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00718EDE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00718EE4  5F                        POP EDI
00718EE5  5E                        POP ESI
00718EE6  5B                        POP EBX
00718EE7  8B E5                     MOV ESP,EBP
00718EE9  5D                        POP EBP
00718EEA  C3                        RET
LAB_00718eeb:
00718EEB  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00718EEE  68 84 07 7F 00            PUSH 0x7f0784
00718EF3  68 CC 4C 7A 00            PUSH 0x7a4ccc
00718EF8  56                        PUSH ESI
00718EF9  6A 00                     PUSH 0x0
00718EFB  68 36 01 00 00            PUSH 0x136
00718F00  68 18 07 7F 00            PUSH 0x7f0718
00718F05  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00718F0A  E8 C1 45 F9 FF            CALL 0x006ad4d0
00718F0F  83 C4 18                  ADD ESP,0x18
00718F12  85 C0                     TEST EAX,EAX
00718F14  74 01                     JZ 0x00718f17
00718F16  CC                        INT3
LAB_00718f17:
00718F17  68 37 01 00 00            PUSH 0x137
00718F1C  68 18 07 7F 00            PUSH 0x7f0718
00718F21  6A 00                     PUSH 0x0
00718F23  56                        PUSH ESI
00718F24  E8 17 CF F8 FF            CALL 0x006a5e40
00718F29  5F                        POP EDI
00718F2A  5E                        POP ESI
00718F2B  33 C0                     XOR EAX,EAX
00718F2D  5B                        POP EBX
00718F2E  8B E5                     MOV ESP,EBP
00718F30  5D                        POP EBP
00718F31  C3                        RET

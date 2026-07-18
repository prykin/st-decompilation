FUN_006e92c0:
006E92C0  55                        PUSH EBP
006E92C1  8B EC                     MOV EBP,ESP
006E92C3  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E92C9  56                        PUSH ESI
006E92CA  57                        PUSH EDI
006E92CB  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E92CE  3B F8                     CMP EDI,EAX
006E92D0  73 69                     JNC 0x006e933b
006E92D2  8B 91 1C 03 00 00         MOV EDX,dword ptr [ECX + 0x31c]
006E92D8  8D 04 7F                  LEA EAX,[EDI + EDI*0x2]
006E92DB  C1 E0 03                  SHL EAX,0x3
006E92DE  2B C7                     SUB EAX,EDI
006E92E0  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E92E3  8D 34 82                  LEA ESI,[EDX + EAX*0x4]
006E92E6  8B 14 82                  MOV EDX,dword ptr [EDX + EAX*0x4]
006E92E9  F6 C6 80                  TEST DH,0x80
006E92EC  74 4D                     JZ 0x006e933b
006E92EE  D9 45 0C                  FLD float ptr [EBP + 0xc]
006E92F1  DC 1D 70 D6 79 00         FCOMP double ptr [0x0079d670]
006E92F7  DF E0                     FNSTSW AX
006E92F9  F6 C4 40                  TEST AH,0x40
006E92FC  75 25                     JNZ 0x006e9323
006E92FE  D9 45 0C                  FLD float ptr [EBP + 0xc]
006E9301  81 E2 FF FF 87 FF         AND EDX,0xff87ffff
006E9307  81 CA 0C 00 04 00         OR EDX,0x4000c
006E930D  89 16                     MOV dword ptr [ESI],EDX
006E930F  DC 89 08 03 00 00         FMUL double ptr [ECX + 0x308]
006E9315  E8 6E 4F 04 00            CALL 0x0072e288
006E931A  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
006E931D  5F                        POP EDI
006E931E  5E                        POP ESI
006E931F  5D                        POP EBP
006E9320  C2 08 00                  RET 0x8
LAB_006e9323:
006E9323  81 E2 FF FF 83 FF         AND EDX,0xff83ffff
006E9329  C7 46 2C 00 00 00 00      MOV dword ptr [ESI + 0x2c],0x0
006E9330  83 CA 0C                  OR EDX,0xc
006E9333  5F                        POP EDI
006E9334  89 16                     MOV dword ptr [ESI],EDX
006E9336  5E                        POP ESI
006E9337  5D                        POP EBP
006E9338  C2 08 00                  RET 0x8
LAB_006e933b:
006E933B  83 FF FF                  CMP EDI,-0x1
006E933E  74 0A                     JZ 0x006e934a
006E9340  68 08 ED 7E 00            PUSH 0x7eed08
006E9345  E8 06 F9 FF FF            CALL 0x006e8c50
LAB_006e934a:
006E934A  5F                        POP EDI
006E934B  5E                        POP ESI
006E934C  5D                        POP EBP
006E934D  C2 08 00                  RET 0x8

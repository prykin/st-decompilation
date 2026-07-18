FUN_005822e0:
005822E0  55                        PUSH EBP
005822E1  8B EC                     MOV EBP,ESP
005822E3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005822E6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005822E9  53                        PUSH EBX
005822EA  56                        PUSH ESI
005822EB  3A D0                     CMP DL,AL
005822ED  57                        PUSH EDI
005822EE  0F 84 80 00 00 00         JZ 0x00582374
005822F4  8B F0                     MOV ESI,EAX
005822F6  81 E2 FF 00 00 00         AND EDX,0xff
005822FC  81 E6 FF 00 00 00         AND ESI,0xff
00582302  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
00582305  8A 9C 08 2F 14 00 00      MOV BL,byte ptr [EAX + ECX*0x1 + 0x142f]
0058230C  84 DB                     TEST BL,BL
0058230E  75 18                     JNZ 0x00582328
00582310  8D 04 F2                  LEA EAX,[EDX + ESI*0x8]
00582313  38 9C 08 2F 14 00 00      CMP byte ptr [EAX + ECX*0x1 + 0x142f],BL
0058231A  75 0C                     JNZ 0x00582328
0058231C  5F                        POP EDI
0058231D  5E                        POP ESI
0058231E  B8 FE FF FF FF            MOV EAX,0xfffffffe
00582323  5B                        POP EBX
00582324  5D                        POP EBP
00582325  C2 08 00                  RET 0x8
LAB_00582328:
00582328  B8 01 00 00 00            MOV EAX,0x1
0058232D  3A D8                     CMP BL,AL
0058232F  75 17                     JNZ 0x00582348
00582331  8D 3C F2                  LEA EDI,[EDX + ESI*0x8]
00582334  80 BC 0F 2F 14 00 00 00   CMP byte ptr [EDI + ECX*0x1 + 0x142f],0x0
0058233C  75 0A                     JNZ 0x00582348
0058233E  5F                        POP EDI
0058233F  5E                        POP ESI
00582340  83 C8 FF                  OR EAX,0xffffffff
00582343  5B                        POP EBX
00582344  5D                        POP EBP
00582345  C2 08 00                  RET 0x8
LAB_00582348:
00582348  84 DB                     TEST BL,BL
0058234A  75 0C                     JNZ 0x00582358
0058234C  8D 3C F2                  LEA EDI,[EDX + ESI*0x8]
0058234F  38 84 0F 2F 14 00 00      CMP byte ptr [EDI + ECX*0x1 + 0x142f],AL
00582356  74 1E                     JZ 0x00582376
LAB_00582358:
00582358  3A D8                     CMP BL,AL
0058235A  75 18                     JNZ 0x00582374
0058235C  8D 14 F2                  LEA EDX,[EDX + ESI*0x8]
0058235F  38 84 0A 2F 14 00 00      CMP byte ptr [EDX + ECX*0x1 + 0x142f],AL
00582366  75 0C                     JNZ 0x00582374
00582368  5F                        POP EDI
00582369  5E                        POP ESI
0058236A  B8 02 00 00 00            MOV EAX,0x2
0058236F  5B                        POP EBX
00582370  5D                        POP EBP
00582371  C2 08 00                  RET 0x8
LAB_00582374:
00582374  33 C0                     XOR EAX,EAX
LAB_00582376:
00582376  5F                        POP EDI
00582377  5E                        POP ESI
00582378  5B                        POP EBX
00582379  5D                        POP EBP
0058237A  C2 08 00                  RET 0x8

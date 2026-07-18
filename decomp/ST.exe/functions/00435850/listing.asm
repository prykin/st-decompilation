FUN_00435850:
00435850  55                        PUSH EBP
00435851  8B EC                     MOV EBP,ESP
00435853  83 EC 34                  SUB ESP,0x34
00435856  53                        PUSH EBX
00435857  56                        PUSH ESI
00435858  0F BE 75 08               MOVSX ESI,byte ptr [EBP + 0x8]
0043585C  57                        PUSH EDI
0043585D  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
00435860  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
00435863  33 C0                     XOR EAX,EAX
00435865  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
00435868  C1 E2 04                  SHL EDX,0x4
0043586B  03 D6                     ADD EDX,ESI
0043586D  8B 0C 55 25 4E 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4e25]
00435874  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00435877  8B 59 0C                  MOV EBX,dword ptr [ECX + 0xc]
0043587A  8D 7B FF                  LEA EDI,[EBX + -0x1]
0043587D  3B F8                     CMP EDI,EAX
0043587F  7C 1E                     JL 0x0043589f
00435881  EB 03                     JMP 0x00435886
LAB_00435883:
00435883  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00435886:
00435886  8D 45 F8                  LEA EAX,[EBP + -0x8]
00435889  8B D7                     MOV EDX,EDI
0043588B  50                        PUSH EAX
0043588C  E8 DF 73 27 00            CALL 0x006acc70
00435891  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00435894  85 C0                     TEST EAX,EAX
00435896  75 02                     JNZ 0x0043589a
00435898  8B DF                     MOV EBX,EDI
LAB_0043589a:
0043589A  4F                        DEC EDI
0043589B  79 E6                     JNS 0x00435883
0043589D  33 C0                     XOR EAX,EAX
LAB_0043589f:
0043589F  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004358A2  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004358A5  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004358A8  50                        PUSH EAX
004358A9  8B CB                     MOV ECX,EBX
004358AB  8D 45 CC                  LEA EAX,[EBP + -0x34]
004358AE  81 E1 FF FF 00 00         AND ECX,0xffff
004358B4  50                        PUSH EAX
004358B5  8D 45 08                  LEA EAX,[EBP + 0x8]
004358B8  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
004358BB  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
004358BE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004358C4  BE 01 00 00 00            MOV ESI,0x1
004358C9  50                        PUSH EAX
004358CA  8D 45 F4                  LEA EAX,[EBP + -0xc]
004358CD  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
004358D0  8B 11                     MOV EDX,dword ptr [ECX]
004358D2  50                        PUSH EAX
004358D3  68 FF 10 00 00            PUSH 0x10ff
004358D8  FF 52 08                  CALL dword ptr [EDX + 0x8]
004358DB  39 75 0C                  CMP dword ptr [EBP + 0xc],ESI
004358DE  75 08                     JNZ 0x004358e8
004358E0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004358E3  E8 BE DE FC FF            CALL 0x004037a6
LAB_004358e8:
004358E8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004358EB  85 C0                     TEST EAX,EAX
004358ED  74 05                     JZ 0x004358f4
004358EF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004358F2  89 08                     MOV dword ptr [EAX],ECX
LAB_004358f4:
004358F4  5F                        POP EDI
004358F5  66 8B C3                  MOV AX,BX
004358F8  5E                        POP ESI
004358F9  5B                        POP EBX
004358FA  8B E5                     MOV ESP,EBP
004358FC  5D                        POP EBP
004358FD  C2 0C 00                  RET 0xc

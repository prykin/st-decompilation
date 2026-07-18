FUN_00734a10:
00734A10  55                        PUSH EBP
00734A11  8B EC                     MOV EBP,ESP
00734A13  83 EC 1C                  SUB ESP,0x1c
00734A16  53                        PUSH EBX
00734A17  56                        PUSH ESI
00734A18  57                        PUSH EDI
00734A19  C7 45 E8 00 00 00 80      MOV dword ptr [EBP + -0x18],0x80000000
00734A20  C7 45 EC FF FF 47 41      MOV dword ptr [EBP + -0x14],0x4147ffff
00734A27  C7 45 F8 00 00 00 C0      MOV dword ptr [EBP + -0x8],0xc0000000
00734A2E  C7 45 FC 7E 01 50 41      MOV dword ptr [EBP + -0x4],0x4150017e
00734A35  DD 45 F8                  FLD double ptr [EBP + -0x8]
00734A38  DC 75 E8                  FDIV double ptr [EBP + -0x18]
00734A3B  DC 4D E8                  FMUL double ptr [EBP + -0x18]
00734A3E  DC 6D F8                  FSUBR double ptr [EBP + -0x8]
00734A41  DD 5D F0                  FSTP double ptr [EBP + -0x10]
00734A44  DD 45 F0                  FLD double ptr [EBP + -0x10]
00734A47  DC 1D 88 CD 79 00         FCOMP double ptr [0x0079cd88]
00734A4D  DF E0                     FNSTSW AX
00734A4F  F6 C4 41                  TEST AH,0x41
00734A52  75 09                     JNZ 0x00734a5d
00734A54  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
00734A5B  EB 07                     JMP 0x00734a64
LAB_00734a5d:
00734A5D  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
LAB_00734a64:
00734A64  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00734A67  5F                        POP EDI
00734A68  5E                        POP ESI
00734A69  5B                        POP EBX
00734A6A  8B E5                     MOV ESP,EBP
00734A6C  5D                        POP EBP
00734A6D  C3                        RET

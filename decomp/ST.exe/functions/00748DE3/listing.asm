FUN_00748de3:
00748DE3  56                        PUSH ESI
00748DE4  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
00748DE8  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
00748DEB  85 C0                     TEST EAX,EAX
00748DED  74 0A                     JZ 0x00748df9
00748DEF  50                        PUSH EAX
00748DF0  E8 5B 2E 00 00            CALL 0x0074bc50
00748DF5  83 66 3C 00               AND dword ptr [ESI + 0x3c],0x0
LAB_00748df9:
00748DF9  83 7C 24 0C 00            CMP dword ptr [ESP + 0xc],0x0
00748DFE  75 06                     JNZ 0x00748e06
00748E00  83 66 04 F7               AND dword ptr [ESI + 0x4],0xfffffff7
00748E04  EB 1F                     JMP 0x00748e25
LAB_00748e06:
00748E06  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
00748E0A  E8 5B 2E 00 00            CALL 0x0074bc6a
00748E0F  85 C0                     TEST EAX,EAX
00748E11  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
00748E14  75 0B                     JNZ 0x00748e21
00748E16  83 66 04 F7               AND dword ptr [ESI + 0x4],0xfffffff7
00748E1A  B8 0E 00 07 80            MOV EAX,0x8007000e
00748E1F  EB 06                     JMP 0x00748e27
LAB_00748e21:
00748E21  83 4E 04 08               OR dword ptr [ESI + 0x4],0x8
LAB_00748e25:
00748E25  33 C0                     XOR EAX,EAX
LAB_00748e27:
00748E27  5E                        POP ESI
00748E28  C2 08 00                  RET 0x8

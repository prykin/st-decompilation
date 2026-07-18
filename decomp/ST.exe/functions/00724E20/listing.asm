FUN_00724e20:
00724E20  55                        PUSH EBP
00724E21  8B EC                     MOV EBP,ESP
00724E23  51                        PUSH ECX
00724E24  56                        PUSH ESI
00724E25  8B F1                     MOV ESI,ECX
00724E27  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00724E2A  83 F8 01                  CMP EAX,0x1
00724E2D  8B 86 3C 01 00 00         MOV EAX,dword ptr [ESI + 0x13c]
00724E33  75 64                     JNZ 0x00724e99
00724E35  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
00724E38  2B C8                     SUB ECX,EAX
00724E3A  99                        CDQ
00724E3B  2B C2                     SUB EAX,EDX
00724E3D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00724E40  D1 F8                     SAR EAX,0x1
00724E42  3B D0                     CMP EDX,EAX
00724E44  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00724E47  7F 11                     JG 0x00724e5a
00724E49  C7 86 90 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x190],0x0
00724E53  5E                        POP ESI
00724E54  8B E5                     MOV ESP,EBP
00724E56  5D                        POP EBP
00724E57  C2 08 00                  RET 0x8
LAB_00724e5a:
00724E5A  03 C8                     ADD ECX,EAX
00724E5C  3B D1                     CMP EDX,ECX
00724E5E  7C 14                     JL 0x00724e74
00724E60  8B 96 8C 01 00 00         MOV EDX,dword ptr [ESI + 0x18c]
00724E66  4A                        DEC EDX
00724E67  89 96 90 01 00 00         MOV dword ptr [ESI + 0x190],EDX
00724E6D  5E                        POP ESI
00724E6E  8B E5                     MOV ESP,EBP
00724E70  5D                        POP EBP
00724E71  C2 08 00                  RET 0x8
LAB_00724e74:
00724E74  DB 86 8C 01 00 00         FILD dword ptr [ESI + 0x18c]
00724E7A  2B D0                     SUB EDX,EAX
00724E7C  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00724E7F  DA 75 FC                  FIDIV dword ptr [EBP + -0x4]
00724E82  DB 45 0C                  FILD dword ptr [EBP + 0xc]
00724E85  DE C9                     FMULP
00724E87  E8 FC 93 00 00            CALL 0x0072e288
00724E8C  89 86 90 01 00 00         MOV dword ptr [ESI + 0x190],EAX
00724E92  5E                        POP ESI
00724E93  8B E5                     MOV ESP,EBP
00724E95  5D                        POP EBP
00724E96  C2 08 00                  RET 0x8
LAB_00724e99:
00724E99  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
00724E9C  2B C8                     SUB ECX,EAX
00724E9E  99                        CDQ
00724E9F  2B C2                     SUB EAX,EDX
00724EA1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00724EA4  D1 F8                     SAR EAX,0x1
00724EA6  3B D0                     CMP EDX,EAX
00724EA8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00724EAB  7F 11                     JG 0x00724ebe
00724EAD  C7 86 90 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x190],0x0
00724EB7  5E                        POP ESI
00724EB8  8B E5                     MOV ESP,EBP
00724EBA  5D                        POP EBP
00724EBB  C2 08 00                  RET 0x8
LAB_00724ebe:
00724EBE  03 C8                     ADD ECX,EAX
00724EC0  3B D1                     CMP EDX,ECX
00724EC2  7C 14                     JL 0x00724ed8
00724EC4  8B 96 8C 01 00 00         MOV EDX,dword ptr [ESI + 0x18c]
00724ECA  4A                        DEC EDX
00724ECB  89 96 90 01 00 00         MOV dword ptr [ESI + 0x190],EDX
00724ED1  5E                        POP ESI
00724ED2  8B E5                     MOV ESP,EBP
00724ED4  5D                        POP EBP
00724ED5  C2 08 00                  RET 0x8
LAB_00724ed8:
00724ED8  DB 86 8C 01 00 00         FILD dword ptr [ESI + 0x18c]
00724EDE  2B D0                     SUB EDX,EAX
00724EE0  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00724EE3  DA 75 FC                  FIDIV dword ptr [EBP + -0x4]
00724EE6  DB 45 0C                  FILD dword ptr [EBP + 0xc]
00724EE9  DE C9                     FMULP
00724EEB  E8 98 93 00 00            CALL 0x0072e288
00724EF0  89 86 90 01 00 00         MOV dword ptr [ESI + 0x190],EAX
00724EF6  5E                        POP ESI
00724EF7  8B E5                     MOV ESP,EBP
00724EF9  5D                        POP EBP
00724EFA  C2 08 00                  RET 0x8

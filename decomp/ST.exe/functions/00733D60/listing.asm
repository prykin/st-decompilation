FUN_00733d60:
00733D60  55                        PUSH EBP
00733D61  8B EC                     MOV EBP,ESP
00733D63  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00733D67  75 0C                     JNZ 0x00733d75
00733D69  6A 00                     PUSH 0x0
00733D6B  E8 20 01 00 00            CALL 0x00733e90
00733D70  83 C4 04                  ADD ESP,0x4
00733D73  EB 3C                     JMP 0x00733db1
LAB_00733d75:
00733D75  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00733D78  50                        PUSH EAX
00733D79  E8 42 00 00 00            CALL 0x00733dc0
00733D7E  83 C4 04                  ADD ESP,0x4
00733D81  85 C0                     TEST EAX,EAX
00733D83  74 05                     JZ 0x00733d8a
00733D85  83 C8 FF                  OR EAX,0xffffffff
00733D88  EB 27                     JMP 0x00733db1
LAB_00733d8a:
00733D8A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00733D8D  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00733D90  81 E2 00 40 00 00         AND EDX,0x4000
00733D96  85 D2                     TEST EDX,EDX
00733D98  74 15                     JZ 0x00733daf
00733D9A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00733D9D  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00733DA0  51                        PUSH ECX
00733DA1  E8 1A A5 00 00            CALL 0x0073e2c0
00733DA6  83 C4 04                  ADD ESP,0x4
00733DA9  F7 D8                     NEG EAX
00733DAB  1B C0                     SBB EAX,EAX
00733DAD  EB 02                     JMP 0x00733db1
LAB_00733daf:
00733DAF  33 C0                     XOR EAX,EAX
LAB_00733db1:
00733DB1  5D                        POP EBP
00733DB2  C3                        RET

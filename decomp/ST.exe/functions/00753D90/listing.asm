FUN_00753d90:
00753D90  55                        PUSH EBP
00753D91  8B EC                     MOV EBP,ESP
00753D93  56                        PUSH ESI
00753D94  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00753D97  57                        PUSH EDI
00753D98  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00753D9B  6A 00                     PUSH 0x0
00753D9D  57                        PUSH EDI
00753D9E  56                        PUSH ESI
00753D9F  E8 CC 1B 00 00            CALL 0x00755970
00753DA4  85 C0                     TEST EAX,EAX
00753DA6  74 11                     JZ 0x00753db9
00753DA8  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00753DAB  66 83 78 2E 00            CMP word ptr [EAX + 0x2e],0x0
00753DB0  75 07                     JNZ 0x00753db9
00753DB2  BE C3 FF FF FF            MOV ESI,0xffffffc3
00753DB7  EB 13                     JMP 0x00753dcc
LAB_00753db9:
00753DB9  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00753DBC  6A FF                     PUSH -0x1
00753DBE  51                        PUSH ECX
00753DBF  57                        PUSH EDI
00753DC0  56                        PUSH ESI
00753DC1  E8 9A 17 00 00            CALL 0x00755560
00753DC6  8B F0                     MOV ESI,EAX
00753DC8  85 F6                     TEST ESI,ESI
00753DCA  74 1C                     JZ 0x00753de8
LAB_00753dcc:
00753DCC  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00753DD2  6A 1A                     PUSH 0x1a
00753DD4  68 70 2C 7F 00            PUSH 0x7f2c70
00753DD9  52                        PUSH EDX
00753DDA  56                        PUSH ESI
00753DDB  E8 60 20 F5 FF            CALL 0x006a5e40
00753DE0  8B C6                     MOV EAX,ESI
00753DE2  5F                        POP EDI
00753DE3  5E                        POP ESI
00753DE4  5D                        POP EBP
00753DE5  C2 0C 00                  RET 0xc
LAB_00753de8:
00753DE8  5F                        POP EDI
00753DE9  33 C0                     XOR EAX,EAX
00753DEB  5E                        POP ESI
00753DEC  5D                        POP EBP
00753DED  C2 0C 00                  RET 0xc

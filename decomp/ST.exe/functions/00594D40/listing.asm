FUN_00594d40:
00594D40  55                        PUSH EBP
00594D41  8B EC                     MOV EBP,ESP
00594D43  83 EC 44                  SUB ESP,0x44
00594D46  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00594D49  53                        PUSH EBX
00594D4A  56                        PUSH ESI
00594D4B  57                        PUSH EDI
00594D4C  85 C0                     TEST EAX,EAX
00594D4E  0F 84 F5 00 00 00         JZ 0x00594e49
00594D54  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00594D59  8D 55 C0                  LEA EDX,[EBP + -0x40]
00594D5C  8D 4D BC                  LEA ECX,[EBP + -0x44]
00594D5F  6A 00                     PUSH 0x0
00594D61  52                        PUSH EDX
00594D62  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00594D65  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00594D6B  E8 80 8A 19 00            CALL 0x0072d7f0
00594D70  8B F0                     MOV ESI,EAX
00594D72  83 C4 08                  ADD ESP,0x8
00594D75  85 F6                     TEST ESI,ESI
00594D77  0F 85 94 00 00 00         JNZ 0x00594e11
00594D7D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00594D82  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00594D85  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00594D88  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00594D8B  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00594D8E  05 40 01 00 00            ADD EAX,0x140
00594D93  83 C1 EA                  ADD ECX,-0x16
00594D96  50                        PUSH EAX
00594D97  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00594D9A  51                        PUSH ECX
00594D9B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00594D9E  8D 57 16                  LEA EDX,[EDI + 0x16]
00594DA1  56                        PUSH ESI
00594DA2  52                        PUSH EDX
00594DA3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00594DA6  53                        PUSH EBX
00594DA7  50                        PUSH EAX
00594DA8  51                        PUSH ECX
00594DA9  52                        PUSH EDX
00594DAA  E8 EA E2 E6 FF            CALL 0x00403099
00594DAF  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00594DB4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00594DB7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00594DBA  05 40 01 00 00            ADD EAX,0x140
00594DBF  50                        PUSH EAX
00594DC0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00594DC3  6A 15                     PUSH 0x15
00594DC5  56                        PUSH ESI
00594DC6  57                        PUSH EDI
00594DC7  53                        PUSH EBX
00594DC8  51                        PUSH ECX
00594DC9  52                        PUSH EDX
00594DCA  50                        PUSH EAX
00594DCB  E8 C9 E2 E6 FF            CALL 0x00403099
00594DD0  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00594DD6  A1 18 76 80 00            MOV EAX,[0x00807618]
00594DDB  6A 00                     PUSH 0x0
00594DDD  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
00594DE0  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00594DE3  52                        PUSH EDX
00594DE4  6A FF                     PUSH -0x1
00594DE6  6A FE                     PUSH -0x2
00594DE8  50                        PUSH EAX
00594DE9  51                        PUSH ECX
00594DEA  E8 51 B3 11 00            CALL 0x006b0140
00594DEF  50                        PUSH EAX
00594DF0  6A 15                     PUSH 0x15
00594DF2  56                        PUSH ESI
00594DF3  57                        PUSH EDI
00594DF4  53                        PUSH EBX
00594DF5  6A 00                     PUSH 0x0
00594DF7  E8 31 FE E6 FF            CALL 0x00404c2d
00594DFC  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00594DFF  83 C4 28                  ADD ESP,0x28
00594E02  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00594E08  5F                        POP EDI
00594E09  5E                        POP ESI
00594E0A  5B                        POP EBX
00594E0B  8B E5                     MOV ESP,EBP
00594E0D  5D                        POP EBP
00594E0E  C2 20 00                  RET 0x20
LAB_00594e11:
00594E11  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00594E14  68 B0 BF 7C 00            PUSH 0x7cbfb0
00594E19  68 CC 4C 7A 00            PUSH 0x7a4ccc
00594E1E  56                        PUSH ESI
00594E1F  6A 00                     PUSH 0x0
00594E21  6A 73                     PUSH 0x73
00594E23  68 70 BF 7C 00            PUSH 0x7cbf70
00594E28  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00594E2D  E8 9E 86 11 00            CALL 0x006ad4d0
00594E32  83 C4 18                  ADD ESP,0x18
00594E35  85 C0                     TEST EAX,EAX
00594E37  74 01                     JZ 0x00594e3a
00594E39  CC                        INT3
LAB_00594e3a:
00594E3A  6A 73                     PUSH 0x73
00594E3C  68 70 BF 7C 00            PUSH 0x7cbf70
00594E41  6A 00                     PUSH 0x0
00594E43  56                        PUSH ESI
00594E44  E8 F7 0F 11 00            CALL 0x006a5e40
LAB_00594e49:
00594E49  5F                        POP EDI
00594E4A  5E                        POP ESI
00594E4B  5B                        POP EBX
00594E4C  8B E5                     MOV ESP,EBP
00594E4E  5D                        POP EBP
00594E4F  C2 20 00                  RET 0x20

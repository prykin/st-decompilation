FUN_00538db0:
00538DB0  55                        PUSH EBP
00538DB1  8B EC                     MOV EBP,ESP
00538DB3  83 EC 54                  SUB ESP,0x54
00538DB6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00538DB9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00538DBC  53                        PUSH EBX
00538DBD  56                        PUSH ESI
00538DBE  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
00538DC1  57                        PUSH EDI
00538DC2  85 D2                     TEST EDX,EDX
00538DC4  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00538DC7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00538DCA  74 11                     JZ 0x00538ddd
00538DCC  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
00538DCF  85 D2                     TEST EDX,EDX
00538DD1  8B 10                     MOV EDX,dword ptr [EAX]
00538DD3  75 0A                     JNZ 0x00538ddf
00538DD5  8B 35 30 67 80 00         MOV ESI,dword ptr [0x00806730]
00538DDB  EB 05                     JMP 0x00538de2
LAB_00538ddd:
00538DDD  8B 10                     MOV EDX,dword ptr [EAX]
LAB_00538ddf:
00538DDF  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
LAB_00538de2:
00538DE2  2B D6                     SUB EDX,ESI
00538DE4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00538DE7  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00538DEA  85 D2                     TEST EDX,EDX
00538DEC  74 21                     JZ 0x00538e0f
00538DEE  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
00538DF1  85 D2                     TEST EDX,EDX
00538DF3  75 0D                     JNZ 0x00538e02
00538DF5  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00538DF8  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
00538DFE  2B C1                     SUB EAX,ECX
00538E00  EB 15                     JMP 0x00538e17
LAB_00538e02:
00538E02  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00538E05  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
00538E08  2B D0                     SUB EDX,EAX
00538E0A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00538E0D  EB 0B                     JMP 0x00538e1a
LAB_00538e0f:
00538E0F  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00538E12  8B 51 44                  MOV EDX,dword ptr [ECX + 0x44]
00538E15  2B C2                     SUB EAX,EDX
LAB_00538e17:
00538E17  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00538e1a:
00538E1A  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00538E20  8D 45 B0                  LEA EAX,[EBP + -0x50]
00538E23  8D 55 AC                  LEA EDX,[EBP + -0x54]
00538E26  6A 00                     PUSH 0x0
00538E28  50                        PUSH EAX
00538E29  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
00538E2C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00538E32  E8 B9 49 1F 00            CALL 0x0072d7f0
00538E37  8B F0                     MOV ESI,EAX
00538E39  83 C4 08                  ADD ESP,0x8
00538E3C  85 F6                     TEST ESI,ESI
00538E3E  0F 85 C3 00 00 00         JNZ 0x00538f07
00538E44  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00538E47  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00538E4A  50                        PUSH EAX
00538E4B  50                        PUSH EAX
00538E4C  6A 01                     PUSH 0x1
00538E4E  50                        PUSH EAX
00538E4F  6A FF                     PUSH -0x1
00538E51  57                        PUSH EDI
00538E52  E8 31 90 EC FF            CALL 0x00401e88
00538E57  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00538E5A  50                        PUSH EAX
00538E5B  6A 01                     PUSH 0x1
00538E5D  51                        PUSH ECX
00538E5E  E8 9D 9D 1B 00            CALL 0x006f2c00
00538E63  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
00538E69  83 C4 10                  ADD ESP,0x10
00538E6C  50                        PUSH EAX
00538E6D  6A 01                     PUSH 0x1
00538E6F  52                        PUSH EDX
00538E70  E8 7B 0C 1D 00            CALL 0x00709af0
00538E75  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00538E78  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
00538E7B  50                        PUSH EAX
00538E7C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00538E7F  6A 01                     PUSH 0x1
00538E81  53                        PUSH EBX
00538E82  50                        PUSH EAX
00538E83  51                        PUSH ECX
00538E84  E8 A0 A3 EC FF            CALL 0x00403229
00538E89  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00538E8C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00538E8F  83 C4 34                  ADD ESP,0x34
00538E92  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00538E95  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
00538E98  52                        PUSH EDX
00538E99  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
00538E9C  50                        PUSH EAX
00538E9D  A1 28 2A 80 00            MOV EAX,[0x00802a28]
00538EA2  53                        PUSH EBX
00538EA3  51                        PUSH ECX
00538EA4  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
00538EA7  6A 00                     PUSH 0x0
00538EA9  52                        PUSH EDX
00538EAA  E8 E1 7B 1D 00            CALL 0x00710a90
00538EAF  57                        PUSH EDI
00538EB0  E8 D3 8F EC FF            CALL 0x00401e88
00538EB5  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00538EBB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00538EBE  83 C4 04                  ADD ESP,0x4
00538EC1  50                        PUSH EAX
00538EC2  6A FF                     PUSH -0x1
00538EC4  6A FE                     PUSH -0x2
00538EC6  51                        PUSH ECX
00538EC7  52                        PUSH EDX
00538EC8  E8 73 72 17 00            CALL 0x006b0140
00538ECD  50                        PUSH EAX
00538ECE  A1 28 2A 80 00            MOV EAX,[0x00802a28]
00538ED3  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
00538ED6  E8 E5 8A 1D 00            CALL 0x007119c0
00538EDB  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
00538EDE  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
00538EE1  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
00538EE4  51                        PUSH ECX
00538EE5  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00538EEB  52                        PUSH EDX
00538EEC  6A FF                     PUSH -0x1
00538EEE  50                        PUSH EAX
00538EEF  51                        PUSH ECX
00538EF0  E8 4B A7 17 00            CALL 0x006b3640
00538EF5  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00538EF8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00538EFE  5F                        POP EDI
00538EFF  5E                        POP ESI
00538F00  5B                        POP EBX
00538F01  8B E5                     MOV ESP,EBP
00538F03  5D                        POP EBP
00538F04  C2 14 00                  RET 0x14
LAB_00538f07:
00538F07  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00538F0A  68 60 74 7C 00            PUSH 0x7c7460
00538F0F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00538F14  56                        PUSH ESI
00538F15  6A 00                     PUSH 0x0
00538F17  68 DF 00 00 00            PUSH 0xdf
00538F1C  68 90 73 7C 00            PUSH 0x7c7390
00538F21  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00538F26  E8 A5 45 17 00            CALL 0x006ad4d0
00538F2B  83 C4 18                  ADD ESP,0x18
00538F2E  85 C0                     TEST EAX,EAX
00538F30  74 01                     JZ 0x00538f33
00538F32  CC                        INT3
LAB_00538f33:
00538F33  68 DF 00 00 00            PUSH 0xdf
00538F38  68 90 73 7C 00            PUSH 0x7c7390
00538F3D  6A 00                     PUSH 0x0
00538F3F  56                        PUSH ESI
00538F40  E8 FB CE 16 00            CALL 0x006a5e40
00538F45  5F                        POP EDI
00538F46  5E                        POP ESI
00538F47  5B                        POP EBX
00538F48  8B E5                     MOV ESP,EBP
00538F4A  5D                        POP EBP
00538F4B  C2 14 00                  RET 0x14

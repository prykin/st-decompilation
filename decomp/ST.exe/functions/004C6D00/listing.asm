FUN_004c6d00:
004C6D00  55                        PUSH EBP
004C6D01  8B EC                     MOV EBP,ESP
004C6D03  83 EC 1C                  SUB ESP,0x1c
004C6D06  56                        PUSH ESI
004C6D07  8B F1                     MOV ESI,ECX
004C6D09  57                        PUSH EDI
004C6D0A  33 FF                     XOR EDI,EDI
004C6D0C  39 BE FC 03 00 00         CMP dword ptr [ESI + 0x3fc],EDI
004C6D12  0F 84 6F 01 00 00         JZ 0x004c6e87
004C6D18  8B 86 00 04 00 00         MOV EAX,dword ptr [ESI + 0x400]
004C6D1E  53                        PUSH EBX
004C6D1F  3B C7                     CMP EAX,EDI
004C6D21  0F 85 EF 00 00 00         JNZ 0x004c6e16
004C6D27  8B 06                     MOV EAX,dword ptr [ESI]
004C6D29  FF 50 20                  CALL dword ptr [EAX + 0x20]
004C6D2C  83 F8 FF                  CMP EAX,-0x1
004C6D2F  0F 84 AB 00 00 00         JZ 0x004c6de0
004C6D35  83 F8 01                  CMP EAX,0x1
004C6D38  0F 85 D8 00 00 00         JNZ 0x004c6e16
004C6D3E  8D 4D EC                  LEA ECX,[EBP + -0x14]
004C6D41  89 86 00 04 00 00         MOV dword ptr [ESI + 0x400],EAX
004C6D47  8D 55 F0                  LEA EDX,[EBP + -0x10]
004C6D4A  51                        PUSH ECX
004C6D4B  8D 45 F4                  LEA EAX,[EBP + -0xc]
004C6D4E  52                        PUSH EDX
004C6D4F  50                        PUSH EAX
004C6D50  8B CE                     MOV ECX,ESI
004C6D52  E8 8C C4 F3 FF            CALL 0x004031e3
004C6D57  66 8B 8E B0 05 00 00      MOV CX,word ptr [ESI + 0x5b0]
004C6D5E  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004C6D61  66 69 C9 C9 00            IMUL CX,CX,0xc9
004C6D66  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004C6D69  8D 41 64                  LEA EAX,[ECX + 0x64]
004C6D6C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004C6D6F  66 3B C8                  CMP CX,AX
004C6D72  75 39                     JNZ 0x004c6dad
004C6D74  66 8B 9E B4 05 00 00      MOV BX,word ptr [ESI + 0x5b4]
004C6D7B  66 69 DB C9 00            IMUL BX,BX,0xc9
004C6D80  83 C3 64                  ADD EBX,0x64
004C6D83  66 3B FB                  CMP DI,BX
004C6D86  75 25                     JNZ 0x004c6dad
004C6D88  66 8B 9E B8 05 00 00      MOV BX,word ptr [ESI + 0x5b8]
004C6D8F  66 69 DB C8 00            IMUL BX,BX,0xc8
004C6D94  83 C3 64                  ADD EBX,0x64
004C6D97  66 3B D3                  CMP DX,BX
004C6D9A  75 11                     JNZ 0x004c6dad
004C6D9C  33 FF                     XOR EDI,EDI
004C6D9E  8B CE                     MOV ECX,ESI
004C6DA0  89 BE DC 03 00 00         MOV dword ptr [ESI + 0x3dc],EDI
004C6DA6  E8 A7 EB F3 FF            CALL 0x00405952
004C6DAB  EB 69                     JMP 0x004c6e16
LAB_004c6dad:
004C6DAD  8A 5E 62                  MOV BL,byte ptr [ESI + 0x62]
004C6DB0  53                        PUSH EBX
004C6DB1  66 8B 9E B8 05 00 00      MOV BX,word ptr [ESI + 0x5b8]
004C6DB8  66 69 DB C8 00            IMUL BX,BX,0xc8
004C6DBD  83 C3 64                  ADD EBX,0x64
004C6DC0  53                        PUSH EBX
004C6DC1  66 8B 9E B4 05 00 00      MOV BX,word ptr [ESI + 0x5b4]
004C6DC8  66 69 DB C9 00            IMUL BX,BX,0xc9
004C6DCD  83 C3 64                  ADD EBX,0x64
004C6DD0  53                        PUSH EBX
004C6DD1  50                        PUSH EAX
004C6DD2  52                        PUSH EDX
004C6DD3  57                        PUSH EDI
004C6DD4  51                        PUSH ECX
004C6DD5  8B CE                     MOV ECX,ESI
004C6DD7  E8 79 B6 F3 FF            CALL 0x00402455
004C6DDC  33 FF                     XOR EDI,EDI
004C6DDE  EB 36                     JMP 0x004c6e16
LAB_004c6de0:
004C6DE0  68 A0 D3 7A 00            PUSH 0x7ad3a0
004C6DE5  68 CC 4C 7A 00            PUSH 0x7a4ccc
004C6DEA  6A FB                     PUSH -0x5
004C6DEC  57                        PUSH EDI
004C6DED  6A 35                     PUSH 0x35
004C6DEF  68 68 D3 7A 00            PUSH 0x7ad368
004C6DF4  E8 D7 66 1E 00            CALL 0x006ad4d0
004C6DF9  83 C4 18                  ADD ESP,0x18
004C6DFC  85 C0                     TEST EAX,EAX
004C6DFE  74 01                     JZ 0x004c6e01
004C6E00  CC                        INT3
LAB_004c6e01:
004C6E01  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004C6E07  6A 35                     PUSH 0x35
004C6E09  68 68 D3 7A 00            PUSH 0x7ad368
004C6E0E  52                        PUSH EDX
004C6E0F  6A FB                     PUSH -0x5
004C6E11  E8 2A F0 1D 00            CALL 0x006a5e40
LAB_004c6e16:
004C6E16  8B 86 00 04 00 00         MOV EAX,dword ptr [ESI + 0x400]
004C6E1C  5B                        POP EBX
004C6E1D  3B C7                     CMP EAX,EDI
004C6E1F  0F 84 22 01 00 00         JZ 0x004c6f47
004C6E25  39 BE DC 03 00 00         CMP dword ptr [ESI + 0x3dc],EDI
004C6E2B  0F 84 16 01 00 00         JZ 0x004c6f47
004C6E31  8D 45 E8                  LEA EAX,[EBP + -0x18]
004C6E34  8D 4D E4                  LEA ECX,[EBP + -0x1c]
004C6E37  50                        PUSH EAX
004C6E38  51                        PUSH ECX
004C6E39  8B CE                     MOV ECX,ESI
004C6E3B  E8 07 BA F3 FF            CALL 0x00402847
004C6E40  83 F8 FF                  CMP EAX,-0x1
004C6E43  74 1A                     JZ 0x004c6e5f
004C6E45  3B C7                     CMP EAX,EDI
004C6E47  0F 85 FA 00 00 00         JNZ 0x004c6f47
LAB_004c6e4d:
004C6E4D  8B CE                     MOV ECX,ESI
004C6E4F  89 BE DC 03 00 00         MOV dword ptr [ESI + 0x3dc],EDI
004C6E55  E8 F8 EA F3 FF            CALL 0x00405952
004C6E5A  E9 E8 00 00 00            JMP 0x004c6f47
LAB_004c6e5f:
004C6E5F  68 90 D3 7A 00            PUSH 0x7ad390
004C6E64  68 CC 4C 7A 00            PUSH 0x7a4ccc
004C6E69  6A FB                     PUSH -0x5
004C6E6B  57                        PUSH EDI
004C6E6C  6A 47                     PUSH 0x47
004C6E6E  68 68 D3 7A 00            PUSH 0x7ad368
004C6E73  E8 58 66 1E 00            CALL 0x006ad4d0
004C6E78  83 C4 18                  ADD ESP,0x18
004C6E7B  85 C0                     TEST EAX,EAX
004C6E7D  74 01                     JZ 0x004c6e80
004C6E7F  CC                        INT3
LAB_004c6e80:
004C6E80  6A 47                     PUSH 0x47
004C6E82  E9 AD 00 00 00            JMP 0x004c6f34
LAB_004c6e87:
004C6E87  8B 06                     MOV EAX,dword ptr [ESI]
004C6E89  8B CE                     MOV ECX,ESI
004C6E8B  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
004C6E8E  83 F8 FF                  CMP EAX,-0x1
004C6E91  74 7E                     JZ 0x004c6f11
004C6E93  83 F8 01                  CMP EAX,0x1
004C6E96  74 B5                     JZ 0x004c6e4d
004C6E98  83 F8 02                  CMP EAX,0x2
004C6E9B  0F 85 A6 00 00 00         JNZ 0x004c6f47
004C6EA1  8B 8E 04 04 00 00         MOV ECX,dword ptr [ESI + 0x404]
004C6EA7  41                        INC ECX
004C6EA8  8B C1                     MOV EAX,ECX
004C6EAA  89 8E 04 04 00 00         MOV dword ptr [ESI + 0x404],ECX
004C6EB0  83 F8 0A                  CMP EAX,0xa
004C6EB3  7C 1B                     JL 0x004c6ed0
004C6EB5  8B CE                     MOV ECX,ESI
004C6EB7  E8 E2 DF F3 FF            CALL 0x00404e9e
004C6EBC  85 C0                     TEST EAX,EAX
004C6EBE  74 10                     JZ 0x004c6ed0
004C6EC0  C7 86 FC 03 00 00 01 00 00 00  MOV dword ptr [ESI + 0x3fc],0x1
004C6ECA  89 BE 00 04 00 00         MOV dword ptr [ESI + 0x400],EDI
LAB_004c6ed0:
004C6ED0  66 8B 8E E8 03 00 00      MOV CX,word ptr [ESI + 0x3e8]
004C6ED7  66 8B 96 E4 03 00 00      MOV DX,word ptr [ESI + 0x3e4]
004C6EDE  66 8B 86 E0 03 00 00      MOV AX,word ptr [ESI + 0x3e0]
004C6EE5  51                        PUSH ECX
004C6EE6  52                        PUSH EDX
004C6EE7  50                        PUSH EAX
004C6EE8  8B CE                     MOV ECX,ESI
004C6EEA  E8 29 D4 F3 FF            CALL 0x00404318
004C6EEF  83 F8 FF                  CMP EAX,-0x1
004C6EF2  74 0D                     JZ 0x004c6f01
004C6EF4  83 F8 02                  CMP EAX,0x2
004C6EF7  75 4E                     JNZ 0x004c6f47
004C6EF9  89 BE DC 03 00 00         MOV dword ptr [ESI + 0x3dc],EDI
004C6EFF  EB 46                     JMP 0x004c6f47
LAB_004c6f01:
004C6F01  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004C6F07  6A 59                     PUSH 0x59
004C6F09  68 68 D3 7A 00            PUSH 0x7ad368
004C6F0E  51                        PUSH ECX
004C6F0F  EB 2F                     JMP 0x004c6f40
LAB_004c6f11:
004C6F11  68 90 D3 7A 00            PUSH 0x7ad390
004C6F16  68 CC 4C 7A 00            PUSH 0x7a4ccc
004C6F1B  6A FB                     PUSH -0x5
004C6F1D  57                        PUSH EDI
004C6F1E  6A 4F                     PUSH 0x4f
004C6F20  68 68 D3 7A 00            PUSH 0x7ad368
004C6F25  E8 A6 65 1E 00            CALL 0x006ad4d0
004C6F2A  83 C4 18                  ADD ESP,0x18
004C6F2D  85 C0                     TEST EAX,EAX
004C6F2F  74 01                     JZ 0x004c6f32
004C6F31  CC                        INT3
LAB_004c6f32:
004C6F32  6A 4F                     PUSH 0x4f
LAB_004c6f34:
004C6F34  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004C6F3A  68 68 D3 7A 00            PUSH 0x7ad368
004C6F3F  52                        PUSH EDX
LAB_004c6f40:
004C6F40  6A FB                     PUSH -0x5
004C6F42  E8 F9 EE 1D 00            CALL 0x006a5e40
FUN_004c6d00::cf_common_exit_004C6F47:
004C6F47  8D 45 FA                  LEA EAX,[EBP + -0x6]
004C6F4A  8D 4D FC                  LEA ECX,[EBP + -0x4]
004C6F4D  50                        PUSH EAX
004C6F4E  8D 55 FE                  LEA EDX,[EBP + -0x2]
004C6F51  51                        PUSH ECX
004C6F52  52                        PUSH EDX
004C6F53  8B CE                     MOV ECX,ESI
004C6F55  E8 B1 EF F3 FF            CALL 0x00405f0b
004C6F5A  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
004C6F5E  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
004C6F62  0F BF 55 FA               MOVSX EDX,word ptr [EBP + -0x6]
004C6F66  89 86 B0 05 00 00         MOV dword ptr [ESI + 0x5b0],EAX
004C6F6C  8B 86 DC 03 00 00         MOV EAX,dword ptr [ESI + 0x3dc]
004C6F72  3B C7                     CMP EAX,EDI
004C6F74  89 8E B4 05 00 00         MOV dword ptr [ESI + 0x5b4],ECX
004C6F7A  89 96 B8 05 00 00         MOV dword ptr [ESI + 0x5b8],EDX
004C6F80  75 2A                     JNZ 0x004c6fac
004C6F82  39 BE EC 03 00 00         CMP dword ptr [ESI + 0x3ec],EDI
004C6F88  74 22                     JZ 0x004c6fac
004C6F8A  8B 86 F8 03 00 00         MOV EAX,dword ptr [ESI + 0x3f8]
004C6F90  8B 8E F4 03 00 00         MOV ECX,dword ptr [ESI + 0x3f4]
004C6F96  8B 96 F0 03 00 00         MOV EDX,dword ptr [ESI + 0x3f0]
004C6F9C  50                        PUSH EAX
004C6F9D  51                        PUSH ECX
004C6F9E  52                        PUSH EDX
004C6F9F  8B CE                     MOV ECX,ESI
004C6FA1  89 BE EC 03 00 00         MOV dword ptr [ESI + 0x3ec],EDI
004C6FA7  E8 11 ED F3 FF            CALL 0x00405cbd
LAB_004c6fac:
004C6FAC  5F                        POP EDI
004C6FAD  33 C0                     XOR EAX,EAX
004C6FAF  5E                        POP ESI
004C6FB0  8B E5                     MOV ESP,EBP
004C6FB2  5D                        POP EBP
004C6FB3  C3                        RET

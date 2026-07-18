FUN_004b0d10:
004B0D10  55                        PUSH EBP
004B0D11  8B EC                     MOV EBP,ESP
004B0D13  83 EC 4C                  SUB ESP,0x4c
004B0D16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004B0D1B  53                        PUSH EBX
004B0D1C  56                        PUSH ESI
004B0D1D  57                        PUSH EDI
004B0D1E  8D 55 B8                  LEA EDX,[EBP + -0x48]
004B0D21  8D 4D B4                  LEA ECX,[EBP + -0x4c]
004B0D24  6A 00                     PUSH 0x0
004B0D26  52                        PUSH EDX
004B0D27  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
004B0D2E  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004B0D31  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004B0D37  E8 B4 CA 27 00            CALL 0x0072d7f0
004B0D3C  8B F0                     MOV ESI,EAX
004B0D3E  83 C4 08                  ADD ESP,0x8
004B0D41  85 F6                     TEST ESI,ESI
004B0D43  0F 85 18 01 00 00         JNZ 0x004b0e61
004B0D49  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004B0D4C  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B0D4F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004B0D52  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004B0D55  8B 03                     MOV EAX,dword ptr [EBX]
004B0D57  85 C0                     TEST EAX,EAX
004B0D59  7C 55                     JL 0x004b0db0
004B0D5B  8B 11                     MOV EDX,dword ptr [ECX]
004B0D5D  85 D2                     TEST EDX,EDX
004B0D5F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004B0D62  7C 4C                     JL 0x004b0db0
004B0D64  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004B0D67  8B 12                     MOV EDX,dword ptr [EDX]
004B0D69  85 D2                     TEST EDX,EDX
004B0D6B  7C 43                     JL 0x004b0db0
004B0D6D  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
004B0D70  85 C9                     TEST ECX,ECX
004B0D72  74 05                     JZ 0x004b0d79
004B0D74  8B 49 18                  MOV ECX,dword ptr [ECX + 0x18]
004B0D77  EB 02                     JMP 0x004b0d7b
LAB_004b0d79:
004B0D79  33 C9                     XOR ECX,ECX
LAB_004b0d7b:
004B0D7B  6A 00                     PUSH 0x0
004B0D7D  51                        PUSH ECX
004B0D7E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004B0D81  6A 00                     PUSH 0x0
004B0D83  6A 00                     PUSH 0x0
004B0D85  6A 00                     PUSH 0x0
004B0D87  57                        PUSH EDI
004B0D88  56                        PUSH ESI
004B0D89  52                        PUSH EDX
004B0D8A  51                        PUSH ECX
004B0D8B  50                        PUSH EAX
004B0D8C  E8 98 1A F5 FF            CALL 0x00402829
004B0D91  83 C4 28                  ADD ESP,0x28
004B0D94  85 C0                     TEST EAX,EAX
004B0D96  74 15                     JZ 0x004b0dad
004B0D98  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004B0D9B  B8 01 00 00 00            MOV EAX,0x1
004B0DA0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004B0DA6  5F                        POP EDI
004B0DA7  5E                        POP ESI
004B0DA8  5B                        POP EBX
004B0DA9  8B E5                     MOV ESP,EBP
004B0DAB  5D                        POP EBP
004B0DAC  C3                        RET
LAB_004b0dad:
004B0DAD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
LAB_004b0db0:
004B0DB0  8B 04 B5 2C 07 79 00      MOV EAX,dword ptr [ESI*0x4 + 0x79072c]
004B0DB7  83 E8 00                  SUB EAX,0x0
004B0DBA  74 62                     JZ 0x004b0e1e
004B0DBC  48                        DEC EAX
004B0DBD  74 33                     JZ 0x004b0df2
004B0DBF  48                        DEC EAX
004B0DC0  0F 85 88 00 00 00         JNZ 0x004b0e4e
004B0DC6  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
004B0DC9  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004B0DCC  52                        PUSH EDX
004B0DCD  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
004B0DD0  50                        PUSH EAX
004B0DD1  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004B0DD4  52                        PUSH EDX
004B0DD5  50                        PUSH EAX
004B0DD6  51                        PUSH ECX
004B0DD7  53                        PUSH EBX
004B0DD8  56                        PUSH ESI
004B0DD9  57                        PUSH EDI
004B0DDA  E8 53 48 F5 FF            CALL 0x00405632
004B0DDF  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004B0DE2  83 C4 20                  ADD ESP,0x20
004B0DE5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004B0DEB  5F                        POP EDI
004B0DEC  5E                        POP ESI
004B0DED  5B                        POP EBX
004B0DEE  8B E5                     MOV ESP,EBP
004B0DF0  5D                        POP EBP
004B0DF1  C3                        RET
LAB_004b0df2:
004B0DF2  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
004B0DF5  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004B0DF8  52                        PUSH EDX
004B0DF9  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
004B0DFC  50                        PUSH EAX
004B0DFD  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004B0E00  52                        PUSH EDX
004B0E01  50                        PUSH EAX
004B0E02  51                        PUSH ECX
004B0E03  53                        PUSH EBX
004B0E04  56                        PUSH ESI
004B0E05  57                        PUSH EDI
004B0E06  E8 EF 25 F5 FF            CALL 0x004033fa
004B0E0B  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004B0E0E  83 C4 20                  ADD ESP,0x20
004B0E11  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004B0E17  5F                        POP EDI
004B0E18  5E                        POP ESI
004B0E19  5B                        POP EBX
004B0E1A  8B E5                     MOV ESP,EBP
004B0E1C  5D                        POP EBP
004B0E1D  C3                        RET
LAB_004b0e1e:
004B0E1E  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
004B0E21  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
004B0E24  52                        PUSH EDX
004B0E25  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
004B0E28  50                        PUSH EAX
004B0E29  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004B0E2C  52                        PUSH EDX
004B0E2D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004B0E30  50                        PUSH EAX
004B0E31  52                        PUSH EDX
004B0E32  51                        PUSH ECX
004B0E33  53                        PUSH EBX
004B0E34  56                        PUSH ESI
004B0E35  57                        PUSH EDI
004B0E36  E8 C9 4D F5 FF            CALL 0x00405c04
004B0E3B  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004B0E3E  83 C4 24                  ADD ESP,0x24
004B0E41  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004B0E47  5F                        POP EDI
004B0E48  5E                        POP ESI
004B0E49  5B                        POP EBX
004B0E4A  8B E5                     MOV ESP,EBP
004B0E4C  5D                        POP EBP
004B0E4D  C3                        RET
LAB_004b0e4e:
004B0E4E  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004B0E51  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004B0E54  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004B0E5A  5F                        POP EDI
004B0E5B  5E                        POP ESI
004B0E5C  5B                        POP EBX
004B0E5D  8B E5                     MOV ESP,EBP
004B0E5F  5D                        POP EBP
004B0E60  C3                        RET
LAB_004b0e61:
004B0E61  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004B0E64  68 7C C7 7A 00            PUSH 0x7ac77c
004B0E69  68 CC 4C 7A 00            PUSH 0x7a4ccc
004B0E6E  56                        PUSH ESI
004B0E6F  6A 00                     PUSH 0x0
004B0E71  68 13 03 00 00            PUSH 0x313
004B0E76  68 58 C7 7A 00            PUSH 0x7ac758
004B0E7B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004B0E81  E8 4A C6 1F 00            CALL 0x006ad4d0
004B0E86  83 C4 18                  ADD ESP,0x18
004B0E89  85 C0                     TEST EAX,EAX
004B0E8B  74 01                     JZ 0x004b0e8e
004B0E8D  CC                        INT3
LAB_004b0e8e:
004B0E8E  68 14 03 00 00            PUSH 0x314
004B0E93  68 58 C7 7A 00            PUSH 0x7ac758
004B0E98  6A 00                     PUSH 0x0
004B0E9A  56                        PUSH ESI
004B0E9B  E8 A0 4F 1F 00            CALL 0x006a5e40
004B0EA0  5F                        POP EDI
004B0EA1  5E                        POP ESI
004B0EA2  33 C0                     XOR EAX,EAX
004B0EA4  5B                        POP EBX
004B0EA5  8B E5                     MOV ESP,EBP
004B0EA7  5D                        POP EBP
004B0EA8  C3                        RET

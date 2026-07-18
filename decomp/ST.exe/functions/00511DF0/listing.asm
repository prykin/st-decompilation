FUN_00511df0:
00511DF0  55                        PUSH EBP
00511DF1  8B EC                     MOV EBP,ESP
00511DF3  83 EC 48                  SUB ESP,0x48
00511DF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00511DFB  56                        PUSH ESI
00511DFC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00511DFF  57                        PUSH EDI
00511E00  8D 55 BC                  LEA EDX,[EBP + -0x44]
00511E03  8D 4D B8                  LEA ECX,[EBP + -0x48]
00511E06  6A 00                     PUSH 0x0
00511E08  52                        PUSH EDX
00511E09  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00511E0C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00511E12  E8 D9 B9 21 00            CALL 0x0072d7f0
00511E17  8B F0                     MOV ESI,EAX
00511E19  83 C4 08                  ADD ESP,0x8
00511E1C  85 F6                     TEST ESI,ESI
00511E1E  0F 85 D3 00 00 00         JNZ 0x00511ef7
00511E24  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00511E27  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00511E2A  66 8B 86 72 01 00 00      MOV AX,word ptr [ESI + 0x172]
00511E31  48                        DEC EAX
00511E32  74 5C                     JZ 0x00511e90
00511E34  48                        DEC EAX
00511E35  74 17                     JZ 0x00511e4e
00511E37  48                        DEC EAX
00511E38  0F 84 8F 00 00 00         JZ 0x00511ecd
00511E3E  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00511E41  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00511E46  5F                        POP EDI
00511E47  5E                        POP ESI
00511E48  8B E5                     MOV ESP,EBP
00511E4A  5D                        POP EBP
00511E4B  C2 04 00                  RET 0x4
LAB_00511e4e:
00511E4E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00511E51  85 C0                     TEST EAX,EAX
00511E53  0F 84 8E 00 00 00         JZ 0x00511ee7
00511E59  68 AF 00 00 00            PUSH 0xaf
00511E5E  66 C7 86 72 01 00 00 03 00  MOV word ptr [ESI + 0x172],0x3
00511E67  E8 C3 3F EF FF            CALL 0x00405e2f
00511E6C  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
00511E72  83 C4 04                  ADD ESP,0x4
00511E75  85 C9                     TEST ECX,ECX
00511E77  74 6E                     JZ 0x00511ee7
00511E79  6A 00                     PUSH 0x0
00511E7B  E8 52 10 EF FF            CALL 0x00402ed2
00511E80  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00511E83  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00511E88  5F                        POP EDI
00511E89  5E                        POP ESI
00511E8A  8B E5                     MOV ESP,EBP
00511E8C  5D                        POP EBP
00511E8D  C2 04 00                  RET 0x4
LAB_00511e90:
00511E90  85 FF                     TEST EDI,EDI
00511E92  75 53                     JNZ 0x00511ee7
00511E94  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
00511E9A  85 C0                     TEST EAX,EAX
00511E9C  74 26                     JZ 0x00511ec4
00511E9E  C7 46 28 02 42 00 00      MOV dword ptr [ESI + 0x28],0x4202
00511EA5  66 89 7E 2C               MOV word ptr [ESI + 0x2c],DI
00511EA9  66 C7 46 2E 02 00         MOV word ptr [ESI + 0x2e],0x2
00511EAF  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
00511EB2  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
00511EB8  85 C9                     TEST ECX,ECX
00511EBA  74 08                     JZ 0x00511ec4
00511EBC  8B 01                     MOV EAX,dword ptr [ECX]
00511EBE  8D 56 18                  LEA EDX,[ESI + 0x18]
00511EC1  52                        PUSH EDX
00511EC2  FF 10                     CALL dword ptr [EAX]
LAB_00511ec4:
00511EC4  6A 00                     PUSH 0x0
00511EC6  8B CE                     MOV ECX,ESI
00511EC8  E8 0C 31 EF FF            CALL 0x00404fd9
LAB_00511ecd:
00511ECD  85 FF                     TEST EDI,EDI
00511ECF  75 16                     JNZ 0x00511ee7
00511ED1  68 B0 00 00 00            PUSH 0xb0
00511ED6  66 C7 86 72 01 00 00 04 00  MOV word ptr [ESI + 0x172],0x4
00511EDF  E8 4B 3F EF FF            CALL 0x00405e2f
00511EE4  83 C4 04                  ADD ESP,0x4
LAB_00511ee7:
00511EE7  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00511EEA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00511EEF  5F                        POP EDI
00511EF0  5E                        POP ESI
00511EF1  8B E5                     MOV ESP,EBP
00511EF3  5D                        POP EBP
00511EF4  C2 04 00                  RET 0x4
LAB_00511ef7:
00511EF7  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00511EFA  68 78 39 7C 00            PUSH 0x7c3978
00511EFF  68 CC 4C 7A 00            PUSH 0x7a4ccc
00511F04  56                        PUSH ESI
00511F05  6A 00                     PUSH 0x0
00511F07  68 0F 01 00 00            PUSH 0x10f
00511F0C  68 3C 38 7C 00            PUSH 0x7c383c
00511F11  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00511F17  E8 B4 B5 19 00            CALL 0x006ad4d0
00511F1C  83 C4 18                  ADD ESP,0x18
00511F1F  85 C0                     TEST EAX,EAX
00511F21  74 01                     JZ 0x00511f24
00511F23  CC                        INT3
LAB_00511f24:
00511F24  68 0F 01 00 00            PUSH 0x10f
00511F29  68 3C 38 7C 00            PUSH 0x7c383c
00511F2E  6A 00                     PUSH 0x0
00511F30  56                        PUSH ESI
00511F31  E8 0A 3F 19 00            CALL 0x006a5e40
00511F36  5F                        POP EDI
00511F37  5E                        POP ESI
00511F38  8B E5                     MOV ESP,EBP
00511F3A  5D                        POP EBP
00511F3B  C2 04 00                  RET 0x4

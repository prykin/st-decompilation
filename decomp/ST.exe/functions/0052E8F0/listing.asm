FUN_0052e8f0:
0052E8F0  55                        PUSH EBP
0052E8F1  8B EC                     MOV EBP,ESP
0052E8F3  83 EC 48                  SUB ESP,0x48
0052E8F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052E8FB  53                        PUSH EBX
0052E8FC  56                        PUSH ESI
0052E8FD  57                        PUSH EDI
0052E8FE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0052E901  33 FF                     XOR EDI,EDI
0052E903  8D 55 BC                  LEA EDX,[EBP + -0x44]
0052E906  8D 4D B8                  LEA ECX,[EBP + -0x48]
0052E909  57                        PUSH EDI
0052E90A  52                        PUSH EDX
0052E90B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0052E90E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052E914  E8 D7 EE 1F 00            CALL 0x0072d7f0
0052E919  8B F0                     MOV ESI,EAX
0052E91B  83 C4 08                  ADD ESP,0x8
0052E91E  3B F7                     CMP ESI,EDI
0052E920  0F 85 69 01 00 00         JNZ 0x0052ea8f
0052E926  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0052E929  8B 86 E9 01 00 00         MOV EAX,dword ptr [ESI + 0x1e9]
0052E92F  3B C7                     CMP EAX,EDI
0052E931  74 0C                     JZ 0x0052e93f
0052E933  50                        PUSH EAX
0052E934  E8 37 6C 18 00            CALL 0x006b5570
0052E939  89 BE E9 01 00 00         MOV dword ptr [ESI + 0x1e9],EDI
LAB_0052e93f:
0052E93F  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
0052E945  3B C7                     CMP EAX,EDI
0052E947  74 0C                     JZ 0x0052e955
0052E949  50                        PUSH EAX
0052E94A  E8 C1 F7 17 00            CALL 0x006ae110
0052E94F  89 BE ED 01 00 00         MOV dword ptr [ESI + 0x1ed],EDI
LAB_0052e955:
0052E955  8B 86 F1 01 00 00         MOV EAX,dword ptr [ESI + 0x1f1]
0052E95B  3B C7                     CMP EAX,EDI
0052E95D  74 0C                     JZ 0x0052e96b
0052E95F  50                        PUSH EAX
0052E960  E8 0B 6C 18 00            CALL 0x006b5570
0052E965  89 BE F1 01 00 00         MOV dword ptr [ESI + 0x1f1],EDI
LAB_0052e96b:
0052E96B  8B 8E E5 01 00 00         MOV ECX,dword ptr [ESI + 0x1e5]
0052E971  8D 86 E5 01 00 00         LEA EAX,[ESI + 0x1e5]
0052E977  3B CF                     CMP ECX,EDI
0052E979  74 06                     JZ 0x0052e981
0052E97B  50                        PUSH EAX
0052E97C  E8 DF C6 17 00            CALL 0x006ab060
LAB_0052e981:
0052E981  8B 86 F9 02 00 00         MOV EAX,dword ptr [ESI + 0x2f9]
0052E987  3B C7                     CMP EAX,EDI
0052E989  74 06                     JZ 0x0052e991
0052E98B  50                        PUSH EAX
0052E98C  E8 DF 6B 18 00            CALL 0x006b5570
LAB_0052e991:
0052E991  8B 86 FD 02 00 00         MOV EAX,dword ptr [ESI + 0x2fd]
0052E997  89 BE F9 02 00 00         MOV dword ptr [ESI + 0x2f9],EDI
0052E99D  3B C7                     CMP EAX,EDI
0052E99F  74 06                     JZ 0x0052e9a7
0052E9A1  50                        PUSH EAX
0052E9A2  E8 69 F7 17 00            CALL 0x006ae110
LAB_0052e9a7:
0052E9A7  8B 86 DD 01 00 00         MOV EAX,dword ptr [ESI + 0x1dd]
0052E9AD  89 BE FD 02 00 00         MOV dword ptr [ESI + 0x2fd],EDI
0052E9B3  3B C7                     CMP EAX,EDI
0052E9B5  74 0D                     JZ 0x0052e9c4
0052E9B7  50                        PUSH EAX
0052E9B8  FF 15 AC BC 85 00         CALL dword ptr [0x0085bcac]
0052E9BE  89 BE DD 01 00 00         MOV dword ptr [ESI + 0x1dd],EDI
LAB_0052e9c4:
0052E9C4  8D BE B5 01 00 00         LEA EDI,[ESI + 0x1b5]
0052E9CA  BB 0A 00 00 00            MOV EBX,0xa
LAB_0052e9cf:
0052E9CF  8B 07                     MOV EAX,dword ptr [EDI]
0052E9D1  85 C0                     TEST EAX,EAX
0052E9D3  74 09                     JZ 0x0052e9de
0052E9D5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0052E9D8  50                        PUSH EAX
0052E9D9  E8 D2 6C 1B 00            CALL 0x006e56b0
LAB_0052e9de:
0052E9DE  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
0052E9E4  83 C7 04                  ADD EDI,0x4
0052E9E7  4B                        DEC EBX
0052E9E8  75 E5                     JNZ 0x0052e9cf
0052E9EA  8D BE AD 01 00 00         LEA EDI,[ESI + 0x1ad]
0052E9F0  BB 02 00 00 00            MOV EBX,0x2
LAB_0052e9f5:
0052E9F5  8B 07                     MOV EAX,dword ptr [EDI]
0052E9F7  85 C0                     TEST EAX,EAX
0052E9F9  74 09                     JZ 0x0052ea04
0052E9FB  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0052E9FE  50                        PUSH EAX
0052E9FF  E8 AC 6C 1B 00            CALL 0x006e56b0
LAB_0052ea04:
0052EA04  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
0052EA0A  83 C7 04                  ADD EDI,0x4
0052EA0D  4B                        DEC EBX
0052EA0E  75 E5                     JNZ 0x0052e9f5
0052EA10  C7 05 DC 16 80 00 00 00 00 00  MOV dword ptr [0x008016dc],0x0
0052EA1A  8B 86 7C 01 00 00         MOV EAX,dword ptr [ESI + 0x17c]
0052EA20  85 C0                     TEST EAX,EAX
0052EA22  74 13                     JZ 0x0052ea37
0052EA24  50                        PUSH EAX
0052EA25  E8 36 1B 1E 00            CALL 0x00710560
0052EA2A  83 C4 04                  ADD ESP,0x4
0052EA2D  C7 86 7C 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x17c],0x0
LAB_0052ea37:
0052EA37  8B 86 80 01 00 00         MOV EAX,dword ptr [ESI + 0x180]
0052EA3D  85 C0                     TEST EAX,EAX
0052EA3F  74 13                     JZ 0x0052ea54
0052EA41  50                        PUSH EAX
0052EA42  E8 19 1B 1E 00            CALL 0x00710560
0052EA47  83 C4 04                  ADD ESP,0x4
0052EA4A  C7 86 80 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x180],0x0
LAB_0052ea54:
0052EA54  C7 86 98 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x198],0x0
0052EA5E  81 C6 84 01 00 00         ADD ESI,0x184
0052EA64  BF 05 00 00 00            MOV EDI,0x5
LAB_0052ea69:
0052EA69  83 3E 00                  CMP dword ptr [ESI],0x0
0052EA6C  74 0C                     JZ 0x0052ea7a
0052EA6E  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0052EA74  56                        PUSH ESI
0052EA75  E8 66 36 1C 00            CALL 0x006f20e0
LAB_0052ea7a:
0052EA7A  83 C6 04                  ADD ESI,0x4
0052EA7D  4F                        DEC EDI
0052EA7E  75 E9                     JNZ 0x0052ea69
0052EA80  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0052EA83  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052EA88  5F                        POP EDI
0052EA89  5E                        POP ESI
0052EA8A  5B                        POP EBX
0052EA8B  8B E5                     MOV ESP,EBP
0052EA8D  5D                        POP EBP
0052EA8E  C3                        RET
LAB_0052ea8f:
0052EA8F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0052EA92  68 4C 71 7C 00            PUSH 0x7c714c
0052EA97  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052EA9C  56                        PUSH ESI
0052EA9D  57                        PUSH EDI
0052EA9E  6A 79                     PUSH 0x79
0052EAA0  68 A0 70 7C 00            PUSH 0x7c70a0
0052EAA5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052EAAB  E8 20 EA 17 00            CALL 0x006ad4d0
0052EAB0  83 C4 18                  ADD ESP,0x18
0052EAB3  85 C0                     TEST EAX,EAX
0052EAB5  74 01                     JZ 0x0052eab8
0052EAB7  CC                        INT3
LAB_0052eab8:
0052EAB8  6A 79                     PUSH 0x79
0052EABA  68 A0 70 7C 00            PUSH 0x7c70a0
0052EABF  57                        PUSH EDI
0052EAC0  56                        PUSH ESI
0052EAC1  E8 7A 73 17 00            CALL 0x006a5e40
0052EAC6  5F                        POP EDI
0052EAC7  5E                        POP ESI
0052EAC8  5B                        POP EBX
0052EAC9  8B E5                     MOV ESP,EBP
0052EACB  5D                        POP EBP
0052EACC  C3                        RET

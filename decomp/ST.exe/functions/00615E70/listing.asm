FUN_00615e70:
00615E70  55                        PUSH EBP
00615E71  8B EC                     MOV EBP,ESP
00615E73  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00615E76  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00615E79  53                        PUSH EBX
00615E7A  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00615E7D  56                        PUSH ESI
00615E7E  57                        PUSH EDI
00615E7F  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
00615E82  8B F1                     MOV ESI,ECX
00615E84  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00615E87  57                        PUSH EDI
00615E88  53                        PUSH EBX
00615E89  50                        PUSH EAX
00615E8A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00615E8D  51                        PUSH ECX
00615E8E  52                        PUSH EDX
00615E8F  50                        PUSH EAX
00615E90  E8 78 70 09 00            CALL 0x006acf0d
00615E95  8B C8                     MOV ECX,EAX
00615E97  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00615E9C  8B D1                     MOV EDX,ECX
00615E9E  57                        PUSH EDI
00615E9F  0F AF 55 14               IMUL EDX,dword ptr [EBP + 0x14]
00615EA3  F7 EA                     IMUL EDX
00615EA5  C1 FA 0C                  SAR EDX,0xc
00615EA8  8B C2                     MOV EAX,EDX
00615EAA  53                        PUSH EBX
00615EAB  C1 E8 1F                  SHR EAX,0x1f
00615EAE  03 D0                     ADD EDX,EAX
00615EB0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00615EB3  03 D0                     ADD EDX,EAX
00615EB5  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00615EBA  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00615EBD  8B D1                     MOV EDX,ECX
00615EBF  0F AF 55 18               IMUL EDX,dword ptr [EBP + 0x18]
00615EC3  0F AF 4D 1C               IMUL ECX,dword ptr [EBP + 0x1c]
00615EC7  F7 EA                     IMUL EDX
00615EC9  C1 FA 0C                  SAR EDX,0xc
00615ECC  8B C2                     MOV EAX,EDX
00615ECE  C1 E8 1F                  SHR EAX,0x1f
00615ED1  03 D0                     ADD EDX,EAX
00615ED3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00615ED6  03 D0                     ADD EDX,EAX
00615ED8  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00615EDD  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00615EE0  F7 E9                     IMUL ECX
00615EE2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00615EE5  C1 FA 0C                  SAR EDX,0xc
00615EE8  8B CA                     MOV ECX,EDX
00615EEA  C1 E9 1F                  SHR ECX,0x1f
00615EED  03 D1                     ADD EDX,ECX
00615EEF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00615EF2  03 D0                     ADD EDX,EAX
00615EF4  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00615EF7  50                        PUSH EAX
00615EF8  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00615EFB  52                        PUSH EDX
00615EFC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00615EFF  51                        PUSH ECX
00615F00  52                        PUSH EDX
00615F01  E8 07 70 09 00            CALL 0x006acf0d
00615F06  33 C9                     XOR ECX,ECX
00615F08  83 C4 30                  ADD ESP,0x30
00615F0B  3B C1                     CMP EAX,ECX
00615F0D  75 22                     JNZ 0x00615f31
00615F0F  66 89 8E 6C 02 00 00      MOV word ptr [ESI + 0x26c],CX
00615F16  66 89 8E 6E 02 00 00      MOV word ptr [ESI + 0x26e],CX
00615F1D  66 89 8E 70 02 00 00      MOV word ptr [ESI + 0x270],CX
00615F24  89 8E 78 02 00 00         MOV dword ptr [ESI + 0x278],ECX
00615F2A  5F                        POP EDI
00615F2B  5E                        POP ESI
00615F2C  5B                        POP EBX
00615F2D  5D                        POP EBP
00615F2E  C2 24 00                  RET 0x24
LAB_00615f31:
00615F31  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00615F34  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00615F37  2B CA                     SUB ECX,EDX
00615F39  66 89 96 72 02 00 00      MOV word ptr [ESI + 0x272],DX
00615F40  66 89 8E 6C 02 00 00      MOV word ptr [ESI + 0x26c],CX
00615F47  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00615F4A  2B D9                     SUB EBX,ECX
00615F4C  66 89 8E 74 02 00 00      MOV word ptr [ESI + 0x274],CX
00615F53  66 89 9E 6E 02 00 00      MOV word ptr [ESI + 0x26e],BX
00615F5A  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00615F5D  2B FB                     SUB EDI,EBX
00615F5F  66 89 9E 76 02 00 00      MOV word ptr [ESI + 0x276],BX
00615F66  66 89 BE 70 02 00 00      MOV word ptr [ESI + 0x270],DI
00615F6D  89 86 78 02 00 00         MOV dword ptr [ESI + 0x278],EAX
00615F73  5F                        POP EDI
00615F74  5E                        POP ESI
00615F75  5B                        POP EBX
00615F76  5D                        POP EBP
00615F77  C2 24 00                  RET 0x24

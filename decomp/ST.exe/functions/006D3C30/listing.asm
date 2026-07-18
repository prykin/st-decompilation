FUN_006d3c30:
006D3C30  55                        PUSH EBP
006D3C31  8B EC                     MOV EBP,ESP
006D3C33  83 EC 20                  SUB ESP,0x20
006D3C36  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D3C39  53                        PUSH EBX
006D3C3A  33 DB                     XOR EBX,EBX
006D3C3C  56                        PUSH ESI
006D3C3D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D3C40  3B C3                     CMP EAX,EBX
006D3C42  57                        PUSH EDI
006D3C43  74 2F                     JZ 0x006d3c74
006D3C45  8B 8E 84 04 00 00         MOV ECX,dword ptr [ESI + 0x484]
006D3C4B  89 08                     MOV dword ptr [EAX],ECX
006D3C4D  8B 96 88 04 00 00         MOV EDX,dword ptr [ESI + 0x488]
006D3C53  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006D3C56  8B 8E 8C 04 00 00         MOV ECX,dword ptr [ESI + 0x48c]
006D3C5C  2B 8E 84 04 00 00         SUB ECX,dword ptr [ESI + 0x484]
006D3C62  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
006D3C65  8B 96 90 04 00 00         MOV EDX,dword ptr [ESI + 0x490]
006D3C6B  2B 96 88 04 00 00         SUB EDX,dword ptr [ESI + 0x488]
006D3C71  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
LAB_006d3c74:
006D3C74  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006D3C77  3B FB                     CMP EDI,EBX
006D3C79  0F 8C B4 00 00 00         JL 0x006d3d33
006D3C7F  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D3C82  3B D3                     CMP EDX,EBX
006D3C84  0F 8C A9 00 00 00         JL 0x006d3d33
006D3C8A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D3C8D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D3C90  3B C3                     CMP EAX,EBX
006D3C92  75 12                     JNZ 0x006d3ca6
006D3C94  3B CB                     CMP ECX,EBX
006D3C96  75 0E                     JNZ 0x006d3ca6
006D3C98  3B 7E 18                  CMP EDI,dword ptr [ESI + 0x18]
006D3C9B  75 09                     JNZ 0x006d3ca6
006D3C9D  3B 56 1C                  CMP EDX,dword ptr [ESI + 0x1c]
006D3CA0  0F 84 8D 00 00 00         JZ 0x006d3d33
LAB_006d3ca6:
006D3CA6  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006D3CA9  03 C7                     ADD EAX,EDI
006D3CAB  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006D3CAE  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006D3CB1  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006D3CB4  03 CA                     ADD ECX,EDX
006D3CB6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D3CB9  8D 55 F0                  LEA EDX,[EBP + -0x10]
006D3CBC  8D 45 E0                  LEA EAX,[EBP + -0x20]
006D3CBF  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006D3CC2  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
006D3CC5  8D BE 84 04 00 00         LEA EDI,[ESI + 0x484]
006D3CCB  52                        PUSH EDX
006D3CCC  50                        PUSH EAX
006D3CCD  57                        PUSH EDI
006D3CCE  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006D3CD1  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006D3CD4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006D3CD7  FF 15 50 BE 85 00         CALL dword ptr [0x0085be50]
006D3CDD  85 C0                     TEST EAX,EAX
006D3CDF  75 14                     JNZ 0x006d3cf5
006D3CE1  89 9E 90 04 00 00         MOV dword ptr [ESI + 0x490],EBX
006D3CE7  89 9E 8C 04 00 00         MOV dword ptr [ESI + 0x48c],EBX
006D3CED  89 9E 88 04 00 00         MOV dword ptr [ESI + 0x488],EBX
006D3CF3  89 1F                     MOV dword ptr [EDI],EBX
LAB_006d3cf5:
006D3CF5  8B 86 94 04 00 00         MOV EAX,dword ptr [ESI + 0x494]
006D3CFB  3B C3                     CMP EAX,EBX
006D3CFD  74 07                     JZ 0x006d3d06
006D3CFF  50                        PUSH EAX
006D3D00  FF 15 78 BA 85 00         CALL dword ptr [0x0085ba78]
LAB_006d3d06:
006D3D06  8B 8E 90 04 00 00         MOV ECX,dword ptr [ESI + 0x490]
006D3D0C  8B 96 8C 04 00 00         MOV EDX,dword ptr [ESI + 0x48c]
006D3D12  8B 86 88 04 00 00         MOV EAX,dword ptr [ESI + 0x488]
006D3D18  51                        PUSH ECX
006D3D19  8B 0F                     MOV ECX,dword ptr [EDI]
006D3D1B  52                        PUSH EDX
006D3D1C  50                        PUSH EAX
006D3D1D  51                        PUSH ECX
006D3D1E  FF 15 C0 BA 85 00         CALL dword ptr [0x0085bac0]
006D3D24  89 86 94 04 00 00         MOV dword ptr [ESI + 0x494],EAX
006D3D2A  5F                        POP EDI
006D3D2B  5E                        POP ESI
006D3D2C  5B                        POP EBX
006D3D2D  8B E5                     MOV ESP,EBP
006D3D2F  5D                        POP EBP
006D3D30  C2 18 00                  RET 0x18
LAB_006d3d33:
006D3D33  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006D3D36  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006D3D39  89 86 90 04 00 00         MOV dword ptr [ESI + 0x490],EAX
006D3D3F  8B 86 94 04 00 00         MOV EAX,dword ptr [ESI + 0x494]
006D3D45  3B C3                     CMP EAX,EBX
006D3D47  89 9E 88 04 00 00         MOV dword ptr [ESI + 0x488],EBX
006D3D4D  89 9E 84 04 00 00         MOV dword ptr [ESI + 0x484],EBX
006D3D53  89 96 8C 04 00 00         MOV dword ptr [ESI + 0x48c],EDX
006D3D59  74 07                     JZ 0x006d3d62
006D3D5B  50                        PUSH EAX
006D3D5C  FF 15 78 BA 85 00         CALL dword ptr [0x0085ba78]
LAB_006d3d62:
006D3D62  89 9E 94 04 00 00         MOV dword ptr [ESI + 0x494],EBX
006D3D68  5F                        POP EDI
006D3D69  5E                        POP ESI
006D3D6A  5B                        POP EBX
006D3D6B  8B E5                     MOV ESP,EBP
006D3D6D  5D                        POP EBP
006D3D6E  C2 18 00                  RET 0x18

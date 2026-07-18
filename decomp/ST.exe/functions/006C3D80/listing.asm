FUN_006c3d80:
006C3D80  55                        PUSH EBP
006C3D81  8B EC                     MOV EBP,ESP
006C3D83  83 EC 20                  SUB ESP,0x20
006C3D86  53                        PUSH EBX
006C3D87  56                        PUSH ESI
006C3D88  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C3D8B  8D 45 E0                  LEA EAX,[EBP + -0x20]
006C3D8E  57                        PUSH EDI
006C3D8F  50                        PUSH EAX
006C3D90  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
006C3D93  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006C3D96  52                        PUSH EDX
006C3D97  FF 15 58 BE 85 00         CALL dword ptr [0x0085be58]
006C3D9D  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006C3DA0  8B C2                     MOV EAX,EDX
006C3DA2  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006C3DA5  83 E0 04                  AND EAX,0x4
006C3DA8  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006C3DAB  74 14                     JZ 0x006c3dc1
006C3DAD  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006C3DB0  8B 7E 20                  MOV EDI,dword ptr [ESI + 0x20]
006C3DB3  8B 5E 24                  MOV EBX,dword ptr [ESI + 0x24]
006C3DB6  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006C3DB9  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006C3DBC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C3DBF  EB 28                     JMP 0x006c3de9
LAB_006c3dc1:
006C3DC1  F6 C2 08                  TEST DL,0x8
006C3DC4  74 14                     JZ 0x006c3dda
006C3DC6  BB 02 00 00 00            MOV EBX,0x2
006C3DCB  B9 01 00 00 00            MOV ECX,0x1
006C3DD0  8B FB                     MOV EDI,EBX
006C3DD2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C3DD5  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006C3DD8  EB 0F                     JMP 0x006c3de9
LAB_006c3dda:
006C3DDA  B9 01 00 00 00            MOV ECX,0x1
006C3DDF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C3DE2  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006C3DE5  8B D9                     MOV EBX,ECX
006C3DE7  8B F9                     MOV EDI,ECX
LAB_006c3de9:
006C3DE9  85 C0                     TEST EAX,EAX
006C3DEB  74 18                     JZ 0x006c3e05
006C3DED  F7 C2 00 00 00 04         TEST EDX,0x4000000
006C3DF3  75 08                     JNZ 0x006c3dfd
006C3DF5  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006C3DF8  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006C3DFB  EB 1C                     JMP 0x006c3e19
LAB_006c3dfd:
006C3DFD  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
006C3E00  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
006C3E03  EB 14                     JMP 0x006c3e19
LAB_006c3e05:
006C3E05  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006C3E08  F6 C2 08                  TEST DL,0x8
006C3E0B  74 09                     JZ 0x006c3e16
006C3E0D  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006C3E10  D1 E0                     SHL EAX,0x1
006C3E12  D1 E1                     SHL ECX,0x1
006C3E14  EB 03                     JMP 0x006c3e19
LAB_006c3e16:
006C3E16  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
LAB_006c3e19:
006C3E19  81 E2 00 00 00 04         AND EDX,0x4000000
006C3E1F  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006C3E22  75 14                     JNZ 0x006c3e38
006C3E24  33 D2                     XOR EDX,EDX
006C3E26  89 56 18                  MOV dword ptr [ESI + 0x18],EDX
006C3E29  89 56 1C                  MOV dword ptr [ESI + 0x1c],EDX
006C3E2C  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006C3E2F  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
006C3E32  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006C3E35  89 56 24                  MOV dword ptr [ESI + 0x24],EDX
LAB_006c3e38:
006C3E38  2B 46 20                  SUB EAX,dword ptr [ESI + 0x20]
006C3E3B  85 C0                     TEST EAX,EAX
006C3E3D  7E 22                     JLE 0x006c3e61
006C3E3F  0F AF 45 08               IMUL EAX,dword ptr [EBP + 0x8]
006C3E43  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
006C3E47  99                        CDQ
006C3E48  F7 FF                     IDIV EDI
006C3E4A  8B F8                     MOV EDI,EAX
006C3E4C  99                        CDQ
006C3E4D  2B C2                     SUB EAX,EDX
006C3E4F  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006C3E52  D1 F8                     SAR EAX,0x1
006C3E54  03 D0                     ADD EDX,EAX
006C3E56  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006C3E59  2B C7                     SUB EAX,EDI
006C3E5B  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
006C3E5E  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
LAB_006c3e61:
006C3E61  2B 4E 24                  SUB ECX,dword ptr [ESI + 0x24]
006C3E64  8B C1                     MOV EAX,ECX
006C3E66  85 C0                     TEST EAX,EAX
006C3E68  7E 22                     JLE 0x006c3e8c
006C3E6A  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
006C3E6E  8D 44 18 FF               LEA EAX,[EAX + EBX*0x1 + -0x1]
006C3E72  99                        CDQ
006C3E73  F7 FB                     IDIV EBX
006C3E75  8B C8                     MOV ECX,EAX
006C3E77  99                        CDQ
006C3E78  2B C2                     SUB EAX,EDX
006C3E7A  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006C3E7D  D1 F8                     SAR EAX,0x1
006C3E7F  03 D0                     ADD EDX,EAX
006C3E81  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006C3E84  2B C1                     SUB EAX,ECX
006C3E86  89 56 0C                  MOV dword ptr [ESI + 0xc],EDX
006C3E89  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
LAB_006c3e8c:
006C3E8C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006C3E8F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006C3E92  85 C0                     TEST EAX,EAX
006C3E94  75 51                     JNZ 0x006c3ee7
006C3E96  F6 C1 08                  TEST CL,0x8
006C3E99  74 0F                     JZ 0x006c3eaa
006C3E9B  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006C3E9E  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
006C3EA1  D1 E0                     SHL EAX,0x1
006C3EA3  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
006C3EA6  D1 E2                     SHL EDX,0x1
006C3EA8  EB 10                     JMP 0x006c3eba
LAB_006c3eaa:
006C3EAA  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006C3EAD  85 C0                     TEST EAX,EAX
006C3EAF  75 0C                     JNZ 0x006c3ebd
006C3EB1  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006C3EB4  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
006C3EB7  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
LAB_006c3eba:
006C3EBA  89 56 24                  MOV dword ptr [ESI + 0x24],EDX
LAB_006c3ebd:
006C3EBD  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006C3EC0  8B 5E 20                  MOV EBX,dword ptr [ESI + 0x20]
006C3EC3  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
006C3EC6  2B C3                     SUB EAX,EBX
006C3EC8  99                        CDQ
006C3EC9  2B C2                     SUB EAX,EDX
006C3ECB  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
006C3ECE  D1 F8                     SAR EAX,0x1
006C3ED0  03 F8                     ADD EDI,EAX
006C3ED2  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006C3ED5  2B C2                     SUB EAX,EDX
006C3ED7  89 7E 18                  MOV dword ptr [ESI + 0x18],EDI
006C3EDA  99                        CDQ
006C3EDB  2B C2                     SUB EAX,EDX
006C3EDD  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006C3EE0  D1 F8                     SAR EAX,0x1
006C3EE2  03 D0                     ADD EDX,EAX
006C3EE4  89 56 1C                  MOV dword ptr [ESI + 0x1c],EDX
LAB_006c3ee7:
006C3EE7  81 C9 00 00 00 02         OR ECX,0x2000000
006C3EED  5F                        POP EDI
006C3EEE  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
006C3EF1  5E                        POP ESI
006C3EF2  5B                        POP EBX
006C3EF3  8B E5                     MOV ESP,EBP
006C3EF5  5D                        POP EBP
006C3EF6  C2 04 00                  RET 0x4

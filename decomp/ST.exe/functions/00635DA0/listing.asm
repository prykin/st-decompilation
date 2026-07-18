FUN_00635da0:
00635DA0  55                        PUSH EBP
00635DA1  8B EC                     MOV EBP,ESP
00635DA3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00635DA6  53                        PUSH EBX
00635DA7  56                        PUSH ESI
00635DA8  57                        PUSH EDI
00635DA9  85 C9                     TEST ECX,ECX
00635DAB  B8 79 19 8C 02            MOV EAX,0x28c1979
00635DB0  7C 10                     JL 0x00635dc2
00635DB2  F7 E9                     IMUL ECX
00635DB4  D1 FA                     SAR EDX,0x1
00635DB6  8B C2                     MOV EAX,EDX
00635DB8  C1 E8 1F                  SHR EAX,0x1f
00635DBB  03 D0                     ADD EDX,EAX
00635DBD  0F BF DA                  MOVSX EBX,DX
00635DC0  EB 0F                     JMP 0x00635dd1
LAB_00635dc2:
00635DC2  F7 E9                     IMUL ECX
00635DC4  D1 FA                     SAR EDX,0x1
00635DC6  8B CA                     MOV ECX,EDX
00635DC8  C1 E9 1F                  SHR ECX,0x1f
00635DCB  03 D1                     ADD EDX,ECX
00635DCD  0F BF DA                  MOVSX EBX,DX
00635DD0  4B                        DEC EBX
LAB_00635dd1:
00635DD1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00635DD4  B8 79 19 8C 02            MOV EAX,0x28c1979
00635DD9  85 C9                     TEST ECX,ECX
00635DDB  7C 10                     JL 0x00635ded
00635DDD  F7 E9                     IMUL ECX
00635DDF  D1 FA                     SAR EDX,0x1
00635DE1  8B C2                     MOV EAX,EDX
00635DE3  C1 E8 1F                  SHR EAX,0x1f
00635DE6  03 D0                     ADD EDX,EAX
00635DE8  0F BF F2                  MOVSX ESI,DX
00635DEB  EB 0F                     JMP 0x00635dfc
LAB_00635ded:
00635DED  F7 E9                     IMUL ECX
00635DEF  D1 FA                     SAR EDX,0x1
00635DF1  8B CA                     MOV ECX,EDX
00635DF3  C1 E9 1F                  SHR ECX,0x1f
00635DF6  03 D1                     ADD EDX,ECX
00635DF8  0F BF F2                  MOVSX ESI,DX
00635DFB  4E                        DEC ESI
LAB_00635dfc:
00635DFC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00635DFF  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00635E04  85 C9                     TEST ECX,ECX
00635E06  7C 14                     JL 0x00635e1c
00635E08  F7 E9                     IMUL ECX
00635E0A  C1 FA 06                  SAR EDX,0x6
00635E0D  8B C2                     MOV EAX,EDX
00635E0F  C1 E8 1F                  SHR EAX,0x1f
00635E12  03 D0                     ADD EDX,EAX
00635E14  0F BF CA                  MOVSX ECX,DX
00635E17  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00635E1A  EB 13                     JMP 0x00635e2f
LAB_00635e1c:
00635E1C  F7 E9                     IMUL ECX
00635E1E  C1 FA 06                  SAR EDX,0x6
00635E21  8B C2                     MOV EAX,EDX
00635E23  C1 E8 1F                  SHR EAX,0x1f
00635E26  03 D0                     ADD EDX,EAX
00635E28  0F BF C2                  MOVSX EAX,DX
00635E2B  48                        DEC EAX
00635E2C  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00635e2f:
00635E2F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00635E35  3B 59 48                  CMP EBX,dword ptr [ECX + 0x48]
00635E38  7C 1A                     JL 0x00635e54
00635E3A  3B 59 58                  CMP EBX,dword ptr [ECX + 0x58]
00635E3D  7F 15                     JG 0x00635e54
00635E3F  3B 71 44                  CMP ESI,dword ptr [ECX + 0x44]
00635E42  7C 10                     JL 0x00635e54
00635E44  3B 71 54                  CMP ESI,dword ptr [ECX + 0x54]
00635E47  7F 0B                     JG 0x00635e54
00635E49  6A 00                     PUSH 0x0
00635E4B  56                        PUSH ESI
00635E4C  53                        PUSH EBX
00635E4D  E8 7E 7D 0A 00            CALL 0x006ddbd0
00635E52  EB 02                     JMP 0x00635e56
LAB_00635e54:
00635E54  33 C0                     XOR EAX,EAX
LAB_00635e56:
00635E56  84 C0                     TEST AL,AL
00635E58  0F 84 84 00 00 00         JZ 0x00635ee2
00635E5E  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00635E64  85 FF                     TEST EDI,EDI
00635E66  74 7A                     JZ 0x00635ee2
00635E68  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00635E6F  74 68                     JZ 0x00635ed9
00635E71  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
00635E77  85 C0                     TEST EAX,EAX
00635E79  74 5E                     JZ 0x00635ed9
00635E7B  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
00635E81  8D 4D 10                  LEA ECX,[EBP + 0x10]
00635E84  8D 55 0C                  LEA EDX,[EBP + 0xc]
00635E87  51                        PUSH ECX
00635E88  52                        PUSH EDX
00635E89  56                        PUSH ESI
00635E8A  53                        PUSH EBX
00635E8B  50                        PUSH EAX
00635E8C  8B CF                     MOV ECX,EDI
00635E8E  E8 C0 E0 DC FF            CALL 0x00403f53
00635E93  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00635E96  85 C0                     TEST EAX,EAX
00635E98  7C 3F                     JL 0x00635ed9
00635E9A  83 F8 05                  CMP EAX,0x5
00635E9D  7D 3A                     JGE 0x00635ed9
00635E9F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00635EA2  85 D2                     TEST EDX,EDX
00635EA4  7C 33                     JL 0x00635ed9
00635EA6  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
00635EA9  3B D1                     CMP EDX,ECX
00635EAB  7D 2C                     JGE 0x00635ed9
00635EAD  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
00635EB4  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00635EB7  03 C6                     ADD EAX,ESI
00635EB9  85 C0                     TEST EAX,EAX
00635EBB  7C 1C                     JL 0x00635ed9
00635EBD  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
00635EC0  7D 17                     JGE 0x00635ed9
00635EC2  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
00635EC5  85 FF                     TEST EDI,EDI
00635EC7  74 10                     JZ 0x00635ed9
00635EC9  0F AF C1                  IMUL EAX,ECX
00635ECC  03 C7                     ADD EAX,EDI
00635ECE  33 C9                     XOR ECX,ECX
00635ED0  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
00635ED3  8B C1                     MOV EAX,ECX
00635ED5  85 C0                     TEST EAX,EAX
00635ED7  74 07                     JZ 0x00635ee0
LAB_00635ed9:
00635ED9  5F                        POP EDI
00635EDA  5E                        POP ESI
00635EDB  B0 01                     MOV AL,0x1
00635EDD  5B                        POP EBX
00635EDE  5D                        POP EBP
00635EDF  C3                        RET
LAB_00635ee0:
00635EE0  32 C0                     XOR AL,AL
LAB_00635ee2:
00635EE2  5F                        POP EDI
00635EE3  5E                        POP ESI
00635EE4  5B                        POP EBX
00635EE5  5D                        POP EBP
00635EE6  C3                        RET

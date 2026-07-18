FUN_00695cd0:
00695CD0  55                        PUSH EBP
00695CD1  8B EC                     MOV EBP,ESP
00695CD3  51                        PUSH ECX
00695CD4  53                        PUSH EBX
00695CD5  56                        PUSH ESI
00695CD6  57                        PUSH EDI
00695CD7  8B F9                     MOV EDI,ECX
00695CD9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00695CDC  8B 87 53 58 00 00         MOV EAX,dword ptr [EDI + 0x5853]
00695CE2  85 C0                     TEST EAX,EAX
00695CE4  0F 84 5B 01 00 00         JZ 0x00695e45
00695CEA  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00695CED  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00695CF0  3B D9                     CMP EBX,ECX
00695CF2  0F 83 4D 01 00 00         JNC 0x00695e45
00695CF8  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00695CFB  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00695CFE  0F AF F3                  IMUL ESI,EBX
00695D01  03 F1                     ADD ESI,ECX
00695D03  85 F6                     TEST ESI,ESI
00695D05  0F 84 3A 01 00 00         JZ 0x00695e45
00695D0B  8B 46 15                  MOV EAX,dword ptr [ESI + 0x15]
00695D0E  85 C0                     TEST EAX,EAX
00695D10  74 0D                     JZ 0x00695d1f
00695D12  50                        PUSH EAX
00695D13  E8 F8 83 01 00            CALL 0x006ae110
00695D18  C7 46 15 00 00 00 00      MOV dword ptr [ESI + 0x15],0x0
LAB_00695d1f:
00695D1F  8B 46 19                  MOV EAX,dword ptr [ESI + 0x19]
00695D22  85 C0                     TEST EAX,EAX
00695D24  74 0D                     JZ 0x00695d33
00695D26  50                        PUSH EAX
00695D27  E8 E4 83 01 00            CALL 0x006ae110
00695D2C  C7 46 19 00 00 00 00      MOV dword ptr [ESI + 0x19],0x0
LAB_00695d33:
00695D33  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00695D36  85 C0                     TEST EAX,EAX
00695D38  74 07                     JZ 0x00695d41
00695D3A  8B 36                     MOV ESI,dword ptr [ESI]
00695D3C  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
00695D3F  EB 0A                     JMP 0x00695d4b
LAB_00695d41:
00695D41  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
00695D48  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_00695d4b:
00695D4B  8B 87 53 58 00 00         MOV EAX,dword ptr [EDI + 0x5853]
00695D51  53                        PUSH EBX
00695D52  50                        PUSH EAX
00695D53  E8 18 AF 01 00            CALL 0x006b0c70
00695D58  8B 87 53 58 00 00         MOV EAX,dword ptr [EDI + 0x5853]
00695D5E  33 DB                     XOR EBX,EBX
00695D60  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00695D63  85 C9                     TEST ECX,ECX
00695D65  0F 8E DA 00 00 00         JLE 0x00695e45
00695D6B  3B D9                     CMP EBX,ECX
LAB_00695d6d:
00695D6D  73 0D                     JNC 0x00695d7c
00695D6F  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
00695D72  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00695D75  0F AF FB                  IMUL EDI,EBX
00695D78  03 F9                     ADD EDI,ECX
00695D7A  EB 02                     JMP 0x00695d7e
LAB_00695d7c:
00695D7C  33 FF                     XOR EDI,EDI
LAB_00695d7e:
00695D7E  3B 5D 08                  CMP EBX,dword ptr [EBP + 0x8]
00695D81  7C 51                     JL 0x00695dd4
00695D83  8B 4F 15                  MOV ECX,dword ptr [EDI + 0x15]
00695D86  85 C9                     TEST ECX,ECX
00695D88  74 4A                     JZ 0x00695dd4
00695D8A  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00695D8D  33 D2                     XOR EDX,EDX
00695D8F  85 C0                     TEST EAX,EAX
00695D91  7E 41                     JLE 0x00695dd4
00695D93  3B D0                     CMP EDX,EAX
LAB_00695d95:
00695D95  73 0B                     JNC 0x00695da2
00695D97  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00695D9A  0F AF C2                  IMUL EAX,EDX
00695D9D  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00695DA0  EB 02                     JMP 0x00695da4
LAB_00695da2:
00695DA2  33 C0                     XOR EAX,EAX
LAB_00695da4:
00695DA4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00695DA7  8B 89 2F 58 00 00         MOV ECX,dword ptr [ECX + 0x582f]
00695DAD  0F AF CE                  IMUL ECX,ESI
00695DB0  03 48 02                  ADD ECX,dword ptr [EAX + 0x2]
00695DB3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00695DB6  8B 80 4F 58 00 00         MOV EAX,dword ptr [EAX + 0x584f]
00695DBC  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
00695DBF  0F BF 08                  MOVSX ECX,word ptr [EAX]
00695DC2  3B CB                     CMP ECX,EBX
00695DC4  74 03                     JZ 0x00695dc9
00695DC6  66 89 18                  MOV word ptr [EAX],BX
LAB_00695dc9:
00695DC9  8B 4F 15                  MOV ECX,dword ptr [EDI + 0x15]
00695DCC  42                        INC EDX
00695DCD  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00695DD0  3B D0                     CMP EDX,EAX
00695DD2  7C C1                     JL 0x00695d95
LAB_00695dd4:
00695DD4  8B 4F 19                  MOV ECX,dword ptr [EDI + 0x19]
00695DD7  85 C9                     TEST ECX,ECX
00695DD9  74 55                     JZ 0x00695e30
00695DDB  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00695DDE  33 F6                     XOR ESI,ESI
00695DE0  85 C0                     TEST EAX,EAX
00695DE2  7E 49                     JLE 0x00695e2d
00695DE4  3B F0                     CMP ESI,EAX
LAB_00695de6:
00695DE6  73 0D                     JNC 0x00695df5
00695DE8  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00695DEB  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00695DEE  0F AF C6                  IMUL EAX,ESI
00695DF1  03 C2                     ADD EAX,EDX
00695DF3  EB 02                     JMP 0x00695df7
LAB_00695df5:
00695DF5  33 C0                     XOR EAX,EAX
LAB_00695df7:
00695DF7  8B 10                     MOV EDX,dword ptr [EAX]
00695DF9  3B 55 08                  CMP EDX,dword ptr [EBP + 0x8]
00695DFC  7E 05                     JLE 0x00695e03
00695DFE  4A                        DEC EDX
00695DFF  89 10                     MOV dword ptr [EAX],EDX
00695E01  EB 1F                     JMP 0x00695e22
LAB_00695e03:
00695E03  3B 55 08                  CMP EDX,dword ptr [EBP + 0x8]
00695E06  75 1A                     JNZ 0x00695e22
00695E08  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00695E0B  85 C0                     TEST EAX,EAX
00695E0D  7D 09                     JGE 0x00695e18
00695E0F  56                        PUSH ESI
00695E10  51                        PUSH ECX
00695E11  E8 5A AE 01 00            CALL 0x006b0c70
00695E16  EB 0A                     JMP 0x00695e22
LAB_00695e18:
00695E18  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00695E1B  50                        PUSH EAX
00695E1C  53                        PUSH EBX
00695E1D  E8 6C B5 D6 FF            CALL 0x0040138e
LAB_00695e22:
00695E22  8B 4F 19                  MOV ECX,dword ptr [EDI + 0x19]
00695E25  46                        INC ESI
00695E26  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00695E29  3B F0                     CMP ESI,EAX
00695E2B  7C B9                     JL 0x00695de6
LAB_00695e2d:
00695E2D  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_00695e30:
00695E30  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00695E33  43                        INC EBX
00695E34  8B 82 53 58 00 00         MOV EAX,dword ptr [EDX + 0x5853]
00695E3A  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00695E3D  3B D9                     CMP EBX,ECX
00695E3F  0F 8C 28 FF FF FF         JL 0x00695d6d
LAB_00695e45:
00695E45  5F                        POP EDI
00695E46  5E                        POP ESI
00695E47  5B                        POP EBX
00695E48  8B E5                     MOV ESP,EBP
00695E4A  5D                        POP EBP
00695E4B  C2 0C 00                  RET 0xc

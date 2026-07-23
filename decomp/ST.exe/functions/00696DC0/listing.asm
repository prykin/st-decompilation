CGenerate::sub_00696DC0:
00696DC0  55                        PUSH EBP
00696DC1  8B EC                     MOV EBP,ESP
00696DC3  51                        PUSH ECX
00696DC4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00696DC7  8B 89 53 58 00 00         MOV ECX,dword ptr [ECX + 0x5853]
00696DCD  53                        PUSH EBX
00696DCE  56                        PUSH ESI
00696DCF  85 C9                     TEST ECX,ECX
00696DD1  57                        PUSH EDI
00696DD2  0F 84 98 00 00 00         JZ 0x00696e70
00696DD8  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00696DDB  33 FF                     XOR EDI,EDI
00696DDD  33 F6                     XOR ESI,ESI
00696DDF  85 D2                     TEST EDX,EDX
00696DE1  7E 32                     JLE 0x00696e15
00696DE3  3B F2                     CMP ESI,EDX
LAB_00696de5:
00696DE5  73 1F                     JNC 0x00696e06
00696DE7  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00696DEA  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
00696DED  0F AF C6                  IMUL EAX,ESI
00696DF0  03 C3                     ADD EAX,EBX
00696DF2  85 C0                     TEST EAX,EAX
00696DF4  74 10                     JZ 0x00696e06
00696DF6  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00696DF9  39 58 11                  CMP dword ptr [EAX + 0x11],EBX
00696DFC  7F 08                     JG 0x00696e06
00696DFE  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00696E01  39 18                     CMP dword ptr [EAX],EBX
00696E03  75 01                     JNZ 0x00696e06
00696E05  47                        INC EDI
LAB_00696e06:
00696E06  46                        INC ESI
00696E07  3B F2                     CMP ESI,EDX
00696E09  7C DA                     JL 0x00696de5
00696E0B  83 FF 03                  CMP EDI,0x3
00696E0E  BB 04 00 00 00            MOV EBX,0x4
00696E13  7F 05                     JG 0x00696e1a
LAB_00696e15:
00696E15  BB 01 00 00 00            MOV EBX,0x1
LAB_00696e1a:
00696E1A  33 FF                     XOR EDI,EDI
00696E1C  85 D2                     TEST EDX,EDX
00696E1E  7E 50                     JLE 0x00696e70
00696E20  3B FA                     CMP EDI,EDX
LAB_00696e22:
00696E22  73 3B                     JNC 0x00696e5f
00696E24  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
00696E27  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00696E2A  0F AF F7                  IMUL ESI,EDI
00696E2D  03 F2                     ADD ESI,EDX
00696E2F  85 F6                     TEST ESI,ESI
00696E31  74 2C                     JZ 0x00696e5f
00696E33  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00696E36  8B 4E 11                  MOV ECX,dword ptr [ESI + 0x11]
00696E39  3B C8                     CMP ECX,EAX
00696E3B  7F 22                     JG 0x00696e5f
00696E3D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00696E40  8B 06                     MOV EAX,dword ptr [ESI]
00696E42  3B C1                     CMP EAX,ECX
00696E44  75 19                     JNZ 0x00696e5f
00696E46  E8 75 78 09 00            CALL 0x0072e6c0
00696E4B  99                        CDQ
00696E4C  8D 4B 01                  LEA ECX,[EBX + 0x1]
00696E4F  F7 F9                     IDIV ECX
00696E51  85 D2                     TEST EDX,EDX
00696E53  74 0A                     JZ 0x00696e5f
00696E55  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00696E58  57                        PUSH EDI
00696E59  56                        PUSH ESI
00696E5A  E8 A7 A5 D6 FF            CALL 0x00401406
LAB_00696e5f:
00696E5F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00696E62  47                        INC EDI
00696E63  8B 8A 53 58 00 00         MOV ECX,dword ptr [EDX + 0x5853]
00696E69  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00696E6C  3B FA                     CMP EDI,EDX
00696E6E  7C B2                     JL 0x00696e22
LAB_00696e70:
00696E70  5F                        POP EDI
00696E71  5E                        POP ESI
00696E72  5B                        POP EBX
00696E73  8B E5                     MOV ESP,EBP
00696E75  5D                        POP EBP
00696E76  C2 08 00                  RET 0x8

FUN_00748eca:
00748ECA  55                        PUSH EBP
00748ECB  8B EC                     MOV EBP,ESP
00748ECD  51                        PUSH ECX
00748ECE  83 65 FC 00               AND dword ptr [EBP + -0x4],0x0
00748ED2  53                        PUSH EBX
00748ED3  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00748ED6  56                        PUSH ESI
00748ED7  83 FB 04                  CMP EBX,0x4
00748EDA  57                        PUSH EDI
00748EDB  0F 82 33 01 00 00         JC 0x00749014
00748EE1  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00748EE4  85 F6                     TEST ESI,ESI
00748EE6  0F 84 94 00 00 00         JZ 0x00748f80
00748EEC  8B 06                     MOV EAX,dword ptr [ESI]
00748EEE  3B C3                     CMP EAX,EBX
00748EF0  73 02                     JNC 0x00748ef4
00748EF2  8B D8                     MOV EBX,EAX
LAB_00748ef4:
00748EF4  6A 30                     PUSH 0x30
00748EF6  59                        POP ECX
00748EF7  3B D9                     CMP EBX,ECX
00748EF9  0F 87 1E 01 00 00         JA 0x0074901d
00748EFF  3B C1                     CMP EAX,ECX
00748F01  0F 87 16 01 00 00         JA 0x0074901d
00748F07  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00748F0A  83 FB 0C                  CMP EBX,0xc
00748F0D  72 21                     JC 0x00748f30
00748F0F  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00748F12  A9 20 FE FF FF            TEST EAX,0xfffffe20
00748F17  0F 85 00 01 00 00         JNZ 0x0074901d
00748F1D  A8 10                     TEST AL,0x10
00748F1F  74 0F                     JZ 0x00748f30
00748F21  F6 47 04 10               TEST byte ptr [EDI + 0x4],0x10
00748F25  75 09                     JNZ 0x00748f30
00748F27  83 FB 20                  CMP EBX,0x20
00748F2A  0F 82 ED 00 00 00         JC 0x0074901d
LAB_00748f30:
00748F30  83 FB 2C                  CMP EBX,0x2c
00748F33  72 10                     JC 0x00748f45
00748F35  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
00748F38  85 C0                     TEST EAX,EAX
00748F3A  74 09                     JZ 0x00748f45
00748F3C  3B 47 0C                  CMP EAX,dword ptr [EDI + 0xc]
00748F3F  0F 85 D8 00 00 00         JNZ 0x0074901d
LAB_00748f45:
00748F45  3B D9                     CMP EBX,ECX
00748F47  72 25                     JC 0x00748f6e
00748F49  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
00748F4C  85 C0                     TEST EAX,EAX
00748F4E  74 09                     JZ 0x00748f59
00748F50  3B 47 14                  CMP EAX,dword ptr [EDI + 0x14]
00748F53  0F 85 C4 00 00 00         JNZ 0x0074901d
LAB_00748f59:
00748F59  3B D9                     CMP EBX,ECX
00748F5B  72 11                     JC 0x00748f6e
00748F5D  83 FB 10                  CMP EBX,0x10
00748F60  72 0C                     JC 0x00748f6e
00748F62  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
00748F65  3B 46 0C                  CMP EAX,dword ptr [ESI + 0xc]
00748F68  0F 8C AF 00 00 00         JL 0x0074901d
LAB_00748f6e:
00748F6E  83 FB 28                  CMP EBX,0x28
00748F71  72 2B                     JC 0x00748f9e
00748F73  F6 46 08 08               TEST byte ptr [ESI + 0x8],0x8
00748F77  74 25                     JZ 0x00748f9e
00748F79  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00748F7C  85 C0                     TEST EAX,EAX
00748F7E  75 0A                     JNZ 0x00748f8a
LAB_00748f80:
00748F80  B8 03 40 00 80            MOV EAX,0x80004003
00748F85  E9 8C 00 00 00            JMP 0x00749016
LAB_00748f8a:
00748F8A  50                        PUSH EAX
00748F8B  E8 DA 2C 00 00            CALL 0x0074bc6a
00748F90  85 C0                     TEST EAX,EAX
00748F92  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00748F95  75 07                     JNZ 0x00748f9e
00748F97  B8 0E 00 07 80            MOV EAX,0x8007000e
00748F9C  EB 78                     JMP 0x00749016
LAB_00748f9e:
00748F9E  83 FB 24                  CMP EBX,0x24
00748FA1  72 06                     JC 0x00748fa9
00748FA3  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00748FA6  89 47 40                  MOV dword ptr [EDI + 0x40],EAX
LAB_00748fa9:
00748FA9  83 FB 0C                  CMP EBX,0xc
00748FAC  72 10                     JC 0x00748fbe
00748FAE  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00748FB1  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00748FB4  83 E0 20                  AND EAX,0x20
00748FB7  0B C8                     OR ECX,EAX
00748FB9  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
00748FBC  EB 05                     JMP 0x00748fc3
LAB_00748fbe:
00748FBE  83 FB 08                  CMP EBX,0x8
00748FC1  72 06                     JC 0x00748fc9
LAB_00748fc3:
00748FC3  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00748FC6  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
LAB_00748fc9:
00748FC9  83 FB 10                  CMP EBX,0x10
00748FCC  72 06                     JC 0x00748fd4
00748FCE  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00748FD1  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
LAB_00748fd4:
00748FD4  83 FB 20                  CMP EBX,0x20
00748FD7  72 0C                     JC 0x00748fe5
00748FD9  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00748FDC  89 47 28                  MOV dword ptr [EDI + 0x28],EAX
00748FDF  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00748FE2  89 47 2C                  MOV dword ptr [EDI + 0x2c],EAX
LAB_00748fe5:
00748FE5  83 FB 18                  CMP EBX,0x18
00748FE8  72 0C                     JC 0x00748ff6
00748FEA  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00748FED  89 47 20                  MOV dword ptr [EDI + 0x20],EAX
00748FF0  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00748FF3  89 47 24                  MOV dword ptr [EDI + 0x24],EAX
LAB_00748ff6:
00748FF6  83 FB 28                  CMP EBX,0x28
00748FF9  72 19                     JC 0x00749014
00748FFB  F6 46 08 08               TEST byte ptr [ESI + 0x8],0x8
00748FFF  74 13                     JZ 0x00749014
00749001  8B 47 3C                  MOV EAX,dword ptr [EDI + 0x3c]
00749004  85 C0                     TEST EAX,EAX
00749006  74 06                     JZ 0x0074900e
00749008  50                        PUSH EAX
00749009  E8 42 2C 00 00            CALL 0x0074bc50
LAB_0074900e:
0074900E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00749011  89 47 3C                  MOV dword ptr [EDI + 0x3c],EAX
LAB_00749014:
00749014  33 C0                     XOR EAX,EAX
LAB_00749016:
00749016  5F                        POP EDI
00749017  5E                        POP ESI
00749018  5B                        POP EBX
00749019  C9                        LEAVE
0074901A  C2 0C 00                  RET 0xc
LAB_0074901d:
0074901D  B8 57 00 07 80            MOV EAX,0x80070057
00749022  EB F2                     JMP 0x00749016

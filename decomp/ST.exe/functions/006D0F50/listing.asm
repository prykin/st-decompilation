FUN_006d0f50:
006D0F50  55                        PUSH EBP
006D0F51  8B EC                     MOV EBP,ESP
006D0F53  53                        PUSH EBX
006D0F54  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006D0F57  56                        PUSH ESI
006D0F58  57                        PUSH EDI
006D0F59  85 DB                     TEST EBX,EBX
006D0F5B  0F 8E 88 01 00 00         JLE 0x006d10e9
006D0F61  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D0F64  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D0F67  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006D0F6A  2B D3                     SUB EDX,EBX
006D0F6C  2B CB                     SUB ECX,EBX
006D0F6E  83 F8 FF                  CMP EAX,-0x1
006D0F71  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
006D0F74  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
006D0F77  0F 84 22 01 00 00         JZ 0x006d109f
006D0F7D  8A 45 24                  MOV AL,byte ptr [EBP + 0x24]
006D0F80  88 45 25                  MOV byte ptr [EBP + 0x25],AL
006D0F83  88 45 26                  MOV byte ptr [EBP + 0x26],AL
006D0F86  88 45 27                  MOV byte ptr [EBP + 0x27],AL
006D0F89  8A 45 28                  MOV AL,byte ptr [EBP + 0x28]
006D0F8C  88 45 29                  MOV byte ptr [EBP + 0x29],AL
006D0F8F  88 45 2A                  MOV byte ptr [EBP + 0x2a],AL
006D0F92  88 45 2B                  MOV byte ptr [EBP + 0x2b],AL
006D0F95  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D0F98  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D0F9B  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
LAB_006d0f9e:
006D0F9E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D0FA1  C1 E9 02                  SHR ECX,0x2
006D0FA4  0F 84 B5 00 00 00         JZ 0x006d105f
LAB_006d0faa:
006D0FAA  51                        PUSH ECX
006D0FAB  8B 06                     MOV EAX,dword ptr [ESI]
006D0FAD  83 C6 04                  ADD ESI,0x4
006D0FB0  3B 45 24                  CMP EAX,dword ptr [EBP + 0x24]
006D0FB3  74 68                     JZ 0x006d101d
006D0FB5  3B 45 28                  CMP EAX,dword ptr [EBP + 0x28]
006D0FB8  0F 84 96 00 00 00         JZ 0x006d1054
006D0FBE  3A 45 28                  CMP AL,byte ptr [EBP + 0x28]
006D0FC1  74 0E                     JZ 0x006d0fd1
006D0FC3  3A 45 24                  CMP AL,byte ptr [EBP + 0x24]
006D0FC6  75 07                     JNZ 0x006d0fcf
006D0FC8  33 D2                     XOR EDX,EDX
006D0FCA  8A 17                     MOV DL,byte ptr [EDI]
006D0FCC  8A 04 13                  MOV AL,byte ptr [EBX + EDX*0x1]
LAB_006d0fcf:
006D0FCF  88 07                     MOV byte ptr [EDI],AL
LAB_006d0fd1:
006D0FD1  C1 C8 08                  ROR EAX,0x8
006D0FD4  47                        INC EDI
006D0FD5  3A 45 28                  CMP AL,byte ptr [EBP + 0x28]
006D0FD8  74 0E                     JZ 0x006d0fe8
006D0FDA  3A 45 24                  CMP AL,byte ptr [EBP + 0x24]
006D0FDD  75 07                     JNZ 0x006d0fe6
006D0FDF  33 D2                     XOR EDX,EDX
006D0FE1  8A 17                     MOV DL,byte ptr [EDI]
006D0FE3  8A 04 13                  MOV AL,byte ptr [EBX + EDX*0x1]
LAB_006d0fe6:
006D0FE6  88 07                     MOV byte ptr [EDI],AL
LAB_006d0fe8:
006D0FE8  C1 C8 08                  ROR EAX,0x8
006D0FEB  47                        INC EDI
006D0FEC  3A 45 28                  CMP AL,byte ptr [EBP + 0x28]
006D0FEF  74 0E                     JZ 0x006d0fff
006D0FF1  3A 45 24                  CMP AL,byte ptr [EBP + 0x24]
006D0FF4  75 07                     JNZ 0x006d0ffd
006D0FF6  33 D2                     XOR EDX,EDX
006D0FF8  8A 17                     MOV DL,byte ptr [EDI]
006D0FFA  8A 04 13                  MOV AL,byte ptr [EBX + EDX*0x1]
LAB_006d0ffd:
006D0FFD  88 07                     MOV byte ptr [EDI],AL
LAB_006d0fff:
006D0FFF  C1 C8 08                  ROR EAX,0x8
006D1002  47                        INC EDI
006D1003  3A 45 28                  CMP AL,byte ptr [EBP + 0x28]
006D1006  74 0E                     JZ 0x006d1016
006D1008  3A 45 24                  CMP AL,byte ptr [EBP + 0x24]
006D100B  75 07                     JNZ 0x006d1014
006D100D  33 D2                     XOR EDX,EDX
006D100F  8A 17                     MOV DL,byte ptr [EDI]
006D1011  8A 04 13                  MOV AL,byte ptr [EBX + EDX*0x1]
LAB_006d1014:
006D1014  88 07                     MOV byte ptr [EDI],AL
LAB_006d1016:
006D1016  59                        POP ECX
006D1017  47                        INC EDI
006D1018  49                        DEC ECX
006D1019  7F 8F                     JG 0x006d0faa
006D101B  EB 42                     JMP 0x006d105f
LAB_006d101d:
006D101D  8B 07                     MOV EAX,dword ptr [EDI]
006D101F  33 D2                     XOR EDX,EDX
006D1021  8A D0                     MOV DL,AL
006D1023  33 C9                     XOR ECX,ECX
006D1025  8A CC                     MOV CL,AH
006D1027  8A 14 13                  MOV DL,byte ptr [EBX + EDX*0x1]
006D102A  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
006D102D  C1 E8 10                  SHR EAX,0x10
006D1030  88 17                     MOV byte ptr [EDI],DL
006D1032  47                        INC EDI
006D1033  88 0F                     MOV byte ptr [EDI],CL
006D1035  33 D2                     XOR EDX,EDX
006D1037  8A D0                     MOV DL,AL
006D1039  33 C9                     XOR ECX,ECX
006D103B  8A CC                     MOV CL,AH
006D103D  47                        INC EDI
006D103E  8A 14 13                  MOV DL,byte ptr [EBX + EDX*0x1]
006D1041  8A 04 0B                  MOV AL,byte ptr [EBX + ECX*0x1]
006D1044  59                        POP ECX
006D1045  88 17                     MOV byte ptr [EDI],DL
006D1047  47                        INC EDI
006D1048  88 07                     MOV byte ptr [EDI],AL
006D104A  47                        INC EDI
006D104B  49                        DEC ECX
006D104C  0F 8F 58 FF FF FF         JG 0x006d0faa
006D1052  EB 0B                     JMP 0x006d105f
LAB_006d1054:
006D1054  59                        POP ECX
006D1055  83 C7 04                  ADD EDI,0x4
006D1058  49                        DEC ECX
006D1059  0F 8F 4B FF FF FF         JG 0x006d0faa
LAB_006d105f:
006D105F  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D1062  83 E1 03                  AND ECX,0x3
006D1065  74 22                     JZ 0x006d1089
LAB_006d1067:
006D1067  8A 06                     MOV AL,byte ptr [ESI]
006D1069  46                        INC ESI
006D106A  3A 45 24                  CMP AL,byte ptr [EBP + 0x24]
006D106D  75 0F                     JNZ 0x006d107e
006D106F  33 C0                     XOR EAX,EAX
006D1071  8A 07                     MOV AL,byte ptr [EDI]
006D1073  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
006D1076  88 07                     MOV byte ptr [EDI],AL
006D1078  47                        INC EDI
006D1079  49                        DEC ECX
006D107A  7F EB                     JG 0x006d1067
006D107C  EB 0B                     JMP 0x006d1089
LAB_006d107e:
006D107E  3A 45 28                  CMP AL,byte ptr [EBP + 0x28]
006D1081  74 02                     JZ 0x006d1085
006D1083  88 07                     MOV byte ptr [EDI],AL
LAB_006d1085:
006D1085  47                        INC EDI
006D1086  49                        DEC ECX
006D1087  7F DE                     JG 0x006d1067
LAB_006d1089:
006D1089  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
006D108C  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006D108F  FF 4D 1C                  DEC dword ptr [EBP + 0x1c]
006D1092  0F 8F 06 FF FF FF         JG 0x006d0f9e
006D1098  5F                        POP EDI
006D1099  5E                        POP ESI
006D109A  5B                        POP EBX
006D109B  5D                        POP EBP
006D109C  C2 24 00                  RET 0x24
LAB_006d109f:
006D109F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D10A2  85 C0                     TEST EAX,EAX
006D10A4  7E 43                     JLE 0x006d10e9
006D10A6  8A 55 24                  MOV DL,byte ptr [EBP + 0x24]
006D10A9  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D10AC  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
006D10AF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_006d10b2:
006D10B2  85 DB                     TEST EBX,EBX
006D10B4  7E 20                     JLE 0x006d10d6
006D10B6  8B FB                     MOV EDI,EBX
LAB_006d10b8:
006D10B8  8A 0E                     MOV CL,byte ptr [ESI]
006D10BA  46                        INC ESI
006D10BB  3A CA                     CMP CL,DL
006D10BD  74 04                     JZ 0x006d10c3
006D10BF  88 08                     MOV byte ptr [EAX],CL
006D10C1  EB 0F                     JMP 0x006d10d2
LAB_006d10c3:
006D10C3  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006D10C6  33 C9                     XOR ECX,ECX
006D10C8  8A 08                     MOV CL,byte ptr [EAX]
006D10CA  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006D10CD  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006D10D0  88 08                     MOV byte ptr [EAX],CL
LAB_006d10d2:
006D10D2  40                        INC EAX
006D10D3  4F                        DEC EDI
006D10D4  75 E2                     JNZ 0x006d10b8
LAB_006d10d6:
006D10D6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D10D9  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006D10DC  03 F1                     ADD ESI,ECX
006D10DE  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D10E1  03 C7                     ADD EAX,EDI
006D10E3  49                        DEC ECX
006D10E4  89 4D 28                  MOV dword ptr [EBP + 0x28],ECX
006D10E7  75 C9                     JNZ 0x006d10b2
LAB_006d10e9:
006D10E9  5F                        POP EDI
006D10EA  5E                        POP ESI
006D10EB  5B                        POP EBX
006D10EC  5D                        POP EBP
006D10ED  C2 24 00                  RET 0x24

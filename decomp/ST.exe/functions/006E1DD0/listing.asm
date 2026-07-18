FUN_006e1dd0:
006E1DD0  55                        PUSH EBP
006E1DD1  8B EC                     MOV EBP,ESP
006E1DD3  83 EC 0C                  SUB ESP,0xc
006E1DD6  53                        PUSH EBX
006E1DD7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006E1DDA  56                        PUSH ESI
006E1DDB  57                        PUSH EDI
006E1DDC  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006E1DDF  8B F1                     MOV ESI,ECX
006E1DE1  57                        PUSH EDI
006E1DE2  53                        PUSH EBX
006E1DE3  E8 18 0F 00 00            CALL 0x006e2d00
006E1DE8  3D 30 75 00 00            CMP EAX,0x7530
006E1DED  C7 45 08 01 00 00 00      MOV dword ptr [EBP + 0x8],0x1
006E1DF4  7E 0B                     JLE 0x006e1e01
006E1DF6  5F                        POP EDI
006E1DF7  5E                        POP ESI
006E1DF8  33 C0                     XOR EAX,EAX
006E1DFA  5B                        POP EBX
006E1DFB  8B E5                     MOV ESP,EBP
006E1DFD  5D                        POP EBP
006E1DFE  C2 14 00                  RET 0x14
LAB_006e1e01:
006E1E01  50                        PUSH EAX
006E1E02  57                        PUSH EDI
006E1E03  8D 45 F4                  LEA EAX,[EBP + -0xc]
006E1E06  53                        PUSH EBX
006E1E07  50                        PUSH EAX
006E1E08  8B CE                     MOV ECX,ESI
006E1E0A  E8 C1 0B 00 00            CALL 0x006e29d0
006E1E0F  DD 86 C8 00 00 00         FLD double ptr [ESI + 0xc8]
006E1E15  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
006E1E1B  D9 45 F4                  FLD float ptr [EBP + -0xc]
006E1E1E  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
006E1E24  DF E0                     FNSTSW AX
006E1E26  F6 C4 01                  TEST AH,0x1
006E1E29  75 55                     JNZ 0x006e1e80
006E1E2B  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006E1E31  D9 45 F4                  FLD float ptr [EBP + -0xc]
006E1E34  0F BF 11                  MOVSX EDX,word ptr [ECX]
006E1E37  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
006E1E3A  DB 45 0C                  FILD dword ptr [EBP + 0xc]
006E1E3D  DC 8E C8 00 00 00         FMUL double ptr [ESI + 0xc8]
006E1E43  D8 E2                     FSUB ST0,ST2
006E1E45  DE D9                     FCOMPP
006E1E47  DF E0                     FNSTSW AX
006E1E49  F6 C4 41                  TEST AH,0x41
006E1E4C  75 32                     JNZ 0x006e1e80
006E1E4E  D9 45 F8                  FLD float ptr [EBP + -0x8]
006E1E51  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
006E1E57  DF E0                     FNSTSW AX
006E1E59  F6 C4 01                  TEST AH,0x1
006E1E5C  75 22                     JNZ 0x006e1e80
006E1E5E  0F BF 41 02               MOVSX EAX,word ptr [ECX + 0x2]
006E1E62  D9 45 F8                  FLD float ptr [EBP + -0x8]
006E1E65  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006E1E68  DB 45 0C                  FILD dword ptr [EBP + 0xc]
006E1E6B  DC 8E C8 00 00 00         FMUL double ptr [ESI + 0xc8]
006E1E71  D8 E2                     FSUB ST0,ST2
006E1E73  DE D9                     FCOMPP
006E1E75  DF E0                     FNSTSW AX
006E1E77  F6 C4 41                  TEST AH,0x41
006E1E7A  DD D8                     FSTP ST0
006E1E7C  74 1E                     JZ 0x006e1e9c
006E1E7E  EB 02                     JMP 0x006e1e82
LAB_006e1e80:
006E1E80  DD D8                     FSTP ST0
LAB_006e1e82:
006E1E82  DD 86 C8 00 00 00         FLD double ptr [ESI + 0xc8]
006E1E88  D9 E0                     FCHS
006E1E8A  D9 55 F4                  FST float ptr [EBP + -0xc]
006E1E8D  D9 5D F8                  FSTP float ptr [EBP + -0x8]
006E1E90  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006E1E96  D9 E0                     FCHS
006E1E98  33 C0                     XOR EAX,EAX
006E1E9A  EB 06                     JMP 0x006e1ea2
LAB_006e1e9c:
006E1E9C  D9 45 FC                  FLD float ptr [EBP + -0x4]
006E1E9F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_006e1ea2:
006E1EA2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E1EA5  85 C9                     TEST ECX,ECX
006E1EA7  74 05                     JZ 0x006e1eae
006E1EA9  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006E1EAC  89 11                     MOV dword ptr [ECX],EDX
LAB_006e1eae:
006E1EAE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006E1EB1  85 C9                     TEST ECX,ECX
006E1EB3  74 05                     JZ 0x006e1eba
006E1EB5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006E1EB8  89 11                     MOV dword ptr [ECX],EDX
LAB_006e1eba:
006E1EBA  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006E1EBD  85 C9                     TEST ECX,ECX
006E1EBF  74 0B                     JZ 0x006e1ecc
006E1EC1  D9 19                     FSTP float ptr [ECX]
006E1EC3  5F                        POP EDI
006E1EC4  5E                        POP ESI
006E1EC5  5B                        POP EBX
006E1EC6  8B E5                     MOV ESP,EBP
006E1EC8  5D                        POP EBP
006E1EC9  C2 14 00                  RET 0x14
LAB_006e1ecc:
006E1ECC  5F                        POP EDI
006E1ECD  5E                        POP ESI
006E1ECE  DD D8                     FSTP ST0
006E1ED0  5B                        POP EBX
006E1ED1  8B E5                     MOV ESP,EBP
006E1ED3  5D                        POP EBP
006E1ED4  C2 14 00                  RET 0x14

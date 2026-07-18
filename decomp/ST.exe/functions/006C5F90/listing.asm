FUN_006c5f90:
006C5F90  55                        PUSH EBP
006C5F91  8B EC                     MOV EBP,ESP
006C5F93  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C5F96  53                        PUSH EBX
006C5F97  56                        PUSH ESI
006C5F98  57                        PUSH EDI
006C5F99  F6 80 9C 04 00 00 01      TEST byte ptr [EAX + 0x49c],0x1
006C5FA0  8B 88 98 04 00 00         MOV ECX,dword ptr [EAX + 0x498]
006C5FA6  0F 85 91 00 00 00         JNZ 0x006c603d
006C5FAC  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006C5FAF  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006C5FB2  83 F9 07                  CMP ECX,0x7
006C5FB5  75 43                     JNZ 0x006c5ffa
006C5FB7  3B F0                     CMP ESI,EAX
006C5FB9  0F 8F 36 01 00 00         JG 0x006c60f5
006C5FBF  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C5FC2  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C5FC5  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006C5FC8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5fcb:
006C5FCB  3B 7D 20                  CMP EDI,dword ptr [EBP + 0x20]
006C5FCE  0F 8F 21 01 00 00         JG 0x006c60f5
006C5FD4  8A 5D 38                  MOV BL,byte ptr [EBP + 0x38]
006C5FD7  30 18                     XOR byte ptr [EAX],BL
006C5FD9  85 C9                     TEST ECX,ECX
006C5FDB  7C 08                     JL 0x006c5fe5
006C5FDD  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C5FE0  2B CA                     SUB ECX,EDX
006C5FE2  03 C3                     ADD EAX,EBX
006C5FE4  47                        INC EDI
LAB_006c5fe5:
006C5FE5  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006C5FE8  40                        INC EAX
006C5FE9  03 CB                     ADD ECX,EBX
006C5FEB  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C5FEE  46                        INC ESI
006C5FEF  3B F3                     CMP ESI,EBX
006C5FF1  7E D8                     JLE 0x006c5fcb
006C5FF3  5F                        POP EDI
006C5FF4  5E                        POP ESI
006C5FF5  5B                        POP EBX
006C5FF6  5D                        POP EBP
006C5FF7  C2 38 00                  RET 0x38
LAB_006c5ffa:
006C5FFA  3B F0                     CMP ESI,EAX
006C5FFC  0F 8F F3 00 00 00         JG 0x006c60f5
006C6002  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C6005  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C6008  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006C600B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c600e:
006C600E  3B 7D 20                  CMP EDI,dword ptr [EBP + 0x20]
006C6011  0F 8F DE 00 00 00         JG 0x006c60f5
006C6017  8A 5D 38                  MOV BL,byte ptr [EBP + 0x38]
006C601A  85 C9                     TEST ECX,ECX
006C601C  88 18                     MOV byte ptr [EAX],BL
006C601E  7C 08                     JL 0x006c6028
006C6020  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C6023  2B CA                     SUB ECX,EDX
006C6025  03 C3                     ADD EAX,EBX
006C6027  47                        INC EDI
LAB_006c6028:
006C6028  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006C602B  40                        INC EAX
006C602C  03 CB                     ADD ECX,EBX
006C602E  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C6031  46                        INC ESI
006C6032  3B F3                     CMP ESI,EBX
006C6034  7E D8                     JLE 0x006c600e
006C6036  5F                        POP EDI
006C6037  5E                        POP ESI
006C6038  5B                        POP EBX
006C6039  5D                        POP EBP
006C603A  C2 38 00                  RET 0x38
LAB_006c603d:
006C603D  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006C6040  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006C6043  83 F9 07                  CMP ECX,0x7
006C6046  75 5E                     JNZ 0x006c60a6
006C6048  3B F8                     CMP EDI,EAX
006C604A  0F 8F A5 00 00 00         JG 0x006c60f5
006C6050  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006C6053  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C6056  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006C6059  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c605c:
006C605C  3B 75 20                  CMP ESI,dword ptr [EBP + 0x20]
006C605F  0F 8F 90 00 00 00         JG 0x006c60f5
006C6065  85 55 30                  TEST dword ptr [EBP + 0x30],EDX
006C6068  74 05                     JZ 0x006c606f
006C606A  8A 5D 38                  MOV BL,byte ptr [EBP + 0x38]
006C606D  EB 08                     JMP 0x006c6077
LAB_006c606f:
006C606F  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
006C6072  83 FB FF                  CMP EBX,-0x1
006C6075  74 02                     JZ 0x006c6079
LAB_006c6077:
006C6077  30 18                     XOR byte ptr [EAX],BL
LAB_006c6079:
006C6079  D1 EA                     SHR EDX,0x1
006C607B  75 05                     JNZ 0x006c6082
006C607D  BA 00 00 00 80            MOV EDX,0x80000000
LAB_006c6082:
006C6082  85 C9                     TEST ECX,ECX
006C6084  7C 0B                     JL 0x006c6091
006C6086  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C6089  03 C3                     ADD EAX,EBX
006C608B  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
006C608E  2B CB                     SUB ECX,EBX
006C6090  46                        INC ESI
LAB_006c6091:
006C6091  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006C6094  40                        INC EAX
006C6095  03 CB                     ADD ECX,EBX
006C6097  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C609A  47                        INC EDI
006C609B  3B FB                     CMP EDI,EBX
006C609D  7E BD                     JLE 0x006c605c
006C609F  5F                        POP EDI
006C60A0  5E                        POP ESI
006C60A1  5B                        POP EBX
006C60A2  5D                        POP EBP
006C60A3  C2 38 00                  RET 0x38
LAB_006c60a6:
006C60A6  3B F8                     CMP EDI,EAX
006C60A8  7F 4B                     JG 0x006c60f5
006C60AA  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006C60AD  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C60B0  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006C60B3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c60b6:
006C60B6  3B 75 20                  CMP ESI,dword ptr [EBP + 0x20]
006C60B9  7F 3A                     JG 0x006c60f5
006C60BB  85 55 30                  TEST dword ptr [EBP + 0x30],EDX
006C60BE  74 05                     JZ 0x006c60c5
006C60C0  8A 5D 38                  MOV BL,byte ptr [EBP + 0x38]
006C60C3  EB 08                     JMP 0x006c60cd
LAB_006c60c5:
006C60C5  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
006C60C8  83 FB FF                  CMP EBX,-0x1
006C60CB  74 02                     JZ 0x006c60cf
LAB_006c60cd:
006C60CD  88 18                     MOV byte ptr [EAX],BL
LAB_006c60cf:
006C60CF  D1 EA                     SHR EDX,0x1
006C60D1  75 05                     JNZ 0x006c60d8
006C60D3  BA 00 00 00 80            MOV EDX,0x80000000
LAB_006c60d8:
006C60D8  85 C9                     TEST ECX,ECX
006C60DA  7C 0B                     JL 0x006c60e7
006C60DC  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C60DF  03 C3                     ADD EAX,EBX
006C60E1  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
006C60E4  2B CB                     SUB ECX,EBX
006C60E6  46                        INC ESI
LAB_006c60e7:
006C60E7  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006C60EA  40                        INC EAX
006C60EB  03 CB                     ADD ECX,EBX
006C60ED  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C60F0  47                        INC EDI
006C60F1  3B FB                     CMP EDI,EBX
006C60F3  7E C1                     JLE 0x006c60b6
LAB_006c60f5:
006C60F5  5F                        POP EDI
006C60F6  5E                        POP ESI
006C60F7  5B                        POP EBX
006C60F8  5D                        POP EBP
006C60F9  C2 38 00                  RET 0x38

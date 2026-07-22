STManRuinC::sub_00630C50:
00630C50  55                        PUSH EBP
00630C51  8B EC                     MOV EBP,ESP
00630C53  83 EC 54                  SUB ESP,0x54
00630C56  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00630C59  53                        PUSH EBX
00630C5A  56                        PUSH ESI
00630C5B  BE 01 00 00 00            MOV ESI,0x1
00630C60  3B C6                     CMP EAX,ESI
00630C62  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00630C65  57                        PUSH EDI
00630C66  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00630C69  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00630C70  75 17                     JNZ 0x00630c89
00630C72  83 F8 03                  CMP EAX,0x3
00630C75  75 09                     JNZ 0x00630c80
00630C77  C7 45 FC 50 18 7D 00      MOV dword ptr [EBP + -0x4],0x7d1850
00630C7E  EB 1C                     JMP 0x00630c9c
LAB_00630c80:
00630C80  C7 45 FC 18 18 7D 00      MOV dword ptr [EBP + -0x4],0x7d1818
00630C87  EB 13                     JMP 0x00630c9c
LAB_00630c89:
00630C89  83 F8 03                  CMP EAX,0x3
00630C8C  C7 45 FC 6C 18 7D 00      MOV dword ptr [EBP + -0x4],0x7d186c
00630C93  74 07                     JZ 0x00630c9c
00630C95  C7 45 FC 34 18 7D 00      MOV dword ptr [EBP + -0x4],0x7d1834
LAB_00630c9c:
00630C9C  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00630CA1  8D 55 B0                  LEA EDX,[EBP + -0x50]
00630CA4  8D 4D AC                  LEA ECX,[EBP + -0x54]
00630CA7  6A 00                     PUSH 0x0
00630CA9  52                        PUSH EDX
00630CAA  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00630CAD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00630CB3  E8 38 CB 0F 00            CALL 0x0072d7f0
00630CB8  83 C4 08                  ADD ESP,0x8
00630CBB  85 C0                     TEST EAX,EAX
00630CBD  0F 85 4D 02 00 00         JNZ 0x00630f10
00630CC3  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00630CC6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00630CC9  50                        PUSH EAX
00630CCA  50                        PUSH EAX
00630CCB  56                        PUSH ESI
00630CCC  50                        PUSH EAX
00630CCD  8B 47 40                  MOV EAX,dword ptr [EDI + 0x40]
00630CD0  6A FF                     PUSH -0x1
00630CD2  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
00630CD5  A1 74 67 80 00            MOV EAX,[0x00806774]
00630CDA  52                        PUSH EDX
00630CDB  6A 1D                     PUSH 0x1d
00630CDD  50                        PUSH EAX
00630CDE  E8 0D 8E 0D 00            CALL 0x00709af0
00630CE3  8B D8                     MOV EBX,EAX
00630CE5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00630CE8  83 C4 20                  ADD ESP,0x20
00630CEB  85 C0                     TEST EAX,EAX
00630CED  0F 84 34 01 00 00         JZ 0x00630e27
00630CF3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00630CF6  6A 00                     PUSH 0x0
00630CF8  3B C6                     CMP EAX,ESI
00630CFA  8D 77 61                  LEA ESI,[EDI + 0x61]
00630CFD  75 0E                     JNZ 0x00630d0d
00630CFF  8B 4B 0D                  MOV ECX,dword ptr [EBX + 0xd]
00630D02  8B 53 09                  MOV EDX,dword ptr [EBX + 0x9]
00630D05  6A 45                     PUSH 0x45
00630D07  6A 5A                     PUSH 0x5a
00630D09  51                        PUSH ECX
00630D0A  52                        PUSH EDX
00630D0B  EB 0C                     JMP 0x00630d19
LAB_00630d0d:
00630D0D  8B 43 0D                  MOV EAX,dword ptr [EBX + 0xd]
00630D10  8B 4B 09                  MOV ECX,dword ptr [EBX + 0x9]
00630D13  6A 64                     PUSH 0x64
00630D15  6A 78                     PUSH 0x78
00630D17  50                        PUSH EAX
00630D18  51                        PUSH ECX
LAB_00630d19:
00630D19  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00630D1F  6A 00                     PUSH 0x0
00630D21  6A 01                     PUSH 0x1
00630D23  56                        PUSH ESI
00630D24  E8 37 79 0B 00            CALL 0x006e8660
00630D29  8B 53 21                  MOV EDX,dword ptr [EBX + 0x21]
00630D2C  8B 03                     MOV EAX,dword ptr [EBX]
00630D2E  8B 0E                     MOV ECX,dword ptr [ESI]
00630D30  6A 01                     PUSH 0x1
00630D32  52                        PUSH EDX
00630D33  50                        PUSH EAX
00630D34  6A 00                     PUSH 0x0
00630D36  51                        PUSH ECX
00630D37  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00630D3D  E8 9E 8B 0B 00            CALL 0x006e98e0
00630D42  8B 16                     MOV EDX,dword ptr [ESI]
00630D44  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00630D4A  6A 00                     PUSH 0x0
00630D4C  6A 00                     PUSH 0x0
00630D4E  52                        PUSH EDX
00630D4F  E8 1C 95 0B 00            CALL 0x006ea270
00630D54  8B 06                     MOV EAX,dword ptr [ESI]
00630D56  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00630D5C  6A FF                     PUSH -0x1
00630D5E  50                        PUSH EAX
00630D5F  E8 7C 96 0B 00            CALL 0x006ea3e0
00630D64  8B 0E                     MOV ECX,dword ptr [ESI]
00630D66  68 CD CC DC 40            PUSH 0x40dccccd
00630D6B  6A 00                     PUSH 0x0
00630D6D  6A 00                     PUSH 0x0
00630D6F  6A 00                     PUSH 0x0
00630D71  51                        PUSH ECX
00630D72  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00630D78  E8 93 84 0B 00            CALL 0x006e9210
00630D7D  DB 47 5C                  FILD dword ptr [EDI + 0x5c]
00630D80  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00630D83  51                        PUSH ECX
00630D84  83 F8 01                  CMP EAX,0x1
00630D87  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00630D8D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00630D93  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00630D99  D9 1C 24                  FSTP float ptr [ESP]
00630D9C  75 18                     JNZ 0x00630db6
00630D9E  DB 47 58                  FILD dword ptr [EDI + 0x58]
00630DA1  51                        PUSH ECX
00630DA2  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00630DA8  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00630DAE  D9 1C 24                  FSTP float ptr [ESP]
00630DB1  DB 47 54                  FILD dword ptr [EDI + 0x54]
00630DB4  EB 28                     JMP 0x00630dde
LAB_00630db6:
00630DB6  8B 47 58                  MOV EAX,dword ptr [EDI + 0x58]
00630DB9  51                        PUSH ECX
00630DBA  83 C0 64                  ADD EAX,0x64
00630DBD  8B 4F 54                  MOV ECX,dword ptr [EDI + 0x54]
00630DC0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00630DC3  83 C1 64                  ADD ECX,0x64
00630DC6  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00630DC9  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00630DCC  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00630DD2  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00630DD8  D9 1C 24                  FSTP float ptr [ESP]
00630DDB  DB 45 F0                  FILD dword ptr [EBP + -0x10]
LAB_00630dde:
00630DDE  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00630DE4  8B 16                     MOV EDX,dword ptr [ESI]
00630DE6  51                        PUSH ECX
00630DE7  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00630DED  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00630DF3  D9 1C 24                  FSTP float ptr [ESP]
00630DF6  52                        PUSH EDX
00630DF7  E8 64 9B 0B 00            CALL 0x006ea960
00630DFC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00630DFF  85 C0                     TEST EAX,EAX
00630E01  74 10                     JZ 0x00630e13
00630E03  8B 06                     MOV EAX,dword ptr [ESI]
00630E05  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00630E0B  6A 00                     PUSH 0x0
00630E0D  50                        PUSH EAX
00630E0E  E8 8D 9C 0B 00            CALL 0x006eaaa0
LAB_00630e13:
00630E13  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00630E16  8B C3                     MOV EAX,EBX
00630E18  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00630E1E  5F                        POP EDI
00630E1F  5E                        POP ESI
00630E20  5B                        POP EBX
00630E21  8B E5                     MOV ESP,EBP
00630E23  5D                        POP EBP
00630E24  C2 14 00                  RET 0x14
LAB_00630e27:
00630E27  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00630E2A  83 FE 01                  CMP ESI,0x1
00630E2D  75 5D                     JNZ 0x00630e8c
00630E2F  DB 47 5C                  FILD dword ptr [EDI + 0x5c]
00630E32  6A 00                     PUSH 0x0
00630E34  6A 00                     PUSH 0x0
00630E36  51                        PUSH ECX
00630E37  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00630E3D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00630E43  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00630E49  D9 1C 24                  FSTP float ptr [ESP]
00630E4C  DB 47 58                  FILD dword ptr [EDI + 0x58]
00630E4F  51                        PUSH ECX
00630E50  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00630E56  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00630E5C  D9 1C 24                  FSTP float ptr [ESP]
00630E5F  DB 47 54                  FILD dword ptr [EDI + 0x54]
00630E62  51                        PUSH ECX
00630E63  8B 4B 21                  MOV ECX,dword ptr [EBX + 0x21]
00630E66  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00630E6C  8B 11                     MOV EDX,dword ptr [ECX]
00630E6E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00630E74  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00630E7A  D9 1C 24                  FSTP float ptr [ESP]
00630E7D  6A 45                     PUSH 0x45
00630E7F  6A 5A                     PUSH 0x5a
00630E81  52                        PUSH EDX
00630E82  E8 79 81 0B 00            CALL 0x006e9000
00630E87  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00630E8A  EB 03                     JMP 0x00630e8f
LAB_00630e8c:
00630E8C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_00630e8f:
00630E8F  83 FE 04                  CMP ESI,0x4
00630E92  75 6A                     JNZ 0x00630efe
00630E94  DB 47 5C                  FILD dword ptr [EDI + 0x5c]
00630E97  8B 47 58                  MOV EAX,dword ptr [EDI + 0x58]
00630E9A  6A 00                     PUSH 0x0
00630E9C  6A 00                     PUSH 0x0
00630E9E  51                        PUSH ECX
00630E9F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00630EA5  83 C0 64                  ADD EAX,0x64
00630EA8  8B 53 21                  MOV EDX,dword ptr [EBX + 0x21]
00630EAB  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00630EAE  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00630EB4  8B 02                     MOV EAX,dword ptr [EDX]
00630EB6  D8 05 A0 D1 79 00         FADD float ptr [0x0079d1a0]
00630EBC  D9 1C 24                  FSTP float ptr [ESP]
00630EBF  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00630EC2  51                        PUSH ECX
00630EC3  8B 4F 54                  MOV ECX,dword ptr [EDI + 0x54]
00630EC6  83 C1 64                  ADD ECX,0x64
00630EC9  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00630ECF  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00630ED2  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00630ED8  D9 1C 24                  FSTP float ptr [ESP]
00630EDB  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00630EDE  51                        PUSH ECX
00630EDF  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00630EE5  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00630EEB  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00630EF1  D9 1C 24                  FSTP float ptr [ESP]
00630EF4  6A 56                     PUSH 0x56
00630EF6  6A 78                     PUSH 0x78
00630EF8  50                        PUSH EAX
00630EF9  E8 02 81 0B 00            CALL 0x006e9000
LAB_00630efe:
00630EFE  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00630F01  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00630F07  5F                        POP EDI
00630F08  5E                        POP ESI
00630F09  5B                        POP EBX
00630F0A  8B E5                     MOV ESP,EBP
00630F0C  5D                        POP EBP
00630F0D  C2 14 00                  RET 0x14
LAB_00630f10:
00630F10  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00630F13  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00630F16  5F                        POP EDI
00630F17  5E                        POP ESI
00630F18  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00630F1E  5B                        POP EBX
00630F1F  8B E5                     MOV ESP,EBP
00630F21  5D                        POP EBP
00630F22  C2 14 00                  RET 0x14

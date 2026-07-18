STAllPlayersC::GetTOBJListFromDArr:
0043EED0  55                        PUSH EBP
0043EED1  8B EC                     MOV EBP,ESP
0043EED3  83 EC 58                  SUB ESP,0x58
0043EED6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043EED9  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0043EEDF  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0043EEE2  53                        PUSH EBX
0043EEE3  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0043EEE6  56                        PUSH ESI
0043EEE7  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0043EEEA  57                        PUSH EDI
0043EEEB  8D 4D AC                  LEA ECX,[EBP + -0x54]
0043EEEE  8D 45 A8                  LEA EAX,[EBP + -0x58]
0043EEF1  6A 00                     PUSH 0x0
0043EEF3  51                        PUSH ECX
0043EEF4  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
0043EEF7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0043EEFC  E8 EF E8 2E 00            CALL 0x0072d7f0
0043EF01  8B F0                     MOV ESI,EAX
0043EF03  83 C4 08                  ADD ESP,0x8
0043EF06  85 F6                     TEST ESI,ESI
0043EF08  0F 85 1B 01 00 00         JNZ 0x0043f029
0043EF0E  6A 01                     PUSH 0x1
0043EF10  6A 02                     PUSH 0x2
0043EF12  50                        PUSH EAX
0043EF13  50                        PUSH EAX
0043EF14  E8 77 F3 26 00            CALL 0x006ae290
0043EF19  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0043EF1C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0043EF1F  33 FF                     XOR EDI,EDI
0043EF21  85 C0                     TEST EAX,EAX
0043EF23  0F 8E EC 00 00 00         JLE 0x0043f015
0043EF29  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_0043ef2c:
0043EF2C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0043EF2F  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
0043EF32  66 8B 04 78               MOV AX,word ptr [EAX + EDI*0x2]
0043EF36  66 3D FF FF               CMP AX,0xffff
0043EF3A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0043EF3D  0F 84 C6 00 00 00         JZ 0x0043f009
0043EF43  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0043EF46  6A 01                     PUSH 0x1
0043EF48  50                        PUSH EAX
0043EF49  51                        PUSH ECX
0043EF4A  8B CB                     MOV ECX,EBX
0043EF4C  E8 69 39 FC FF            CALL 0x004028ba
0043EF51  8B F0                     MOV ESI,EAX
0043EF53  85 F6                     TEST ESI,ESI
0043EF55  75 1F                     JNZ 0x0043ef76
0043EF57  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0043EF5D  68 40 20 00 00            PUSH 0x2040
0043EF62  68 04 60 7A 00            PUSH 0x7a6004
0043EF67  52                        PUSH EDX
0043EF68  68 04 00 FE AF            PUSH 0xaffe0004
0043EF6D  E8 CE 6E 26 00            CALL 0x006a5e40
0043EF72  85 F6                     TEST ESI,ESI
0043EF74  74 60                     JZ 0x0043efd6
LAB_0043ef76:
0043EF76  8B 06                     MOV EAX,dword ptr [ESI]
0043EF78  8B CE                     MOV ECX,ESI
0043EF7A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0043EF7D  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
0043EF80  75 54                     JNZ 0x0043efd6
0043EF82  8B 16                     MOV EDX,dword ptr [ESI]
0043EF84  8B CE                     MOV ECX,ESI
0043EF86  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0043EF8C  85 C0                     TEST EAX,EAX
0043EF8E  74 46                     JZ 0x0043efd6
0043EF90  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0043EF93  85 C9                     TEST ECX,ECX
0043EF95  75 07                     JNZ 0x0043ef9e
0043EF97  B8 01 00 00 00            MOV EAX,0x1
0043EF9C  EB 3A                     JMP 0x0043efd8
LAB_0043ef9e:
0043EF9E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0043EFA1  83 C0 C8                  ADD EAX,-0x38
0043EFA4  83 F8 26                  CMP EAX,0x26
0043EFA7  77 2D                     JA 0x0043efd6
0043EFA9  33 D2                     XOR EDX,EDX
0043EFAB  8A 90 7C F0 43 00         MOV DL,byte ptr [EAX + 0x43f07c]
switchD_0043efb1::switchD:
0043EFB1  FF 24 95 74 F0 43 00      JMP dword ptr [EDX*0x4 + 0x43f074]
switchD_0043efb1::caseD_38:
0043EFB8  83 F9 01                  CMP ECX,0x1
0043EFBB  75 19                     JNZ 0x0043efd6
0043EFBD  8B 06                     MOV EAX,dword ptr [ESI]
0043EFBF  8D 4D EC                  LEA ECX,[EBP + -0x14]
0043EFC2  51                        PUSH ECX
0043EFC3  8B CE                     MOV ECX,ESI
0043EFC5  FF 90 88 00 00 00         CALL dword ptr [EAX + 0x88]
0043EFCB  85 C0                     TEST EAX,EAX
0043EFCD  7E 07                     JLE 0x0043efd6
0043EFCF  B8 01 00 00 00            MOV EAX,0x1
0043EFD4  EB 02                     JMP 0x0043efd8
switchD_0043efb1::caseD_3a:
0043EFD6  33 C0                     XOR EAX,EAX
LAB_0043efd8:
0043EFD8  83 F8 01                  CMP EAX,0x1
0043EFDB  75 2C                     JNZ 0x0043f009
0043EFDD  80 7D 18 FF               CMP byte ptr [EBP + 0x18],0xff
0043EFE1  74 19                     JZ 0x0043effc
0043EFE3  8B 16                     MOV EDX,dword ptr [ESI]
0043EFE5  8B CE                     MOV ECX,ESI
0043EFE7  FF 52 6C                  CALL dword ptr [EDX + 0x6c]
0043EFEA  0F BE 4D 18               MOVSX ECX,byte ptr [EBP + 0x18]
0043EFEE  3B C1                     CMP EAX,ECX
0043EFF0  75 17                     JNZ 0x0043f009
0043EFF2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043EFF5  8D 55 FC                  LEA EDX,[EBP + -0x4]
0043EFF8  52                        PUSH EDX
0043EFF9  50                        PUSH EAX
0043EFFA  EB 08                     JMP 0x0043f004
LAB_0043effc:
0043EFFC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0043EFFF  8D 4D FC                  LEA ECX,[EBP + -0x4]
0043F002  51                        PUSH ECX
0043F003  52                        PUSH EDX
LAB_0043f004:
0043F004  E8 B7 F1 26 00            CALL 0x006ae1c0
LAB_0043f009:
0043F009  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0043F00C  47                        INC EDI
0043F00D  3B F8                     CMP EDI,EAX
0043F00F  0F 8C 17 FF FF FF         JL 0x0043ef2c
LAB_0043f015:
0043F015  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0043F018  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0043F01D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043F020  5F                        POP EDI
0043F021  5E                        POP ESI
0043F022  5B                        POP EBX
0043F023  8B E5                     MOV ESP,EBP
0043F025  5D                        POP EBP
0043F026  C2 14 00                  RET 0x14
LAB_0043f029:
0043F029  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0043F02C  68 B4 7F 7A 00            PUSH 0x7a7fb4
0043F031  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043F036  56                        PUSH ESI
0043F037  6A 00                     PUSH 0x0
0043F039  68 49 20 00 00            PUSH 0x2049
0043F03E  68 04 60 7A 00            PUSH 0x7a6004
0043F043  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0043F049  E8 82 E4 26 00            CALL 0x006ad4d0
0043F04E  83 C4 18                  ADD ESP,0x18
0043F051  85 C0                     TEST EAX,EAX
0043F053  74 01                     JZ 0x0043f056
0043F055  CC                        INT3
LAB_0043f056:
0043F056  68 4A 20 00 00            PUSH 0x204a
0043F05B  68 04 60 7A 00            PUSH 0x7a6004
0043F060  6A 00                     PUSH 0x0
0043F062  56                        PUSH ESI
0043F063  E8 D8 6D 26 00            CALL 0x006a5e40
0043F068  5F                        POP EDI
0043F069  5E                        POP ESI
0043F06A  33 C0                     XOR EAX,EAX
0043F06C  5B                        POP EBX
0043F06D  8B E5                     MOV ESP,EBP
0043F06F  5D                        POP EBP
0043F070  C2 14 00                  RET 0x14

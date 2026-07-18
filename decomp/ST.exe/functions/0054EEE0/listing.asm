FUN_0054eee0:
0054EEE0  55                        PUSH EBP
0054EEE1  8B EC                     MOV EBP,ESP
0054EEE3  83 EC 50                  SUB ESP,0x50
0054EEE6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0054EEE9  53                        PUSH EBX
0054EEEA  56                        PUSH ESI
0054EEEB  57                        PUSH EDI
0054EEEC  85 C0                     TEST EAX,EAX
0054EEEE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0054EEF1  7D 74                     JGE 0x0054ef67
0054EEF3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0054EEF6  33 C0                     XOR EAX,EAX
0054EEF8  81 E1 FF 00 00 00         AND ECX,0xff
0054EEFE  83 C1 FB                  ADD ECX,-0x5
0054EF01  83 F9 25                  CMP ECX,0x25
0054EF04  77 61                     JA 0x0054ef67
0054EF06  33 D2                     XOR EDX,EDX
0054EF08  8A 91 08 F1 54 00         MOV DL,byte ptr [ECX + 0x54f108]
switchD_0054ef0e::switchD:
0054EF0E  FF 24 95 D4 F0 54 00      JMP dword ptr [EDX*0x4 + 0x54f0d4]
switchD_0054ef0e::caseD_5:
0054EF15  B8 0C 00 00 00            MOV EAX,0xc
0054EF1A  EB 4B                     JMP 0x0054ef67
switchD_0054ef0e::caseD_16:
0054EF1C  B8 18 00 00 00            MOV EAX,0x18
0054EF21  EB 44                     JMP 0x0054ef67
switchD_0054ef0e::caseD_17:
0054EF23  B8 21 00 00 00            MOV EAX,0x21
0054EF28  EB 3D                     JMP 0x0054ef67
switchD_0054ef0e::caseD_18:
0054EF2A  B8 12 00 00 00            MOV EAX,0x12
0054EF2F  EB 36                     JMP 0x0054ef67
switchD_0054ef0e::caseD_1a:
0054EF31  B8 0D 00 00 00            MOV EAX,0xd
0054EF36  EB 2F                     JMP 0x0054ef67
switchD_0054ef0e::caseD_1e:
0054EF38  B8 0B 00 00 00            MOV EAX,0xb
0054EF3D  EB 28                     JMP 0x0054ef67
switchD_0054ef0e::caseD_1f:
0054EF3F  B8 07 00 00 00            MOV EAX,0x7
0054EF44  EB 21                     JMP 0x0054ef67
switchD_0054ef0e::caseD_20:
0054EF46  B8 09 00 00 00            MOV EAX,0x9
0054EF4B  EB 1A                     JMP 0x0054ef67
switchD_0054ef0e::caseD_21:
0054EF4D  B8 05 00 00 00            MOV EAX,0x5
0054EF52  EB 13                     JMP 0x0054ef67
switchD_0054ef0e::caseD_23:
0054EF54  B8 10 00 00 00            MOV EAX,0x10
0054EF59  EB 0C                     JMP 0x0054ef67
switchD_0054ef0e::caseD_27:
0054EF5B  B8 02 00 00 00            MOV EAX,0x2
0054EF60  EB 05                     JMP 0x0054ef67
switchD_0054ef0e::caseD_8:
0054EF62  B8 01 00 00 00            MOV EAX,0x1
switchD_0054ef0e::caseD_6:
0054EF67  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0054EF6A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054EF6F  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0054EF72  8D 4D B0                  LEA ECX,[EBP + -0x50]
0054EF75  6A 00                     PUSH 0x0
0054EF77  52                        PUSH EDX
0054EF78  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0054EF7B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054EF81  E8 6A E8 1D 00            CALL 0x0072d7f0
0054EF86  8B F0                     MOV ESI,EAX
0054EF88  83 C4 08                  ADD ESP,0x8
0054EF8B  85 F6                     TEST ESI,ESI
0054EF8D  0F 85 F6 00 00 00         JNZ 0x0054f089
0054EF93  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0054EF96  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0054EF99  8D 3C 1E                  LEA EDI,[ESI + EBX*0x1]
0054EF9C  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0054EF9F  8D 47 1B                  LEA EAX,[EDI + 0x1b]
0054EFA2  50                        PUSH EAX
0054EFA3  E8 68 BC 15 00            CALL 0x006aac10
0054EFA8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0054EFAB  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0054EFB1  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0054EFB4  8A 55 08                  MOV DL,byte ptr [EBP + 0x8]
0054EFB7  88 50 08                  MOV byte ptr [EAX + 0x8],DL
0054EFBA  8B 15 30 2A 80 00         MOV EDX,dword ptr [0x00802a30]
0054EFC0  8B 92 AE 04 00 00         MOV EDX,dword ptr [EDX + 0x4ae]
0054EFC6  88 50 09                  MOV byte ptr [EAX + 0x9],DL
0054EFC9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0054EFCC  89 50 0A                  MOV dword ptr [EAX + 0xa],EDX
0054EFCF  8A 55 10                  MOV DL,byte ptr [EBP + 0x10]
0054EFD2  88 50 0E                  MOV byte ptr [EAX + 0xe],DL
0054EFD5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0054EFD8  89 70 0F                  MOV dword ptr [EAX + 0xf],ESI
0054EFDB  89 58 13                  MOV dword ptr [EAX + 0x13],EBX
0054EFDE  85 D2                     TEST EDX,EDX
0054EFE0  74 1E                     JZ 0x0054f000
0054EFE2  8B CE                     MOV ECX,ESI
0054EFE4  8B F2                     MOV ESI,EDX
0054EFE6  8B D1                     MOV EDX,ECX
0054EFE8  8D 78 1B                  LEA EDI,[EAX + 0x1b]
0054EFEB  C1 E9 02                  SHR ECX,0x2
0054EFEE  89 78 17                  MOV dword ptr [EAX + 0x17],EDI
0054EFF1  F3 A5                     MOVSD.REP ES:EDI,ESI
0054EFF3  8B CA                     MOV ECX,EDX
0054EFF5  83 E1 03                  AND ECX,0x3
0054EFF8  F3 A4                     MOVSB.REP ES:EDI,ESI
0054EFFA  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0054EFFD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0054f000:
0054F000  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0054F003  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0054F006  85 F6                     TEST ESI,ESI
0054F008  74 1F                     JZ 0x0054f029
0054F00A  85 DB                     TEST EBX,EBX
0054F00C  74 1B                     JZ 0x0054f029
0054F00E  8B 78 17                  MOV EDI,dword ptr [EAX + 0x17]
0054F011  8B 50 0F                  MOV EDX,dword ptr [EAX + 0xf]
0054F014  8B CB                     MOV ECX,EBX
0054F016  03 FA                     ADD EDI,EDX
0054F018  8B D1                     MOV EDX,ECX
0054F01A  C1 E9 02                  SHR ECX,0x2
0054F01D  F3 A5                     MOVSD.REP ES:EDI,ESI
0054F01F  8B CA                     MOV ECX,EDX
0054F021  83 E1 03                  AND ECX,0x3
0054F024  F3 A4                     MOVSB.REP ES:EDI,ESI
0054F026  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0054f029:
0054F029  8A 15 7E 87 80 00         MOV DL,byte ptr [0x0080877e]
0054F02F  84 D2                     TEST DL,DL
0054F031  75 3B                     JNZ 0x0054f06e
0054F033  8A 55 10                  MOV DL,byte ptr [EBP + 0x10]
0054F036  BE 01 00 00 00            MOV ESI,0x1
0054F03B  80 FA 05                  CMP DL,0x5
0054F03E  74 07                     JZ 0x0054f047
0054F040  80 FA 32                  CMP DL,0x32
0054F043  74 02                     JZ 0x0054f047
0054F045  33 F6                     XOR ESI,ESI
LAB_0054f047:
0054F047  85 F6                     TEST ESI,ESI
0054F049  74 23                     JZ 0x0054f06e
0054F04B  83 C1 39                  ADD ECX,0x39
0054F04E  50                        PUSH EAX
0054F04F  51                        PUSH ECX
0054F050  E8 BB A8 16 00            CALL 0x006b9910
0054F055  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0054F058  E8 C3 63 EB FF            CALL 0x00405420
0054F05D  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0054F060  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054F065  5F                        POP EDI
0054F066  5E                        POP ESI
0054F067  5B                        POP EBX
0054F068  8B E5                     MOV ESP,EBP
0054F06A  5D                        POP EBP
0054F06B  C2 1C 00                  RET 0x1c
LAB_0054f06e:
0054F06E  83 C1 39                  ADD ECX,0x39
0054F071  50                        PUSH EAX
0054F072  51                        PUSH ECX
0054F073  E8 98 A8 16 00            CALL 0x006b9910
0054F078  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0054F07B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054F080  5F                        POP EDI
0054F081  5E                        POP ESI
0054F082  5B                        POP EBX
0054F083  8B E5                     MOV ESP,EBP
0054F085  5D                        POP EBP
0054F086  C2 1C 00                  RET 0x1c
LAB_0054f089:
0054F089  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0054F08C  68 BC 85 7C 00            PUSH 0x7c85bc
0054F091  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054F096  56                        PUSH ESI
0054F097  6A 00                     PUSH 0x0
0054F099  68 5B 05 00 00            PUSH 0x55b
0054F09E  68 30 84 7C 00            PUSH 0x7c8430
0054F0A3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054F0A9  E8 22 E4 15 00            CALL 0x006ad4d0
0054F0AE  83 C4 18                  ADD ESP,0x18
0054F0B1  85 C0                     TEST EAX,EAX
0054F0B3  74 01                     JZ 0x0054f0b6
0054F0B5  CC                        INT3
LAB_0054f0b6:
0054F0B6  68 5D 05 00 00            PUSH 0x55d
0054F0BB  68 30 84 7C 00            PUSH 0x7c8430
0054F0C0  6A 00                     PUSH 0x0
0054F0C2  56                        PUSH ESI
0054F0C3  E8 78 6D 15 00            CALL 0x006a5e40
0054F0C8  5F                        POP EDI
0054F0C9  5E                        POP ESI
0054F0CA  5B                        POP EBX
0054F0CB  8B E5                     MOV ESP,EBP
0054F0CD  5D                        POP EBP
0054F0CE  C2 1C 00                  RET 0x1c

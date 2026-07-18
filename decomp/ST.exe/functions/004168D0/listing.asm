FUN_004168d0:
004168D0  55                        PUSH EBP
004168D1  8B EC                     MOV EBP,ESP
004168D3  6A FF                     PUSH -0x1
004168D5  68 50 03 79 00            PUSH 0x790350
004168DA  68 64 D9 72 00            PUSH 0x72d964
004168DF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
004168E5  50                        PUSH EAX
004168E6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
004168ED  83 EC 24                  SUB ESP,0x24
004168F0  53                        PUSH EBX
004168F1  56                        PUSH ESI
004168F2  57                        PUSH EDI
004168F3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
004168F6  9B                        WAIT
004168F7  33 F6                     XOR ESI,ESI
004168F9  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004168FC  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
00416900  0F BF 4D 14               MOVSX ECX,word ptr [EBP + 0x14]
00416904  2B C8                     SUB ECX,EAX
00416906  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00416909  DB 45 D0                  FILD dword ptr [EBP + -0x30]
0041690C  D9 55 D4                  FST float ptr [EBP + -0x2c]
0041690F  0F BF 55 0C               MOVSX EDX,word ptr [EBP + 0xc]
00416913  0F BF 45 18               MOVSX EAX,word ptr [EBP + 0x18]
00416917  2B C2                     SUB EAX,EDX
00416919  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0041691C  DB 45 CC                  FILD dword ptr [EBP + -0x34]
0041691F  D9 5D D8                  FSTP float ptr [EBP + -0x28]
00416922  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
00416925  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0041692B  DF E0                     FNSTSW AX
0041692D  F6 C4 40                  TEST AH,0x40
00416930  74 17                     JZ 0x00416949
00416932  D9 45 D8                  FLD float ptr [EBP + -0x28]
00416935  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0041693B  DF E0                     FNSTSW AX
0041693D  F6 C4 40                  TEST AH,0x40
00416940  74 07                     JZ 0x00416949
00416942  C7 45 D4 00 00 80 3F      MOV dword ptr [EBP + -0x2c],0x3f800000
LAB_00416949:
00416949  8D 4D D4                  LEA ECX,[EBP + -0x2c]
0041694C  51                        PUSH ECX
0041694D  E8 D2 5C 31 00            CALL 0x0072c624
00416952  D8 7D D8                  FDIVR float ptr [EBP + -0x28]
00416955  D9 55 E4                  FST float ptr [EBP + -0x1c]
00416958  DC 1D 40 03 79 00         FCOMP double ptr [0x00790340]
0041695E  DF E0                     FNSTSW AX
00416960  F6 C4 01                  TEST AH,0x1
00416963  74 0C                     JZ 0x00416971
00416965  C7 45 E0 5A 00 00 00      MOV dword ptr [EBP + -0x20],0x5a
0041696C  E9 0F 03 00 00            JMP 0x00416c80
LAB_00416971:
00416971  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416974  DC 1D 30 03 79 00         FCOMP double ptr [0x00790330]
0041697A  DF E0                     FNSTSW AX
0041697C  F6 C4 41                  TEST AH,0x41
0041697F  75 38                     JNZ 0x004169b9
00416981  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416984  DC 1D 20 03 79 00         FCOMP double ptr [0x00790320]
0041698A  DF E0                     FNSTSW AX
0041698C  F6 C4 01                  TEST AH,0x1
0041698F  74 28                     JZ 0x004169b9
00416991  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00416994  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0041699A  DF E0                     FNSTSW AX
0041699C  F6 C4 41                  TEST AH,0x41
0041699F  75 0C                     JNZ 0x004169ad
004169A1  C7 45 E0 4B 00 00 00      MOV dword ptr [EBP + -0x20],0x4b
004169A8  E9 D3 02 00 00            JMP 0x00416c80
LAB_004169ad:
004169AD  C7 45 E0 69 00 00 00      MOV dword ptr [EBP + -0x20],0x69
004169B4  E9 C7 02 00 00            JMP 0x00416c80
LAB_004169b9:
004169B9  D9 45 E4                  FLD float ptr [EBP + -0x1c]
004169BC  DC 1D 10 03 79 00         FCOMP double ptr [0x00790310]
004169C2  DF E0                     FNSTSW AX
004169C4  F6 C4 41                  TEST AH,0x41
004169C7  75 38                     JNZ 0x00416a01
004169C9  D9 45 E4                  FLD float ptr [EBP + -0x1c]
004169CC  DC 1D 00 03 79 00         FCOMP double ptr [0x00790300]
004169D2  DF E0                     FNSTSW AX
004169D4  F6 C4 01                  TEST AH,0x1
004169D7  74 28                     JZ 0x00416a01
004169D9  D9 45 D4                  FLD float ptr [EBP + -0x2c]
004169DC  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004169E2  DF E0                     FNSTSW AX
004169E4  F6 C4 41                  TEST AH,0x41
004169E7  75 0C                     JNZ 0x004169f5
004169E9  C7 45 E0 3C 00 00 00      MOV dword ptr [EBP + -0x20],0x3c
004169F0  E9 8B 02 00 00            JMP 0x00416c80
LAB_004169f5:
004169F5  C7 45 E0 78 00 00 00      MOV dword ptr [EBP + -0x20],0x78
004169FC  E9 7F 02 00 00            JMP 0x00416c80
LAB_00416a01:
00416A01  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416A04  DC 1D F0 02 79 00         FCOMP double ptr [0x007902f0]
00416A0A  DF E0                     FNSTSW AX
00416A0C  F6 C4 41                  TEST AH,0x41
00416A0F  75 38                     JNZ 0x00416a49
00416A11  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416A14  DC 1D E0 02 79 00         FCOMP double ptr [0x007902e0]
00416A1A  DF E0                     FNSTSW AX
00416A1C  F6 C4 01                  TEST AH,0x1
00416A1F  74 28                     JZ 0x00416a49
00416A21  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00416A24  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416A2A  DF E0                     FNSTSW AX
00416A2C  F6 C4 41                  TEST AH,0x41
00416A2F  75 0C                     JNZ 0x00416a3d
00416A31  C7 45 E0 2D 00 00 00      MOV dword ptr [EBP + -0x20],0x2d
00416A38  E9 43 02 00 00            JMP 0x00416c80
LAB_00416a3d:
00416A3D  C7 45 E0 87 00 00 00      MOV dword ptr [EBP + -0x20],0x87
00416A44  E9 37 02 00 00            JMP 0x00416c80
LAB_00416a49:
00416A49  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416A4C  DC 1D D0 02 79 00         FCOMP double ptr [0x007902d0]
00416A52  DF E0                     FNSTSW AX
00416A54  F6 C4 41                  TEST AH,0x41
00416A57  75 38                     JNZ 0x00416a91
00416A59  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416A5C  DC 1D C0 02 79 00         FCOMP double ptr [0x007902c0]
00416A62  DF E0                     FNSTSW AX
00416A64  F6 C4 01                  TEST AH,0x1
00416A67  74 28                     JZ 0x00416a91
00416A69  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00416A6C  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416A72  DF E0                     FNSTSW AX
00416A74  F6 C4 41                  TEST AH,0x41
00416A77  75 0C                     JNZ 0x00416a85
00416A79  C7 45 E0 1E 00 00 00      MOV dword ptr [EBP + -0x20],0x1e
00416A80  E9 FB 01 00 00            JMP 0x00416c80
LAB_00416a85:
00416A85  C7 45 E0 96 00 00 00      MOV dword ptr [EBP + -0x20],0x96
00416A8C  E9 EF 01 00 00            JMP 0x00416c80
LAB_00416a91:
00416A91  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416A94  DC 1D B0 02 79 00         FCOMP double ptr [0x007902b0]
00416A9A  DF E0                     FNSTSW AX
00416A9C  F6 C4 41                  TEST AH,0x41
00416A9F  75 38                     JNZ 0x00416ad9
00416AA1  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416AA4  DC 1D A0 02 79 00         FCOMP double ptr [0x007902a0]
00416AAA  DF E0                     FNSTSW AX
00416AAC  F6 C4 01                  TEST AH,0x1
00416AAF  74 28                     JZ 0x00416ad9
00416AB1  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00416AB4  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416ABA  DF E0                     FNSTSW AX
00416ABC  F6 C4 41                  TEST AH,0x41
00416ABF  75 0C                     JNZ 0x00416acd
00416AC1  C7 45 E0 0F 00 00 00      MOV dword ptr [EBP + -0x20],0xf
00416AC8  E9 B3 01 00 00            JMP 0x00416c80
LAB_00416acd:
00416ACD  C7 45 E0 A5 00 00 00      MOV dword ptr [EBP + -0x20],0xa5
00416AD4  E9 A7 01 00 00            JMP 0x00416c80
LAB_00416ad9:
00416AD9  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416ADC  DC 1D 90 02 79 00         FCOMP double ptr [0x00790290]
00416AE2  DF E0                     FNSTSW AX
00416AE4  F6 C4 41                  TEST AH,0x41
00416AE7  75 34                     JNZ 0x00416b1d
00416AE9  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416AEC  DC 1D 80 02 79 00         FCOMP double ptr [0x00790280]
00416AF2  DF E0                     FNSTSW AX
00416AF4  F6 C4 01                  TEST AH,0x1
00416AF7  74 24                     JZ 0x00416b1d
00416AF9  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00416AFC  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416B02  DF E0                     FNSTSW AX
00416B04  F6 C4 41                  TEST AH,0x41
00416B07  75 08                     JNZ 0x00416b11
00416B09  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
00416B0C  E9 6F 01 00 00            JMP 0x00416c80
LAB_00416b11:
00416B11  C7 45 E0 B4 00 00 00      MOV dword ptr [EBP + -0x20],0xb4
00416B18  E9 63 01 00 00            JMP 0x00416c80
LAB_00416b1d:
00416B1D  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416B20  DC 1D 70 02 79 00         FCOMP double ptr [0x00790270]
00416B26  DF E0                     FNSTSW AX
00416B28  F6 C4 41                  TEST AH,0x41
00416B2B  75 38                     JNZ 0x00416b65
00416B2D  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416B30  DC 1D 60 02 79 00         FCOMP double ptr [0x00790260]
00416B36  DF E0                     FNSTSW AX
00416B38  F6 C4 01                  TEST AH,0x1
00416B3B  74 28                     JZ 0x00416b65
00416B3D  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00416B40  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416B46  DF E0                     FNSTSW AX
00416B48  F6 C4 41                  TEST AH,0x41
00416B4B  75 0C                     JNZ 0x00416b59
00416B4D  C7 45 E0 59 01 00 00      MOV dword ptr [EBP + -0x20],0x159
00416B54  E9 27 01 00 00            JMP 0x00416c80
LAB_00416b59:
00416B59  C7 45 E0 C3 00 00 00      MOV dword ptr [EBP + -0x20],0xc3
00416B60  E9 1B 01 00 00            JMP 0x00416c80
LAB_00416b65:
00416B65  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416B68  DC 1D 50 02 79 00         FCOMP double ptr [0x00790250]
00416B6E  DF E0                     FNSTSW AX
00416B70  F6 C4 41                  TEST AH,0x41
00416B73  75 38                     JNZ 0x00416bad
00416B75  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416B78  DC 1D 40 02 79 00         FCOMP double ptr [0x00790240]
00416B7E  DF E0                     FNSTSW AX
00416B80  F6 C4 01                  TEST AH,0x1
00416B83  74 28                     JZ 0x00416bad
00416B85  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00416B88  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416B8E  DF E0                     FNSTSW AX
00416B90  F6 C4 41                  TEST AH,0x41
00416B93  75 0C                     JNZ 0x00416ba1
00416B95  C7 45 E0 4A 01 00 00      MOV dword ptr [EBP + -0x20],0x14a
00416B9C  E9 DF 00 00 00            JMP 0x00416c80
LAB_00416ba1:
00416BA1  C7 45 E0 D2 00 00 00      MOV dword ptr [EBP + -0x20],0xd2
00416BA8  E9 D3 00 00 00            JMP 0x00416c80
LAB_00416bad:
00416BAD  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416BB0  DC 1D 30 02 79 00         FCOMP double ptr [0x00790230]
00416BB6  DF E0                     FNSTSW AX
00416BB8  F6 C4 41                  TEST AH,0x41
00416BBB  75 38                     JNZ 0x00416bf5
00416BBD  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416BC0  DC 1D 20 02 79 00         FCOMP double ptr [0x00790220]
00416BC6  DF E0                     FNSTSW AX
00416BC8  F6 C4 01                  TEST AH,0x1
00416BCB  74 28                     JZ 0x00416bf5
00416BCD  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00416BD0  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416BD6  DF E0                     FNSTSW AX
00416BD8  F6 C4 41                  TEST AH,0x41
00416BDB  75 0C                     JNZ 0x00416be9
00416BDD  C7 45 E0 3B 01 00 00      MOV dword ptr [EBP + -0x20],0x13b
00416BE4  E9 97 00 00 00            JMP 0x00416c80
LAB_00416be9:
00416BE9  C7 45 E0 E1 00 00 00      MOV dword ptr [EBP + -0x20],0xe1
00416BF0  E9 8B 00 00 00            JMP 0x00416c80
LAB_00416bf5:
00416BF5  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416BF8  DC 1D 10 02 79 00         FCOMP double ptr [0x00790210]
00416BFE  DF E0                     FNSTSW AX
00416C00  F6 C4 41                  TEST AH,0x41
00416C03  75 32                     JNZ 0x00416c37
00416C05  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416C08  DC 1D 00 02 79 00         FCOMP double ptr [0x00790200]
00416C0E  DF E0                     FNSTSW AX
00416C10  F6 C4 01                  TEST AH,0x1
00416C13  74 22                     JZ 0x00416c37
00416C15  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00416C18  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416C1E  DF E0                     FNSTSW AX
00416C20  F6 C4 41                  TEST AH,0x41
00416C23  75 09                     JNZ 0x00416c2e
00416C25  C7 45 E0 2C 01 00 00      MOV dword ptr [EBP + -0x20],0x12c
00416C2C  EB 52                     JMP 0x00416c80
LAB_00416c2e:
00416C2E  C7 45 E0 F0 00 00 00      MOV dword ptr [EBP + -0x20],0xf0
00416C35  EB 49                     JMP 0x00416c80
LAB_00416c37:
00416C37  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416C3A  DC 1D F0 01 79 00         FCOMP double ptr [0x007901f0]
00416C40  DF E0                     FNSTSW AX
00416C42  F6 C4 41                  TEST AH,0x41
00416C45  75 32                     JNZ 0x00416c79
00416C47  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00416C4A  DC 1D E0 01 79 00         FCOMP double ptr [0x007901e0]
00416C50  DF E0                     FNSTSW AX
00416C52  F6 C4 01                  TEST AH,0x1
00416C55  74 22                     JZ 0x00416c79
00416C57  D9 45 D4                  FLD float ptr [EBP + -0x2c]
00416C5A  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00416C60  DF E0                     FNSTSW AX
00416C62  F6 C4 41                  TEST AH,0x41
00416C65  75 09                     JNZ 0x00416c70
00416C67  C7 45 E0 1D 01 00 00      MOV dword ptr [EBP + -0x20],0x11d
00416C6E  EB 10                     JMP 0x00416c80
LAB_00416c70:
00416C70  C7 45 E0 FF 00 00 00      MOV dword ptr [EBP + -0x20],0xff
00416C77  EB 07                     JMP 0x00416c80
LAB_00416c79:
00416C79  C7 45 E0 0E 01 00 00      MOV dword ptr [EBP + -0x20],0x10e
LAB_00416c80:
00416C80  9B                        WAIT
00416C81  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00416C88  E8 00 00 00 00            CALL 0x00416c8d
LAB_00416c8d:
00416C8D  8B 65 E8                  MOV ESP,dword ptr [EBP + -0x18]
00416C90  66 8B 45 E0               MOV AX,word ptr [EBP + -0x20]
00416C94  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00416C97  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00416C9E  5F                        POP EDI
00416C9F  5E                        POP ESI
00416CA0  5B                        POP EBX
00416CA1  8B E5                     MOV ESP,EBP
00416CA3  5D                        POP EBP
00416CA4  C2 18 00                  RET 0x18

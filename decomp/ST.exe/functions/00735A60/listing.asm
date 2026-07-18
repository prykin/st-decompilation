FUN_00735a60:
00735A60  55                        PUSH EBP
00735A61  8B EC                     MOV EBP,ESP
00735A63  83 EC 44                  SUB ESP,0x44
00735A66  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735A69  83 E0 1F                  AND EAX,0x1f
00735A6C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00735A6F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735A72  83 E1 08                  AND ECX,0x8
00735A75  85 C9                     TEST ECX,ECX
00735A77  74 21                     JZ 0x00735a9a
00735A79  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00735A7C  83 E2 01                  AND EDX,0x1
00735A7F  85 D2                     TEST EDX,EDX
00735A81  74 17                     JZ 0x00735a9a
00735A83  6A 01                     PUSH 0x1
00735A85  E8 26 08 00 00            CALL 0x007362b0
00735A8A  83 C4 04                  ADD ESP,0x4
00735A8D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00735A90  24 F7                     AND AL,0xf7
00735A92  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00735A95  E9 04 03 00 00            JMP 0x00735d9e
LAB_00735a9a:
00735A9A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735A9D  83 E1 04                  AND ECX,0x4
00735AA0  85 C9                     TEST ECX,ECX
00735AA2  74 21                     JZ 0x00735ac5
00735AA4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00735AA7  83 E2 04                  AND EDX,0x4
00735AAA  85 D2                     TEST EDX,EDX
00735AAC  74 17                     JZ 0x00735ac5
00735AAE  6A 04                     PUSH 0x4
00735AB0  E8 FB 07 00 00            CALL 0x007362b0
00735AB5  83 C4 04                  ADD ESP,0x4
00735AB8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00735ABB  24 FB                     AND AL,0xfb
00735ABD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00735AC0  E9 D9 02 00 00            JMP 0x00735d9e
LAB_00735ac5:
00735AC5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735AC8  83 E1 01                  AND ECX,0x1
00735ACB  85 C9                     TEST ECX,ECX
00735ACD  0F 84 6E 01 00 00         JZ 0x00735c41
00735AD3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00735AD6  83 E2 08                  AND EDX,0x8
00735AD9  85 D2                     TEST EDX,EDX
00735ADB  0F 84 60 01 00 00         JZ 0x00735c41
00735AE1  6A 08                     PUSH 0x8
00735AE3  E8 C8 07 00 00            CALL 0x007362b0
00735AE8  83 C4 04                  ADD ESP,0x4
00735AEB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00735AEE  25 00 0C 00 00            AND EAX,0xc00
00735AF3  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00735AF6  81 7D E0 00 08 00 00      CMP dword ptr [EBP + -0x20],0x800
00735AFD  77 21                     JA 0x00735b20
00735AFF  81 7D E0 00 08 00 00      CMP dword ptr [EBP + -0x20],0x800
00735B06  74 6D                     JZ 0x00735b75
00735B08  83 7D E0 00               CMP dword ptr [EBP + -0x20],0x0
00735B0C  74 24                     JZ 0x00735b32
00735B0E  81 7D E0 00 04 00 00      CMP dword ptr [EBP + -0x20],0x400
00735B15  0F 84 9A 00 00 00         JZ 0x00735bb5
00735B1B  E9 13 01 00 00            JMP 0x00735c33
LAB_00735b20:
00735B20  81 7D E0 00 0C 00 00      CMP dword ptr [EBP + -0x20],0xc00
00735B27  0F 84 C8 00 00 00         JZ 0x00735bf5
00735B2D  E9 01 01 00 00            JMP 0x00735c33
LAB_00735b32:
00735B32  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735B35  DD 01                     FLD double ptr [ECX]
00735B37  DC 1D 70 D6 79 00         FCOMP double ptr [0x0079d670]
00735B3D  DF E0                     FNSTSW AX
00735B3F  F6 C4 41                  TEST AH,0x41
00735B42  75 13                     JNZ 0x00735b57
00735B44  8B 15 28 16 7F 00         MOV EDX,dword ptr [0x007f1628]
00735B4A  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00735B4D  A1 2C 16 7F 00            MOV EAX,[0x007f162c]
00735B52  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00735B55  EB 0B                     JMP 0x00735b62
LAB_00735b57:
00735B57  DD 05 28 16 7F 00         FLD double ptr [0x007f1628]
00735B5D  D9 E0                     FCHS
00735B5F  DD 5D D8                  FSTP double ptr [EBP + -0x28]
LAB_00735b62:
00735B62  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735B65  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00735B68  89 11                     MOV dword ptr [ECX],EDX
00735B6A  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00735B6D  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00735B70  E9 BE 00 00 00            JMP 0x00735c33
LAB_00735b75:
00735B75  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735B78  DD 01                     FLD double ptr [ECX]
00735B7A  DC 1D 70 D6 79 00         FCOMP double ptr [0x0079d670]
00735B80  DF E0                     FNSTSW AX
00735B82  F6 C4 41                  TEST AH,0x41
00735B85  75 13                     JNZ 0x00735b9a
00735B87  8B 15 28 16 7F 00         MOV EDX,dword ptr [0x007f1628]
00735B8D  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00735B90  A1 2C 16 7F 00            MOV EAX,[0x007f162c]
00735B95  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00735B98  EB 0B                     JMP 0x00735ba5
LAB_00735b9a:
00735B9A  DD 05 38 16 7F 00         FLD double ptr [0x007f1638]
00735BA0  D9 E0                     FCHS
00735BA2  DD 5D D0                  FSTP double ptr [EBP + -0x30]
LAB_00735ba5:
00735BA5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735BA8  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00735BAB  89 11                     MOV dword ptr [ECX],EDX
00735BAD  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00735BB0  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00735BB3  EB 7E                     JMP 0x00735c33
LAB_00735bb5:
00735BB5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735BB8  DD 01                     FLD double ptr [ECX]
00735BBA  DC 1D 70 D6 79 00         FCOMP double ptr [0x0079d670]
00735BC0  DF E0                     FNSTSW AX
00735BC2  F6 C4 41                  TEST AH,0x41
00735BC5  75 13                     JNZ 0x00735bda
00735BC7  8B 15 38 16 7F 00         MOV EDX,dword ptr [0x007f1638]
00735BCD  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00735BD0  A1 3C 16 7F 00            MOV EAX,[0x007f163c]
00735BD5  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00735BD8  EB 0B                     JMP 0x00735be5
LAB_00735bda:
00735BDA  DD 05 28 16 7F 00         FLD double ptr [0x007f1628]
00735BE0  D9 E0                     FCHS
00735BE2  DD 5D C8                  FSTP double ptr [EBP + -0x38]
LAB_00735be5:
00735BE5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735BE8  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
00735BEB  89 11                     MOV dword ptr [ECX],EDX
00735BED  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00735BF0  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00735BF3  EB 3E                     JMP 0x00735c33
LAB_00735bf5:
00735BF5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735BF8  DD 01                     FLD double ptr [ECX]
00735BFA  DC 1D 70 D6 79 00         FCOMP double ptr [0x0079d670]
00735C00  DF E0                     FNSTSW AX
00735C02  F6 C4 41                  TEST AH,0x41
00735C05  75 13                     JNZ 0x00735c1a
00735C07  8B 15 38 16 7F 00         MOV EDX,dword ptr [0x007f1638]
00735C0D  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00735C10  A1 3C 16 7F 00            MOV EAX,[0x007f163c]
00735C15  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00735C18  EB 0B                     JMP 0x00735c25
LAB_00735c1a:
00735C1A  DD 05 38 16 7F 00         FLD double ptr [0x007f1638]
00735C20  D9 E0                     FCHS
00735C22  DD 5D C0                  FSTP double ptr [EBP + -0x40]
LAB_00735c25:
00735C25  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735C28  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
00735C2B  89 11                     MOV dword ptr [ECX],EDX
00735C2D  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00735C30  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
LAB_00735c33:
00735C33  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00735C36  83 E1 FE                  AND ECX,0xfffffffe
00735C39  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00735C3C  E9 5D 01 00 00            JMP 0x00735d9e
LAB_00735c41:
00735C41  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00735C44  83 E2 02                  AND EDX,0x2
00735C47  85 D2                     TEST EDX,EDX
00735C49  0F 84 4F 01 00 00         JZ 0x00735d9e
00735C4F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00735C52  83 E0 10                  AND EAX,0x10
00735C55  85 C0                     TEST EAX,EAX
00735C57  0F 84 41 01 00 00         JZ 0x00735d9e
00735C5D  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00735C64  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735C67  83 E1 10                  AND ECX,0x10
00735C6A  85 C9                     TEST ECX,ECX
00735C6C  74 07                     JZ 0x00735c75
00735C6E  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00735c75:
00735C75  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00735C78  DD 02                     FLD double ptr [EDX]
00735C7A  DC 1D 70 D6 79 00         FCOMP double ptr [0x0079d670]
00735C80  DF E0                     FNSTSW AX
00735C82  F6 C4 40                  TEST AH,0x40
00735C85  0F 85 F3 00 00 00         JNZ 0x00735d7e
00735C8B  8D 45 E8                  LEA EAX,[EBP + -0x18]
00735C8E  50                        PUSH EAX
00735C8F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735C92  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00735C95  52                        PUSH EDX
00735C96  8B 01                     MOV EAX,dword ptr [ECX]
00735C98  50                        PUSH EAX
00735C99  E8 52 04 00 00            CALL 0x007360f0
00735C9E  83 C4 0C                  ADD ESP,0xc
00735CA1  DD 5D F0                  FSTP double ptr [EBP + -0x10]
00735CA4  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00735CA7  81 E9 00 06 00 00         SUB ECX,0x600
00735CAD  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00735CB0  81 7D EC CE FB FF FF      CMP dword ptr [EBP + -0x14],0xfffffbce
00735CB7  7D 18                     JGE 0x00735cd1
00735CB9  DD 45 F0                  FLD double ptr [EBP + -0x10]
00735CBC  DC 0D 70 D6 79 00         FMUL double ptr [0x0079d670]
00735CC2  DD 5D F0                  FSTP double ptr [EBP + -0x10]
00735CC5  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
00735CCC  E9 9D 00 00 00            JMP 0x00735d6e
LAB_00735cd1:
00735CD1  DD 45 F0                  FLD double ptr [EBP + -0x10]
00735CD4  DC 1D 70 D6 79 00         FCOMP double ptr [0x0079d670]
00735CDA  DF E0                     FNSTSW AX
00735CDC  F6 C4 01                  TEST AH,0x1
00735CDF  74 09                     JZ 0x00735cea
00735CE1  C7 45 BC 01 00 00 00      MOV dword ptr [EBP + -0x44],0x1
00735CE8  EB 07                     JMP 0x00735cf1
LAB_00735cea:
00735CEA  C7 45 BC 00 00 00 00      MOV dword ptr [EBP + -0x44],0x0
LAB_00735cf1:
00735CF1  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00735CF4  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00735CF7  66 8B 45 F6               MOV AX,word ptr [EBP + -0xa]
00735CFB  66 25 0F 00               AND AX,0xf
00735CFF  66 89 45 F6               MOV word ptr [EBP + -0xa],AX
00735D03  66 8B 4D F6               MOV CX,word ptr [EBP + -0xa]
00735D07  80 C9 10                  OR CL,0x10
00735D0A  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
00735D0E  EB 09                     JMP 0x00735d19
LAB_00735d10:
00735D10  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00735D13  83 C2 01                  ADD EDX,0x1
00735D16  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_00735d19:
00735D19  81 7D EC 03 FC FF FF      CMP dword ptr [EBP + -0x14],0xfffffc03
00735D20  7D 3E                     JGE 0x00735d60
00735D22  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00735D25  83 E0 01                  AND EAX,0x1
00735D28  85 C0                     TEST EAX,EAX
00735D2A  74 0D                     JZ 0x00735d39
00735D2C  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
00735D30  75 07                     JNZ 0x00735d39
00735D32  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00735d39:
00735D39  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00735D3C  D1 E9                     SHR ECX,0x1
00735D3E  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00735D41  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00735D44  83 E2 01                  AND EDX,0x1
00735D47  85 D2                     TEST EDX,EDX
00735D49  74 0B                     JZ 0x00735d56
00735D4B  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00735D4E  0D 00 00 00 80            OR EAX,0x80000000
00735D53  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_00735d56:
00735D56  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00735D59  D1 E9                     SHR ECX,0x1
00735D5B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00735D5E  EB B0                     JMP 0x00735d10
LAB_00735d60:
00735D60  83 7D E4 00               CMP dword ptr [EBP + -0x1c],0x0
00735D64  74 08                     JZ 0x00735d6e
00735D66  DD 45 F0                  FLD double ptr [EBP + -0x10]
00735D69  D9 E0                     FCHS
00735D6B  DD 5D F0                  FSTP double ptr [EBP + -0x10]
LAB_00735d6e:
00735D6E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00735D71  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00735D74  89 02                     MOV dword ptr [EDX],EAX
00735D76  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00735D79  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
00735D7C  EB 07                     JMP 0x00735d85
LAB_00735d7e:
00735D7E  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00735d85:
00735D85  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
00735D89  74 0A                     JZ 0x00735d95
00735D8B  6A 10                     PUSH 0x10
00735D8D  E8 1E 05 00 00            CALL 0x007362b0
00735D92  83 C4 04                  ADD ESP,0x4
LAB_00735d95:
00735D95  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00735D98  83 E2 FD                  AND EDX,0xfffffffd
00735D9B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00735d9e:
00735D9E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735DA1  83 E0 10                  AND EAX,0x10
00735DA4  85 C0                     TEST EAX,EAX
00735DA6  74 1D                     JZ 0x00735dc5
00735DA8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00735DAB  83 E1 20                  AND ECX,0x20
00735DAE  85 C9                     TEST ECX,ECX
00735DB0  74 13                     JZ 0x00735dc5
00735DB2  6A 20                     PUSH 0x20
00735DB4  E8 F7 04 00 00            CALL 0x007362b0
00735DB9  83 C4 04                  ADD ESP,0x4
00735DBC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00735DBF  83 E2 EF                  AND EDX,0xffffffef
00735DC2  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00735dc5:
00735DC5  33 C0                     XOR EAX,EAX
00735DC7  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00735DCB  0F 94 C0                  SETZ AL
00735DCE  8B E5                     MOV ESP,EBP
00735DD0  5D                        POP EBP
00735DD1  C3                        RET

FUN_0059cee0:
0059CEE0  55                        PUSH EBP
0059CEE1  8B EC                     MOV EBP,ESP
0059CEE3  81 EC D4 08 00 00         SUB ESP,0x8d4
0059CEE9  56                        PUSH ESI
0059CEEA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059CEED  57                        PUSH EDI
0059CEEE  B9 23 02 00 00            MOV ECX,0x223
0059CEF3  33 C0                     XOR EAX,EAX
0059CEF5  8D BD 2C F7 FF FF         LEA EDI,[EBP + 0xfffff72c]
0059CEFB  F3 AB                     STOSD.REP ES:EDI
0059CEFD  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059CF02  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059CF05  8D 4D B8                  LEA ECX,[EBP + -0x48]
0059CF08  6A 00                     PUSH 0x0
0059CF0A  52                        PUSH EDX
0059CF0B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059CF0E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059CF14  E8 D7 08 19 00            CALL 0x0072d7f0
0059CF19  8B F0                     MOV ESI,EAX
0059CF1B  83 C4 08                  ADD ESP,0x8
0059CF1E  85 F6                     TEST ESI,ESI
0059CF20  0F 85 23 02 00 00         JNZ 0x0059d149
0059CF26  6A 01                     PUSH 0x1
0059CF28  6A 01                     PUSH 0x1
0059CF2A  50                        PUSH EAX
0059CF2B  E8 C0 85 11 00            CALL 0x006b54f0
0059CF30  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0059CF33  68 1D 7E 80 00            PUSH 0x807e1d
0059CF38  50                        PUSH EAX
0059CF39  89 86 E8 1A 00 00         MOV dword ptr [ESI + 0x1ae8],EAX
0059CF3F  E8 5C 8B 11 00            CALL 0x006b5aa0
0059CF44  6A 01                     PUSH 0x1
0059CF46  6A 01                     PUSH 0x1
0059CF48  6A 00                     PUSH 0x0
0059CF4A  E8 A1 85 11 00            CALL 0x006b54f0
0059CF4F  68 A0 16 80 00            PUSH 0x8016a0
0059CF54  50                        PUSH EAX
0059CF55  89 86 EC 1A 00 00         MOV dword ptr [ESI + 0x1aec],EAX
0059CF5B  E8 40 8B 11 00            CALL 0x006b5aa0
0059CF60  6A 01                     PUSH 0x1
0059CF62  6A 01                     PUSH 0x1
0059CF64  6A 00                     PUSH 0x0
0059CF66  E8 85 85 11 00            CALL 0x006b54f0
0059CF6B  68 A0 16 80 00            PUSH 0x8016a0
0059CF70  50                        PUSH EAX
0059CF71  89 86 F0 1A 00 00         MOV dword ptr [ESI + 0x1af0],EAX
0059CF77  E8 24 8B 11 00            CALL 0x006b5aa0
0059CF7C  6A 01                     PUSH 0x1
0059CF7E  6A 01                     PUSH 0x1
0059CF80  6A 00                     PUSH 0x0
0059CF82  E8 69 85 11 00            CALL 0x006b54f0
0059CF87  68 A0 16 80 00            PUSH 0x8016a0
0059CF8C  50                        PUSH EAX
0059CF8D  89 86 F4 1A 00 00         MOV dword ptr [ESI + 0x1af4],EAX
0059CF93  E8 08 8B 11 00            CALL 0x006b5aa0
0059CF98  B9 23 02 00 00            MOV ECX,0x223
0059CF9D  33 C0                     XOR EAX,EAX
0059CF9F  8D BD 2C F7 FF FF         LEA EDI,[EBP + 0xfffff72c]
0059CFA5  6A 00                     PUSH 0x0
0059CFA7  F3 AB                     STOSD.REP ES:EDI
0059CFA9  8B 86 73 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a73]
0059CFAF  8B 8E E8 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ae8]
0059CFB5  89 85 34 F7 FF FF         MOV dword ptr [EBP + 0xfffff734],EAX
0059CFBB  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0059CFBE  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0059CFC1  89 85 58 F7 FF FF         MOV dword ptr [EBP + 0xfffff758],EAX
0059CFC7  89 85 78 F7 FF FF         MOV dword ptr [EBP + 0xfffff778],EAX
0059CFCD  B8 02 00 00 00            MOV EAX,0x2
0059CFD2  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0059CFD5  89 85 5C F7 FF FF         MOV dword ptr [EBP + 0xfffff75c],EAX
0059CFDB  89 85 7C F7 FF FF         MOV dword ptr [EBP + 0xfffff77c],EAX
0059CFE1  8D 85 2C F7 FF FF         LEA EAX,[EBP + 0xfffff72c]
0059CFE7  89 8D 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ECX
0059CFED  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059CFF0  BF 10 00 00 00            MOV EDI,0x10
0059CFF5  50                        PUSH EAX
0059CFF6  8D 86 C4 1A 00 00         LEA EAX,[ESI + 0x1ac4]
0059CFFC  C7 85 2C F7 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff72c],0x1
0059D006  C7 85 30 F7 FF FF 89 00 00 00  MOV dword ptr [EBP + 0xfffff730],0x89
0059D010  C7 85 38 F7 FF FF D2 00 00 00  MOV dword ptr [EBP + 0xfffff738],0xd2
0059D01A  C7 85 3C F7 FF FF E8 00 00 00  MOV dword ptr [EBP + 0xfffff73c],0xe8
0059D024  C7 85 40 F7 FF FF 7C 01 00 00  MOV dword ptr [EBP + 0xfffff740],0x17c
0059D02E  C7 85 44 F7 FF FF 19 00 00 00  MOV dword ptr [EBP + 0xfffff744],0x19
0059D038  89 BD 48 F7 FF FF         MOV dword ptr [EBP + 0xfffff748],EDI
0059D03E  C7 85 60 F7 FF FF FF 68 00 00  MOV dword ptr [EBP + 0xfffff760],0x68ff
0059D048  C7 85 80 F7 FF FF 7F 69 00 00  MOV dword ptr [EBP + 0xfffff780],0x697f
0059D052  C7 45 A4 55 69 00 00      MOV dword ptr [EBP + -0x5c],0x6955
0059D059  8B 11                     MOV EDX,dword ptr [ECX]
0059D05B  6A 00                     PUSH 0x0
0059D05D  50                        PUSH EAX
0059D05E  6A 06                     PUSH 0x6
0059D060  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059D063  8B 8E EC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1aec]
0059D069  C7 85 30 F7 FF FF A9 00 00 00  MOV dword ptr [EBP + 0xfffff730],0xa9
0059D073  89 8D 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ECX
0059D079  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059D07C  C7 85 3C F7 FF FF 1F 01 00 00  MOV dword ptr [EBP + 0xfffff73c],0x11f
0059D086  C7 85 40 F7 FF FF AA 00 00 00  MOV dword ptr [EBP + 0xfffff740],0xaa
0059D090  C7 85 44 F7 FF FF 14 00 00 00  MOV dword ptr [EBP + 0xfffff744],0x14
0059D09A  89 BD 48 F7 FF FF         MOV dword ptr [EBP + 0xfffff748],EDI
0059D0A0  8B 11                     MOV EDX,dword ptr [ECX]
0059D0A2  6A 00                     PUSH 0x0
0059D0A4  8D 85 2C F7 FF FF         LEA EAX,[EBP + 0xfffff72c]
0059D0AA  50                        PUSH EAX
0059D0AB  8D 86 C8 1A 00 00         LEA EAX,[ESI + 0x1ac8]
0059D0B1  6A 00                     PUSH 0x0
0059D0B3  50                        PUSH EAX
0059D0B4  6A 06                     PUSH 0x6
0059D0B6  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059D0B9  8B 8E F4 1A 00 00         MOV ECX,dword ptr [ESI + 0x1af4]
0059D0BF  8D 85 2C F7 FF FF         LEA EAX,[EBP + 0xfffff72c]
0059D0C5  89 8D 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ECX
0059D0CB  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059D0CE  6A 00                     PUSH 0x0
0059D0D0  50                        PUSH EAX
0059D0D1  8D 86 D4 1A 00 00         LEA EAX,[ESI + 0x1ad4]
0059D0D7  C7 85 3C F7 FF FF 47 01 00 00  MOV dword ptr [EBP + 0xfffff73c],0x147
0059D0E1  8B 11                     MOV EDX,dword ptr [ECX]
0059D0E3  6A 00                     PUSH 0x0
0059D0E5  50                        PUSH EAX
0059D0E6  6A 06                     PUSH 0x6
0059D0E8  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059D0EB  8B 8E F0 1A 00 00         MOV ECX,dword ptr [ESI + 0x1af0]
0059D0F1  8D 85 2C F7 FF FF         LEA EAX,[EBP + 0xfffff72c]
0059D0F7  89 8D 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ECX
0059D0FD  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059D100  6A 00                     PUSH 0x0
0059D102  50                        PUSH EAX
0059D103  8D 86 CC 1A 00 00         LEA EAX,[ESI + 0x1acc]
0059D109  C7 85 3C F7 FF FF 6F 01 00 00  MOV dword ptr [EBP + 0xfffff73c],0x16f
0059D113  8B 11                     MOV EDX,dword ptr [ECX]
0059D115  6A 00                     PUSH 0x0
0059D117  50                        PUSH EAX
0059D118  6A 06                     PUSH 0x6
0059D11A  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059D11D  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059D120  C7 46 2D 61 00 00 00      MOV dword ptr [ESI + 0x2d],0x61
0059D127  51                        PUSH ECX
0059D128  6A 00                     PUSH 0x0
0059D12A  6A 0F                     PUSH 0xf
0059D12C  8B CE                     MOV ECX,ESI
0059D12E  C7 46 35 00 00 00 00      MOV dword ptr [ESI + 0x35],0x0
0059D135  E8 46 8F 14 00            CALL 0x006e6080
0059D13A  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0059D13D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059D143  5F                        POP EDI
0059D144  5E                        POP ESI
0059D145  8B E5                     MOV ESP,EBP
0059D147  5D                        POP EBP
0059D148  C3                        RET
LAB_0059d149:
0059D149  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059D14C  68 14 C3 7C 00            PUSH 0x7cc314
0059D151  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059D156  56                        PUSH ESI
0059D157  6A 00                     PUSH 0x0
0059D159  68 24 06 00 00            PUSH 0x624
0059D15E  68 70 BF 7C 00            PUSH 0x7cbf70
0059D163  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059D168  E8 63 03 11 00            CALL 0x006ad4d0
0059D16D  83 C4 18                  ADD ESP,0x18
0059D170  85 C0                     TEST EAX,EAX
0059D172  74 01                     JZ 0x0059d175
0059D174  CC                        INT3
LAB_0059d175:
0059D175  68 24 06 00 00            PUSH 0x624
0059D17A  68 70 BF 7C 00            PUSH 0x7cbf70
0059D17F  6A 00                     PUSH 0x0
0059D181  56                        PUSH ESI
0059D182  E8 B9 8C 10 00            CALL 0x006a5e40
0059D187  5F                        POP EDI
0059D188  5E                        POP ESI
0059D189  8B E5                     MOV ESP,EBP
0059D18B  5D                        POP EBP
0059D18C  C3                        RET

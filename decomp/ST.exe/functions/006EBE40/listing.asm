FUN_006ebe40:
006EBE40  55                        PUSH EBP
006EBE41  8B EC                     MOV EBP,ESP
006EBE43  83 EC 0C                  SUB ESP,0xc
006EBE46  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006EBE49  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
006EBE4C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006EBE4F  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
006EBE52  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006EBE55  8B 51 28                  MOV EDX,dword ptr [ECX + 0x28]
006EBE58  40                        INC EAX
006EBE59  89 15 B0 6D 85 00         MOV dword ptr [0x00856db0],EDX
006EBE5F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006EBE62  8B 41 28                  MOV EAX,dword ptr [ECX + 0x28]
006EBE65  D1 E0                     SHL EAX,0x1
006EBE67  A3 BC 6D 85 00            MOV [0x00856dbc],EAX
006EBE6C  C7 05 AC 6D 85 00 00 00 00 00  MOV dword ptr [0x00856dac],0x0
006EBE76  8B 91 74 01 00 00         MOV EDX,dword ptr [ECX + 0x174]
006EBE7C  53                        PUSH EBX
006EBE7D  89 15 B4 6D 85 00         MOV dword ptr [0x00856db4],EDX
006EBE83  8B 81 58 01 00 00         MOV EAX,dword ptr [ECX + 0x158]
006EBE89  56                        PUSH ESI
006EBE8A  57                        PUSH EDI
006EBE8B  A3 A8 6D 85 00            MOV [0x00856da8],EAX
006EBE90  33 D2                     XOR EDX,EDX
006EBE92  33 C0                     XOR EAX,EAX
006EBE94  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006EBE97  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006EBE9A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006EBE9D  55                        PUSH EBP
006EBE9E  8B 2D A8 6D 85 00         MOV EBP,dword ptr [0x00856da8]
LAB_006ebea4:
006EBEA4  F7 05 AC 6D 85 00 01 00 00 00  TEST dword ptr [0x00856dac],0x1
006EBEAE  0F 84 A5 00 00 00         JZ 0x006ebf59
006EBEB4  8B 0D B0 6D 85 00         MOV ECX,dword ptr [0x00856db0]
006EBEBA  83 E9 04                  SUB ECX,0x4
LAB_006ebebd:
006EBEBD  8A 23                     MOV AH,byte ptr [EBX]
006EBEBF  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
006EBEC2  8A 06                     MOV AL,byte ptr [ESI]
006EBEC4  8A 73 02                  MOV DH,byte ptr [EBX + 0x2]
006EBEC7  83 C6 04                  ADD ESI,0x4
006EBECA  83 C3 08                  ADD EBX,0x8
006EBECD  8A 84 05 00 FD FF FF      MOV AL,byte ptr [EBP + EAX*0x1 + 0xfffffd00]
006EBED4  8A 94 15 00 FE FF FF      MOV DL,byte ptr [EBP + EDX*0x1 + 0xfffffe00]
006EBEDB  88 07                     MOV byte ptr [EDI],AL
006EBEDD  8A 63 FC                  MOV AH,byte ptr [EBX + -0x4]
006EBEE0  88 57 01                  MOV byte ptr [EDI + 0x1],DL
006EBEE3  8A 46 FE                  MOV AL,byte ptr [ESI + -0x2]
006EBEE6  8A 73 FE                  MOV DH,byte ptr [EBX + -0x2]
006EBEE9  83 C7 04                  ADD EDI,0x4
006EBEEC  8A 84 05 00 FF FF FF      MOV AL,byte ptr [EBP + EAX*0x1 + 0xffffff00]
006EBEF3  8A 56 FF                  MOV DL,byte ptr [ESI + -0x1]
006EBEF6  88 47 FE                  MOV byte ptr [EDI + -0x2],AL
006EBEF9  83 E9 04                  SUB ECX,0x4
006EBEFC  8A 54 15 00               MOV DL,byte ptr [EBP + EDX*0x1]
006EBF00  88 57 FF                  MOV byte ptr [EDI + -0x1],DL
006EBF03  7D B8                     JGE 0x006ebebd
006EBF05  83 C1 04                  ADD ECX,0x4
006EBF08  0F 8E DC 00 00 00         JLE 0x006ebfea
006EBF0E  8A 23                     MOV AH,byte ptr [EBX]
006EBF10  83 C3 02                  ADD EBX,0x2
006EBF13  8A 06                     MOV AL,byte ptr [ESI]
006EBF15  46                        INC ESI
006EBF16  8A 84 05 00 FD FF FF      MOV AL,byte ptr [EBP + EAX*0x1 + 0xfffffd00]
006EBF1D  88 07                     MOV byte ptr [EDI],AL
006EBF1F  47                        INC EDI
006EBF20  FE C9                     DEC CL
006EBF22  0F 8E C2 00 00 00         JLE 0x006ebfea
006EBF28  8A 23                     MOV AH,byte ptr [EBX]
006EBF2A  83 C3 02                  ADD EBX,0x2
006EBF2D  8A 06                     MOV AL,byte ptr [ESI]
006EBF2F  46                        INC ESI
006EBF30  8A 84 05 00 FE FF FF      MOV AL,byte ptr [EBP + EAX*0x1 + 0xfffffe00]
006EBF37  88 07                     MOV byte ptr [EDI],AL
006EBF39  47                        INC EDI
006EBF3A  FE C9                     DEC CL
006EBF3C  0F 8E A8 00 00 00         JLE 0x006ebfea
006EBF42  8A 23                     MOV AH,byte ptr [EBX]
006EBF44  83 C3 02                  ADD EBX,0x2
006EBF47  8A 06                     MOV AL,byte ptr [ESI]
006EBF49  46                        INC ESI
006EBF4A  8A 84 05 00 FF FF FF      MOV AL,byte ptr [EBP + EAX*0x1 + 0xffffff00]
006EBF51  88 07                     MOV byte ptr [EDI],AL
006EBF53  47                        INC EDI
006EBF54  E9 91 00 00 00            JMP 0x006ebfea
LAB_006ebf59:
006EBF59  8B 0D B0 6D 85 00         MOV ECX,dword ptr [0x00856db0]
006EBF5F  83 E9 04                  SUB ECX,0x4
LAB_006ebf62:
006EBF62  8A 23                     MOV AH,byte ptr [EBX]
006EBF64  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
006EBF67  8A 06                     MOV AL,byte ptr [ESI]
006EBF69  8A 73 02                  MOV DH,byte ptr [EBX + 0x2]
006EBF6C  83 C6 04                  ADD ESI,0x4
006EBF6F  83 C3 08                  ADD EBX,0x8
006EBF72  8A 44 05 00               MOV AL,byte ptr [EBP + EAX*0x1]
006EBF76  8A 94 15 00 FF FF FF      MOV DL,byte ptr [EBP + EDX*0x1 + 0xffffff00]
006EBF7D  88 07                     MOV byte ptr [EDI],AL
006EBF7F  8A 63 FC                  MOV AH,byte ptr [EBX + -0x4]
006EBF82  88 57 01                  MOV byte ptr [EDI + 0x1],DL
006EBF85  8A 46 FE                  MOV AL,byte ptr [ESI + -0x2]
006EBF88  8A 73 FE                  MOV DH,byte ptr [EBX + -0x2]
006EBF8B  83 C7 04                  ADD EDI,0x4
006EBF8E  8A 84 05 00 FE FF FF      MOV AL,byte ptr [EBP + EAX*0x1 + 0xfffffe00]
006EBF95  8A 56 FF                  MOV DL,byte ptr [ESI + -0x1]
006EBF98  88 47 FE                  MOV byte ptr [EDI + -0x2],AL
006EBF9B  83 E9 04                  SUB ECX,0x4
006EBF9E  8A 94 15 00 FD FF FF      MOV DL,byte ptr [EBP + EDX*0x1 + 0xfffffd00]
006EBFA5  88 57 FF                  MOV byte ptr [EDI + -0x1],DL
006EBFA8  7D B8                     JGE 0x006ebf62
006EBFAA  80 C1 04                  ADD CL,0x4
006EBFAD  7E 3B                     JLE 0x006ebfea
006EBFAF  8A 23                     MOV AH,byte ptr [EBX]
006EBFB1  83 C3 02                  ADD EBX,0x2
006EBFB4  8A 06                     MOV AL,byte ptr [ESI]
006EBFB6  46                        INC ESI
006EBFB7  8A 44 05 00               MOV AL,byte ptr [EBP + EAX*0x1]
006EBFBB  88 07                     MOV byte ptr [EDI],AL
006EBFBD  47                        INC EDI
006EBFBE  FE C9                     DEC CL
006EBFC0  7E 28                     JLE 0x006ebfea
006EBFC2  8A 23                     MOV AH,byte ptr [EBX]
006EBFC4  83 C3 02                  ADD EBX,0x2
006EBFC7  8A 06                     MOV AL,byte ptr [ESI]
006EBFC9  46                        INC ESI
006EBFCA  8A 84 05 00 FF FF FF      MOV AL,byte ptr [EBP + EAX*0x1 + 0xffffff00]
006EBFD1  88 07                     MOV byte ptr [EDI],AL
006EBFD3  47                        INC EDI
006EBFD4  FE C9                     DEC CL
006EBFD6  7E 12                     JLE 0x006ebfea
006EBFD8  8A 23                     MOV AH,byte ptr [EBX]
006EBFDA  83 C3 02                  ADD EBX,0x2
006EBFDD  8A 06                     MOV AL,byte ptr [ESI]
006EBFDF  46                        INC ESI
006EBFE0  8A 84 05 00 FE FF FF      MOV AL,byte ptr [EBP + EAX*0x1 + 0xfffffe00]
006EBFE7  88 07                     MOV byte ptr [EDI],AL
006EBFE9  47                        INC EDI
LAB_006ebfea:
006EBFEA  FF 05 AC 6D 85 00         INC dword ptr [0x00856dac]
006EBFF0  FF 0D B4 6D 85 00         DEC dword ptr [0x00856db4]
006EBFF6  0F 8F A8 FE FF FF         JG 0x006ebea4
006EBFFC  5D                        POP EBP
006EBFFD  5F                        POP EDI
006EBFFE  5E                        POP ESI
006EBFFF  5B                        POP EBX
006EC000  8B E5                     MOV ESP,EBP
006EC002  5D                        POP EBP
006EC003  C3                        RET

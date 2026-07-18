_strncat:
0072ED50  8B 4C 24 0C               MOV ECX,dword ptr [ESP + 0xc]
0072ED54  57                        PUSH EDI
0072ED55  85 C9                     TEST ECX,ECX
0072ED57  0F 84 A7 00 00 00         JZ 0x0072ee04
0072ED5D  8B 7C 24 08               MOV EDI,dword ptr [ESP + 0x8]
0072ED61  56                        PUSH ESI
0072ED62  F7 C7 03 00 00 00         TEST EDI,0x3
0072ED68  53                        PUSH EBX
0072ED69  74 0F                     JZ 0x0072ed7a
LAB_0072ed6b:
0072ED6B  8A 07                     MOV AL,byte ptr [EDI]
0072ED6D  47                        INC EDI
0072ED6E  84 C0                     TEST AL,AL
0072ED70  74 39                     JZ 0x0072edab
0072ED72  F7 C7 03 00 00 00         TEST EDI,0x3
0072ED78  75 F1                     JNZ 0x0072ed6b
LAB_0072ed7a:
0072ED7A  8B 07                     MOV EAX,dword ptr [EDI]
0072ED7C  BA FF FE FE 7E            MOV EDX,0x7efefeff
0072ED81  03 D0                     ADD EDX,EAX
0072ED83  83 F0 FF                  XOR EAX,0xffffffff
0072ED86  33 C2                     XOR EAX,EDX
0072ED88  83 C7 04                  ADD EDI,0x4
0072ED8B  A9 00 01 01 81            TEST EAX,0x81010100
0072ED90  74 E8                     JZ 0x0072ed7a
0072ED92  8B 47 FC                  MOV EAX,dword ptr [EDI + -0x4]
0072ED95  84 C0                     TEST AL,AL
0072ED97  74 1F                     JZ 0x0072edb8
0072ED99  84 E4                     TEST AH,AH
0072ED9B  74 16                     JZ 0x0072edb3
0072ED9D  A9 00 00 FF 00            TEST EAX,0xff0000
0072EDA2  74 0A                     JZ 0x0072edae
0072EDA4  A9 00 00 00 FF            TEST EAX,0xff000000
0072EDA9  75 CF                     JNZ 0x0072ed7a
LAB_0072edab:
0072EDAB  4F                        DEC EDI
0072EDAC  EB 0D                     JMP 0x0072edbb
LAB_0072edae:
0072EDAE  83 EF 02                  SUB EDI,0x2
0072EDB1  EB 08                     JMP 0x0072edbb
LAB_0072edb3:
0072EDB3  83 EF 03                  SUB EDI,0x3
0072EDB6  EB 03                     JMP 0x0072edbb
LAB_0072edb8:
0072EDB8  83 EF 04                  SUB EDI,0x4
LAB_0072edbb:
0072EDBB  8B 74 24 14               MOV ESI,dword ptr [ESP + 0x14]
0072EDBF  F7 C6 03 00 00 00         TEST ESI,0x3
0072EDC5  75 09                     JNZ 0x0072edd0
0072EDC7  8B D9                     MOV EBX,ECX
0072EDC9  C1 E9 02                  SHR ECX,0x2
0072EDCC  75 4E                     JNZ 0x0072ee1c
0072EDCE  EB 1C                     JMP 0x0072edec
LAB_0072edd0:
0072EDD0  8A 16                     MOV DL,byte ptr [ESI]
0072EDD2  46                        INC ESI
0072EDD3  84 D2                     TEST DL,DL
0072EDD5  74 33                     JZ 0x0072ee0a
0072EDD7  88 17                     MOV byte ptr [EDI],DL
0072EDD9  47                        INC EDI
0072EDDA  49                        DEC ECX
0072EDDB  74 23                     JZ 0x0072ee00
0072EDDD  F7 C6 03 00 00 00         TEST ESI,0x3
0072EDE3  75 EB                     JNZ 0x0072edd0
0072EDE5  8B D9                     MOV EBX,ECX
0072EDE7  C1 E9 02                  SHR ECX,0x2
0072EDEA  75 30                     JNZ 0x0072ee1c
LAB_0072edec:
0072EDEC  8B CB                     MOV ECX,EBX
0072EDEE  83 E1 03                  AND ECX,0x3
0072EDF1  74 0D                     JZ 0x0072ee00
LAB_0072edf3:
0072EDF3  8A 16                     MOV DL,byte ptr [ESI]
0072EDF5  46                        INC ESI
0072EDF6  88 17                     MOV byte ptr [EDI],DL
0072EDF8  47                        INC EDI
0072EDF9  84 D2                     TEST DL,DL
0072EDFB  74 05                     JZ 0x0072ee02
0072EDFD  49                        DEC ECX
0072EDFE  75 F3                     JNZ 0x0072edf3
LAB_0072ee00:
0072EE00  88 0F                     MOV byte ptr [EDI],CL
LAB_0072ee02:
0072EE02  5B                        POP EBX
0072EE03  5E                        POP ESI
LAB_0072ee04:
0072EE04  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
0072EE08  5F                        POP EDI
0072EE09  C3                        RET
LAB_0072ee0a:
0072EE0A  88 17                     MOV byte ptr [EDI],DL
0072EE0C  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
0072EE10  5B                        POP EBX
0072EE11  5E                        POP ESI
0072EE12  5F                        POP EDI
0072EE13  C3                        RET
LAB_0072ee14:
0072EE14  89 17                     MOV dword ptr [EDI],EDX
0072EE16  83 C7 04                  ADD EDI,0x4
0072EE19  49                        DEC ECX
0072EE1A  74 D0                     JZ 0x0072edec
LAB_0072ee1c:
0072EE1C  BA FF FE FE 7E            MOV EDX,0x7efefeff
0072EE21  8B 06                     MOV EAX,dword ptr [ESI]
0072EE23  03 D0                     ADD EDX,EAX
0072EE25  83 F0 FF                  XOR EAX,0xffffffff
0072EE28  33 C2                     XOR EAX,EDX
0072EE2A  8B 16                     MOV EDX,dword ptr [ESI]
0072EE2C  83 C6 04                  ADD ESI,0x4
0072EE2F  A9 00 01 01 81            TEST EAX,0x81010100
0072EE34  74 DE                     JZ 0x0072ee14
0072EE36  84 D2                     TEST DL,DL
0072EE38  74 D0                     JZ 0x0072ee0a
0072EE3A  84 F6                     TEST DH,DH
0072EE3C  74 2A                     JZ 0x0072ee68
0072EE3E  F7 C2 00 00 FF 00         TEST EDX,0xff0000
0072EE44  74 12                     JZ 0x0072ee58
0072EE46  F7 C2 00 00 00 FF         TEST EDX,0xff000000
0072EE4C  75 C6                     JNZ 0x0072ee14
0072EE4E  89 17                     MOV dword ptr [EDI],EDX
0072EE50  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
0072EE54  5B                        POP EBX
0072EE55  5E                        POP ESI
0072EE56  5F                        POP EDI
0072EE57  C3                        RET
LAB_0072ee58:
0072EE58  66 89 17                  MOV word ptr [EDI],DX
0072EE5B  33 D2                     XOR EDX,EDX
0072EE5D  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
0072EE61  88 57 02                  MOV byte ptr [EDI + 0x2],DL
0072EE64  5B                        POP EBX
0072EE65  5E                        POP ESI
0072EE66  5F                        POP EDI
0072EE67  C3                        RET
LAB_0072ee68:
0072EE68  66 89 17                  MOV word ptr [EDI],DX
0072EE6B  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
0072EE6F  5B                        POP EBX
0072EE70  5E                        POP ESI
0072EE71  5F                        POP EDI
0072EE72  C3                        RET

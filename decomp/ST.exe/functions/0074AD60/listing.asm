FUN_0074ad60:
0074AD60  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074AD64  53                        PUSH EBX
0074AD65  55                        PUSH EBP
0074AD66  56                        PUSH ESI
0074AD67  99                        CDQ
0074AD68  BE 10 27 00 00            MOV ESI,0x2710
0074AD6D  57                        PUSH EDI
0074AD6E  F7 FE                     IDIV ESI
0074AD70  BB E8 03 00 00            MOV EBX,0x3e8
0074AD75  BE 18 FC FF FF            MOV ESI,0xfffffc18
0074AD7A  8B F8                     MOV EDI,EAX
0074AD7C  3B FB                     CMP EDI,EBX
0074AD7E  7F 04                     JG 0x0074ad84
0074AD80  3B FE                     CMP EDI,ESI
0074AD82  7D 1E                     JGE 0x0074ada2
LAB_0074ad84:
0074AD84  83 B9 0C 01 00 00 01      CMP dword ptr [ECX + 0x10c],0x1
0074AD8B  7F 04                     JG 0x0074ad91
0074AD8D  33 FF                     XOR EDI,EDI
0074AD8F  EB 11                     JMP 0x0074ada2
LAB_0074ad91:
0074AD91  33 C0                     XOR EAX,EAX
0074AD93  85 FF                     TEST EDI,EDI
0074AD95  0F 9E C0                  SETLE AL
0074AD98  48                        DEC EAX
0074AD99  25 D0 07 00 00            AND EAX,0x7d0
0074AD9E  03 C6                     ADD EAX,ESI
0074ADA0  8B F8                     MOV EDI,EAX
LAB_0074ada2:
0074ADA2  8B A9 0C 01 00 00         MOV EBP,dword ptr [ECX + 0x10c]
0074ADA8  83 FD 01                  CMP EBP,0x1
0074ADAB  7E 1F                     JLE 0x0074adcc
0074ADAD  8B C7                     MOV EAX,EDI
0074ADAF  8D B1 10 01 00 00         LEA ESI,[ECX + 0x110]
0074ADB5  99                        CDQ
0074ADB6  01 06                     ADD dword ptr [ESI],EAX
0074ADB8  8B C7                     MOV EAX,EDI
0074ADBA  11 56 04                  ADC dword ptr [ESI + 0x4],EDX
0074ADBD  0F AF C7                  IMUL EAX,EDI
0074ADC0  8D B1 18 01 00 00         LEA ESI,[ECX + 0x118]
0074ADC6  99                        CDQ
0074ADC7  01 06                     ADD dword ptr [ESI],EAX
0074ADC9  11 56 04                  ADC dword ptr [ESI + 0x4],EDX
LAB_0074adcc:
0074ADCC  83 FD 02                  CMP EBP,0x2
0074ADCF  7E 37                     JLE 0x0074ae08
0074ADD1  8B 44 24 18               MOV EAX,dword ptr [ESP + 0x18]
0074ADD5  BE 10 27 00 00            MOV ESI,0x2710
0074ADDA  99                        CDQ
0074ADDB  F7 FE                     IDIV ESI
0074ADDD  8B F8                     MOV EDI,EAX
0074ADDF  3B FB                     CMP EDI,EBX
0074ADE1  7F 04                     JG 0x0074ade7
0074ADE3  85 FF                     TEST EDI,EDI
0074ADE5  7D 02                     JGE 0x0074ade9
LAB_0074ade7:
0074ADE7  8B FB                     MOV EDI,EBX
LAB_0074ade9:
0074ADE9  8B C7                     MOV EAX,EDI
0074ADEB  8D B1 28 01 00 00         LEA ESI,[ECX + 0x128]
0074ADF1  0F AF C7                  IMUL EAX,EDI
0074ADF4  99                        CDQ
0074ADF5  01 06                     ADD dword ptr [ESI],EAX
0074ADF7  8B C7                     MOV EAX,EDI
0074ADF9  11 56 04                  ADC dword ptr [ESI + 0x4],EDX
0074ADFC  8D B1 30 01 00 00         LEA ESI,[ECX + 0x130]
0074AE02  99                        CDQ
0074AE03  01 06                     ADD dword ptr [ESI],EAX
0074AE05  11 56 04                  ADC dword ptr [ESI + 0x4],EDX
LAB_0074ae08:
0074AE08  45                        INC EBP
0074AE09  5F                        POP EDI
0074AE0A  89 A9 0C 01 00 00         MOV dword ptr [ECX + 0x10c],EBP
0074AE10  5E                        POP ESI
0074AE11  5D                        POP EBP
0074AE12  5B                        POP EBX
0074AE13  C2 08 00                  RET 0x8

FUN_0058eeb0:
0058EEB0  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0058EEB7  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
0058EEBE  53                        PUSH EBX
0058EEBF  56                        PUSH ESI
0058EEC0  8B B1 7F 02 00 00         MOV ESI,dword ptr [ECX + 0x27f]
0058EEC6  57                        PUSH EDI
0058EEC7  48                        DEC EAX
0058EEC8  33 FF                     XOR EDI,EDI
0058EECA  4A                        DEC EDX
0058EECB  3B F7                     CMP ESI,EDI
0058EECD  7C 32                     JL 0x0058ef01
0058EECF  39 B9 87 02 00 00         CMP dword ptr [ECX + 0x287],EDI
0058EED5  7C 2A                     JL 0x0058ef01
0058EED7  8B 99 83 02 00 00         MOV EBX,dword ptr [ECX + 0x283]
0058EEDD  3B DF                     CMP EBX,EDI
0058EEDF  7C 20                     JL 0x0058ef01
0058EEE1  8B B9 8B 02 00 00         MOV EDI,dword ptr [ECX + 0x28b]
0058EEE7  85 FF                     TEST EDI,EDI
0058EEE9  7C 14                     JL 0x0058eeff
0058EEEB  3B F0                     CMP ESI,EAX
0058EEED  7F 10                     JG 0x0058eeff
0058EEEF  39 81 87 02 00 00         CMP dword ptr [ECX + 0x287],EAX
0058EEF5  7F 08                     JG 0x0058eeff
0058EEF7  3B DA                     CMP EBX,EDX
0058EEF9  7F 04                     JG 0x0058eeff
0058EEFB  3B FA                     CMP EDI,EDX
0058EEFD  7E 1C                     JLE 0x0058ef1b
LAB_0058eeff:
0058EEFF  33 FF                     XOR EDI,EDI
LAB_0058ef01:
0058EF01  89 B9 7F 02 00 00         MOV dword ptr [ECX + 0x27f],EDI
0058EF07  89 81 87 02 00 00         MOV dword ptr [ECX + 0x287],EAX
0058EF0D  89 B9 83 02 00 00         MOV dword ptr [ECX + 0x283],EDI
0058EF13  89 91 8B 02 00 00         MOV dword ptr [ECX + 0x28b],EDX
0058EF19  EB 02                     JMP 0x0058ef1d
LAB_0058ef1b:
0058EF1B  33 FF                     XOR EDI,EDI
LAB_0058ef1d:
0058EF1D  8B B1 7F 02 00 00         MOV ESI,dword ptr [ECX + 0x27f]
0058EF23  8B 99 87 02 00 00         MOV EBX,dword ptr [ECX + 0x287]
0058EF29  3B F3                     CMP ESI,EBX
0058EF2B  7C 0C                     JL 0x0058ef39
0058EF2D  89 B9 7F 02 00 00         MOV dword ptr [ECX + 0x27f],EDI
0058EF33  89 81 87 02 00 00         MOV dword ptr [ECX + 0x287],EAX
LAB_0058ef39:
0058EF39  8B B1 83 02 00 00         MOV ESI,dword ptr [ECX + 0x283]
0058EF3F  8B 99 8B 02 00 00         MOV EBX,dword ptr [ECX + 0x28b]
0058EF45  3B F3                     CMP ESI,EBX
0058EF47  7C 0C                     JL 0x0058ef55
0058EF49  89 B9 83 02 00 00         MOV dword ptr [ECX + 0x283],EDI
0058EF4F  89 91 8B 02 00 00         MOV dword ptr [ECX + 0x28b],EDX
LAB_0058ef55:
0058EF55  8B B1 6F 02 00 00         MOV ESI,dword ptr [ECX + 0x26f]
0058EF5B  3B F0                     CMP ESI,EAX
0058EF5D  7F 12                     JG 0x0058ef71
0058EF5F  3B F7                     CMP ESI,EDI
0058EF61  7C 0E                     JL 0x0058ef71
0058EF63  8B B1 73 02 00 00         MOV ESI,dword ptr [ECX + 0x273]
0058EF69  3B F2                     CMP ESI,EDX
0058EF6B  7F 04                     JG 0x0058ef71
0058EF6D  3B F7                     CMP ESI,EDI
0058EF6F  7D 10                     JGE 0x0058ef81
LAB_0058ef71:
0058EF71  D1 F8                     SAR EAX,0x1
0058EF73  D1 FA                     SAR EDX,0x1
0058EF75  89 81 6F 02 00 00         MOV dword ptr [ECX + 0x26f],EAX
0058EF7B  89 91 73 02 00 00         MOV dword ptr [ECX + 0x273],EDX
LAB_0058ef81:
0058EF81  8B 81 77 02 00 00         MOV EAX,dword ptr [ECX + 0x277]
0058EF87  3B C7                     CMP EAX,EDI
0058EF89  5F                        POP EDI
0058EF8A  5E                        POP ESI
0058EF8B  5B                        POP EBX
0058EF8C  7C 05                     JL 0x0058ef93
0058EF8E  83 F8 05                  CMP EAX,0x5
0058EF91  7C 0A                     JL 0x0058ef9d
LAB_0058ef93:
0058EF93  C7 81 77 02 00 00 02 00 00 00  MOV dword ptr [ECX + 0x277],0x2
LAB_0058ef9d:
0058EF9D  C3                        RET

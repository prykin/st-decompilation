STRubbishC::FUN_0062fca0:
0062FCA0  55                        PUSH EBP
0062FCA1  8B EC                     MOV EBP,ESP
0062FCA3  56                        PUSH ESI
0062FCA4  57                        PUSH EDI
0062FCA5  8B F1                     MOV ESI,ECX
0062FCA7  E8 47 1B DD FF            CALL 0x004017f3
0062FCAC  8B F8                     MOV EDI,EAX
0062FCAE  8B 86 E1 01 00 00         MOV EAX,dword ptr [ESI + 0x1e1]
0062FCB4  85 FF                     TEST EDI,EDI
0062FCB6  0F 8C D8 00 00 00         JL 0x0062fd94
0062FCBC  83 F8 05                  CMP EAX,0x5
0062FCBF  7D 77                     JGE 0x0062fd38
0062FCC1  40                        INC EAX
0062FCC2  8B CE                     MOV ECX,ESI
0062FCC4  89 86 E1 01 00 00         MOV dword ptr [ESI + 0x1e1],EAX
0062FCCA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062FCCD  50                        PUSH EAX
0062FCCE  57                        PUSH EDI
0062FCCF  E8 F6 39 DD FF            CALL 0x004036ca
0062FCD4  8A 86 F9 01 00 00         MOV AL,byte ptr [ESI + 0x1f9]
0062FCDA  84 C0                     TEST AL,AL
0062FCDC  74 42                     JZ 0x0062fd20
0062FCDE  8B 84 BE E5 01 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x1e5]
0062FCE5  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0062FCE8  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0062FCEB  51                        PUSH ECX
0062FCEC  52                        PUSH EDX
0062FCED  57                        PUSH EDI
0062FCEE  8B CE                     MOV ECX,ESI
0062FCF0  E8 99 34 DD FF            CALL 0x0040318e
0062FCF5  85 C0                     TEST EAX,EAX
0062FCF7  75 2F                     JNZ 0x0062fd28
0062FCF9  8B 86 E1 01 00 00         MOV EAX,dword ptr [ESI + 0x1e1]
0062FCFF  85 C0                     TEST EAX,EAX
0062FD01  75 12                     JNZ 0x0062fd15
0062FD03  8B CE                     MOV ECX,ESI
0062FD05  E8 7B 5B DD FF            CALL 0x00405885
0062FD0A  5F                        POP EDI
0062FD0B  B8 FF FF 00 00            MOV EAX,0xffff
0062FD10  5E                        POP ESI
0062FD11  5D                        POP EBP
0062FD12  C2 04 00                  RET 0x4
LAB_0062fd15:
0062FD15  57                        PUSH EDI
0062FD16  8B CE                     MOV ECX,ESI
0062FD18  E8 0B 4A DD FF            CALL 0x00404728
0062FD1D  83 CF FF                  OR EDI,0xffffffff
LAB_0062fd20:
0062FD20  8B C7                     MOV EAX,EDI
0062FD22  5F                        POP EDI
0062FD23  5E                        POP ESI
0062FD24  5D                        POP EBP
0062FD25  C2 04 00                  RET 0x4
LAB_0062fd28:
0062FD28  57                        PUSH EDI
0062FD29  8B CE                     MOV ECX,ESI
0062FD2B  E8 8E 4A DD FF            CALL 0x004047be
0062FD30  8B C7                     MOV EAX,EDI
0062FD32  5F                        POP EDI
0062FD33  5E                        POP ESI
0062FD34  5D                        POP EBP
0062FD35  C2 04 00                  RET 0x4
LAB_0062fd38:
0062FD38  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062FD3B  8B 41 28                  MOV EAX,dword ptr [ECX + 0x28]
0062FD3E  C1 E8 10                  SHR EAX,0x10
0062FD41  66 3D 03 00               CMP AX,0x3
0062FD45  74 41                     JZ 0x0062fd88
0062FD47  66 3D 06 00               CMP AX,0x6
0062FD4B  74 3B                     JZ 0x0062fd88
0062FD4D  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
0062FD50  B8 67 66 66 66            MOV EAX,0x66666667
0062FD55  F7 E9                     IMUL ECX
0062FD57  D1 FA                     SAR EDX,0x1
0062FD59  8B C2                     MOV EAX,EDX
0062FD5B  53                        PUSH EBX
0062FD5C  C1 E8 1F                  SHR EAX,0x1f
0062FD5F  03 D0                     ADD EDX,EAX
0062FD61  8D BE E5 01 00 00         LEA EDI,[ESI + 0x1e5]
0062FD67  BB 05 00 00 00            MOV EBX,0x5
LAB_0062fd6c:
0062FD6C  8B 07                     MOV EAX,dword ptr [EDI]
0062FD6E  85 C0                     TEST EAX,EAX
0062FD70  74 0F                     JZ 0x0062fd81
0062FD72  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0062FD75  83 F9 03                  CMP ECX,0x3
0062FD78  74 07                     JZ 0x0062fd81
0062FD7A  83 F9 06                  CMP ECX,0x6
0062FD7D  74 02                     JZ 0x0062fd81
0062FD7F  01 10                     ADD dword ptr [EAX],EDX
LAB_0062fd81:
0062FD81  83 C7 04                  ADD EDI,0x4
0062FD84  4B                        DEC EBX
0062FD85  75 E5                     JNZ 0x0062fd6c
0062FD87  5B                        POP EBX
LAB_0062fd88:
0062FD88  8B 86 E1 01 00 00         MOV EAX,dword ptr [ESI + 0x1e1]
0062FD8E  5F                        POP EDI
0062FD8F  5E                        POP ESI
0062FD90  5D                        POP EBP
0062FD91  C2 04 00                  RET 0x4
LAB_0062fd94:
0062FD94  85 C0                     TEST EAX,EAX
0062FD96  75 88                     JNZ 0x0062fd20
0062FD98  8B CE                     MOV ECX,ESI
0062FD9A  E8 E6 5A DD FF            CALL 0x00405885
0062FD9F  5F                        POP EDI
0062FDA0  B8 FF FF 00 00            MOV EAX,0xffff
0062FDA5  5E                        POP ESI
0062FDA6  5D                        POP EBP
0062FDA7  C2 04 00                  RET 0x4

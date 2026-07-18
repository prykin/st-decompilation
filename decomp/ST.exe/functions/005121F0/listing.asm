FUN_005121f0:
005121F0  55                        PUSH EBP
005121F1  8B EC                     MOV EBP,ESP
005121F3  51                        PUSH ECX
005121F4  A1 18 C1 85 00            MOV EAX,[0x0085c118]
005121F9  53                        PUSH EBX
005121FA  56                        PUSH ESI
005121FB  57                        PUSH EDI
005121FC  8B 00                     MOV EAX,dword ptr [EAX]
005121FE  33 FF                     XOR EDI,EDI
00512200  85 C0                     TEST EAX,EAX
00512202  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00512205  0F 86 DE 00 00 00         JBE 0x005122e9
0051220B  8B 81 C7 01 00 00         MOV EAX,dword ptr [ECX + 0x1c7]
00512211  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00512214  83 C0 09                  ADD EAX,0x9
LAB_00512217:
00512217  8A 50 FF                  MOV DL,byte ptr [EAX + -0x1]
0051221A  8B CA                     MOV ECX,EDX
0051221C  81 E1 FF 00 00 00         AND ECX,0xff
00512222  49                        DEC ECX
00512223  83 F9 0B                  CMP ECX,0xb
00512226  0F 87 AE 00 00 00         JA 0x005122da
0051222C  33 DB                     XOR EBX,EBX
0051222E  8A 99 10 23 51 00         MOV BL,byte ptr [ECX + 0x512310]
switchD_00512234::switchD:
00512234  FF 24 9D 04 23 51 00      JMP dword ptr [EBX*0x4 + 0x512304]
switchD_00512234::caseD_1:
0051223B  39 30                     CMP dword ptr [EAX],ESI
0051223D  0F 85 97 00 00 00         JNZ 0x005122da
00512243  80 FA 03                  CMP DL,0x3
00512246  0F 84 A8 00 00 00         JZ 0x005122f4
0051224C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0051224F  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00512252  3B CA                     CMP ECX,EDX
00512254  0F 84 9A 00 00 00         JZ 0x005122f4
0051225A  EB 7E                     JMP 0x005122da
switchD_00512234::caseD_c:
0051225C  8D 8E 0E FF FF FF         LEA ECX,[ESI + 0xffffff0e]
00512262  83 F9 09                  CMP ECX,0x9
00512265  77 6F                     JA 0x005122d6
00512267  33 D2                     XOR EDX,EDX
00512269  8A 91 2C 23 51 00         MOV DL,byte ptr [ECX + 0x51232c]
switchD_0051226f::switchD:
0051226F  FF 24 95 1C 23 51 00      JMP dword ptr [EDX*0x4 + 0x51231c]
switchD_0051226f::caseD_f2:
00512276  8B 08                     MOV ECX,dword ptr [EAX]
00512278  81 F9 F2 00 00 00         CMP ECX,0xf2
0051227E  74 74                     JZ 0x005122f4
00512280  81 F9 F3 00 00 00         CMP ECX,0xf3
00512286  74 6C                     JZ 0x005122f4
00512288  81 F9 F4 00 00 00         CMP ECX,0xf4
0051228E  74 64                     JZ 0x005122f4
00512290  81 F9 F5 00 00 00         CMP ECX,0xf5
00512296  74 5C                     JZ 0x005122f4
00512298  EB 40                     JMP 0x005122da
switchD_0051226f::caseD_f8:
0051229A  8B 08                     MOV ECX,dword ptr [EAX]
0051229C  81 F9 F8 00 00 00         CMP ECX,0xf8
005122A2  74 50                     JZ 0x005122f4
005122A4  81 F9 F9 00 00 00         CMP ECX,0xf9
005122AA  74 48                     JZ 0x005122f4
005122AC  EB 2C                     JMP 0x005122da
switchD_0051226f::caseD_f6:
005122AE  8B 08                     MOV ECX,dword ptr [EAX]
005122B0  81 F9 F6 00 00 00         CMP ECX,0xf6
005122B6  74 3C                     JZ 0x005122f4
005122B8  81 F9 F7 00 00 00         CMP ECX,0xf7
005122BE  74 34                     JZ 0x005122f4
005122C0  EB 18                     JMP 0x005122da
switchD_0051226f::caseD_fa:
005122C2  8B 08                     MOV ECX,dword ptr [EAX]
005122C4  81 F9 FA 00 00 00         CMP ECX,0xfa
005122CA  74 28                     JZ 0x005122f4
005122CC  81 F9 FB 00 00 00         CMP ECX,0xfb
005122D2  74 20                     JZ 0x005122f4
005122D4  EB 04                     JMP 0x005122da
switchD_0051226f::default:
005122D6  39 30                     CMP dword ptr [EAX],ESI
005122D8  74 1A                     JZ 0x005122f4
switchD_00512234::caseD_5:
005122DA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005122DD  47                        INC EDI
005122DE  83 C0 11                  ADD EAX,0x11
005122E1  3B F9                     CMP EDI,ECX
005122E3  0F 82 2E FF FF FF         JC 0x00512217
LAB_005122e9:
005122E9  5F                        POP EDI
005122EA  5E                        POP ESI
005122EB  33 C0                     XOR EAX,EAX
005122ED  5B                        POP EBX
005122EE  8B E5                     MOV ESP,EBP
005122F0  5D                        POP EBP
005122F1  C2 08 00                  RET 0x8
LAB_005122f4:
005122F4  5F                        POP EDI
005122F5  5E                        POP ESI
005122F6  B8 01 00 00 00            MOV EAX,0x1
005122FB  5B                        POP EBX
005122FC  8B E5                     MOV ESP,EBP
005122FE  5D                        POP EBP
005122FF  C2 08 00                  RET 0x8

FUN_0047bf70:
0047BF70  55                        PUSH EBP
0047BF71  8B EC                     MOV EBP,ESP
0047BF73  56                        PUSH ESI
0047BF74  8B F1                     MOV ESI,ECX
0047BF76  8B 86 63 06 00 00         MOV EAX,dword ptr [ESI + 0x663]
0047BF7C  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
0047BF86  83 F8 07                  CMP EAX,0x7
0047BF89  77 3C                     JA 0x0047bfc7
switchD_0047bf8b::switchD:
0047BF8B  FF 24 85 F4 BF 47 00      JMP dword ptr [EAX*0x4 + 0x47bff4]
switchD_0047bf8b::caseD_0:
0047BF92  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047BF95  8B CE                     MOV ECX,ESI
0047BF97  50                        PUSH EAX
0047BF98  E8 53 7E F8 FF            CALL 0x00403df0
0047BF9D  5E                        POP ESI
0047BF9E  5D                        POP EBP
0047BF9F  C2 04 00                  RET 0x4
switchD_0047bf8b::caseD_2:
0047BFA2  8B CE                     MOV ECX,ESI
0047BFA4  E8 48 82 F8 FF            CALL 0x004041f1
0047BFA9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0047BFAC  51                        PUSH ECX
0047BFAD  8B CE                     MOV ECX,ESI
0047BFAF  E8 3C 7E F8 FF            CALL 0x00403df0
0047BFB4  5E                        POP ESI
0047BFB5  5D                        POP EBP
0047BFB6  C2 04 00                  RET 0x4
switchD_0047bf8b::caseD_3:
0047BFB9  6A 02                     PUSH 0x2
0047BFBB  8B CE                     MOV ECX,ESI
0047BFBD  E8 BE 98 F8 FF            CALL 0x00405880
0047BFC2  5E                        POP ESI
0047BFC3  5D                        POP EBP
0047BFC4  C2 04 00                  RET 0x4
switchD_0047bf8b::default:
0047BFC7  68 2C B5 7A 00            PUSH 0x7ab52c
0047BFCC  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047BFD1  6A 00                     PUSH 0x0
0047BFD3  6A 00                     PUSH 0x0
0047BFD5  68 71 37 00 00            PUSH 0x3771
0047BFDA  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047BFDF  E8 EC 14 23 00            CALL 0x006ad4d0
0047BFE4  83 C4 18                  ADD ESP,0x18
0047BFE7  85 C0                     TEST EAX,EAX
0047BFE9  74 01                     JZ 0x0047bfec
0047BFEB  CC                        INT3
LAB_0047bfec:
0047BFEC  83 C8 FF                  OR EAX,0xffffffff
0047BFEF  5E                        POP ESI
0047BFF0  5D                        POP EBP
0047BFF1  C2 04 00                  RET 0x4

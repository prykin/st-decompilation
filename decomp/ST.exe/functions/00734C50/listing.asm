__positive:
00734C50  55                        PUSH EBP
00734C51  8B EC                     MOV EBP,ESP
00734C53  51                        PUSH ECX
00734C54  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734C57  DD 00                     FLD double ptr [EAX]
00734C59  DC 1D 70 D6 79 00         FCOMP double ptr [0x0079d670]
00734C5F  DF E0                     FNSTSW AX
00734C61  F6 C4 01                  TEST AH,0x1
00734C64  75 09                     JNZ 0x00734c6f
00734C66  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00734C6D  EB 07                     JMP 0x00734c76
LAB_00734c6f:
00734C6F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_00734c76:
00734C76  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00734C79  8B E5                     MOV ESP,EBP
00734C7B  5D                        POP EBP
00734C7C  C3                        RET

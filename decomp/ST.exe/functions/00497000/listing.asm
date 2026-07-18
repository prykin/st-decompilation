FUN_00497000:
00497000  56                        PUSH ESI
00497001  BE 4C B2 7F 00            MOV ESI,0x7fb24c
LAB_00497006:
00497006  83 3E 00                  CMP dword ptr [ESI],0x0
00497009  74 06                     JZ 0x00497011
0049700B  56                        PUSH ESI
0049700C  E8 4F 40 21 00            CALL 0x006ab060
LAB_00497011:
00497011  83 C6 04                  ADD ESI,0x4
00497014  81 FE 70 B2 7F 00         CMP ESI,0x7fb270
0049701A  7C EA                     JL 0x00497006
0049701C  5E                        POP ESI
0049701D  C3                        RET

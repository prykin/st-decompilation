FUN_00529fe0:
00529FE0  55                        PUSH EBP
00529FE1  8B EC                     MOV EBP,ESP
00529FE3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00529FE6  33 C0                     XOR EAX,EAX
00529FE8  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
00529FEB  83 F9 03                  CMP ECX,0x3
00529FEE  77 17                     JA 0x0052a007
switchD_00529ff0::switchD:
00529FF0  FF 24 8D 0C A0 52 00      JMP dword ptr [ECX*0x4 + 0x52a00c]
switchD_00529ff0::caseD_1:
00529FF7  33 C0                     XOR EAX,EAX
00529FF9  5D                        POP EBP
00529FFA  C3                        RET
switchD_00529ff0::caseD_2:
00529FFB  B8 01 00 00 00            MOV EAX,0x1
0052A000  5D                        POP EBP
0052A001  C3                        RET
switchD_00529ff0::caseD_0:
0052A002  B8 02 00 00 00            MOV EAX,0x2
switchD_00529ff0::default:
0052A007  5D                        POP EBP
0052A008  C3                        RET

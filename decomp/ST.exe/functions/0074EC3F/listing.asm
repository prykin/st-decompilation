FUN_0074ec3f:
0074EC3F  55                        PUSH EBP
0074EC40  8B EC                     MOV EBP,ESP
0074EC42  D9 EE                     FLDZ
0074EC44  56                        PUSH ESI
0074EC45  DC 5D 0C                  FCOMP double ptr [EBP + 0xc]
0074EC48  DF E0                     FNSTSW AX
0074EC4A  9E                        SAHF
0074EC4B  75 07                     JNZ 0x0074ec54
0074EC4D  B8 57 00 07 80            MOV EAX,0x80070057
0074EC52  EB 2E                     JMP 0x0074ec82
LAB_0074ec54:
0074EC54  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074EC57  8D 45 08                  LEA EAX,[EBP + 0x8]
0074EC5A  50                        PUSH EAX
0074EC5B  E8 7F FC FF FF            CALL 0x0074e8df
0074EC60  85 C0                     TEST EAX,EAX
0074EC62  7C 1E                     JL 0x0074ec82
0074EC64  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EC67  DD 45 0C                  FLD double ptr [EBP + 0xc]
0074EC6A  8B 08                     MOV ECX,dword ptr [EAX]
0074EC6C  51                        PUSH ECX
0074EC6D  51                        PUSH ECX
0074EC6E  DD 1C 24                  FSTP double ptr [ESP]
0074EC71  50                        PUSH EAX
0074EC72  FF 51 44                  CALL dword ptr [ECX + 0x44]
0074EC75  8B F0                     MOV ESI,EAX
0074EC77  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EC7A  50                        PUSH EAX
0074EC7B  8B 08                     MOV ECX,dword ptr [EAX]
0074EC7D  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074EC80  8B C6                     MOV EAX,ESI
LAB_0074ec82:
0074EC82  5E                        POP ESI
0074EC83  5D                        POP EBP
0074EC84  C2 0C 00                  RET 0xc

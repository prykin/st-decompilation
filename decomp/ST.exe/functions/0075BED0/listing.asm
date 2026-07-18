FUN_0075bed0:
0075BED0  55                        PUSH EBP
0075BED1  8B EC                     MOV EBP,ESP
0075BED3  53                        PUSH EBX
0075BED4  56                        PUSH ESI
0075BED5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075BED8  6A 40                     PUSH 0x40
0075BEDA  6A 01                     PUSH 0x1
0075BEDC  56                        PUSH ESI
0075BEDD  8B 06                     MOV EAX,dword ptr [ESI]
0075BEDF  FF 10                     CALL dword ptr [EAX]
0075BEE1  89 86 AA 01 00 00         MOV dword ptr [ESI + 0x1aa],EAX
0075BEE7  C7 00 40 BF 75 00         MOV dword ptr [EAX],0x75bf40
0075BEED  83 C0 2C                  ADD EAX,0x2c
0075BEF0  33 C9                     XOR ECX,ECX
0075BEF2  89 08                     MOV dword ptr [EAX],ECX
0075BEF4  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0075BEF7  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0075BEFA  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
0075BEFD  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0075BF00  8B 16                     MOV EDX,dword ptr [ESI]
0075BF02  C1 E0 08                  SHL EAX,0x8
0075BF05  50                        PUSH EAX
0075BF06  6A 01                     PUSH 0x1
0075BF08  56                        PUSH ESI
0075BF09  FF 12                     CALL dword ptr [EDX]
0075BF0B  89 86 98 00 00 00         MOV dword ptr [ESI + 0x98],EAX
0075BF11  8B D0                     MOV EDX,EAX
0075BF13  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0075BF16  33 DB                     XOR EBX,EBX
0075BF18  85 C0                     TEST EAX,EAX
0075BF1A  7E 1C                     JLE 0x0075bf38
0075BF1C  57                        PUSH EDI
LAB_0075bf1d:
0075BF1D  B9 40 00 00 00            MOV ECX,0x40
0075BF22  83 C8 FF                  OR EAX,0xffffffff
0075BF25  8B FA                     MOV EDI,EDX
0075BF27  81 C2 00 01 00 00         ADD EDX,0x100
0075BF2D  F3 AB                     STOSD.REP ES:EDI
0075BF2F  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0075BF32  43                        INC EBX
0075BF33  3B D8                     CMP EBX,EAX
0075BF35  7C E6                     JL 0x0075bf1d
0075BF37  5F                        POP EDI
LAB_0075bf38:
0075BF38  5E                        POP ESI
0075BF39  5B                        POP EBX
0075BF3A  5D                        POP EBP
0075BF3B  C2 04 00                  RET 0x4

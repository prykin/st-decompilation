FUN_0075de90:
0075DE90  55                        PUSH EBP
0075DE91  8B EC                     MOV EBP,ESP
0075DE93  56                        PUSH ESI
0075DE94  57                        PUSH EDI
0075DE95  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075DE98  6A 30                     PUSH 0x30
0075DE9A  6A 01                     PUSH 0x1
0075DE9C  57                        PUSH EDI
0075DE9D  8B 07                     MOV EAX,dword ptr [EDI]
0075DE9F  FF 10                     CALL dword ptr [EAX]
0075DEA1  8B F0                     MOV ESI,EAX
0075DEA3  33 C0                     XOR EAX,EAX
0075DEA5  89 B7 B2 01 00 00         MOV dword ptr [EDI + 0x1b2],ESI
0075DEAB  C7 06 E0 DF 75 00         MOV dword ptr [ESI],0x75dfe0
0075DEB1  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
0075DEB4  8B 4F 70                  MOV ECX,dword ptr [EDI + 0x70]
0075DEB7  0F AF 4F 68               IMUL ECX,dword ptr [EDI + 0x68]
0075DEBB  89 4E 28                  MOV dword ptr [ESI + 0x28],ECX
0075DEBE  8B 8F 26 01 00 00         MOV ECX,dword ptr [EDI + 0x126]
0075DEC4  83 F9 02                  CMP ECX,0x2
0075DEC7  75 29                     JNZ 0x0075def2
0075DEC9  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
0075DECC  C7 46 04 00 E0 75 00      MOV dword ptr [ESI + 0x4],0x75e000
0075DED3  C7 46 0C 60 E2 75 00      MOV dword ptr [ESI + 0xc],0x75e260
0075DEDA  8B 17                     MOV EDX,dword ptr [EDI]
0075DEDC  50                        PUSH EAX
0075DEDD  6A 01                     PUSH 0x1
0075DEDF  57                        PUSH EDI
0075DEE0  FF 52 04                  CALL dword ptr [EDX + 0x4]
0075DEE3  57                        PUSH EDI
0075DEE4  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
0075DEE7  E8 24 00 00 00            CALL 0x0075df10
0075DEEC  5F                        POP EDI
0075DEED  5E                        POP ESI
0075DEEE  5D                        POP EBP
0075DEEF  C2 04 00                  RET 0x4
LAB_0075def2:
0075DEF2  57                        PUSH EDI
0075DEF3  C7 46 04 C0 E0 75 00      MOV dword ptr [ESI + 0x4],0x75e0c0
0075DEFA  C7 46 0C 00 E1 75 00      MOV dword ptr [ESI + 0xc],0x75e100
0075DF01  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
0075DF04  E8 07 00 00 00            CALL 0x0075df10
0075DF09  5F                        POP EDI
0075DF0A  5E                        POP ESI
0075DF0B  5D                        POP EBP
0075DF0C  C2 04 00                  RET 0x4

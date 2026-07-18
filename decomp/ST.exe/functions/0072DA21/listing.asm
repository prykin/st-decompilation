FUN_0072da21:
0072DA21  55                        PUSH EBP
0072DA22  8B 4C 24 08               MOV ECX,dword ptr [ESP + 0x8]
0072DA26  8B 29                     MOV EBP,dword ptr [ECX]
0072DA28  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
0072DA2B  50                        PUSH EAX
0072DA2C  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0072DA2F  50                        PUSH EAX
0072DA30  E8 79 FE FF FF            CALL 0x0072d8ae
0072DA35  83 C4 08                  ADD ESP,0x8
0072DA38  5D                        POP EBP
0072DA39  C2 04 00                  RET 0x4

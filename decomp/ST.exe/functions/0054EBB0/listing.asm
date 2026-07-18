FUN_0054ebb0:
0054EBB0  55                        PUSH EBP
0054EBB1  8B EC                     MOV EBP,ESP
0054EBB3  53                        PUSH EBX
0054EBB4  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0054EBB7  56                        PUSH ESI
0054EBB8  8B F1                     MOV ESI,ECX
0054EBBA  57                        PUSH EDI
0054EBBB  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0054EBBE  8B 46 41                  MOV EAX,dword ptr [ESI + 0x41]
0054EBC1  53                        PUSH EBX
0054EBC2  89 07                     MOV dword ptr [EDI],EAX
0054EBC4  8B 56 41                  MOV EDX,dword ptr [ESI + 0x41]
0054EBC7  42                        INC EDX
0054EBC8  57                        PUSH EDI
0054EBC9  89 56 41                  MOV dword ptr [ESI + 0x41],EDX
0054EBCC  E8 2B 5A EB FF            CALL 0x004045fc
0054EBD1  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0054EBD7  89 46 7F                  MOV dword ptr [ESI + 0x7f],EAX
0054EBDA  8B 0F                     MOV ECX,dword ptr [EDI]
0054EBDC  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0054EBE2  51                        PUSH ECX
0054EBE3  6A 01                     PUSH 0x1
0054EBE5  53                        PUSH EBX
0054EBE6  57                        PUSH EDI
0054EBE7  6A 31                     PUSH 0x31
0054EBE9  6A 00                     PUSH 0x0
0054EBEB  52                        PUSH EDX
0054EBEC  E8 6F 67 1C 00            CALL 0x00715360
0054EBF1  83 C4 1C                  ADD ESP,0x1c
0054EBF4  5F                        POP EDI
0054EBF5  5E                        POP ESI
0054EBF6  5B                        POP EBX
0054EBF7  5D                        POP EBP
0054EBF8  C2 08 00                  RET 0x8

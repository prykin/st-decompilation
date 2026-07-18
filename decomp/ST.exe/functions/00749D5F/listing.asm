FUN_00749d5f:
00749D5F  83 EC 1C                  SUB ESP,0x1c
00749D62  56                        PUSH ESI
00749D63  57                        PUSH EDI
00749D64  8B F1                     MOV ESI,ECX
00749D66  33 FF                     XOR EDI,EDI
LAB_00749d68:
00749D68  39 BE B4 00 00 00         CMP dword ptr [ESI + 0xb4],EDI
00749D6E  74 19                     JZ 0x00749d89
00749D70  57                        PUSH EDI
00749D71  57                        PUSH EDI
00749D72  57                        PUSH EDI
00749D73  8D 44 24 14               LEA EAX,[ESP + 0x14]
00749D77  57                        PUSH EDI
00749D78  50                        PUSH EAX
00749D79  FF 15 FC BD 85 00         CALL dword ptr [0x0085bdfc]
00749D7F  6A 01                     PUSH 0x1
00749D81  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
00749D87  EB DF                     JMP 0x00749d68
LAB_00749d89:
00749D89  6A 08                     PUSH 0x8
00749D8B  FF 15 D4 BD 85 00         CALL dword ptr [0x0085bdd4]
00749D91  C1 E8 10                  SHR EAX,0x10
00749D94  A8 08                     TEST AL,0x8
00749D96  74 10                     JZ 0x00749da8
00749D98  57                        PUSH EDI
00749D99  57                        PUSH EDI
00749D9A  57                        PUSH EDI
00749D9B  FF 15 D4 BC 85 00         CALL dword ptr [0x0085bcd4]
00749DA1  50                        PUSH EAX
00749DA2  FF 15 24 BE 85 00         CALL dword ptr [0x0085be24]
LAB_00749da8:
00749DA8  5F                        POP EDI
00749DA9  5E                        POP ESI
00749DAA  83 C4 1C                  ADD ESP,0x1c
00749DAD  C3                        RET

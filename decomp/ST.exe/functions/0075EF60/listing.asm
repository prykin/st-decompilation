FUN_0075ef60:
0075EF60  55                        PUSH EBP
0075EF61  8B EC                     MOV EBP,ESP
0075EF63  53                        PUSH EBX
0075EF64  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075EF67  56                        PUSH ESI
0075EF68  8B CB                     MOV ECX,EBX
0075EF6A  57                        PUSH EDI
0075EF6B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075EF6E  C1 E1 05                  SHL ECX,0x5
0075EF71  8B 07                     MOV EAX,dword ptr [EDI]
0075EF73  51                        PUSH ECX
0075EF74  6A 01                     PUSH 0x1
0075EF76  57                        PUSH EDI
0075EF77  FF 10                     CALL dword ptr [EAX]
0075EF79  8B F0                     MOV ESI,EAX
0075EF7B  33 C0                     XOR EAX,EAX
0075EF7D  B9 1F 00 00 00            MOV ECX,0x1f
0075EF82  56                        PUSH ESI
0075EF83  57                        PUSH EDI
0075EF84  89 06                     MOV dword ptr [ESI],EAX
0075EF86  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
0075EF89  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
0075EF8C  C7 46 0C 3F 00 00 00      MOV dword ptr [ESI + 0xc],0x3f
0075EF93  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
0075EF96  89 4E 14                  MOV dword ptr [ESI + 0x14],ECX
0075EF99  E8 42 00 00 00            CALL 0x0075efe0
0075EF9E  53                        PUSH EBX
0075EF9F  6A 01                     PUSH 0x1
0075EFA1  56                        PUSH ESI
0075EFA2  57                        PUSH EDI
0075EFA3  E8 48 04 00 00            CALL 0x0075f3f0
0075EFA8  33 DB                     XOR EBX,EBX
0075EFAA  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075EFAD  85 C0                     TEST EAX,EAX
0075EFAF  7E 1F                     JLE 0x0075efd0
LAB_0075efb1:
0075EFB1  53                        PUSH EBX
0075EFB2  56                        PUSH ESI
0075EFB3  57                        PUSH EDI
0075EFB4  E8 D7 05 00 00            CALL 0x0075f590
0075EFB9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075EFBC  43                        INC EBX
0075EFBD  83 C6 20                  ADD ESI,0x20
0075EFC0  3B D8                     CMP EBX,EAX
0075EFC2  7C ED                     JL 0x0075efb1
0075EFC4  8B D0                     MOV EDX,EAX
0075EFC6  89 57 7C                  MOV dword ptr [EDI + 0x7c],EDX
0075EFC9  5F                        POP EDI
0075EFCA  5E                        POP ESI
0075EFCB  5B                        POP EBX
0075EFCC  5D                        POP EBP
0075EFCD  C2 08 00                  RET 0x8
LAB_0075efd0:
0075EFD0  89 47 7C                  MOV dword ptr [EDI + 0x7c],EAX
0075EFD3  5F                        POP EDI
0075EFD4  5E                        POP ESI
0075EFD5  5B                        POP EBX
0075EFD6  5D                        POP EBP
0075EFD7  C2 08 00                  RET 0x8

FUN_0042a780:
0042A780  55                        PUSH EBP
0042A781  8B EC                     MOV EBP,ESP
0042A783  53                        PUSH EBX
0042A784  56                        PUSH ESI
0042A785  57                        PUSH EDI
0042A786  6A 64                     PUSH 0x64
0042A788  6A 04                     PUSH 0x4
0042A78A  6A 64                     PUSH 0x64
0042A78C  6A 00                     PUSH 0x0
0042A78E  E8 FD 3A 28 00            CALL 0x006ae290
0042A793  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0042A796  8B F0                     MOV ESI,EAX
0042A798  33 DB                     XOR EBX,EBX
0042A79A  8B 07                     MOV EAX,dword ptr [EDI]
0042A79C  8B 88 55 04 00 00         MOV ECX,dword ptr [EAX + 0x455]
0042A7A2  85 C9                     TEST ECX,ECX
0042A7A4  7E 61                     JLE 0x0042a807
LAB_0042a7a6:
0042A7A6  8B BC 98 59 04 00 00      MOV EDI,dword ptr [EAX + EBX*0x4 + 0x459]
0042A7AD  85 FF                     TEST EDI,EDI
0042A7AF  74 46                     JZ 0x0042a7f7
0042A7B1  8B 47 3C                  MOV EAX,dword ptr [EDI + 0x3c]
0042A7B4  50                        PUSH EAX
0042A7B5  E8 D6 B6 27 00            CALL 0x006a5e90
0042A7BA  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0042A7BD  C7 46 04 00 00 00 00      MOV dword ptr [ESI + 0x4],0x0
LAB_0042a7c4:
0042A7C4  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0042A7C7  3B CA                     CMP ECX,EDX
0042A7C9  73 1C                     JNC 0x0042a7e7
0042A7CB  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0042A7CE  0F AF C1                  IMUL EAX,ECX
0042A7D1  03 46 1C                  ADD EAX,dword ptr [ESI + 0x1c]
0042A7D4  8D 49 01                  LEA ECX,[ECX + 0x1]
0042A7D7  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
0042A7DA  74 0B                     JZ 0x0042a7e7
0042A7DC  8B 4F 40                  MOV ECX,dword ptr [EDI + 0x40]
0042A7DF  3B 08                     CMP ECX,dword ptr [EAX]
0042A7E1  75 E1                     JNZ 0x0042a7c4
0042A7E3  85 C0                     TEST EAX,EAX
0042A7E5  75 10                     JNZ 0x0042a7f7
LAB_0042a7e7:
0042A7E7  83 C7 40                  ADD EDI,0x40
0042A7EA  57                        PUSH EDI
0042A7EB  56                        PUSH ESI
0042A7EC  E8 CF 39 28 00            CALL 0x006ae1c0
0042A7F1  57                        PUSH EDI
0042A7F2  E8 69 08 28 00            CALL 0x006ab060
LAB_0042a7f7:
0042A7F7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0042A7FA  43                        INC EBX
0042A7FB  8B 02                     MOV EAX,dword ptr [EDX]
0042A7FD  3B 98 55 04 00 00         CMP EBX,dword ptr [EAX + 0x455]
0042A803  7C A1                     JL 0x0042a7a6
0042A805  8B FA                     MOV EDI,EDX
LAB_0042a807:
0042A807  56                        PUSH ESI
0042A808  E8 03 39 28 00            CALL 0x006ae110
0042A80D  8B 07                     MOV EAX,dword ptr [EDI]
0042A80F  50                        PUSH EAX
0042A810  E8 1A 98 FD FF            CALL 0x0040402f
0042A815  57                        PUSH EDI
0042A816  E8 55 53 2C 00            CALL 0x006efb70
0042A81B  83 C4 08                  ADD ESP,0x8
0042A81E  5F                        POP EDI
0042A81F  5E                        POP ESI
0042A820  5B                        POP EBX
0042A821  5D                        POP EBP
0042A822  C3                        RET

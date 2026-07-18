FUN_004cd6f0:
004CD6F0  55                        PUSH EBP
004CD6F1  8B EC                     MOV EBP,ESP
004CD6F3  51                        PUSH ECX
004CD6F4  56                        PUSH ESI
004CD6F5  8B F1                     MOV ESI,ECX
004CD6F7  57                        PUSH EDI
004CD6F8  33 FF                     XOR EDI,EDI
004CD6FA  8B 86 24 05 00 00         MOV EAX,dword ptr [ESI + 0x524]
004CD700  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004CD703  3B C7                     CMP EAX,EDI
004CD705  7E 53                     JLE 0x004cd75a
004CD707  53                        PUSH EBX
004CD708  8D 9E D0 04 00 00         LEA EBX,[ESI + 0x4d0]
LAB_004cd70e:
004CD70E  8B 0B                     MOV ECX,dword ptr [EBX]
004CD710  8D 45 FC                  LEA EAX,[EBP + -0x4]
004CD713  50                        PUSH EAX
004CD714  51                        PUSH ECX
004CD715  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004CD71B  E8 B0 8B 21 00            CALL 0x006e62d0
004CD720  85 C0                     TEST EAX,EAX
004CD722  75 15                     JNZ 0x004cd739
004CD724  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CD727  50                        PUSH EAX
004CD728  89 81 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EAX
004CD72E  89 81 D3 05 00 00         MOV dword ptr [ECX + 0x5d3],EAX
004CD734  E8 F5 3C F3 FF            CALL 0x0040142e
LAB_004cd739:
004CD739  8B 86 24 05 00 00         MOV EAX,dword ptr [ESI + 0x524]
004CD73F  47                        INC EDI
004CD740  83 C3 04                  ADD EBX,0x4
004CD743  3B F8                     CMP EDI,EAX
004CD745  7C C7                     JL 0x004cd70e
004CD747  5B                        POP EBX
004CD748  C7 86 24 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x524],0x0
004CD752  5F                        POP EDI
004CD753  33 C0                     XOR EAX,EAX
004CD755  5E                        POP ESI
004CD756  8B E5                     MOV ESP,EBP
004CD758  5D                        POP EBP
004CD759  C3                        RET
LAB_004cd75a:
004CD75A  89 BE 24 05 00 00         MOV dword ptr [ESI + 0x524],EDI
004CD760  5F                        POP EDI
004CD761  33 C0                     XOR EAX,EAX
004CD763  5E                        POP ESI
004CD764  8B E5                     MOV ESP,EBP
004CD766  5D                        POP EBP
004CD767  C3                        RET

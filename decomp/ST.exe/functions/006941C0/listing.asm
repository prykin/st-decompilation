FUN_006941c0:
006941C0  56                        PUSH ESI
006941C1  57                        PUSH EDI
006941C2  8B F9                     MOV EDI,ECX
006941C4  33 F6                     XOR ESI,ESI
LAB_006941c6:
006941C6  56                        PUSH ESI
006941C7  8B CF                     MOV ECX,EDI
006941C9  E8 1F 09 D7 FF            CALL 0x00404aed
006941CE  85 C0                     TEST EAX,EAX
006941D0  74 0C                     JZ 0x006941de
006941D2  46                        INC ESI
006941D3  83 FE 08                  CMP ESI,0x8
006941D6  7C EE                     JL 0x006941c6
006941D8  5F                        POP EDI
006941D9  83 C8 FF                  OR EAX,0xffffffff
006941DC  5E                        POP ESI
006941DD  C3                        RET
LAB_006941de:
006941DE  8B C6                     MOV EAX,ESI
006941E0  5F                        POP EDI
006941E1  5E                        POP ESI
006941E2  C3                        RET

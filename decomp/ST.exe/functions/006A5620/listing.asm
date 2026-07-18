FUN_006a5620:
006A5620  55                        PUSH EBP
006A5621  8B EC                     MOV EBP,ESP
006A5623  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A5626  56                        PUSH ESI
006A5627  85 C0                     TEST EAX,EAX
006A5629  75 03                     JNZ 0x006a562e
006A562B  5E                        POP ESI
006A562C  5D                        POP EBP
006A562D  C3                        RET
LAB_006a562e:
006A562E  8D 70 E0                  LEA ESI,[EAX + -0x20]
006A5631  6A 01                     PUSH 0x1
006A5633  6A 20                     PUSH 0x20
006A5635  56                        PUSH ESI
006A5636  E8 A7 D7 D5 FF            CALL 0x00402de2
006A563B  83 C4 0C                  ADD ESP,0xc
006A563E  85 C0                     TEST EAX,EAX
006A5640  75 03                     JNZ 0x006a5645
006A5642  5E                        POP ESI
006A5643  5D                        POP EBP
006A5644  C3                        RET
LAB_006a5645:
006A5645  56                        PUSH ESI
006A5646  E8 95 C4 08 00            CALL 0x00731ae0
006A564B  83 C4 04                  ADD ESP,0x4
006A564E  85 C0                     TEST EAX,EAX
006A5650  74 0D                     JZ 0x006a565f
006A5652  56                        PUSH ESI
006A5653  50                        PUSH EAX
006A5654  E8 E7 C4 08 00            CALL 0x00731b40
006A5659  83 C4 08                  ADD ESP,0x8
006A565C  5E                        POP ESI
006A565D  5D                        POP EBP
006A565E  C3                        RET
LAB_006a565f:
006A565F  A1 54 71 85 00            MOV EAX,[0x00857154]
006A5664  F6 C4 80                  TEST AH,0x80
006A5667  74 08                     JZ 0x006a5671
006A5669  B8 01 00 00 00            MOV EAX,0x1
006A566E  5E                        POP ESI
006A566F  5D                        POP EBP
006A5670  C3                        RET
LAB_006a5671:
006A5671  A1 C4 A5 85 00            MOV EAX,[0x0085a5c4]
006A5676  56                        PUSH ESI
006A5677  6A 00                     PUSH 0x0
006A5679  50                        PUSH EAX
006A567A  FF 15 9C BB 85 00         CALL dword ptr [0x0085bb9c]
006A5680  5E                        POP ESI
006A5681  5D                        POP EBP
006A5682  C3                        RET

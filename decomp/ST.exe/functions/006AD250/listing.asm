FUN_006ad250:
006AD250  A1 B4 4E 85 00            MOV EAX,[0x00854eb4]
006AD255  85 C0                     TEST EAX,EAX
006AD257  74 13                     JZ 0x006ad26c
006AD259  50                        PUSH EAX
006AD25A  E8 31 18 08 00            CALL 0x0072ea90
006AD25F  83 C4 04                  ADD ESP,0x4
006AD262  C7 05 B4 4E 85 00 00 00 00 00  MOV dword ptr [0x00854eb4],0x0
LAB_006ad26c:
006AD26C  C3                        RET

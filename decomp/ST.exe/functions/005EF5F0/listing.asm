FUN_005ef5f0:
005EF5F0  56                        PUSH ESI
005EF5F1  8B F1                     MOV ESI,ECX
005EF5F3  B8 89 88 88 88            MOV EAX,0x88888889
005EF5F8  57                        PUSH EDI
005EF5F9  0F BF 4E 6C               MOVSX ECX,word ptr [ESI + 0x6c]
005EF5FD  F7 E9                     IMUL ECX
005EF5FF  03 D1                     ADD EDX,ECX
005EF601  B9 18 00 00 00            MOV ECX,0x18
005EF606  C1 FA 03                  SAR EDX,0x3
005EF609  8B C2                     MOV EAX,EDX
005EF60B  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
005EF611  C1 E8 1F                  SHR EAX,0x1f
005EF614  03 D0                     ADD EDX,EAX
005EF616  B8 18 00 00 00            MOV EAX,0x18
005EF61B  2B C2                     SUB EAX,EDX
005EF61D  99                        CDQ
005EF61E  F7 F9                     IDIV ECX
005EF620  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
005EF626  B8 04 00 00 00            MOV EAX,0x4
005EF62B  2B C1                     SUB EAX,ECX
005EF62D  B9 18 00 00 00            MOV ECX,0x18
005EF632  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005EF635  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
005EF638  99                        CDQ
005EF639  F7 F9                     IDIV ECX
005EF63B  8B CF                     MOV ECX,EDI
005EF63D  52                        PUSH EDX
005EF63E  6A 0E                     PUSH 0xe
005EF640  E8 1F 1A E1 FF            CALL 0x00401064
005EF645  0F BF 4E 6C               MOVSX ECX,word ptr [ESI + 0x6c]
005EF649  B8 89 88 88 88            MOV EAX,0x88888889
005EF64E  F7 E9                     IMUL ECX
005EF650  03 D1                     ADD EDX,ECX
005EF652  B9 18 00 00 00            MOV ECX,0x18
005EF657  C1 FA 03                  SAR EDX,0x3
005EF65A  8B C2                     MOV EAX,EDX
005EF65C  C1 E8 1F                  SHR EAX,0x1f
005EF65F  03 D0                     ADD EDX,EAX
005EF661  B8 18 00 00 00            MOV EAX,0x18
005EF666  2B C2                     SUB EAX,EDX
005EF668  99                        CDQ
005EF669  F7 F9                     IDIV ECX
005EF66B  8B CF                     MOV ECX,EDI
005EF66D  52                        PUSH EDX
005EF66E  6A 0E                     PUSH 0xe
005EF670  E8 89 5C E1 FF            CALL 0x004052fe
005EF675  6A 0E                     PUSH 0xe
005EF677  8B CF                     MOV ECX,EDI
005EF679  E8 3E 3A E1 FF            CALL 0x004030bc
005EF67E  5F                        POP EDI
005EF67F  5E                        POP ESI
005EF680  C3                        RET

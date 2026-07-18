FUN_00446a70:
00446A70  56                        PUSH ESI
00446A71  57                        PUSH EDI
00446A72  8B F9                     MOV EDI,ECX
00446A74  33 F6                     XOR ESI,ESI
LAB_00446a76:
00446A76  56                        PUSH ESI
00446A77  8B CF                     MOV ECX,EDI
00446A79  E8 17 B6 FB FF            CALL 0x00402095
00446A7E  46                        INC ESI
00446A7F  83 FE 08                  CMP ESI,0x8
00446A82  7C F2                     JL 0x00446a76
00446A84  5F                        POP EDI
00446A85  5E                        POP ESI
00446A86  C3                        RET

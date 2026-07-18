__fptrap:
007406A0  55                        PUSH EBP
007406A1  8B EC                     MOV EBP,ESP
007406A3  6A 02                     PUSH 0x2
007406A5  E8 A6 31 FF FF            CALL 0x00733850
007406AA  83 C4 04                  ADD ESP,0x4
007406AD  5D                        POP EBP
007406AE  C3                        RET

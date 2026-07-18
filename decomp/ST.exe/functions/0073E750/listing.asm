FUN_0073e750:
0073E750  55                        PUSH EBP
0073E751  8B EC                     MOV EBP,ESP
0073E753  E8 28 57 FF FF            CALL 0x00733e80
0073E758  0F BE 05 88 71 85 00      MOVSX EAX,byte ptr [0x00857188]
0073E75F  85 C0                     TEST EAX,EAX
0073E761  74 05                     JZ 0x0073e768
0073E763  E8 38 5F 00 00            CALL 0x007446a0
LAB_0073e768:
0073E768  5D                        POP EBP
0073E769  C3                        RET

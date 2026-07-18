FUN_00674ce0:
00674CE0  A1 6C 19 81 00            MOV EAX,[0x0081196c]
00674CE5  85 C0                     TEST EAX,EAX
00674CE7  74 1C                     JZ 0x00674d05
00674CE9  A1 70 19 81 00            MOV EAX,[0x00811970]
00674CEE  85 C0                     TEST EAX,EAX
00674CF0  74 13                     JZ 0x00674d05
00674CF2  50                        PUSH EAX
00674CF3  E8 98 9D 0B 00            CALL 0x0072ea90
00674CF8  83 C4 04                  ADD ESP,0x4
00674CFB  C7 05 70 19 81 00 00 00 00 00  MOV dword ptr [0x00811970],0x0
LAB_00674d05:
00674D05  C3                        RET

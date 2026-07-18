FUN_00674eb0:
00674EB0  A1 74 19 81 00            MOV EAX,[0x00811974]
00674EB5  85 C0                     TEST EAX,EAX
00674EB7  74 1C                     JZ 0x00674ed5
00674EB9  A1 78 19 81 00            MOV EAX,[0x00811978]
00674EBE  85 C0                     TEST EAX,EAX
00674EC0  74 13                     JZ 0x00674ed5
00674EC2  50                        PUSH EAX
00674EC3  E8 C8 9B 0B 00            CALL 0x0072ea90
00674EC8  83 C4 04                  ADD ESP,0x4
00674ECB  C7 05 78 19 81 00 00 00 00 00  MOV dword ptr [0x00811978],0x0
LAB_00674ed5:
00674ED5  C3                        RET

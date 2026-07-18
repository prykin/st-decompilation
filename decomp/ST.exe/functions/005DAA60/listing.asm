FUN_005daa60:
005DAA60  A1 64 17 81 00            MOV EAX,[0x00811764]
005DAA65  85 C0                     TEST EAX,EAX
005DAA67  74 06                     JZ 0x005daa6f
005DAA69  50                        PUSH EAX
005DAA6A  E8 D1 CC 0D 00            CALL 0x006b7740
LAB_005daa6f:
005DAA6F  C7 05 64 17 81 00 00 00 00 00  MOV dword ptr [0x00811764],0x0
005DAA79  C3                        RET

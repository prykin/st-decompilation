FUN_005dac60:
005DAC60  A1 64 17 81 00            MOV EAX,[0x00811764]
005DAC65  85 C0                     TEST EAX,EAX
005DAC67  74 06                     JZ 0x005dac6f
005DAC69  50                        PUSH EAX
005DAC6A  E8 61 CA 0D 00            CALL 0x006b76d0
LAB_005dac6f:
005DAC6F  C3                        RET

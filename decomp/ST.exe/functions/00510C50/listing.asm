CreateHelpPanel:
00510C50  68 54 02 00 00            PUSH 0x254
00510C55  E8 76 F8 19 00            CALL 0x006b04d0
00510C5A  85 C0                     TEST EAX,EAX
00510C5C  74 07                     JZ 0x00510c65
00510C5E  8B C8                     MOV ECX,EAX
00510C60  E9 D0 23 EF FF            JMP 0x00403035
LAB_00510c65:
00510C65  33 C0                     XOR EAX,EAX
00510C67  C3                        RET

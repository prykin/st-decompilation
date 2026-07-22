CreateSlider:
00724D00  6A 64                     PUSH 0x64
00724D02  E8 C9 B7 F8 FF            CALL 0x006b04d0
00724D07  85 C0                     TEST EAX,EAX
00724D09  74 07                     JZ 0x00724d12
00724D0B  8B C8                     MOV ECX,EAX
00724D0D  E9 FE F5 FF FF            JMP 0x00724310
LAB_00724d12:
00724D12  33 C0                     XOR EAX,EAX
00724D14  C3                        RET

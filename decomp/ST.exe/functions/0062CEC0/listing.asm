CreateSTManRub3:
0062CEC0  68 B8 00 00 00            PUSH 0xb8
0062CEC5  E8 06 36 08 00            CALL 0x006b04d0
0062CECA  85 C0                     TEST EAX,EAX
0062CECC  74 0D                     JZ 0x0062cedb
0062CECE  8B C8                     MOV ECX,EAX
0062CED0  E8 19 85 DD FF            CALL 0x004053ee
0062CED5  A3 A4 17 81 00            MOV [0x008117a4],EAX
0062CEDA  C3                        RET
LAB_0062cedb:
0062CEDB  33 C0                     XOR EAX,EAX
0062CEDD  A3 A4 17 81 00            MOV [0x008117a4],EAX
0062CEE2  C3                        RET

FUN_006a4950:
006A4950  55                        PUSH EBP
006A4951  8B EC                     MOV EBP,ESP
006A4953  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A4956  6A 01                     PUSH 0x1
006A4958  50                        PUSH EAX
006A4959  C7 05 4C 4A 85 00 00 00 00 00  MOV dword ptr [0x00854a4c],0x0
006A4963  E8 A4 FB D5 FF            CALL 0x0040450c
006A4968  A1 4C 4A 85 00            MOV EAX,[0x00854a4c]
006A496D  83 C4 08                  ADD ESP,0x8
006A4970  85 C0                     TEST EAX,EAX
006A4972  74 18                     JZ 0x006a498c
006A4974  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006A497A  68 03 04 00 00            PUSH 0x403
006A497F  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A4984  51                        PUSH ECX
006A4985  6A FB                     PUSH -0x5
006A4987  E8 B4 14 00 00            CALL 0x006a5e40
LAB_006a498c:
006A498C  C7 05 4C 4A 85 00 00 00 00 00  MOV dword ptr [0x00854a4c],0x0
006A4996  5D                        POP EBP
006A4997  C3                        RET

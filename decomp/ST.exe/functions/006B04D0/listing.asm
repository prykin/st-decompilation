FUN_006b04d0:
006B04D0  55                        PUSH EBP
006B04D1  8B EC                     MOV EBP,ESP
006B04D3  56                        PUSH ESI
006B04D4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B04D7  85 F6                     TEST ESI,ESI
006B04D9  75 05                     JNZ 0x006b04e0
006B04DB  BE 01 00 00 00            MOV ESI,0x1
LAB_006b04e0:
006B04E0  56                        PUSH ESI
006B04E1  E8 3B 26 D5 FF            CALL 0x00402b21
006B04E6  8B D0                     MOV EDX,EAX
006B04E8  83 C4 04                  ADD ESP,0x4
006B04EB  85 D2                     TEST EDX,EDX
006B04ED  74 1B                     JZ 0x006b050a
006B04EF  8B CE                     MOV ECX,ESI
006B04F1  57                        PUSH EDI
006B04F2  33 C0                     XOR EAX,EAX
006B04F4  8B FA                     MOV EDI,EDX
006B04F6  C1 E9 02                  SHR ECX,0x2
006B04F9  F3 AB                     STOSD.REP ES:EDI
006B04FB  8B CE                     MOV ECX,ESI
006B04FD  83 E1 03                  AND ECX,0x3
006B0500  F3 AA                     STOSB.REP ES:EDI
006B0502  5F                        POP EDI
006B0503  8B C2                     MOV EAX,EDX
006B0505  5E                        POP ESI
006B0506  5D                        POP EBP
006B0507  C2 04 00                  RET 0x4
LAB_006b050a:
006B050A  8B C2                     MOV EAX,EDX
006B050C  5E                        POP ESI
006B050D  5D                        POP EBP
006B050E  C2 04 00                  RET 0x4

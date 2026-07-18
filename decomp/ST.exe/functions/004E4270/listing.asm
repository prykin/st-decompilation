FUN_004e4270:
004E4270  55                        PUSH EBP
004E4271  8B EC                     MOV EBP,ESP
004E4273  53                        PUSH EBX
004E4274  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E4277  56                        PUSH ESI
004E4278  57                        PUSH EDI
004E4279  8B F1                     MOV ESI,ECX
004E427B  53                        PUSH EBX
004E427C  E8 FF 1A F2 FF            CALL 0x00405d80
004E4281  53                        PUSH EBX
004E4282  8B CE                     MOV ECX,ESI
004E4284  8B F8                     MOV EDI,EAX
004E4286  E8 1C F4 F1 FF            CALL 0x004036a7
004E428B  8B C8                     MOV ECX,EAX
004E428D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004E4290  03 C8                     ADD ECX,EAX
004E4292  3B CF                     CMP ECX,EDI
004E4294  7E 0C                     JLE 0x004e42a2
004E4296  53                        PUSH EBX
004E4297  8B CE                     MOV ECX,ESI
004E4299  E8 09 F4 F1 FF            CALL 0x004036a7
004E429E  2B F8                     SUB EDI,EAX
004E42A0  8B C7                     MOV EAX,EDI
LAB_004e42a2:
004E42A2  85 C0                     TEST EAX,EAX
004E42A4  7E 09                     JLE 0x004e42af
004E42A6  50                        PUSH EAX
004E42A7  53                        PUSH EBX
004E42A8  8B CE                     MOV ECX,ESI
004E42AA  E8 83 F0 F1 FF            CALL 0x00403332
LAB_004e42af:
004E42AF  53                        PUSH EBX
004E42B0  8B CE                     MOV ECX,ESI
004E42B2  E8 F0 F3 F1 FF            CALL 0x004036a7
004E42B7  5F                        POP EDI
004E42B8  5E                        POP ESI
004E42B9  5B                        POP EBX
004E42BA  5D                        POP EBP
004E42BB  C2 08 00                  RET 0x8

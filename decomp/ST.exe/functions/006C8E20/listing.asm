FUN_006c8e20:
006C8E20  55                        PUSH EBP
006C8E21  8B EC                     MOV EBP,ESP
006C8E23  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C8E26  50                        PUSH EAX
006C8E27  E8 64 5C 06 00            CALL 0x0072ea90
006C8E2C  83 C4 04                  ADD ESP,0x4
006C8E2F  85 C0                     TEST EAX,EAX
006C8E31  74 1E                     JZ 0x006c8e51
006C8E33  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C8E39  6A 0A                     PUSH 0xa
006C8E3B  68 74 E1 7E 00            PUSH 0x7ee174
006C8E40  51                        PUSH ECX
006C8E41  6A F7                     PUSH -0x9
006C8E43  E8 F8 CF FD FF            CALL 0x006a5e40
006C8E48  B8 F7 FF FF FF            MOV EAX,0xfffffff7
006C8E4D  5D                        POP EBP
006C8E4E  C2 04 00                  RET 0x4
LAB_006c8e51:
006C8E51  33 C0                     XOR EAX,EAX
006C8E53  5D                        POP EBP
006C8E54  C2 04 00                  RET 0x4

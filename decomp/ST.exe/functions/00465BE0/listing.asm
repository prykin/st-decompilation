STBoatC::BackPatrol:
00465BE0  55                        PUSH EBP
00465BE1  8B EC                     MOV EBP,ESP
00465BE3  8B 81 97 04 00 00         MOV EAX,dword ptr [ECX + 0x497]
00465BE9  85 C0                     TEST EAX,EAX
00465BEB  75 0D                     JNZ 0x00465bfa
00465BED  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00465BF0  50                        PUSH EAX
00465BF1  E8 FA E1 F9 FF            CALL 0x00403df0
00465BF6  5D                        POP EBP
00465BF7  C2 04 00                  RET 0x4
LAB_00465bfa:
00465BFA  83 F8 01                  CMP EAX,0x1
00465BFD  75 0D                     JNZ 0x00465c0c
00465BFF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00465C02  52                        PUSH EDX
00465C03  E8 32 ED F9 FF            CALL 0x0040493a
00465C08  5D                        POP EBP
00465C09  C2 04 00                  RET 0x4
LAB_00465c0c:
00465C0C  68 3C A2 7A 00            PUSH 0x7aa23c
00465C11  68 CC 4C 7A 00            PUSH 0x7a4ccc
00465C16  6A 00                     PUSH 0x0
00465C18  6A 00                     PUSH 0x0
00465C1A  68 52 1C 00 00            PUSH 0x1c52
00465C1F  68 3C 9D 7A 00            PUSH 0x7a9d3c
00465C24  E8 A7 78 24 00            CALL 0x006ad4d0
00465C29  83 C4 18                  ADD ESP,0x18
00465C2C  85 C0                     TEST EAX,EAX
00465C2E  74 01                     JZ 0x00465c31
00465C30  CC                        INT3
LAB_00465c31:
00465C31  83 C8 FF                  OR EAX,0xffffffff
00465C34  5D                        POP EBP
00465C35  C2 04 00                  RET 0x4

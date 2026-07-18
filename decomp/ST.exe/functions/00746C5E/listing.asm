FUN_00746c5e:
00746C5E  56                        PUSH ESI
00746C5F  8B F1                     MOV ESI,ECX
00746C61  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00746C64  85 C0                     TEST EAX,EAX
00746C66  74 0A                     JZ 0x00746c72
00746C68  8B 08                     MOV ECX,dword ptr [EAX]
00746C6A  50                        PUSH EAX
00746C6B  FF 51 08                  CALL dword ptr [ECX + 0x8]
00746C6E  83 66 14 00               AND dword ptr [ESI + 0x14],0x0
LAB_00746c72:
00746C72  8B CE                     MOV ECX,ESI
00746C74  83 C6 04                  ADD ESI,0x4
00746C77  F7 D9                     NEG ECX
00746C79  1B C9                     SBB ECX,ECX
00746C7B  23 CE                     AND ECX,ESI
00746C7D  E8 F5 4A 00 00            CALL 0x0074b777
00746C82  5E                        POP ESI
00746C83  C3                        RET

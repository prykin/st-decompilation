FUN_006bfb50:
006BFB50  55                        PUSH EBP
006BFB51  8B EC                     MOV EBP,ESP
006BFB53  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006BFB56  85 C0                     TEST EAX,EAX
006BFB58  75 05                     JNZ 0x006bfb5f
006BFB5A  B8 01 00 00 00            MOV EAX,0x1
LAB_006bfb5f:
006BFB5F  50                        PUSH EAX
006BFB60  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BFB63  50                        PUSH EAX
006BFB64  E8 65 5A D4 FF            CALL 0x004055ce
006BFB69  83 C4 08                  ADD ESP,0x8
006BFB6C  5D                        POP EBP
006BFB6D  C2 08 00                  RET 0x8

FUN_00694390:
00694390  55                        PUSH EBP
00694391  8B EC                     MOV EBP,ESP
00694393  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00694396  50                        PUSH EAX
00694397  E8 77 F5 D6 FF            CALL 0x00403913
0069439C  85 C0                     TEST EAX,EAX
0069439E  74 15                     JZ 0x006943b5
006943A0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006943A3  83 F9 FF                  CMP ECX,-0x1
006943A6  74 03                     JZ 0x006943ab
006943A8  88 48 21                  MOV byte ptr [EAX + 0x21],CL
LAB_006943ab:
006943AB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006943AE  83 F9 FF                  CMP ECX,-0x1
006943B1  74 02                     JZ 0x006943b5
006943B3  88 08                     MOV byte ptr [EAX],CL
LAB_006943b5:
006943B5  5D                        POP EBP
006943B6  C2 10 00                  RET 0x10

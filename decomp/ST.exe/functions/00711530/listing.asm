FUN_00711530:
00711530  55                        PUSH EBP
00711531  8B EC                     MOV EBP,ESP
00711533  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00711536  53                        PUSH EBX
00711537  57                        PUSH EDI
00711538  33 FF                     XOR EDI,EDI
0071153A  85 C0                     TEST EAX,EAX
0071153C  8B D9                     MOV EBX,ECX
0071153E  75 06                     JNZ 0x00711546
00711540  5F                        POP EDI
00711541  5B                        POP EBX
00711542  5D                        POP EBP
00711543  C2 04 00                  RET 0x4
LAB_00711546:
00711546  83 38 00                  CMP dword ptr [EAX],0x0
00711549  74 20                     JZ 0x0071156b
0071154B  56                        PUSH ESI
0071154C  8B F0                     MOV ESI,EAX
LAB_0071154e:
0071154E  8B 00                     MOV EAX,dword ptr [EAX]
00711550  8B CB                     MOV ECX,EBX
00711552  50                        PUSH EAX
00711553  E8 B8 FB FF FF            CALL 0x00711110
00711558  3B C7                     CMP EAX,EDI
0071155A  7E 02                     JLE 0x0071155e
0071155C  8B F8                     MOV EDI,EAX
LAB_0071155e:
0071155E  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00711561  83 C6 04                  ADD ESI,0x4
00711564  85 C9                     TEST ECX,ECX
00711566  8B C6                     MOV EAX,ESI
00711568  75 E4                     JNZ 0x0071154e
0071156A  5E                        POP ESI
LAB_0071156b:
0071156B  8B C7                     MOV EAX,EDI
0071156D  5F                        POP EDI
0071156E  5B                        POP EBX
0071156F  5D                        POP EBP
00711570  C2 04 00                  RET 0x4

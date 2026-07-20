STBoatC::sub_00460260:
00460260  55                        PUSH EBP
00460261  8B EC                     MOV EBP,ESP
00460263  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00460266  56                        PUSH ESI
00460267  85 C0                     TEST EAX,EAX
00460269  8B F1                     MOV ESI,ECX
0046026B  75 06                     JNZ 0x00460273
0046026D  89 86 F4 00 00 00         MOV dword ptr [ESI + 0xf4],EAX
LAB_00460273:
00460273  50                        PUSH EAX
00460274  8B CE                     MOV ECX,ESI
00460276  E8 B9 38 FA FF            CALL 0x00403b34
0046027B  83 F8 02                  CMP EAX,0x2
0046027E  75 0E                     JNZ 0x0046028e
00460280  83 BE F4 00 00 00 01      CMP dword ptr [ESI + 0xf4],0x1
00460287  75 05                     JNZ 0x0046028e
00460289  B8 01 00 00 00            MOV EAX,0x1
LAB_0046028e:
0046028E  5E                        POP ESI
0046028F  5D                        POP EBP
00460290  C2 04 00                  RET 0x4

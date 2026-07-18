FUN_0056a8d0:
0056A8D0  55                        PUSH EBP
0056A8D1  8B EC                     MOV EBP,ESP
0056A8D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0056A8D6  53                        PUSH EBX
0056A8D7  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0056A8DA  8B D1                     MOV EDX,ECX
0056A8DC  8B CB                     MOV ECX,EBX
0056A8DE  56                        PUSH ESI
0056A8DF  81 E1 FF 00 00 00         AND ECX,0xff
0056A8E5  8B F2                     MOV ESI,EDX
0056A8E7  25 FF 00 00 00            AND EAX,0xff
0056A8EC  03 F1                     ADD ESI,ECX
0056A8EE  8A 4D 10                  MOV CL,byte ptr [EBP + 0x10]
0056A8F1  88 8C C6 2F 14 00 00      MOV byte ptr [ESI + EAX*0x8 + 0x142f],CL
0056A8F8  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0056A8FE  85 F6                     TEST ESI,ESI
0056A900  74 30                     JZ 0x0056a932
0056A902  3A 9A 2D 11 00 00         CMP BL,byte ptr [EDX + 0x112d]
0056A908  75 28                     JNZ 0x0056a932
0056A90A  84 C9                     TEST CL,CL
0056A90C  75 10                     JNZ 0x0056a91e
0056A90E  50                        PUSH EAX
0056A90F  6A 00                     PUSH 0x0
0056A911  8B CE                     MOV ECX,ESI
0056A913  E8 FD B5 E9 FF            CALL 0x00405f15
0056A918  5E                        POP ESI
0056A919  5B                        POP EBX
0056A91A  5D                        POP EBP
0056A91B  C2 0C 00                  RET 0xc
LAB_0056a91e:
0056A91E  8A 8A 74 14 00 00         MOV CL,byte ptr [EDX + 0x1474]
0056A924  84 C9                     TEST CL,CL
0056A926  74 0A                     JZ 0x0056a932
0056A928  50                        PUSH EAX
0056A929  6A 01                     PUSH 0x1
0056A92B  8B CE                     MOV ECX,ESI
0056A92D  E8 E3 B5 E9 FF            CALL 0x00405f15
LAB_0056a932:
0056A932  5E                        POP ESI
0056A933  5B                        POP EBX
0056A934  5D                        POP EBP
0056A935  C2 0C 00                  RET 0xc

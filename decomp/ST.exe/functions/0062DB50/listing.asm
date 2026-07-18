FUN_0062db50:
0062DB50  55                        PUSH EBP
0062DB51  8B EC                     MOV EBP,ESP
0062DB53  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0062DB56  56                        PUSH ESI
0062DB57  83 C8 FF                  OR EAX,0xffffffff
0062DB5A  8B 74 91 50               MOV ESI,dword ptr [ECX + EDX*0x4 + 0x50]
0062DB5E  85 F6                     TEST ESI,ESI
0062DB60  75 08                     JNZ 0x0062db6a
0062DB62  83 C8 FF                  OR EAX,0xffffffff
0062DB65  5E                        POP ESI
0062DB66  5D                        POP EBP
0062DB67  C2 08 00                  RET 0x8
LAB_0062db6a:
0062DB6A  53                        PUSH EBX
0062DB6B  57                        PUSH EDI
0062DB6C  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0062DB6F  33 D2                     XOR EDX,EDX
0062DB71  85 FF                     TEST EDI,EDI
0062DB73  7E 26                     JLE 0x0062db9b
0062DB75  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0062DB78  3B D7                     CMP EDX,EDI
LAB_0062db7a:
0062DB7A  73 11                     JNC 0x0062db8d
0062DB7C  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0062DB7F  0F AF CA                  IMUL ECX,EDX
0062DB82  03 4E 1C                  ADD ECX,dword ptr [ESI + 0x1c]
0062DB85  85 C9                     TEST ECX,ECX
0062DB87  74 04                     JZ 0x0062db8d
0062DB89  39 19                     CMP dword ptr [ECX],EBX
0062DB8B  74 0C                     JZ 0x0062db99
LAB_0062db8d:
0062DB8D  42                        INC EDX
0062DB8E  3B D7                     CMP EDX,EDI
0062DB90  7C E8                     JL 0x0062db7a
0062DB92  5F                        POP EDI
0062DB93  5B                        POP EBX
0062DB94  5E                        POP ESI
0062DB95  5D                        POP EBP
0062DB96  C2 08 00                  RET 0x8
LAB_0062db99:
0062DB99  8B C2                     MOV EAX,EDX
LAB_0062db9b:
0062DB9B  5F                        POP EDI
0062DB9C  5B                        POP EBX
0062DB9D  5E                        POP ESI
0062DB9E  5D                        POP EBP
0062DB9F  C2 08 00                  RET 0x8

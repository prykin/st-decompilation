FUN_00694200:
00694200  55                        PUSH EBP
00694201  8B EC                     MOV EBP,ESP
00694203  56                        PUSH ESI
00694204  8B F1                     MOV ESI,ECX
00694206  57                        PUSH EDI
00694207  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0069420A  C7 86 9D 19 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x199d],0xffffffff
LAB_00694214:
00694214  8B 96 9D 19 00 00         MOV EDX,dword ptr [ESI + 0x199d]
0069421A  42                        INC EDX
0069421B  8B C2                     MOV EAX,EDX
0069421D  89 96 9D 19 00 00         MOV dword ptr [ESI + 0x199d],EDX
00694223  83 F8 08                  CMP EAX,0x8
00694226  7D 43                     JGE 0x0069426b
LAB_00694228:
00694228  50                        PUSH EAX
00694229  8B CE                     MOV ECX,ESI
0069422B  E8 E3 F6 D6 FF            CALL 0x00403913
00694230  85 C0                     TEST EAX,EAX
00694232  75 16                     JNZ 0x0069424a
00694234  8B 96 9D 19 00 00         MOV EDX,dword ptr [ESI + 0x199d]
0069423A  42                        INC EDX
0069423B  8B C2                     MOV EAX,EDX
0069423D  89 96 9D 19 00 00         MOV dword ptr [ESI + 0x199d],EDX
00694243  83 F8 08                  CMP EAX,0x8
00694246  7D 23                     JGE 0x0069426b
00694248  EB DE                     JMP 0x00694228
LAB_0069424a:
0069424A  8B 86 9D 19 00 00         MOV EAX,dword ptr [ESI + 0x199d]
00694250  8B CE                     MOV ECX,ESI
00694252  50                        PUSH EAX
00694253  E8 BB F6 D6 FF            CALL 0x00403913
00694258  85 C0                     TEST EAX,EAX
0069425A  74 0F                     JZ 0x0069426b
0069425C  33 C9                     XOR ECX,ECX
0069425E  8A 48 23                  MOV CL,byte ptr [EAX + 0x23]
00694261  3B CF                     CMP ECX,EDI
00694263  75 AF                     JNZ 0x00694214
00694265  5F                        POP EDI
00694266  5E                        POP ESI
00694267  5D                        POP EBP
00694268  C2 04 00                  RET 0x4
LAB_0069426b:
0069426B  5F                        POP EDI
0069426C  33 C0                     XOR EAX,EAX
0069426E  5E                        POP ESI
0069426F  5D                        POP EBP
00694270  C2 04 00                  RET 0x4

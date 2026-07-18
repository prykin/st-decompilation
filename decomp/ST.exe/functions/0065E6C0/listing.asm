FUN_0065e6c0:
0065E6C0  56                        PUSH ESI
0065E6C1  57                        PUSH EDI
0065E6C2  8B F9                     MOV EDI,ECX
0065E6C4  E8 06 32 DA FF            CALL 0x004018cf
0065E6C9  8B F0                     MOV ESI,EAX
0065E6CB  85 F6                     TEST ESI,ESI
0065E6CD  74 1A                     JZ 0x0065e6e9
0065E6CF  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0065E6D2  85 C0                     TEST EAX,EAX
0065E6D4  76 0D                     JBE 0x0065e6e3
0065E6D6  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
0065E6D9  56                        PUSH ESI
0065E6DA  50                        PUSH EAX
0065E6DB  E8 90 3B DA FF            CALL 0x00402270
0065E6E0  83 C4 08                  ADD ESP,0x8
LAB_0065e6e3:
0065E6E3  56                        PUSH ESI
0065E6E4  E8 27 FA 04 00            CALL 0x006ae110
LAB_0065e6e9:
0065E6E9  5F                        POP EDI
0065E6EA  5E                        POP ESI
0065E6EB  C3                        RET

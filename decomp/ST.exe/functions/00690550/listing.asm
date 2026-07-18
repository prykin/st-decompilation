FUN_00690550:
00690550  55                        PUSH EBP
00690551  8B EC                     MOV EBP,ESP
00690553  8B 91 C9 00 00 00         MOV EDX,dword ptr [ECX + 0xc9]
00690559  53                        PUSH EBX
0069055A  56                        PUSH ESI
0069055B  33 C0                     XOR EAX,EAX
0069055D  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
00690560  57                        PUSH EDI
00690561  85 F6                     TEST ESI,ESI
00690563  7E 31                     JLE 0x00690596
00690565  66 8B 7D 0C               MOV DI,word ptr [EBP + 0xc]
00690569  66 8B 5D 08               MOV BX,word ptr [EBP + 0x8]
0069056D  3B C6                     CMP EAX,ESI
LAB_0069056f:
0069056F  73 20                     JNC 0x00690591
00690571  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
00690574  0F AF C8                  IMUL ECX,EAX
00690577  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
0069057A  85 C9                     TEST ECX,ECX
0069057C  74 13                     JZ 0x00690591
0069057E  66 3B 59 02               CMP BX,word ptr [ECX + 0x2]
00690582  75 0D                     JNZ 0x00690591
00690584  66 81 FF FF FF            CMP DI,0xffff
00690589  74 0E                     JZ 0x00690599
0069058B  66 3B 79 04               CMP DI,word ptr [ECX + 0x4]
0069058F  74 08                     JZ 0x00690599
LAB_00690591:
00690591  40                        INC EAX
00690592  3B C6                     CMP EAX,ESI
00690594  7C D9                     JL 0x0069056f
LAB_00690596:
00690596  83 C8 FF                  OR EAX,0xffffffff
LAB_00690599:
00690599  5F                        POP EDI
0069059A  5E                        POP ESI
0069059B  5B                        POP EBX
0069059C  5D                        POP EBP
0069059D  C2 08 00                  RET 0x8

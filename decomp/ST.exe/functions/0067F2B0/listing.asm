FUN_0067f2b0:
0067F2B0  55                        PUSH EBP
0067F2B1  8B EC                     MOV EBP,ESP
0067F2B3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0067F2B6  85 C0                     TEST EAX,EAX
0067F2B8  0F 84 C0 00 00 00         JZ 0x0067f37e
0067F2BE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067F2C1  6A 00                     PUSH 0x0
0067F2C3  68 8C 86 84 00            PUSH 0x84868c
0067F2C8  68 04 01 00 00            PUSH 0x104
0067F2CD  50                        PUSH EAX
0067F2CE  FF 15 A8 BB 85 00         CALL dword ptr [0x0085bba8]
0067F2D4  68 90 19 81 00            PUSH 0x811990
0067F2D9  68 8C 85 84 00            PUSH 0x84858c
0067F2DE  68 90 87 84 00            PUSH 0x848790
0067F2E3  68 A8 78 84 00            PUSH 0x8478a8
0067F2E8  68 8C 86 84 00            PUSH 0x84868c
0067F2ED  E8 3E F4 0A 00            CALL 0x0072e730
0067F2F2  6A 00                     PUSH 0x0
0067F2F4  6A 00                     PUSH 0x0
0067F2F6  68 90 87 84 00            PUSH 0x848790
0067F2FB  68 A8 78 84 00            PUSH 0x8478a8
0067F300  68 8C 86 84 00            PUSH 0x84868c
0067F305  E8 06 FE 0A 00            CALL 0x0072f110
0067F30A  6A 00                     PUSH 0x0
0067F30C  68 8C 86 84 00            PUSH 0x84868c
0067F311  68 F4 55 7D 00            PUSH 0x7d55f4
0067F316  E8 25 3C D8 FF            CALL 0x00402f40
0067F31B  83 C4 34                  ADD ESP,0x34
0067F31E  85 C0                     TEST EAX,EAX
0067F320  75 18                     JNZ 0x0067f33a
0067F322  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0067F328  68 B5 00 00 00            PUSH 0xb5
0067F32D  68 D8 55 7D 00            PUSH 0x7d55d8
0067F332  51                        PUSH ECX
0067F333  6A FE                     PUSH -0x2
0067F335  E8 06 6B 02 00            CALL 0x006a5e40
LAB_0067f33a:
0067F33A  A1 24 8A 84 00            MOV EAX,[0x00848a24]
0067F33F  6A 00                     PUSH 0x0
0067F341  40                        INC EAX
0067F342  68 8C 86 84 00            PUSH 0x84868c
0067F347  50                        PUSH EAX
0067F348  A3 24 8A 84 00            MOV [0x00848a24],EAX
0067F34D  E8 53 27 D8 FF            CALL 0x00401aa5
0067F352  83 C4 04                  ADD ESP,0x4
0067F355  50                        PUSH EAX
0067F356  E8 E5 3B D8 FF            CALL 0x00402f40
0067F35B  83 C4 0C                  ADD ESP,0xc
0067F35E  85 C0                     TEST EAX,EAX
0067F360  75 65                     JNZ 0x0067f3c7
0067F362  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0067F368  68 B6 00 00 00            PUSH 0xb6
0067F36D  68 D8 55 7D 00            PUSH 0x7d55d8
0067F372  52                        PUSH EDX
0067F373  6A FE                     PUSH -0x2
0067F375  E8 C6 6A 02 00            CALL 0x006a5e40
0067F37A  5D                        POP EBP
0067F37B  C2 08 00                  RET 0x8
LAB_0067f37e:
0067F37E  A1 24 8A 84 00            MOV EAX,[0x00848a24]
0067F383  85 C0                     TEST EAX,EAX
0067F385  7E 40                     JLE 0x0067f3c7
0067F387  48                        DEC EAX
0067F388  6A 00                     PUSH 0x0
0067F38A  50                        PUSH EAX
0067F38B  A3 24 8A 84 00            MOV [0x00848a24],EAX
0067F390  E8 10 27 D8 FF            CALL 0x00401aa5
0067F395  83 C4 04                  ADD ESP,0x4
0067F398  50                        PUSH EAX
0067F399  E8 98 4A D8 FF            CALL 0x00403e36
0067F39E  50                        PUSH EAX
0067F39F  68 F4 55 7D 00            PUSH 0x7d55f4
0067F3A4  E8 97 3B D8 FF            CALL 0x00402f40
0067F3A9  83 C4 0C                  ADD ESP,0xc
0067F3AC  85 C0                     TEST EAX,EAX
0067F3AE  75 17                     JNZ 0x0067f3c7
0067F3B0  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067F3B5  68 BB 00 00 00            PUSH 0xbb
0067F3BA  68 D8 55 7D 00            PUSH 0x7d55d8
0067F3BF  50                        PUSH EAX
0067F3C0  6A FE                     PUSH -0x2
0067F3C2  E8 79 6A 02 00            CALL 0x006a5e40
LAB_0067f3c7:
0067F3C7  5D                        POP EBP
0067F3C8  C2 08 00                  RET 0x8

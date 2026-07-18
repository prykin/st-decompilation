FUN_00414980:
00414980  55                        PUSH EBP
00414981  8B EC                     MOV EBP,ESP
00414983  A1 50 4D 7F 00            MOV EAX,[0x007f4d50]
00414988  56                        PUSH ESI
00414989  57                        PUSH EDI
0041498A  6A 02                     PUSH 0x2
0041498C  50                        PUSH EAX
0041498D  E8 7A FB FE FF            CALL 0x0040450c
00414992  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00414995  68 5D 05 00 00            PUSH 0x55d
0041499A  68 A8 4C 7A 00            PUSH 0x7a4ca8
0041499F  6A 02                     PUSH 0x2
004149A1  8D 34 BD 08 00 00 00      LEA ESI,[EDI*0x4 + 0x8]
004149A8  56                        PUSH ESI
004149A9  E8 56 C7 FE FF            CALL 0x00401104
004149AE  83 C4 18                  ADD ESP,0x18
004149B1  A3 50 4D 7F 00            MOV [0x007f4d50],EAX
004149B6  85 C0                     TEST EAX,EAX
004149B8  75 1E                     JNZ 0x004149d8
004149BA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004149C0  68 5E 05 00 00            PUSH 0x55e
004149C5  68 A8 4C 7A 00            PUSH 0x7a4ca8
004149CA  51                        PUSH ECX
004149CB  6A FE                     PUSH -0x2
004149CD  E8 6E 14 29 00            CALL 0x006a5e40
004149D2  5F                        POP EDI
004149D3  5E                        POP ESI
004149D4  5D                        POP EBP
004149D5  C2 04 00                  RET 0x4
LAB_004149d8:
004149D8  57                        PUSH EDI
004149D9  6A 00                     PUSH 0x0
004149DB  E8 90 00 00 00            CALL 0x00414a70
004149E0  8B 15 54 4D 7F 00         MOV EDX,dword ptr [0x007f4d54]
004149E6  6A 02                     PUSH 0x2
004149E8  52                        PUSH EDX
004149E9  E8 1E FB FE FF            CALL 0x0040450c
004149EE  68 66 05 00 00            PUSH 0x566
004149F3  68 A8 4C 7A 00            PUSH 0x7a4ca8
004149F8  6A 02                     PUSH 0x2
004149FA  56                        PUSH ESI
004149FB  E8 04 C7 FE FF            CALL 0x00401104
00414A00  83 C4 18                  ADD ESP,0x18
00414A03  A3 54 4D 7F 00            MOV [0x007f4d54],EAX
00414A08  85 C0                     TEST EAX,EAX
00414A0A  75 1D                     JNZ 0x00414a29
00414A0C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00414A11  68 67 05 00 00            PUSH 0x567
00414A16  68 A8 4C 7A 00            PUSH 0x7a4ca8
00414A1B  50                        PUSH EAX
00414A1C  6A FE                     PUSH -0x2
00414A1E  E8 1D 14 29 00            CALL 0x006a5e40
00414A23  5F                        POP EDI
00414A24  5E                        POP ESI
00414A25  5D                        POP EBP
00414A26  C2 04 00                  RET 0x4
LAB_00414a29:
00414A29  57                        PUSH EDI
00414A2A  6A 01                     PUSH 0x1
00414A2C  E8 3F 00 00 00            CALL 0x00414a70
00414A31  5F                        POP EDI
00414A32  5E                        POP ESI
00414A33  5D                        POP EBP
00414A34  C2 04 00                  RET 0x4

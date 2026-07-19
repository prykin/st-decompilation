FUN_00748130:
00748130  83 7C 24 08 00            CMP dword ptr [ESP + 0x8],0x0
00748135  56                        PUSH ESI
00748136  57                        PUSH EDI
00748137  75 07                     JNZ 0x00748140
00748139  B8 03 40 00 80            MOV EAX,0x80004003
0074813E  EB 41                     JMP 0x00748181
LAB_00748140:
00748140  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
00748144  8B 7E 5C                  MOV EDI,dword ptr [ESI + 0x5c]
00748147  57                        PUSH EDI
00748148  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074814E  83 7E 0C 00               CMP dword ptr [ESI + 0xc],0x0
00748152  74 18                     JZ 0x0074816c
00748154  83 C6 10                  ADD ESI,0x10
00748157  56                        PUSH ESI
00748158  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074815C  E8 28 3B 00 00            CALL 0x0074bc89
00748161  57                        PUSH EDI
00748162  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00748168  33 C0                     XOR EAX,EAX
0074816A  EB 15                     JMP 0x00748181
LAB_0074816c:
0074816C  8B 4C 24 10               MOV ECX,dword ptr [ESP + 0x10]
00748170  E8 0E 3A 00 00            CALL 0x0074bb83
00748175  57                        PUSH EDI
00748176  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074817C  B8 09 02 04 80            MOV EAX,0x80040209
LAB_00748181:
00748181  5F                        POP EDI
00748182  5E                        POP ESI
00748183  C2 08 00                  RET 0x8

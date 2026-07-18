FUN_00731960:
00731960  55                        PUSH EBP
00731961  8B EC                     MOV EBP,ESP
00731963  6A 00                     PUSH 0x0
00731965  68 00 10 00 00            PUSH 0x1000
0073196A  33 C0                     XOR EAX,EAX
0073196C  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00731970  0F 94 C0                  SETZ AL
00731973  50                        PUSH EAX
00731974  FF 15 DC BB 85 00         CALL dword ptr [0x0085bbdc]
0073197A  A3 C4 A5 85 00            MOV [0x0085a5c4],EAX
0073197F  83 3D C4 A5 85 00 00      CMP dword ptr [0x0085a5c4],0x0
00731986  75 04                     JNZ 0x0073198c
00731988  33 C0                     XOR EAX,EAX
0073198A  EB 1F                     JMP 0x007319ab
LAB_0073198c:
0073198C  E8 EF 00 00 00            CALL 0x00731a80
00731991  85 C0                     TEST EAX,EAX
00731993  75 11                     JNZ 0x007319a6
00731995  8B 0D C4 A5 85 00         MOV ECX,dword ptr [0x0085a5c4]
0073199B  51                        PUSH ECX
0073199C  FF 15 D8 BB 85 00         CALL dword ptr [0x0085bbd8]
007319A2  33 C0                     XOR EAX,EAX
007319A4  EB 05                     JMP 0x007319ab
LAB_007319a6:
007319A6  B8 01 00 00 00            MOV EAX,0x1
LAB_007319ab:
007319AB  5D                        POP EBP
007319AC  C3                        RET

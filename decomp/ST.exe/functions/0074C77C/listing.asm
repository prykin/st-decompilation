FUN_0074c77c:
0074C77C  56                        PUSH ESI
0074C77D  8B F1                     MOV ESI,ECX
0074C77F  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
0074C785  8B 81 8C 00 00 00         MOV EAX,dword ptr [ECX + 0x8c]
0074C78B  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
0074C78F  75 07                     JNZ 0x0074c798
0074C791  B8 FF FF 00 80            MOV EAX,0x8000ffff
0074C796  EB 1A                     JMP 0x0074c7b2
LAB_0074c798:
0074C798  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074C79C  8B 01                     MOV EAX,dword ptr [ECX]
0074C79E  6A 01                     PUSH 0x1
0074C7A0  FF 50 48                  CALL dword ptr [EAX + 0x48]
0074C7A3  85 C0                     TEST EAX,EAX
0074C7A5  7C 0B                     JL 0x0074c7b2
0074C7A7  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074C7AB  8B CE                     MOV ECX,ESI
0074C7AD  E8 9C BB FF FF            CALL 0x0074834e
LAB_0074c7b2:
0074C7B2  5E                        POP ESI
0074C7B3  C2 04 00                  RET 0x4

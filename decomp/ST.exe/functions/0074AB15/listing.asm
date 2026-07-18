FUN_0074ab15:
0074AB15  56                        PUSH ESI
0074AB16  8B F1                     MOV ESI,ECX
0074AB18  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074AB1C  8B 8E D8 00 00 00         MOV ECX,dword ptr [ESI + 0xd8]
0074AB22  8B 01                     MOV EAX,dword ptr [ECX]
0074AB24  FF 90 94 00 00 00         CALL dword ptr [EAX + 0x94]
0074AB2A  85 C0                     TEST EAX,EAX
0074AB2C  7C 0B                     JL 0x0074ab39
0074AB2E  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074AB32  8B CE                     MOV ECX,ESI
0074AB34  E8 19 D4 FF FF            CALL 0x00747f52
LAB_0074ab39:
0074AB39  5E                        POP ESI
0074AB3A  C2 04 00                  RET 0x4

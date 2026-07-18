FUN_0074868b:
0074868B  55                        PUSH EBP
0074868C  8B EC                     MOV EBP,ESP
0074868E  57                        PUSH EDI
0074868F  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00748692  85 FF                     TEST EDI,EDI
00748694  75 07                     JNZ 0x0074869d
00748696  B8 03 40 00 80            MOV EAX,0x80004003
0074869B  EB 3B                     JMP 0x007486d8
LAB_0074869d:
0074869D  56                        PUSH ESI
0074869E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007486A1  53                        PUSH EBX
007486A2  8B 46 D0                  MOV EAX,dword ptr [ESI + -0x30]
007486A5  50                        PUSH EAX
007486A6  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
007486A9  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
007486AF  8B 07                     MOV EAX,dword ptr [EDI]
007486B1  8B 5E 04                  MOV EBX,dword ptr [ESI + 0x4]
007486B4  57                        PUSH EDI
007486B5  FF 50 04                  CALL dword ptr [EAX + 0x4]
007486B8  85 DB                     TEST EBX,EBX
007486BA  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
007486BD  74 06                     JZ 0x007486c5
007486BF  8B 03                     MOV EAX,dword ptr [EBX]
007486C1  53                        PUSH EBX
007486C2  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_007486c5:
007486C5  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
007486C8  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
007486CB  88 46 08                  MOV byte ptr [ESI + 0x8],AL
007486CE  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
007486D4  5B                        POP EBX
007486D5  33 C0                     XOR EAX,EAX
007486D7  5E                        POP ESI
LAB_007486d8:
007486D8  5F                        POP EDI
007486D9  5D                        POP EBP
007486DA  C2 0C 00                  RET 0xc

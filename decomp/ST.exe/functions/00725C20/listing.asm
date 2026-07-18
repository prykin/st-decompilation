FUN_00725c20:
00725C20  55                        PUSH EBP
00725C21  8B EC                     MOV EBP,ESP
00725C23  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00725C26  25 FF 00 00 00            AND EAX,0xff
00725C2B  83 E8 00                  SUB EAX,0x0
00725C2E  74 13                     JZ 0x00725c43
00725C30  83 E8 02                  SUB EAX,0x2
00725C33  75 0A                     JNZ 0x00725c3f
00725C35  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00725C38  50                        PUSH EAX
00725C39  FF 15 44 BB 85 00         CALL dword ptr [0x0085bb44]
LAB_00725c3f:
00725C3F  33 C0                     XOR EAX,EAX
00725C41  5D                        POP EBP
00725C42  C3                        RET
LAB_00725c43:
00725C43  56                        PUSH ESI
00725C44  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00725C47  6A 00                     PUSH 0x0
00725C49  56                        PUSH ESI
00725C4A  FF 15 BC BB 85 00         CALL dword ptr [0x0085bbbc]
00725C50  56                        PUSH ESI
00725C51  FF 15 E8 BC 85 00         CALL dword ptr [0x0085bce8]
00725C57  33 C0                     XOR EAX,EAX
00725C59  5E                        POP ESI
00725C5A  5D                        POP EBP
00725C5B  C3                        RET

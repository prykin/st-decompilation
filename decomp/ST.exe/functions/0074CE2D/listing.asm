FUN_0074ce2d:
0074CE2D  55                        PUSH EBP
0074CE2E  8B EC                     MOV EBP,ESP
0074CE30  53                        PUSH EBX
0074CE31  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0074CE34  56                        PUSH ESI
0074CE35  57                        PUSH EDI
0074CE36  85 DB                     TEST EBX,EBX
0074CE38  75 07                     JNZ 0x0074ce41
0074CE3A  B8 03 40 00 80            MOV EAX,0x80004003
0074CE3F  EB 6A                     JMP 0x0074ceab
LAB_0074ce41:
0074CE41  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074CE44  8B 7E D0                  MOV EDI,dword ptr [ESI + -0x30]
0074CE47  57                        PUSH EDI
0074CE48  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074CE4E  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
0074CE51  8B 80 90 00 00 00         MOV EAX,dword ptr [EAX + 0x90]
0074CE57  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
0074CE5B  74 42                     JZ 0x0074ce9f
0074CE5D  8B 80 9C 00 00 00         MOV EAX,dword ptr [EAX + 0x9c]
0074CE63  53                        PUSH EBX
0074CE64  50                        PUSH EAX
0074CE65  8B 08                     MOV ECX,dword ptr [EAX]
0074CE67  FF 51 0C                  CALL dword ptr [ECX + 0xc]
0074CE6A  85 C0                     TEST EAX,EAX
0074CE6C  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0074CE6F  7C 0C                     JL 0x0074ce7d
0074CE71  57                        PUSH EDI
0074CE72  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074CE78  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074CE7B  EB 2E                     JMP 0x0074ceab
LAB_0074ce7d:
0074CE7D  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
0074CE80  8B 80 90 00 00 00         MOV EAX,dword ptr [EAX + 0x90]
0074CE86  8B 80 98 00 00 00         MOV EAX,dword ptr [EAX + 0x98]
0074CE8C  89 03                     MOV dword ptr [EBX],EAX
0074CE8E  50                        PUSH EAX
0074CE8F  8B 08                     MOV ECX,dword ptr [EAX]
0074CE91  FF 51 04                  CALL dword ptr [ECX + 0x4]
0074CE94  57                        PUSH EDI
0074CE95  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074CE9B  33 C0                     XOR EAX,EAX
0074CE9D  EB 0C                     JMP 0x0074ceab
LAB_0074ce9f:
0074CE9F  57                        PUSH EDI
0074CEA0  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074CEA6  B8 0A 02 04 80            MOV EAX,0x8004020a
LAB_0074ceab:
0074CEAB  5F                        POP EDI
0074CEAC  5E                        POP ESI
0074CEAD  5B                        POP EBX
0074CEAE  5D                        POP EBP
0074CEAF  C2 08 00                  RET 0x8

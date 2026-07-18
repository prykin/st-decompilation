FUN_004805b0:
004805B0  55                        PUSH EBP
004805B1  8B EC                     MOV EBP,ESP
004805B3  8B 81 EF 06 00 00         MOV EAX,dword ptr [ECX + 0x6ef]
004805B9  85 C0                     TEST EAX,EAX
004805BB  75 0D                     JNZ 0x004805ca
004805BD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004805C0  50                        PUSH EAX
004805C1  E8 BF 39 F8 FF            CALL 0x00403f85
004805C6  5D                        POP EBP
004805C7  C2 04 00                  RET 0x4
LAB_004805ca:
004805CA  83 F8 01                  CMP EAX,0x1
004805CD  75 06                     JNZ 0x004805d5
004805CF  33 C0                     XOR EAX,EAX
004805D1  5D                        POP EBP
004805D2  C2 04 00                  RET 0x4
LAB_004805d5:
004805D5  83 F8 02                  CMP EAX,0x2
004805D8  75 0D                     JNZ 0x004805e7
004805DA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004805DD  52                        PUSH EDX
004805DE  E8 B7 33 F8 FF            CALL 0x0040399a
004805E3  5D                        POP EBP
004805E4  C2 04 00                  RET 0x4
LAB_004805e7:
004805E7  B8 02 00 00 00            MOV EAX,0x2
004805EC  5D                        POP EBP
004805ED  C2 04 00                  RET 0x4

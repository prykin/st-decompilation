FUN_004b9d20:
004B9D20  55                        PUSH EBP
004B9D21  8B EC                     MOV EBP,ESP
004B9D23  8B 81 B4 04 00 00         MOV EAX,dword ptr [ECX + 0x4b4]
004B9D29  85 C0                     TEST EAX,EAX
004B9D2B  74 2E                     JZ 0x004b9d5b
004B9D2D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B9D30  8B 81 B0 04 00 00         MOV EAX,dword ptr [ECX + 0x4b0]
004B9D36  56                        PUSH ESI
004B9D37  8B 72 18                  MOV ESI,dword ptr [EDX + 0x18]
004B9D3A  3B C6                     CMP EAX,ESI
004B9D3C  5E                        POP ESI
004B9D3D  75 1C                     JNZ 0x004b9d5b
004B9D3F  83 B9 45 02 00 00 06      CMP dword ptr [ECX + 0x245],0x6
004B9D46  74 13                     JZ 0x004b9d5b
004B9D48  C7 81 B4 04 00 00 00 00 00 00  MOV dword ptr [ECX + 0x4b4],0x0
004B9D52  B8 01 00 00 00            MOV EAX,0x1
004B9D57  5D                        POP EBP
004B9D58  C2 04 00                  RET 0x4
LAB_004b9d5b:
004B9D5B  33 C0                     XOR EAX,EAX
004B9D5D  5D                        POP EBP
004B9D5E  C2 04 00                  RET 0x4

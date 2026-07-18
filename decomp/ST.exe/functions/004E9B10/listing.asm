FUN_004e9b10:
004E9B10  55                        PUSH EBP
004E9B11  8B EC                     MOV EBP,ESP
004E9B13  8B 81 F8 04 00 00         MOV EAX,dword ptr [ECX + 0x4f8]
004E9B19  85 C0                     TEST EAX,EAX
004E9B1B  74 33                     JZ 0x004e9b50
004E9B1D  8B 91 FC 04 00 00         MOV EDX,dword ptr [ECX + 0x4fc]
004E9B23  85 D2                     TEST EDX,EDX
004E9B25  75 25                     JNZ 0x004e9b4c
004E9B27  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E9B2A  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
004E9B2D  89 81 1B 06 00 00         MOV dword ptr [ECX + 0x61b],EAX
004E9B33  89 91 F8 04 00 00         MOV dword ptr [ECX + 0x4f8],EDX
004E9B39  C7 81 FC 04 00 00 01 00 00 00  MOV dword ptr [ECX + 0x4fc],0x1
004E9B43  B8 01 00 00 00            MOV EAX,0x1
004E9B48  5D                        POP EBP
004E9B49  C2 04 00                  RET 0x4
LAB_004e9b4c:
004E9B4C  85 C0                     TEST EAX,EAX
004E9B4E  75 31                     JNZ 0x004e9b81
LAB_004e9b50:
004E9B50  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E9B53  8B 81 D3 05 00 00         MOV EAX,dword ptr [ECX + 0x5d3]
004E9B59  56                        PUSH ESI
004E9B5A  8B 72 18                  MOV ESI,dword ptr [EDX + 0x18]
004E9B5D  3B F0                     CMP ESI,EAX
004E9B5F  5E                        POP ESI
004E9B60  75 1F                     JNZ 0x004e9b81
004E9B62  89 81 F8 04 00 00         MOV dword ptr [ECX + 0x4f8],EAX
004E9B68  C7 81 FC 04 00 00 01 00 00 00  MOV dword ptr [ECX + 0x4fc],0x1
004E9B72  89 91 1B 06 00 00         MOV dword ptr [ECX + 0x61b],EDX
004E9B78  B8 01 00 00 00            MOV EAX,0x1
004E9B7D  5D                        POP EBP
004E9B7E  C2 04 00                  RET 0x4
LAB_004e9b81:
004E9B81  33 C0                     XOR EAX,EAX
004E9B83  5D                        POP EBP
004E9B84  C2 04 00                  RET 0x4

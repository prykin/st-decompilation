FUN_004e4aa0:
004E4AA0  33 C0                     XOR EAX,EAX
004E4AA2  C7 81 D0 04 00 00 FF FF FF FF  MOV dword ptr [ECX + 0x4d0],0xffffffff
004E4AAC  89 81 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EAX
004E4AB2  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004E4AB8  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
004E4ABE  89 81 DC 04 00 00         MOV dword ptr [ECX + 0x4dc],EAX
004E4AC4  89 81 E4 04 00 00         MOV dword ptr [ECX + 0x4e4],EAX
004E4ACA  89 81 E0 04 00 00         MOV dword ptr [ECX + 0x4e0],EAX
004E4AD0  8B 81 AC 05 00 00         MOV EAX,dword ptr [ECX + 0x5ac]
004E4AD6  89 91 D8 04 00 00         MOV dword ptr [ECX + 0x4d8],EDX
004E4ADC  83 F8 3D                  CMP EAX,0x3d
004E4ADF  74 05                     JZ 0x004e4ae6
004E4AE1  83 F8 5D                  CMP EAX,0x5d
004E4AE4  75 05                     JNZ 0x004e4aeb
LAB_004e4ae6:
004E4AE6  E8 2D D0 F1 FF            CALL 0x00401b18
LAB_004e4aeb:
004E4AEB  33 C0                     XOR EAX,EAX
004E4AED  C3                        RET

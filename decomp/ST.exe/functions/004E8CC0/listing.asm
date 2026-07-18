FUN_004e8cc0:
004E8CC0  33 C0                     XOR EAX,EAX
004E8CC2  89 81 D0 04 00 00         MOV dword ptr [ECX + 0x4d0],EAX
004E8CC8  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004E8CCE  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
004E8CD4  89 81 E0 04 00 00         MOV dword ptr [ECX + 0x4e0],EAX
004E8CDA  89 81 F4 04 00 00         MOV dword ptr [ECX + 0x4f4],EAX
004E8CE0  89 81 F8 04 00 00         MOV dword ptr [ECX + 0x4f8],EAX
004E8CE6  89 81 FC 04 00 00         MOV dword ptr [ECX + 0x4fc],EAX
004E8CEC  8B 81 31 02 00 00         MOV EAX,dword ptr [ECX + 0x231]
004E8CF2  83 F8 01                  CMP EAX,0x1
004E8CF5  89 91 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EDX
004E8CFB  C7 81 D8 04 00 00 FF FF 00 00  MOV dword ptr [ECX + 0x4d8],0xffff
004E8D05  74 05                     JZ 0x004e8d0c
004E8D07  83 F8 03                  CMP EAX,0x3
004E8D0A  75 0E                     JNZ 0x004e8d1a
LAB_004e8d0c:
004E8D0C  83 B9 AC 05 00 00 6C      CMP dword ptr [ECX + 0x5ac],0x6c
004E8D13  75 05                     JNZ 0x004e8d1a
004E8D15  E8 63 83 F1 FF            CALL 0x0040107d
LAB_004e8d1a:
004E8D1A  33 C0                     XOR EAX,EAX
004E8D1C  C3                        RET

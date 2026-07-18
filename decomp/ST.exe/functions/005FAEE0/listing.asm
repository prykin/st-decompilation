FUN_005faee0:
005FAEE0  8B 91 E6 02 00 00         MOV EDX,dword ptr [ECX + 0x2e6]
005FAEE6  33 C0                     XOR EAX,EAX
005FAEE8  85 D2                     TEST EDX,EDX
005FAEEA  75 06                     JNZ 0x005faef2
005FAEEC  B8 01 00 00 00            MOV EAX,0x1
005FAEF1  C3                        RET
LAB_005faef2:
005FAEF2  56                        PUSH ESI
005FAEF3  8B 35 38 2A 80 00         MOV ESI,dword ptr [0x00802a38]
005FAEF9  57                        PUSH EDI
005FAEFA  8B BE E4 00 00 00         MOV EDI,dword ptr [ESI + 0xe4]
005FAF00  8B 72 68                  MOV ESI,dword ptr [EDX + 0x68]
005FAF03  2B FE                     SUB EDI,ESI
005FAF05  8B 72 60                  MOV ESI,dword ptr [EDX + 0x60]
005FAF08  0F AF 7A 64               IMUL EDI,dword ptr [EDX + 0x64]
005FAF0C  2B F7                     SUB ESI,EDI
005FAF0E  8B 7A 3C                  MOV EDI,dword ptr [EDX + 0x3c]
005FAF11  3B F7                     CMP ESI,EDI
005FAF13  7D 05                     JGE 0x005faf1a
005FAF15  B8 01 00 00 00            MOV EAX,0x1
LAB_005faf1a:
005FAF1A  89 72 1C                  MOV dword ptr [EDX + 0x1c],ESI
005FAF1D  8B 91 E6 02 00 00         MOV EDX,dword ptr [ECX + 0x2e6]
005FAF23  8B 72 50                  MOV ESI,dword ptr [EDX + 0x50]
005FAF26  8B 7A 14                  MOV EDI,dword ptr [EDX + 0x14]
005FAF29  03 FE                     ADD EDI,ESI
005FAF2B  89 7A 14                  MOV dword ptr [EDX + 0x14],EDI
005FAF2E  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005FAF34  5F                        POP EDI
005FAF35  8B 51 54                  MOV EDX,dword ptr [ECX + 0x54]
005FAF38  8B 71 18                  MOV ESI,dword ptr [ECX + 0x18]
005FAF3B  03 F2                     ADD ESI,EDX
005FAF3D  89 71 18                  MOV dword ptr [ECX + 0x18],ESI
005FAF40  5E                        POP ESI
005FAF41  C3                        RET

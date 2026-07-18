FUN_004dc660:
004DC660  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
004DC663  53                        PUSH EBX
004DC664  BA 01 00 00 00            MOV EDX,0x1
004DC669  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004DC66C  8A 9C C0 C7 87 80 00      MOV BL,byte ptr [EAX + EAX*0x8 + 0x8087c7]
004DC673  3A DA                     CMP BL,DL
004DC675  5B                        POP EBX
004DC676  75 32                     JNZ 0x004dc6aa
004DC678  33 C0                     XOR EAX,EAX
004DC67A  C7 81 D0 04 00 00 02 00 00 00  MOV dword ptr [ECX + 0x4d0],0x2
004DC684  89 81 D8 04 00 00         MOV dword ptr [ECX + 0x4d8],EAX
004DC68A  89 81 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EAX
004DC690  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004DC695  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004DC69B  89 91 E0 04 00 00         MOV dword ptr [ECX + 0x4e0],EDX
004DC6A1  89 81 DC 04 00 00         MOV dword ptr [ECX + 0x4dc],EAX
004DC6A7  33 C0                     XOR EAX,EAX
004DC6A9  C3                        RET
LAB_004dc6aa:
004DC6AA  33 C0                     XOR EAX,EAX
004DC6AC  C7 81 D0 04 00 00 02 00 00 00  MOV dword ptr [ECX + 0x4d0],0x2
004DC6B6  89 81 D8 04 00 00         MOV dword ptr [ECX + 0x4d8],EAX
004DC6BC  89 81 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EAX
004DC6C2  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004DC6C8  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
004DC6CE  89 81 E0 04 00 00         MOV dword ptr [ECX + 0x4e0],EAX
004DC6D4  89 91 DC 04 00 00         MOV dword ptr [ECX + 0x4dc],EDX
004DC6DA  C3                        RET

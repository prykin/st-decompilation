FUN_004dbb10:
004DBB10  55                        PUSH EBP
004DBB11  8B EC                     MOV EBP,ESP
004DBB13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DBB16  8B 90 C0 04 00 00         MOV EDX,dword ptr [EAX + 0x4c0]
004DBB1C  85 D2                     TEST EDX,EDX
004DBB1E  75 26                     JNZ 0x004dbb46
004DBB20  83 B8 AC 05 00 00 6D      CMP dword ptr [EAX + 0x5ac],0x6d
004DBB27  74 1D                     JZ 0x004dbb46
004DBB29  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004DBB2F  85 C0                     TEST EAX,EAX
004DBB31  74 0A                     JZ 0x004dbb3d
004DBB33  8B 81 D4 04 00 00         MOV EAX,dword ptr [ECX + 0x4d4]
004DBB39  85 C0                     TEST EAX,EAX
004DBB3B  75 09                     JNZ 0x004dbb46
LAB_004dbb3d:
004DBB3D  B8 01 00 00 00            MOV EAX,0x1
004DBB42  5D                        POP EBP
004DBB43  C2 04 00                  RET 0x4
LAB_004dbb46:
004DBB46  33 C0                     XOR EAX,EAX
004DBB48  5D                        POP EBP
004DBB49  C2 04 00                  RET 0x4

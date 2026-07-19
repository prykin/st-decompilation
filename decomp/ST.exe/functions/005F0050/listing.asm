FUN_005f0050:
005F0050  8B 81 3E 02 00 00         MOV EAX,dword ptr [ECX + 0x23e]
005F0056  85 C0                     TEST EAX,EAX
005F0058  7E 16                     JLE 0x005f0070
005F005A  8B 81 3A 02 00 00         MOV EAX,dword ptr [ECX + 0x23a]
005F0060  83 F8 05                  CMP EAX,0x5
005F0063  74 0B                     JZ 0x005f0070
005F0065  83 F8 06                  CMP EAX,0x6
005F0068  74 06                     JZ 0x005f0070
005F006A  B8 01 00 00 00            MOV EAX,0x1
005F006F  C3                        RET
LAB_005f0070:
005F0070  33 C0                     XOR EAX,EAX
005F0072  C3                        RET

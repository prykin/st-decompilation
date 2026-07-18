FUN_005713b0:
005713B0  A1 00 73 80 00            MOV EAX,[0x00807300]
005713B5  25 FF 00 00 00            AND EAX,0xff
005713BA  83 E8 02                  SUB EAX,0x2
005713BD  74 19                     JZ 0x005713d8
005713BF  83 E8 02                  SUB EAX,0x2
005713C2  74 05                     JZ 0x005713c9
005713C4  83 E8 04                  SUB EAX,0x4
005713C7  75 17                     JNZ 0x005713e0
LAB_005713c9:
005713C9  8B 0D F0 33 80 00         MOV ECX,dword ptr [0x008033f0]
005713CF  85 C9                     TEST ECX,ECX
005713D1  74 0D                     JZ 0x005713e0
005713D3  E9 29 28 E9 FF            JMP 0x00403c01
LAB_005713d8:
005713D8  83 C1 38                  ADD ECX,0x38
005713DB  E9 B4 08 E9 FF            JMP 0x00401c94
LAB_005713e0:
005713E0  C3                        RET

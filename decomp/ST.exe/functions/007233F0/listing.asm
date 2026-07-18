FUN_007233f0:
007233F0  53                        PUSH EBX
007233F1  56                        PUSH ESI
007233F2  8B 71 64                  MOV ESI,dword ptr [ECX + 0x64]
007233F5  57                        PUSH EDI
007233F6  83 C8 FF                  OR EAX,0xffffffff
007233F9  33 FF                     XOR EDI,EDI
007233FB  8B 16                     MOV EDX,dword ptr [ESI]
007233FD  85 D2                     TEST EDX,EDX
007233FF  74 1A                     JZ 0x0072341b
00723401  8B 59 68                  MOV EBX,dword ptr [ECX + 0x68]
00723404  8B CE                     MOV ECX,ESI
LAB_00723406:
00723406  3B D3                     CMP EDX,EBX
00723408  74 0F                     JZ 0x00723419
0072340A  8B 51 70                  MOV EDX,dword ptr [ECX + 0x70]
0072340D  83 C1 70                  ADD ECX,0x70
00723410  47                        INC EDI
00723411  85 D2                     TEST EDX,EDX
00723413  75 F1                     JNZ 0x00723406
00723415  5F                        POP EDI
00723416  5E                        POP ESI
00723417  5B                        POP EBX
00723418  C3                        RET
LAB_00723419:
00723419  8B C7                     MOV EAX,EDI
LAB_0072341b:
0072341B  5F                        POP EDI
0072341C  5E                        POP ESI
0072341D  5B                        POP EBX
0072341E  C3                        RET

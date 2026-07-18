FUN_00578370:
00578370  8B 0D 44 16 81 00         MOV ECX,dword ptr [0x00811644]
00578376  85 C9                     TEST ECX,ECX
00578378  74 46                     JZ 0x005783c0
0057837A  83 79 20 01               CMP dword ptr [ECX + 0x20],0x1
0057837E  75 23                     JNZ 0x005783a3
00578380  51                        PUSH ECX
00578381  8B 0D 28 67 80 00         MOV ECX,dword ptr [0x00806728]
00578387  E8 F4 C7 16 00            CALL 0x006e4b80
0057838C  A1 44 16 81 00            MOV EAX,[0x00811644]
00578391  8B 0D 28 67 80 00         MOV ECX,dword ptr [0x00806728]
00578397  50                        PUSH EAX
00578398  E8 83 C9 16 00            CALL 0x006e4d20
0057839D  8B 0D 44 16 81 00         MOV ECX,dword ptr [0x00811644]
LAB_005783a3:
005783A3  8B 11                     MOV EDX,dword ptr [ECX]
005783A5  FF 52 04                  CALL dword ptr [EDX + 0x4]
005783A8  A1 44 16 81 00            MOV EAX,[0x00811644]
005783AD  50                        PUSH EAX
005783AE  E8 FD 5E 1B 00            CALL 0x0072e2b0
005783B3  83 C4 04                  ADD ESP,0x4
005783B6  C7 05 44 16 81 00 00 00 00 00  MOV dword ptr [0x00811644],0x0
LAB_005783c0:
005783C0  C3                        RET

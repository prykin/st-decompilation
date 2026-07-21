STDcResourcC::FUN_00580f20:
00580F20  8B 81 5D 02 00 00         MOV EAX,dword ptr [ECX + 0x25d]
00580F26  48                        DEC EAX
00580F27  F7 D8                     NEG EAX
00580F29  1B C0                     SBB EAX,EAX
00580F2B  24 FE                     AND AL,0xfe
00580F2D  83 C0 02                  ADD EAX,0x2
00580F30  C3                        RET

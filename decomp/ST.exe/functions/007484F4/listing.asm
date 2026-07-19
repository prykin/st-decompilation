FUN_007484f4:
007484F4  83 61 6C 00               AND dword ptr [ECX + 0x6c],0x0
007484F8  8B 89 98 00 00 00         MOV ECX,dword ptr [ECX + 0x98]
007484FE  85 C9                     TEST ECX,ECX
00748500  75 06                     JNZ 0x00748508
00748502  B8 0A 02 04 80            MOV EAX,0x8004020a
00748507  C3                        RET
LAB_00748508:
00748508  8B 01                     MOV EAX,dword ptr [ECX]
0074850A  51                        PUSH ECX
0074850B  FF 50 18                  CALL dword ptr [EAX + 0x18]
0074850E  C3                        RET

FUN_00416390:
00416390  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00416396  B8 02 00 00 00            MOV EAX,0x2
0041639B  F6 82 E4 00 00 00 01      TEST byte ptr [EDX + 0xe4],0x1
004163A2  74 01                     JZ 0x004163a5
004163A4  C3                        RET
LAB_004163a5:
004163A5  66 FF 41 6E               INC word ptr [ECX + 0x6e]
004163A9  0F BF 51 6E               MOVSX EDX,word ptr [ECX + 0x6e]
004163AD  83 FA 2F                  CMP EDX,0x2f
004163B0  75 02                     JNZ 0x004163b4
004163B2  33 C0                     XOR EAX,EAX
LAB_004163b4:
004163B4  83 FA 30                  CMP EDX,0x30
004163B7  75 06                     JNZ 0x004163bf
004163B9  66 C7 41 6E 00 00         MOV word ptr [ECX + 0x6e],0x0
LAB_004163bf:
004163BF  0F BF 51 6E               MOVSX EDX,word ptr [ECX + 0x6e]
004163C3  D9 04 95 24 4D 7A 00      FLD float ptr [EDX*0x4 + 0x7a4d24]
004163CA  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
004163D0  D9 59 70                  FSTP float ptr [ECX + 0x70]
004163D3  C3                        RET

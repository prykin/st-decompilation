FUN_00476120:
00476120  8B 81 D6 05 00 00         MOV EAX,dword ptr [ECX + 0x5d6]
00476126  85 C0                     TEST EAX,EAX
00476128  74 4D                     JZ 0x00476177
0047612A  83 F8 01                  CMP EAX,0x1
0047612D  74 48                     JZ 0x00476177
0047612F  83 F8 02                  CMP EAX,0x2
00476132  75 09                     JNZ 0x0047613d
00476134  50                        PUSH EAX
00476135  E8 74 B0 F8 FF            CALL 0x004011ae
0047613A  C2 04 00                  RET 0x4
LAB_0047613d:
0047613D  83 F8 05                  CMP EAX,0x5
00476140  75 08                     JNZ 0x0047614a
00476142  8B 01                     MOV EAX,dword ptr [ECX]
00476144  FF 50 20                  CALL dword ptr [EAX + 0x20]
00476147  C2 04 00                  RET 0x4
LAB_0047614a:
0047614A  68 C4 B0 7A 00            PUSH 0x7ab0c4
0047614F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00476154  6A 00                     PUSH 0x0
00476156  6A 00                     PUSH 0x0
00476158  68 FA 30 00 00            PUSH 0x30fa
0047615D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00476162  E8 69 73 23 00            CALL 0x006ad4d0
00476167  83 C4 18                  ADD ESP,0x18
0047616A  85 C0                     TEST EAX,EAX
0047616C  74 01                     JZ 0x0047616f
0047616E  CC                        INT3
LAB_0047616f:
0047616F  B8 02 00 00 00            MOV EAX,0x2
00476174  C2 04 00                  RET 0x4
LAB_00476177:
00476177  8B 11                     MOV EDX,dword ptr [ECX]
00476179  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0047617F  F7 D8                     NEG EAX
00476181  1B C0                     SBB EAX,EAX
00476183  C2 04 00                  RET 0x4

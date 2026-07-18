FUN_0063ca50:
0063CA50  55                        PUSH EBP
0063CA51  8B EC                     MOV EBP,ESP
0063CA53  8B 91 9A 02 00 00         MOV EDX,dword ptr [ECX + 0x29a]
0063CA59  33 C0                     XOR EAX,EAX
0063CA5B  4A                        DEC EDX
0063CA5C  74 57                     JZ 0x0063cab5
0063CA5E  4A                        DEC EDX
0063CA5F  74 10                     JZ 0x0063ca71
0063CA61  4A                        DEC EDX
0063CA62  0F 85 90 00 00 00         JNZ 0x0063caf8
0063CA68  B8 01 00 00 00            MOV EAX,0x1
0063CA6D  5D                        POP EBP
0063CA6E  C2 04 00                  RET 0x4
LAB_0063ca71:
0063CA71  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0063CA74  C7 81 92 02 00 00 06 00 00 00  MOV dword ptr [ECX + 0x292],0x6
0063CA7E  89 91 8E 02 00 00         MOV dword ptr [ECX + 0x28e],EDX
0063CA84  8B 91 6E 02 00 00         MOV EDX,dword ptr [ECX + 0x26e]
0063CA8A  89 91 7E 02 00 00         MOV dword ptr [ECX + 0x27e],EDX
0063CA90  C7 81 96 02 00 00 01 00 00 00  MOV dword ptr [ECX + 0x296],0x1
0063CA9A  0F BF 91 57 02 00 00      MOVSX EDX,word ptr [ECX + 0x257]
0063CAA1  89 91 82 02 00 00         MOV dword ptr [ECX + 0x282],EDX
0063CAA7  C7 81 9A 02 00 00 03 00 00 00  MOV dword ptr [ECX + 0x29a],0x3
0063CAB1  5D                        POP EBP
0063CAB2  C2 04 00                  RET 0x4
LAB_0063cab5:
0063CAB5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0063CAB8  C7 81 92 02 00 00 0A 00 00 00  MOV dword ptr [ECX + 0x292],0xa
0063CAC2  89 91 8E 02 00 00         MOV dword ptr [ECX + 0x28e],EDX
0063CAC8  C7 81 96 02 00 00 01 00 00 00  MOV dword ptr [ECX + 0x296],0x1
0063CAD2  0F BF 91 57 02 00 00      MOVSX EDX,word ptr [ECX + 0x257]
0063CAD9  83 C2 19                  ADD EDX,0x19
0063CADC  C7 81 9A 02 00 00 02 00 00 00  MOV dword ptr [ECX + 0x29a],0x2
0063CAE6  89 91 82 02 00 00         MOV dword ptr [ECX + 0x282],EDX
0063CAEC  8B 91 6E 02 00 00         MOV EDX,dword ptr [ECX + 0x26e]
0063CAF2  89 91 7E 02 00 00         MOV dword ptr [ECX + 0x27e],EDX
LAB_0063caf8:
0063CAF8  5D                        POP EBP
0063CAF9  C2 04 00                  RET 0x4

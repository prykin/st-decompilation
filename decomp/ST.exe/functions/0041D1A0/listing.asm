STMineSetC::sub_0041D1A0:
0041D1A0  55                        PUSH EBP
0041D1A1  8B EC                     MOV EBP,ESP
0041D1A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0041D1A6  56                        PUSH ESI
0041D1A7  8B F1                     MOV ESI,ECX
0041D1A9  89 86 0D 01 00 00         MOV dword ptr [ESI + 0x10d],EAX
0041D1AF  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0041D1B5  85 C9                     TEST ECX,ECX
0041D1B7  74 1F                     JZ 0x0041d1d8
0041D1B9  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041D1BC  6A FF                     PUSH -0x1
0041D1BE  52                        PUSH EDX
0041D1BF  50                        PUSH EAX
0041D1C0  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
0041D1C4  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041D1C7  50                        PUSH EAX
0041D1C8  52                        PUSH EDX
0041D1C9  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
0041D1CD  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
0041D1D1  50                        PUSH EAX
0041D1D2  52                        PUSH EDX
0041D1D3  E8 47 42 FE FF            CALL 0x0040141f
LAB_0041d1d8:
0041D1D8  8B 06                     MOV EAX,dword ptr [ESI]
0041D1DA  8B CE                     MOV ECX,ESI
0041D1DC  FF 50 08                  CALL dword ptr [EAX + 0x8]
0041D1DF  83 F8 01                  CMP EAX,0x1
0041D1E2  0F 85 81 00 00 00         JNZ 0x0041d269
0041D1E8  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041D1EB  33 C9                     XOR ECX,ECX
0041D1ED  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0041D1F3  3B C1                     CMP EAX,ECX
0041D1F5  75 72                     JNZ 0x0041d269
0041D1F7  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041D1FA  33 C0                     XOR EAX,EAX
0041D1FC  DB 86 09 01 00 00         FILD dword ptr [ESI + 0x109]
0041D202  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0041D206  C1 EA 10                  SHR EDX,0x10
0041D209  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041D20F  81 E2 FF 00 00 00         AND EDX,0xff
0041D215  80 CE 02                  OR DH,0x2
0041D218  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0041D21E  C1 E2 10                  SHL EDX,0x10
0041D221  0B D0                     OR EDX,EAX
0041D223  52                        PUSH EDX
0041D224  6A 28                     PUSH 0x28
0041D226  51                        PUSH ECX
0041D227  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
0041D22B  D9 1C 24                  FSTP float ptr [ESP]
0041D22E  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0041D231  51                        PUSH ECX
0041D232  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041D235  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
0041D239  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041D23F  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0041D242  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041D248  D9 1C 24                  FSTP float ptr [ESP]
0041D24B  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041D24E  51                        PUSH ECX
0041D24F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0041D255  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041D25B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041D261  D9 1C 24                  FSTP float ptr [ESP]
0041D264  E8 A7 94 2C 00            CALL 0x006e6710
LAB_0041d269:
0041D269  5E                        POP ESI
0041D26A  5D                        POP EBP
0041D26B  C2 04 00                  RET 0x4

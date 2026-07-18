FUN_0041d100:
0041D100  56                        PUSH ESI
0041D101  8B F1                     MOV ESI,ECX
0041D103  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0041D109  85 C9                     TEST ECX,ECX
0041D10B  74 23                     JZ 0x0041d130
0041D10D  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0041D110  8B 96 09 01 00 00         MOV EDX,dword ptr [ESI + 0x109]
0041D116  50                        PUSH EAX
0041D117  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041D11A  52                        PUSH EDX
0041D11B  50                        PUSH EAX
0041D11C  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
0041D120  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
0041D124  52                        PUSH EDX
0041D125  50                        PUSH EAX
0041D126  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
0041D12A  52                        PUSH EDX
0041D12B  E8 06 45 FE FF            CALL 0x00401636
LAB_0041d130:
0041D130  8B 06                     MOV EAX,dword ptr [ESI]
0041D132  8B CE                     MOV ECX,ESI
0041D134  FF 50 08                  CALL dword ptr [EAX + 0x8]
0041D137  83 F8 01                  CMP EAX,0x1
0041D13A  75 35                     JNZ 0x0041d171
0041D13C  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041D13F  33 C9                     XOR ECX,ECX
0041D141  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0041D147  3B C1                     CMP EAX,ECX
0041D149  75 26                     JNZ 0x0041d171
0041D14B  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041D14E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0041D154  C1 EA 10                  SHR EDX,0x10
0041D157  81 E2 FF 00 00 00         AND EDX,0xff
0041D15D  33 C0                     XOR EAX,EAX
0041D15F  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0041D163  80 CE 01                  OR DH,0x1
0041D166  C1 E2 10                  SHL EDX,0x10
0041D169  0B D0                     OR EDX,EAX
0041D16B  52                        PUSH EDX
0041D16C  E8 0F 96 2C 00            CALL 0x006e6780
LAB_0041d171:
0041D171  C7 86 09 01 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x109],0xffffffff
0041D17B  5E                        POP ESI
0041D17C  C2 04 00                  RET 0x4

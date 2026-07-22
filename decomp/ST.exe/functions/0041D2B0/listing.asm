STMineSetC::sub_0041D2B0:
0041D2B0  56                        PUSH ESI
0041D2B1  8B F1                     MOV ESI,ECX
0041D2B3  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0041D2B9  85 C9                     TEST ECX,ECX
0041D2BB  74 23                     JZ 0x0041d2e0
0041D2BD  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0041D2C0  8B 96 0D 01 00 00         MOV EDX,dword ptr [ESI + 0x10d]
0041D2C6  50                        PUSH EAX
0041D2C7  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041D2CA  52                        PUSH EDX
0041D2CB  50                        PUSH EAX
0041D2CC  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
0041D2D0  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
0041D2D4  52                        PUSH EDX
0041D2D5  50                        PUSH EAX
0041D2D6  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
0041D2DA  52                        PUSH EDX
0041D2DB  E8 B1 6F FE FF            CALL 0x00404291
LAB_0041d2e0:
0041D2E0  8B 06                     MOV EAX,dword ptr [ESI]
0041D2E2  8B CE                     MOV ECX,ESI
0041D2E4  FF 50 08                  CALL dword ptr [EAX + 0x8]
0041D2E7  83 F8 01                  CMP EAX,0x1
0041D2EA  75 35                     JNZ 0x0041d321
0041D2EC  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041D2EF  33 C9                     XOR ECX,ECX
0041D2F1  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0041D2F7  3B C1                     CMP EAX,ECX
0041D2F9  75 26                     JNZ 0x0041d321
0041D2FB  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041D2FE  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0041D304  C1 EA 10                  SHR EDX,0x10
0041D307  81 E2 FF 00 00 00         AND EDX,0xff
0041D30D  33 C0                     XOR EAX,EAX
0041D30F  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0041D313  80 CE 02                  OR DH,0x2
0041D316  C1 E2 10                  SHL EDX,0x10
0041D319  0B D0                     OR EDX,EAX
0041D31B  52                        PUSH EDX
0041D31C  E8 5F 94 2C 00            CALL 0x006e6780
LAB_0041d321:
0041D321  C7 86 0D 01 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x10d],0xffffffff
0041D32B  5E                        POP ESI
0041D32C  C2 04 00                  RET 0x4

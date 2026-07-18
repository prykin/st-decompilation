FUN_0041d4f0:
0041D4F0  56                        PUSH ESI
0041D4F1  8B F1                     MOV ESI,ECX
0041D4F3  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0041D4F9  85 C9                     TEST ECX,ECX
0041D4FB  74 23                     JZ 0x0041d520
0041D4FD  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0041D500  8B 96 11 01 00 00         MOV EDX,dword ptr [ESI + 0x111]
0041D506  50                        PUSH EAX
0041D507  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041D50A  52                        PUSH EDX
0041D50B  50                        PUSH EAX
0041D50C  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
0041D510  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
0041D514  52                        PUSH EDX
0041D515  50                        PUSH EAX
0041D516  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
0041D51A  52                        PUSH EDX
0041D51B  E8 C0 78 FE FF            CALL 0x00404de0
LAB_0041d520:
0041D520  8B 06                     MOV EAX,dword ptr [ESI]
0041D522  8B CE                     MOV ECX,ESI
0041D524  FF 50 08                  CALL dword ptr [EAX + 0x8]
0041D527  83 F8 01                  CMP EAX,0x1
0041D52A  75 35                     JNZ 0x0041d561
0041D52C  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041D52F  33 C9                     XOR ECX,ECX
0041D531  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0041D537  3B C1                     CMP EAX,ECX
0041D539  75 26                     JNZ 0x0041d561
0041D53B  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041D53E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0041D544  C1 EA 10                  SHR EDX,0x10
0041D547  81 E2 FF 00 00 00         AND EDX,0xff
0041D54D  33 C0                     XOR EAX,EAX
0041D54F  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0041D553  80 CE 03                  OR DH,0x3
0041D556  C1 E2 10                  SHL EDX,0x10
0041D559  0B D0                     OR EDX,EAX
0041D55B  52                        PUSH EDX
0041D55C  E8 1F 92 2C 00            CALL 0x006e6780
LAB_0041d561:
0041D561  C7 86 11 01 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x111],0xffffffff
0041D56B  5E                        POP ESI
0041D56C  C2 04 00                  RET 0x4

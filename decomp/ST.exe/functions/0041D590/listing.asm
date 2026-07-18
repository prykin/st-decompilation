FUN_0041d590:
0041D590  8B C1                     MOV EAX,ECX
0041D592  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0041D598  85 C9                     TEST ECX,ECX
0041D59A  74 2A                     JZ 0x0041d5c6
0041D59C  F6 80 D1 01 00 00 01      TEST byte ptr [EAX + 0x1d1],0x1
0041D5A3  75 21                     JNZ 0x0041d5c6
0041D5A5  8B 90 01 01 00 00         MOV EDX,dword ptr [EAX + 0x101]
0041D5AB  6A 19                     PUSH 0x19
0041D5AD  52                        PUSH EDX
0041D5AE  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
0041D5B1  52                        PUSH EDX
0041D5B2  0F BF 50 5F               MOVSX EDX,word ptr [EAX + 0x5f]
0041D5B6  52                        PUSH EDX
0041D5B7  0F BF 50 5D               MOVSX EDX,word ptr [EAX + 0x5d]
0041D5BB  0F BF 40 5B               MOVSX EAX,word ptr [EAX + 0x5b]
0041D5BF  52                        PUSH EDX
0041D5C0  50                        PUSH EAX
0041D5C1  E8 0C 4A FE FF            CALL 0x00401fd2
LAB_0041d5c6:
0041D5C6  C3                        RET

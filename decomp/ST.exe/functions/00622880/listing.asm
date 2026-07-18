FUN_00622880:
00622880  56                        PUSH ESI
00622881  8B F1                     MOV ESI,ECX
00622883  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00622889  E8 47 F9 DD FF            CALL 0x004021d5
0062288E  8A 86 AD 02 00 00         MOV AL,byte ptr [ESI + 0x2ad]
00622894  3C 02                     CMP AL,0x2
00622896  76 5C                     JBE 0x006228f4
00622898  3C 03                     CMP AL,0x3
0062289A  0F 85 89 00 00 00         JNZ 0x00622929
006228A0  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
006228A6  85 C9                     TEST ECX,ECX
006228A8  74 7F                     JZ 0x00622929
006228AA  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006228AD  8B 15 C0 02 7D 00         MOV EDX,dword ptr [0x007d02c0]
006228B3  6A FF                     PUSH -0x1
006228B5  50                        PUSH EAX
006228B6  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
006228B9  52                        PUSH EDX
006228BA  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
006228BE  50                        PUSH EAX
006228BF  52                        PUSH EDX
006228C0  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
006228C4  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
006228C8  50                        PUSH EAX
006228C9  52                        PUSH EDX
006228CA  E8 23 F0 DD FF            CALL 0x004018f2
006228CF  66 83 7E 5B 00            CMP word ptr [ESI + 0x5b],0x0
006228D4  7C 53                     JL 0x00622929
006228D6  66 83 7E 5D 00            CMP word ptr [ESI + 0x5d],0x0
006228DB  7C 4C                     JL 0x00622929
006228DD  66 83 7E 5F 00            CMP word ptr [ESI + 0x5f],0x0
006228E2  7C 45                     JL 0x00622929
006228E4  8B 86 0D 01 00 00         MOV EAX,dword ptr [ESI + 0x10d]
006228EA  8B CE                     MOV ECX,ESI
006228EC  50                        PUSH EAX
006228ED  E8 7A F8 DD FF            CALL 0x0040216c
006228F2  EB 35                     JMP 0x00622929
LAB_006228f4:
006228F4  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
006228FA  85 C9                     TEST ECX,ECX
006228FC  74 2B                     JZ 0x00622929
006228FE  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00622901  25 FF 00 00 00            AND EAX,0xff
00622906  6A FF                     PUSH -0x1
00622908  52                        PUSH EDX
00622909  8B 04 85 B4 02 7D 00      MOV EAX,dword ptr [EAX*0x4 + 0x7d02b4]
00622910  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00622913  50                        PUSH EAX
00622914  52                        PUSH EDX
00622915  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
00622919  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0062291D  50                        PUSH EAX
0062291E  52                        PUSH EDX
0062291F  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00622923  50                        PUSH EAX
00622924  E8 C9 EF DD FF            CALL 0x004018f2
LAB_00622929:
00622929  8B 86 4A 03 00 00         MOV EAX,dword ptr [ESI + 0x34a]
0062292F  85 C0                     TEST EAX,EAX
00622931  74 10                     JZ 0x00622943
00622933  50                        PUSH EAX
00622934  E8 D7 B7 08 00            CALL 0x006ae110
00622939  C7 86 4A 03 00 00 00 00 00 00  MOV dword ptr [ESI + 0x34a],0x0
LAB_00622943:
00622943  5E                        POP ESI
00622944  C3                        RET

FUN_0056a960:
0056A960  55                        PUSH EBP
0056A961  8B EC                     MOV EBP,ESP
0056A963  53                        PUSH EBX
0056A964  56                        PUSH ESI
0056A965  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0056A968  57                        PUSH EDI
0056A969  8B F9                     MOV EDI,ECX
0056A96B  81 E2 FF 00 00 00         AND EDX,0xff
0056A971  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0056A974  8B F7                     MOV ESI,EDI
0056A976  8B C1                     MOV EAX,ECX
0056A978  25 FF 00 00 00            AND EAX,0xff
0056A97D  03 F0                     ADD ESI,EAX
0056A97F  B0 01                     MOV AL,0x1
0056A981  8A 9C D6 2F 14 00 00      MOV BL,byte ptr [ESI + EDX*0x8 + 0x142f]
0056A988  8D B4 D6 2F 14 00 00      LEA ESI,[ESI + EDX*0x8 + 0x142f]
0056A98F  2A C3                     SUB AL,BL
0056A991  88 06                     MOV byte ptr [ESI],AL
0056A993  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0056A999  85 F6                     TEST ESI,ESI
0056A99B  74 31                     JZ 0x0056a9ce
0056A99D  3A 8F 2D 11 00 00         CMP CL,byte ptr [EDI + 0x112d]
0056A9A3  75 29                     JNZ 0x0056a9ce
0056A9A5  84 C0                     TEST AL,AL
0056A9A7  75 11                     JNZ 0x0056a9ba
0056A9A9  52                        PUSH EDX
0056A9AA  6A 00                     PUSH 0x0
0056A9AC  8B CE                     MOV ECX,ESI
0056A9AE  E8 62 B5 E9 FF            CALL 0x00405f15
0056A9B3  5F                        POP EDI
0056A9B4  5E                        POP ESI
0056A9B5  5B                        POP EBX
0056A9B6  5D                        POP EBP
0056A9B7  C2 08 00                  RET 0x8
LAB_0056a9ba:
0056A9BA  8A 87 74 14 00 00         MOV AL,byte ptr [EDI + 0x1474]
0056A9C0  84 C0                     TEST AL,AL
0056A9C2  74 0A                     JZ 0x0056a9ce
0056A9C4  52                        PUSH EDX
0056A9C5  6A 01                     PUSH 0x1
0056A9C7  8B CE                     MOV ECX,ESI
0056A9C9  E8 47 B5 E9 FF            CALL 0x00405f15
LAB_0056a9ce:
0056A9CE  5F                        POP EDI
0056A9CF  5E                        POP ESI
0056A9D0  5B                        POP EBX
0056A9D1  5D                        POP EBP
0056A9D2  C2 08 00                  RET 0x8

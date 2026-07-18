FUN_00661580:
00661580  53                        PUSH EBX
00661581  56                        PUSH ESI
00661582  57                        PUSH EDI
00661583  8B F9                     MOV EDI,ECX
00661585  8B 8F 84 02 00 00         MOV ECX,dword ptr [EDI + 0x284]
0066158B  85 C9                     TEST ECX,ECX
0066158D  0F 84 D6 00 00 00         JZ 0x00661669
00661593  8B 87 0B 02 00 00         MOV EAX,dword ptr [EDI + 0x20b]
00661599  85 C0                     TEST EAX,EAX
0066159B  0F 84 C8 00 00 00         JZ 0x00661669
006615A1  8B 87 FB 01 00 00         MOV EAX,dword ptr [EDI + 0x1fb]
006615A7  85 C0                     TEST EAX,EAX
006615A9  74 16                     JZ 0x006615c1
006615AB  8B 97 FF 01 00 00         MOV EDX,dword ptr [EDI + 0x1ff]
006615B1  03 D0                     ADD EDX,EAX
006615B3  8B 87 80 02 00 00         MOV EAX,dword ptr [EDI + 0x280]
006615B9  3B C2                     CMP EAX,EDX
006615BB  0F 82 A8 00 00 00         JC 0x00661669
LAB_006615c1:
006615C1  8B 87 80 02 00 00         MOV EAX,dword ptr [EDI + 0x280]
006615C7  89 87 FF 01 00 00         MOV dword ptr [EDI + 0x1ff],EAX
006615CD  8A 87 FF 00 00 00         MOV AL,byte ptr [EDI + 0xff]
006615D3  84 C0                     TEST AL,AL
006615D5  74 28                     JZ 0x006615ff
006615D7  66 83 7F 7B 02            CMP word ptr [EDI + 0x7b],0x2
006615DC  75 21                     JNZ 0x006615ff
006615DE  66 83 7F 39 03            CMP word ptr [EDI + 0x39],0x3
006615E3  8B 81 38 01 00 00         MOV EAX,dword ptr [ECX + 0x138]
006615E9  75 06                     JNZ 0x006615f1
006615EB  85 C0                     TEST EAX,EAX
006615ED  74 7A                     JZ 0x00661669
006615EF  EB 0E                     JMP 0x006615ff
LAB_006615f1:
006615F1  85 C0                     TEST EAX,EAX
006615F3  75 0A                     JNZ 0x006615ff
006615F5  8B 81 34 01 00 00         MOV EAX,dword ptr [ECX + 0x134]
006615FB  85 C0                     TEST EAX,EAX
006615FD  74 6A                     JZ 0x00661669
LAB_006615ff:
006615FF  66 8B 57 7D               MOV DX,word ptr [EDI + 0x7d]
00661603  52                        PUSH EDX
00661604  E8 EC 18 DA FF            CALL 0x00402ef5
00661609  66 8B 4F 7B               MOV CX,word ptr [EDI + 0x7b]
0066160D  66 49                     DEC CX
0066160F  66 F7 D9                  NEG CX
00661612  1B C9                     SBB ECX,ECX
00661614  83 C1 03                  ADD ECX,0x3
00661617  3B C1                     CMP EAX,ECX
00661619  7D 4E                     JGE 0x00661669
0066161B  8B 87 0B 02 00 00         MOV EAX,dword ptr [EDI + 0x20b]
00661621  33 DB                     XOR EBX,EBX
00661623  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00661626  85 C9                     TEST ECX,ECX
00661628  7E 3F                     JLE 0x00661669
0066162A  3B D9                     CMP EBX,ECX
LAB_0066162c:
0066162C  73 0D                     JNC 0x0066163b
0066162E  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00661631  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00661634  0F AF F3                  IMUL ESI,EBX
00661637  03 F1                     ADD ESI,ECX
00661639  EB 02                     JMP 0x0066163d
LAB_0066163b:
0066163B  33 F6                     XOR ESI,ESI
LAB_0066163d:
0066163D  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
00661640  85 C0                     TEST EAX,EAX
00661642  75 17                     JNZ 0x0066165b
00661644  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00661647  85 C0                     TEST EAX,EAX
00661649  75 10                     JNZ 0x0066165b
0066164B  53                        PUSH EBX
0066164C  56                        PUSH ESI
0066164D  8B CF                     MOV ECX,EDI
0066164F  E8 75 17 DA FF            CALL 0x00402dc9
00661654  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00661657  85 C0                     TEST EAX,EAX
00661659  75 0E                     JNZ 0x00661669
LAB_0066165b:
0066165B  8B 87 0B 02 00 00         MOV EAX,dword ptr [EDI + 0x20b]
00661661  43                        INC EBX
00661662  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00661665  3B D9                     CMP EBX,ECX
00661667  7C C3                     JL 0x0066162c
LAB_00661669:
00661669  5F                        POP EDI
0066166A  5E                        POP ESI
0066166B  5B                        POP EBX
0066166C  C3                        RET

FUN_004c90c0:
004C90C0  53                        PUSH EBX
004C90C1  56                        PUSH ESI
004C90C2  8B F1                     MOV ESI,ECX
004C90C4  BB 01 00 00 00            MOV EBX,0x1
004C90C9  57                        PUSH EDI
004C90CA  8B C3                     MOV EAX,EBX
004C90CC  8B 8E 61 03 00 00         MOV ECX,dword ptr [ESI + 0x361]
004C90D2  85 C9                     TEST ECX,ECX
004C90D4  0F 84 8A 00 00 00         JZ 0x004c9164
004C90DA  49                        DEC ECX
004C90DB  74 1C                     JZ 0x004c90f9
004C90DD  49                        DEC ECX
004C90DE  74 10                     JZ 0x004c90f0
004C90E0  83 E9 03                  SUB ECX,0x3
004C90E3  75 07                     JNZ 0x004c90ec
004C90E5  8B CE                     MOV ECX,ESI
004C90E7  E8 7C C6 F3 FF            CALL 0x00405768
LAB_004c90ec:
004C90EC  8B FB                     MOV EDI,EBX
004C90EE  EB 16                     JMP 0x004c9106
LAB_004c90f0:
004C90F0  8B CE                     MOV ECX,ESI
004C90F2  E8 8A A3 F3 FF            CALL 0x00403481
004C90F7  EB 07                     JMP 0x004c9100
LAB_004c90f9:
004C90F9  8B CE                     MOV ECX,ESI
004C90FB  E8 DC 8E F3 FF            CALL 0x00401fdc
LAB_004c9100:
004C9100  8B F8                     MOV EDI,EAX
004C9102  85 FF                     TEST EDI,EDI
004C9104  74 5C                     JZ 0x004c9162
LAB_004c9106:
004C9106  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C910C  C7 86 61 03 00 00 00 00 00 00  MOV dword ptr [ESI + 0x361],0x0
004C9116  8B 0C 85 78 27 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x792778]
004C911D  85 C9                     TEST ECX,ECX
004C911F  74 39                     JZ 0x004c915a
004C9121  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004C9127  83 F8 45                  CMP EAX,0x45
004C912A  75 08                     JNZ 0x004c9134
004C912C  39 9E D0 04 00 00         CMP dword ptr [ESI + 0x4d0],EBX
004C9132  75 26                     JNZ 0x004c915a
LAB_004c9134:
004C9134  83 F8 4E                  CMP EAX,0x4e
004C9137  75 08                     JNZ 0x004c9141
004C9139  39 9E D0 04 00 00         CMP dword ptr [ESI + 0x4d0],EBX
004C913F  75 19                     JNZ 0x004c915a
LAB_004c9141:
004C9141  83 F8 72                  CMP EAX,0x72
004C9144  75 08                     JNZ 0x004c914e
004C9146  39 9E D0 04 00 00         CMP dword ptr [ESI + 0x4d0],EBX
004C914C  75 0C                     JNZ 0x004c915a
LAB_004c914e:
004C914E  89 9E 61 02 00 00         MOV dword ptr [ESI + 0x261],EBX
004C9154  89 9E E1 02 00 00         MOV dword ptr [ESI + 0x2e1],EBX
LAB_004c915a:
004C915A  53                        PUSH EBX
004C915B  8B CE                     MOV ECX,ESI
004C915D  E8 95 9B F3 FF            CALL 0x00402cf7
LAB_004c9162:
004C9162  8B C7                     MOV EAX,EDI
LAB_004c9164:
004C9164  5F                        POP EDI
004C9165  5E                        POP ESI
004C9166  5B                        POP EBX
004C9167  C3                        RET

FUN_004ebcb0:
004EBCB0  55                        PUSH EBP
004EBCB1  8B EC                     MOV EBP,ESP
004EBCB3  56                        PUSH ESI
004EBCB4  8B F1                     MOV ESI,ECX
004EBCB6  E8 B5 97 F1 FF            CALL 0x00405470
004EBCBB  85 C0                     TEST EAX,EAX
004EBCBD  0F 84 A2 00 00 00         JZ 0x004ebd65
004EBCC3  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
004EBCCA  8B 8E B8 05 00 00         MOV ECX,dword ptr [ESI + 0x5b8]
004EBCD0  48                        DEC EAX
004EBCD1  3B C8                     CMP ECX,EAX
004EBCD3  0F 8D 8C 00 00 00         JGE 0x004ebd65
004EBCD9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004EBCDC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004EBCDF  33 C0                     XOR EAX,EAX
004EBCE1  89 8E 08 05 00 00         MOV dword ptr [ESI + 0x508],ECX
004EBCE7  50                        PUSH EAX
004EBCE8  8B CE                     MOV ECX,ESI
004EBCEA  C7 86 D0 04 00 00 03 00 00 00  MOV dword ptr [ESI + 0x4d0],0x3
004EBCF4  89 96 0C 05 00 00         MOV dword ptr [ESI + 0x50c],EDX
004EBCFA  89 86 DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EAX
004EBD00  89 86 E0 04 00 00         MOV dword ptr [ESI + 0x4e0],EAX
004EBD06  89 86 EC 04 00 00         MOV dword ptr [ESI + 0x4ec],EAX
004EBD0C  E8 E6 6F F1 FF            CALL 0x00402cf7
004EBD11  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004EBD17  83 F8 52                  CMP EAX,0x52
004EBD1A  75 33                     JNZ 0x004ebd4f
004EBD1C  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004EBD22  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBD28  57                        PUSH EDI
004EBD29  8B 3E                     MOV EDI,dword ptr [ESI]
004EBD2B  50                        PUSH EAX
004EBD2C  E8 86 8C F1 FF            CALL 0x004049b7
004EBD31  2C 02                     SUB AL,0x2
004EBD33  8B CE                     MOV ECX,ESI
004EBD35  F6 D8                     NEG AL
004EBD37  1B C0                     SBB EAX,EAX
004EBD39  24 3B                     AND AL,0x3b
004EBD3B  05 5E 03 00 00            ADD EAX,0x35e
004EBD40  50                        PUSH EAX
004EBD41  6A 03                     PUSH 0x3
004EBD43  FF 97 90 00 00 00         CALL dword ptr [EDI + 0x90]
004EBD49  5F                        POP EDI
004EBD4A  5E                        POP ESI
004EBD4B  5D                        POP EBP
004EBD4C  C2 08 00                  RET 0x8
LAB_004ebd4f:
004EBD4F  83 F8 5F                  CMP EAX,0x5f
004EBD52  75 11                     JNZ 0x004ebd65
004EBD54  8B 16                     MOV EDX,dword ptr [ESI]
004EBD56  68 B1 03 00 00            PUSH 0x3b1
004EBD5B  6A 03                     PUSH 0x3
004EBD5D  8B CE                     MOV ECX,ESI
004EBD5F  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004ebd65:
004EBD65  5E                        POP ESI
004EBD66  5D                        POP EBP
004EBD67  C2 08 00                  RET 0x8

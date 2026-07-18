FUN_006e6460:
006E6460  55                        PUSH EBP
006E6461  8B EC                     MOV EBP,ESP
006E6463  53                        PUSH EBX
006E6464  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006E6467  56                        PUSH ESI
006E6468  57                        PUSH EDI
006E6469  85 DB                     TEST EBX,EBX
006E646B  8B F9                     MOV EDI,ECX
006E646D  7F 09                     JG 0x006e6478
006E646F  5F                        POP EDI
006E6470  5E                        POP ESI
006E6471  33 C0                     XOR EAX,EAX
006E6473  5B                        POP EBX
006E6474  5D                        POP EBP
006E6475  C2 18 00                  RET 0x18
LAB_006e6478:
006E6478  6A 1C                     PUSH 0x1c
006E647A  E8 91 47 FC FF            CALL 0x006aac10
006E647F  8B F0                     MOV ESI,EAX
006E6481  85 F6                     TEST ESI,ESI
006E6483  75 07                     JNZ 0x006e648c
006E6485  5F                        POP EDI
006E6486  5E                        POP ESI
006E6487  5B                        POP EBX
006E6488  5D                        POP EBP
006E6489  C2 18 00                  RET 0x18
LAB_006e648c:
006E648C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E648F  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
006E6493  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
006E6496  8A 45 18                  MOV AL,byte ptr [EBP + 0x18]
006E6499  66 8B 55 14               MOV DX,word ptr [EBP + 0x14]
006E649D  88 46 0C                  MOV byte ptr [ESI + 0xc],AL
006E64A0  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006E64A3  66 89 4E 0E               MOV word ptr [ESI + 0xe],CX
006E64A7  85 C0                     TEST EAX,EAX
006E64A9  0F 95 C1                  SETNZ CL
006E64AC  88 4E 0D                  MOV byte ptr [ESI + 0xd],CL
006E64AF  B9 FF 7F 00 00            MOV ECX,0x7fff
006E64B4  85 C0                     TEST EAX,EAX
006E64B6  88 5E 17                  MOV byte ptr [ESI + 0x17],BL
006E64B9  66 89 56 10               MOV word ptr [ESI + 0x10],DX
006E64BD  66 89 4E 12               MOV word ptr [ESI + 0x12],CX
006E64C1  66 89 4E 14               MOV word ptr [ESI + 0x14],CX
006E64C5  56                        PUSH ESI
006E64C6  74 15                     JZ 0x006e64dd
006E64C8  81 C7 46 04 00 00         ADD EDI,0x446
006E64CE  57                        PUSH EDI
006E64CF  E8 3C 34 FD FF            CALL 0x006b9910
006E64D4  8B C6                     MOV EAX,ESI
006E64D6  5F                        POP EDI
006E64D7  5E                        POP ESI
006E64D8  5B                        POP EBX
006E64D9  5D                        POP EBP
006E64DA  C2 18 00                  RET 0x18
LAB_006e64dd:
006E64DD  81 C7 4A 04 00 00         ADD EDI,0x44a
006E64E3  57                        PUSH EDI
006E64E4  E8 27 34 FD FF            CALL 0x006b9910
006E64E9  8B C6                     MOV EAX,ESI
006E64EB  5F                        POP EDI
006E64EC  5E                        POP ESI
006E64ED  5B                        POP EBX
006E64EE  5D                        POP EBP
006E64EF  C2 18 00                  RET 0x18

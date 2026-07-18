FUN_0073c610:
0073C610  55                        PUSH EBP
0073C611  8B EC                     MOV EBP,ESP
0073C613  83 EC 1C                  SUB ESP,0x1c
0073C616  C7 45 F4 00 00 00 80      MOV dword ptr [EBP + -0xc],0x80000000
0073C61D  66 C7 45 FC 00 00         MOV word ptr [EBP + -0x4],0x0
0073C623  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073C626  33 C9                     XOR ECX,ECX
0073C628  66 8B 48 06               MOV CX,word ptr [EAX + 0x6]
0073C62C  81 E1 F0 7F 00 00         AND ECX,0x7ff0
0073C632  C1 F9 04                  SAR ECX,0x4
0073C635  66 89 4D EC               MOV word ptr [EBP + -0x14],CX
0073C639  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073C63C  33 C0                     XOR EAX,EAX
0073C63E  66 8B 42 06               MOV AX,word ptr [EDX + 0x6]
0073C642  25 00 80 00 00            AND EAX,0x8000
0073C647  66 89 45 E8               MOV word ptr [EBP + -0x18],AX
0073C64B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073C64E  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0073C651  81 E2 FF FF 0F 00         AND EDX,0xfffff
0073C657  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0073C65A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073C65D  8B 08                     MOV ECX,dword ptr [EAX]
0073C65F  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0073C662  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0073C665  81 E2 FF FF 00 00         AND EDX,0xffff
0073C66B  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0073C66E  83 7D E4 00               CMP dword ptr [EBP + -0x1c],0x0
0073C672  74 13                     JZ 0x0073c687
0073C674  81 7D E4 FF 07 00 00      CMP dword ptr [EBP + -0x1c],0x7ff
0073C67B  74 02                     JZ 0x0073c67f
0073C67D  EB 4B                     JMP 0x0073c6ca
LAB_0073c67f:
0073C67F  66 C7 45 FC FF 7F         MOV word ptr [EBP + -0x4],0x7fff
0073C685  EB 5E                     JMP 0x0073c6e5
LAB_0073c687:
0073C687  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0073C68B  75 27                     JNZ 0x0073c6b4
0073C68D  83 7D F0 00               CMP dword ptr [EBP + -0x10],0x0
0073C691  75 21                     JNZ 0x0073c6b4
0073C693  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073C696  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
0073C69D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073C6A0  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
0073C6A6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073C6A9  66 C7 42 08 00 00         MOV word ptr [EDX + 0x8],0x0
0073C6AF  E9 BA 00 00 00            JMP 0x0073c76e
LAB_0073c6b4:
0073C6B4  0F BF 45 EC               MOVSX EAX,word ptr [EBP + -0x14]
0073C6B8  05 01 3C 00 00            ADD EAX,0x3c01
0073C6BD  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
0073C6C1  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0073C6C8  EB 1B                     JMP 0x0073c6e5
LAB_0073c6ca:
0073C6CA  66 8B 4D EC               MOV CX,word ptr [EBP + -0x14]
0073C6CE  66 81 E9 FF 03            SUB CX,0x3ff
0073C6D3  66 89 4D EC               MOV word ptr [EBP + -0x14],CX
0073C6D7  0F BF 55 EC               MOVSX EDX,word ptr [EBP + -0x14]
0073C6DB  81 C2 FF 3F 00 00         ADD EDX,0x3fff
0073C6E1  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
LAB_0073c6e5:
0073C6E5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073C6E8  C1 E0 0B                  SHL EAX,0xb
0073C6EB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073C6EE  0B C8                     OR ECX,EAX
0073C6F0  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0073C6F3  C1 EA 15                  SHR EDX,0x15
0073C6F6  0B CA                     OR ECX,EDX
0073C6F8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073C6FB  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0073C6FE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0073C701  C1 E1 0B                  SHL ECX,0xb
0073C704  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073C707  89 0A                     MOV dword ptr [EDX],ECX
LAB_0073c709:
0073C709  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073C70C  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0073C70F  81 E1 00 00 00 80         AND ECX,0x80000000
0073C715  85 C9                     TEST ECX,ECX
0073C717  75 3B                     JNZ 0x0073c754
0073C719  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073C71C  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0073C71F  D1 E0                     SHL EAX,0x1
0073C721  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073C724  8B 11                     MOV EDX,dword ptr [ECX]
0073C726  81 E2 00 00 00 80         AND EDX,0x80000000
0073C72C  F7 DA                     NEG EDX
0073C72E  1B D2                     SBB EDX,EDX
0073C730  F7 DA                     NEG EDX
0073C732  0B C2                     OR EAX,EDX
0073C734  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073C737  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0073C73A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073C73D  8B 02                     MOV EAX,dword ptr [EDX]
0073C73F  D1 E0                     SHL EAX,0x1
0073C741  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073C744  89 01                     MOV dword ptr [ECX],EAX
0073C746  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
0073C74A  66 83 EA 01               SUB DX,0x1
0073C74E  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
0073C752  EB B5                     JMP 0x0073c709
LAB_0073c754:
0073C754  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0073C757  25 FF FF 00 00            AND EAX,0xffff
0073C75C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073C75F  81 E1 FF FF 00 00         AND ECX,0xffff
0073C765  0B C1                     OR EAX,ECX
0073C767  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073C76A  66 89 42 08               MOV word ptr [EDX + 0x8],AX
LAB_0073c76e:
0073C76E  8B E5                     MOV ESP,EBP
0073C770  5D                        POP EBP
0073C771  C3                        RET

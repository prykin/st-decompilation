FUN_005ef7a0:
005EF7A0  55                        PUSH EBP
005EF7A1  8B EC                     MOV EBP,ESP
005EF7A3  53                        PUSH EBX
005EF7A4  56                        PUSH ESI
005EF7A5  8B F1                     MOV ESI,ECX
005EF7A7  57                        PUSH EDI
005EF7A8  8A 86 52 02 00 00         MOV AL,byte ptr [ESI + 0x252]
005EF7AE  84 C0                     TEST AL,AL
005EF7B0  74 79                     JZ 0x005ef82b
005EF7B2  66 8B 86 42 02 00 00      MOV AX,word ptr [ESI + 0x242]
005EF7B9  66 8B 8E 46 02 00 00      MOV CX,word ptr [ESI + 0x246]
005EF7C0  66 8B 96 44 02 00 00      MOV DX,word ptr [ESI + 0x244]
005EF7C7  66 85 C0                  TEST AX,AX
005EF7CA  7C 50                     JL 0x005ef81c
005EF7CC  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
005EF7D3  66 3B C7                  CMP AX,DI
005EF7D6  7D 44                     JGE 0x005ef81c
005EF7D8  66 85 D2                  TEST DX,DX
005EF7DB  7C 3F                     JL 0x005ef81c
005EF7DD  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005EF7E4  7D 36                     JGE 0x005ef81c
005EF7E6  66 85 C9                  TEST CX,CX
005EF7E9  7C 31                     JL 0x005ef81c
005EF7EB  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005EF7F2  7D 28                     JGE 0x005ef81c
005EF7F4  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
005EF7FB  0F BF C9                  MOVSX ECX,CX
005EF7FE  0F AF D9                  IMUL EBX,ECX
005EF801  0F BF CF                  MOVSX ECX,DI
005EF804  0F BF D2                  MOVSX EDX,DX
005EF807  0F AF CA                  IMUL ECX,EDX
005EF80A  0F BF C0                  MOVSX EAX,AX
005EF80D  03 D9                     ADD EBX,ECX
005EF80F  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
005EF815  03 D8                     ADD EBX,EAX
005EF817  8B 04 D9                  MOV EAX,dword ptr [ECX + EBX*0x8]
005EF81A  EB 02                     JMP 0x005ef81e
LAB_005ef81c:
005EF81C  33 C0                     XOR EAX,EAX
LAB_005ef81e:
005EF81E  3B C6                     CMP EAX,ESI
005EF820  0F 85 AA 00 00 00         JNZ 0x005ef8d0
005EF826  E9 82 00 00 00            JMP 0x005ef8ad
LAB_005ef82b:
005EF82B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005EF82E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005EF831  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005EF834  66 85 C0                  TEST AX,AX
005EF837  7C 55                     JL 0x005ef88e
005EF839  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
005EF840  7D 4C                     JGE 0x005ef88e
005EF842  66 85 D2                  TEST DX,DX
005EF845  7C 47                     JL 0x005ef88e
005EF847  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005EF84E  7D 3E                     JGE 0x005ef88e
005EF850  66 85 C9                  TEST CX,CX
005EF853  7C 39                     JL 0x005ef88e
005EF855  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005EF85C  7D 30                     JGE 0x005ef88e
005EF85E  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
005EF865  0F BF D9                  MOVSX EBX,CX
005EF868  0F AF FB                  IMUL EDI,EBX
005EF86B  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
005EF872  0F BF D2                  MOVSX EDX,DX
005EF875  0F AF DA                  IMUL EBX,EDX
005EF878  0F BF D0                  MOVSX EDX,AX
005EF87B  03 FB                     ADD EDI,EBX
005EF87D  03 FA                     ADD EDI,EDX
005EF87F  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005EF885  83 3C FA 00               CMP dword ptr [EDX + EDI*0x8],0x0
005EF889  75 45                     JNZ 0x005ef8d0
005EF88B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_005ef88e:
005EF88E  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
005EF891  57                        PUSH EDI
005EF892  56                        PUSH ESI
005EF893  6A 00                     PUSH 0x0
005EF895  51                        PUSH ECX
005EF896  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005EF89C  52                        PUSH EDX
005EF89D  50                        PUSH EAX
005EF89E  E8 82 1A E1 FF            CALL 0x00401325
005EF8A3  85 C0                     TEST EAX,EAX
005EF8A5  75 29                     JNZ 0x005ef8d0
005EF8A7  FE 86 52 02 00 00         INC byte ptr [ESI + 0x252]
LAB_005ef8ad:
005EF8AD  8B 86 73 02 00 00         MOV EAX,dword ptr [ESI + 0x273]
005EF8B3  8B CE                     MOV ECX,ESI
005EF8B5  50                        PUSH EAX
005EF8B6  E8 68 49 E1 FF            CALL 0x00404223
005EF8BB  85 C0                     TEST EAX,EAX
005EF8BD  74 11                     JZ 0x005ef8d0
005EF8BF  C7 86 3A 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x23a],0x2
005EF8C9  5F                        POP EDI
005EF8CA  5E                        POP ESI
005EF8CB  5B                        POP EBX
005EF8CC  5D                        POP EBP
005EF8CD  C2 0C 00                  RET 0xc
FUN_005ef7a0::cf_common_exit_005EF8D0:
005EF8D0  C7 86 3A 02 00 00 06 00 00 00  MOV dword ptr [ESI + 0x23a],0x6
005EF8DA  5F                        POP EDI
005EF8DB  5E                        POP ESI
005EF8DC  5B                        POP EBX
005EF8DD  5D                        POP EBP
005EF8DE  C2 0C 00                  RET 0xc

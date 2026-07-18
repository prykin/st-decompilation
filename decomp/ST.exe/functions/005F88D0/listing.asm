FUN_005f88d0:
005F88D0  55                        PUSH EBP
005F88D1  8B EC                     MOV EBP,ESP
005F88D3  66 8B 81 85 02 00 00      MOV AX,word ptr [ECX + 0x285]
005F88DA  66 8B 91 81 02 00 00      MOV DX,word ptr [ECX + 0x281]
005F88E1  66 8B 89 7D 02 00 00      MOV CX,word ptr [ECX + 0x27d]
005F88E8  56                        PUSH ESI
005F88E9  57                        PUSH EDI
005F88EA  33 FF                     XOR EDI,EDI
005F88EC  66 85 C9                  TEST CX,CX
005F88EF  0F 8C B3 00 00 00         JL 0x005f89a8
005F88F5  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
005F88FC  66 3B CE                  CMP CX,SI
005F88FF  0F 8D A3 00 00 00         JGE 0x005f89a8
005F8905  66 85 D2                  TEST DX,DX
005F8908  0F 8C 9A 00 00 00         JL 0x005f89a8
005F890E  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005F8915  0F 8D 8D 00 00 00         JGE 0x005f89a8
005F891B  66 85 C0                  TEST AX,AX
005F891E  0F 8C 84 00 00 00         JL 0x005f89a8
005F8924  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
005F892B  7D 7B                     JGE 0x005f89a8
005F892D  53                        PUSH EBX
005F892E  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
005F8935  0F BF C0                  MOVSX EAX,AX
005F8938  0F AF D8                  IMUL EBX,EAX
005F893B  0F BF C6                  MOVSX EAX,SI
005F893E  0F BF D2                  MOVSX EDX,DX
005F8941  0F AF C2                  IMUL EAX,EDX
005F8944  03 D8                     ADD EBX,EAX
005F8946  0F BF C1                  MOVSX EAX,CX
005F8949  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
005F894F  03 D8                     ADD EBX,EAX
005F8951  8B 4C D9 04               MOV ECX,dword ptr [ECX + EBX*0x8 + 0x4]
005F8955  5B                        POP EBX
005F8956  85 C9                     TEST ECX,ECX
005F8958  74 4E                     JZ 0x005f89a8
005F895A  81 79 20 BE 00 00 00      CMP dword ptr [ECX + 0x20],0xbe
005F8961  75 45                     JNZ 0x005f89a8
005F8963  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F8966  85 C0                     TEST EAX,EAX
005F8968  74 26                     JZ 0x005f8990
005F896A  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005F896D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005F8970  52                        PUSH EDX
005F8971  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005F8974  50                        PUSH EAX
005F8975  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F8978  52                        PUSH EDX
005F8979  50                        PUSH EAX
005F897A  E8 88 C0 E0 FF            CALL 0x00404a07
005F897F  85 C0                     TEST EAX,EAX
005F8981  74 25                     JZ 0x005f89a8
005F8983  BF 01 00 00 00            MOV EDI,0x1
005F8988  8B C7                     MOV EAX,EDI
005F898A  5F                        POP EDI
005F898B  5E                        POP ESI
005F898C  5D                        POP EBP
005F898D  C2 14 00                  RET 0x14
LAB_005f8990:
005F8990  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005F8993  6A 00                     PUSH 0x0
005F8995  6A 00                     PUSH 0x0
005F8997  6A 00                     PUSH 0x0
005F8999  52                        PUSH EDX
005F899A  E8 68 C0 E0 FF            CALL 0x00404a07
005F899F  85 C0                     TEST EAX,EAX
005F89A1  74 05                     JZ 0x005f89a8
005F89A3  BF 01 00 00 00            MOV EDI,0x1
LAB_005f89a8:
005F89A8  8B C7                     MOV EAX,EDI
005F89AA  5F                        POP EDI
005F89AB  5E                        POP ESI
005F89AC  5D                        POP EBP
005F89AD  C2 14 00                  RET 0x14

FUN_0045f6c0:
0045F6C0  55                        PUSH EBP
0045F6C1  8B EC                     MOV EBP,ESP
0045F6C3  83 EC 18                  SUB ESP,0x18
0045F6C6  53                        PUSH EBX
0045F6C7  56                        PUSH ESI
0045F6C8  8B F1                     MOV ESI,ECX
0045F6CA  57                        PUSH EDI
0045F6CB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045F6D1  33 FF                     XOR EDI,EDI
0045F6D3  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0045F6D6  50                        PUSH EAX
0045F6D7  E8 DB 52 FA FF            CALL 0x004049b7
0045F6DC  25 FF 00 00 00            AND EAX,0xff
0045F6E1  48                        DEC EAX
0045F6E2  74 19                     JZ 0x0045f6fd
0045F6E4  48                        DEC EAX
0045F6E5  74 0B                     JZ 0x0045f6f2
0045F6E7  48                        DEC EAX
0045F6E8  75 26                     JNZ 0x0045f710
0045F6EA  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0045F6ED  6A 6D                     PUSH 0x6d
0045F6EF  51                        PUSH ECX
0045F6F0  EB 11                     JMP 0x0045f703
LAB_0045f6f2:
0045F6F2  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0045F6F5  68 82 00 00 00            PUSH 0x82
0045F6FA  52                        PUSH EDX
0045F6FB  EB 06                     JMP 0x0045f703
LAB_0045f6fd:
0045F6FD  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0045F700  6A 05                     PUSH 0x5
0045F702  50                        PUSH EAX
LAB_0045f703:
0045F703  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045F709  E8 5D 21 FA FF            CALL 0x0040186b
0045F70E  8B F8                     MOV EDI,EAX
LAB_0045f710:
0045F710  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
0045F716  51                        PUSH ECX
0045F717  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045F71D  E8 8C 2E FA FF            CALL 0x004025ae
0045F722  4F                        DEC EDI
0045F723  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
0045F726  74 0E                     JZ 0x0045f736
0045F728  4F                        DEC EDI
0045F729  74 07                     JZ 0x0045f732
0045F72B  4F                        DEC EDI
0045F72C  75 0D                     JNZ 0x0045f73b
0045F72E  04 08                     ADD AL,0x8
0045F730  EB 06                     JMP 0x0045f738
LAB_0045f732:
0045F732  04 06                     ADD AL,0x6
0045F734  EB 02                     JMP 0x0045f738
LAB_0045f736:
0045F736  04 02                     ADD AL,0x2
LAB_0045f738:
0045F738  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
LAB_0045f73b:
0045F73B  88 46 61                  MOV byte ptr [ESI + 0x61],AL
0045F73E  C6 86 E3 00 00 00 01      MOV byte ptr [ESI + 0xe3],0x1
0045F745  D0 E8                     SHR AL,0x1
0045F747  88 45 FD                  MOV byte ptr [EBP + -0x3],AL
0045F74A  88 46 62                  MOV byte ptr [ESI + 0x62],AL
0045F74D  8B 86 97 00 00 00         MOV EAX,dword ptr [ESI + 0x97]
0045F753  C7 86 D3 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0xd3],0x1
0045F75D  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
0045F761  66 8B 78 08               MOV DI,word ptr [EAX + 0x8]
0045F765  66 8B 58 0A               MOV BX,word ptr [EAX + 0xa]
0045F769  66 69 FF C9 00            IMUL DI,DI,0xc9
0045F76E  66 69 DB C9 00            IMUL BX,BX,0xc9
0045F773  66 8B 48 0C               MOV CX,word ptr [EAX + 0xc]
0045F777  83 C7 64                  ADD EDI,0x64
0045F77A  0F BF C7                  MOVSX EAX,DI
0045F77D  66 69 C9 C8 00            IMUL CX,CX,0xc8
0045F782  2B C2                     SUB EAX,EDX
0045F784  83 C3 64                  ADD EBX,0x64
0045F787  99                        CDQ
0045F788  33 C2                     XOR EAX,EDX
0045F78A  83 C1 64                  ADD ECX,0x64
0045F78D  2B C2                     SUB EAX,EDX
0045F78F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0045F792  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
0045F796  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0045F799  C6 45 FE 00               MOV byte ptr [EBP + -0x2],0x0
0045F79D  0F BF C3                  MOVSX EAX,BX
0045F7A0  2B C2                     SUB EAX,EDX
0045F7A2  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
0045F7A6  99                        CDQ
0045F7A7  33 C2                     XOR EAX,EDX
0045F7A9  2B C2                     SUB EAX,EDX
0045F7AB  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0045F7AF  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0045F7B2  0F BF C1                  MOVSX EAX,CX
0045F7B5  2B C2                     SUB EAX,EDX
0045F7B7  99                        CDQ
0045F7B8  33 C2                     XOR EAX,EDX
0045F7BA  2B C2                     SUB EAX,EDX
0045F7BC  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0045F7BF  74 4E                     JZ 0x0045f80f
0045F7C1  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0045F7C4  85 D2                     TEST EDX,EDX
0045F7C6  74 27                     JZ 0x0045f7ef
0045F7C8  99                        CDQ
0045F7C9  F7 7D E8                  IDIV dword ptr [EBP + -0x18]
0045F7CC  83 F8 03                  CMP EAX,0x3
0045F7CF  7C 04                     JL 0x0045f7d5
0045F7D1  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
LAB_0045f7d5:
0045F7D5  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0045F7D8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0045f7db:
0045F7DB  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0045F7DE  85 D2                     TEST EDX,EDX
0045F7E0  74 13                     JZ 0x0045f7f5
0045F7E2  99                        CDQ
0045F7E3  F7 7D F0                  IDIV dword ptr [EBP + -0x10]
0045F7E6  83 F8 03                  CMP EAX,0x3
0045F7E9  7C 0E                     JL 0x0045f7f9
0045F7EB  B0 01                     MOV AL,0x1
0045F7ED  EB 0D                     JMP 0x0045f7fc
LAB_0045f7ef:
0045F7EF  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
0045F7F3  EB E6                     JMP 0x0045f7db
LAB_0045f7f5:
0045F7F5  B0 01                     MOV AL,0x1
0045F7F7  EB 06                     JMP 0x0045f7ff
LAB_0045f7f9:
0045F7F9  8A 45 FE                  MOV AL,byte ptr [EBP + -0x2]
LAB_0045f7fc:
0045F7FC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0045f7ff:
0045F7FF  80 7D FF 01               CMP byte ptr [EBP + -0x1],0x1
0045F803  75 0A                     JNZ 0x0045f80f
0045F805  3C 01                     CMP AL,0x1
0045F807  75 06                     JNZ 0x0045f80f
0045F809  8A 45 FD                  MOV AL,byte ptr [EBP + -0x3]
0045F80C  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
LAB_0045f80f:
0045F80F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0045F812  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0045F816  52                        PUSH EDX
0045F817  51                        PUSH ECX
0045F818  53                        PUSH EBX
0045F819  57                        PUSH EDI
0045F81A  50                        PUSH EAX
0045F81B  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0045F81F  50                        PUSH EAX
0045F820  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
0045F824  50                        PUSH EAX
0045F825  8B CE                     MOV ECX,ESI
0045F827  E8 29 2C FA FF            CALL 0x00402455
0045F82C  85 C0                     TEST EAX,EAX
0045F82E  74 0A                     JZ 0x0045f83a
0045F830  5F                        POP EDI
0045F831  5E                        POP ESI
0045F832  83 C8 FF                  OR EAX,0xffffffff
0045F835  5B                        POP EBX
0045F836  8B E5                     MOV ESP,EBP
0045F838  5D                        POP EBP
0045F839  C3                        RET
LAB_0045f83a:
0045F83A  66 83 BE 8C 00 00 00 01   CMP word ptr [ESI + 0x8c],0x1
0045F842  0F 84 9E 00 00 00         JZ 0x0045f8e6
0045F848  66 39 7E 41               CMP word ptr [ESI + 0x41],DI
0045F84C  75 0A                     JNZ 0x0045f858
0045F84E  66 39 5E 43               CMP word ptr [ESI + 0x43],BX
0045F852  0F 84 8E 00 00 00         JZ 0x0045f8e6
LAB_0045f858:
0045F858  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0045F85B  C6 45 FE 00               MOV byte ptr [EBP + -0x2],0x0
0045F85F  85 C9                     TEST ECX,ECX
0045F861  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
0045F865  74 1A                     JZ 0x0045f881
0045F867  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0045F86A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0045F86D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0045F870  C1 E0 02                  SHL EAX,0x2
0045F873  99                        CDQ
0045F874  F7 F9                     IDIV ECX
0045F876  3D 3A 02 00 00            CMP EAX,0x23a
0045F87B  7E 04                     JLE 0x0045f881
0045F87D  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
LAB_0045f881:
0045F881  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0045F884  85 C9                     TEST ECX,ECX
0045F886  74 1A                     JZ 0x0045f8a2
0045F888  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0045F88B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0045F88E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0045F891  C1 E0 02                  SHL EAX,0x2
0045F894  99                        CDQ
0045F895  F7 F9                     IDIV ECX
0045F897  3D 3A 02 00 00            CMP EAX,0x23a
0045F89C  7E 04                     JLE 0x0045f8a2
0045F89E  C6 45 FE 01               MOV byte ptr [EBP + -0x2],0x1
LAB_0045f8a2:
0045F8A2  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
0045F8A5  84 C0                     TEST AL,AL
0045F8A7  74 07                     JZ 0x0045f8b0
0045F8A9  8A 45 FE                  MOV AL,byte ptr [EBP + -0x2]
0045F8AC  84 C0                     TEST AL,AL
0045F8AE  75 36                     JNZ 0x0045f8e6
LAB_0045f8b0:
0045F8B0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0045F8B3  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0045F8B7  8B 16                     MOV EDX,dword ptr [ESI]
0045F8B9  50                        PUSH EAX
0045F8BA  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0045F8BE  53                        PUSH EBX
0045F8BF  57                        PUSH EDI
0045F8C0  51                        PUSH ECX
0045F8C1  50                        PUSH EAX
0045F8C2  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
0045F8C6  50                        PUSH EAX
0045F8C7  8B CE                     MOV ECX,ESI
0045F8C9  FF 52 10                  CALL dword ptr [EDX + 0x10]
0045F8CC  50                        PUSH EAX
0045F8CD  8B CE                     MOV ECX,ESI
0045F8CF  E8 DE 37 FA FF            CALL 0x004030b2
0045F8D4  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
0045F8D8  66 3B C1                  CMP AX,CX
0045F8DB  74 09                     JZ 0x0045f8e6
0045F8DD  50                        PUSH EAX
0045F8DE  51                        PUSH ECX
0045F8DF  8B CE                     MOV ECX,ESI
0045F8E1  E8 03 29 FA FF            CALL 0x004021e9
LAB_0045f8e6:
0045F8E6  5F                        POP EDI
0045F8E7  5E                        POP ESI
0045F8E8  33 C0                     XOR EAX,EAX
0045F8EA  5B                        POP EBX
0045F8EB  8B E5                     MOV ESP,EBP
0045F8ED  5D                        POP EBP
0045F8EE  C3                        RET

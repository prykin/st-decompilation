FUN_0057b670:
0057B670  55                        PUSH EBP
0057B671  8B EC                     MOV EBP,ESP
0057B673  83 EC 5C                  SUB ESP,0x5c
0057B676  53                        PUSH EBX
0057B677  56                        PUSH ESI
0057B678  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0057B67B  33 DB                     XOR EBX,EBX
0057B67D  3B F3                     CMP ESI,EBX
0057B67F  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0057B682  0F 84 58 02 00 00         JZ 0x0057b8e0
0057B688  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0057B68B  25 FF 00 00 00            AND EAX,0xff
0057B690  2B C3                     SUB EAX,EBX
0057B692  74 1A                     JZ 0x0057b6ae
0057B694  48                        DEC EAX
0057B695  0F 85 45 02 00 00         JNZ 0x0057b8e0
0057B69B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0057B69E  8D 45 FC                  LEA EAX,[EBP + -0x4]
0057B6A1  50                        PUSH EAX
0057B6A2  51                        PUSH ECX
0057B6A3  56                        PUSH ESI
0057B6A4  E8 91 A6 E8 FF            CALL 0x00405d3a
0057B6A9  83 C4 0C                  ADD ESP,0xc
0057B6AC  EB 51                     JMP 0x0057b6ff
LAB_0057b6ae:
0057B6AE  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
0057B6B4  2D 99 00 00 00            SUB EAX,0x99
0057B6B9  74 1A                     JZ 0x0057b6d5
0057B6BB  83 E8 1E                  SUB EAX,0x1e
0057B6BE  74 07                     JZ 0x0057b6c7
0057B6C0  B8 90 01 00 00            MOV EAX,0x190
0057B6C5  EB 13                     JMP 0x0057b6da
LAB_0057b6c7:
0057B6C7  B8 FA 00 00 00            MOV EAX,0xfa
0057B6CC  C7 45 08 00 00 00 3F      MOV dword ptr [EBP + 0x8],0x3f000000
0057B6D3  EB 0C                     JMP 0x0057b6e1
LAB_0057b6d5:
0057B6D5  B8 5E 01 00 00            MOV EAX,0x15e
LAB_0057b6da:
0057B6DA  C7 45 08 00 00 C0 3F      MOV dword ptr [EBP + 0x8],0x3fc00000
LAB_0057b6e1:
0057B6E1  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0057B6E4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0057B6E7  52                        PUSH EDX
0057B6E8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0057B6EB  51                        PUSH ECX
0057B6EC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0057B6EF  50                        PUSH EAX
0057B6F0  8D 45 FC                  LEA EAX,[EBP + -0x4]
0057B6F3  52                        PUSH EDX
0057B6F4  50                        PUSH EAX
0057B6F5  51                        PUSH ECX
0057B6F6  56                        PUSH ESI
0057B6F7  E8 37 76 E8 FF            CALL 0x00402d33
0057B6FC  83 C4 1C                  ADD ESP,0x1c
LAB_0057b6ff:
0057B6FF  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
0057B702  0F 84 D8 01 00 00         JZ 0x0057b8e0
0057B708  8D 55 14                  LEA EDX,[EBP + 0x14]
0057B70B  8D 45 18                  LEA EAX,[EBP + 0x18]
0057B70E  52                        PUSH EDX
0057B70F  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0057B712  50                        PUSH EAX
0057B713  51                        PUSH ECX
0057B714  8B CE                     MOV ECX,ESI
0057B716  E8 C8 7A E8 FF            CALL 0x004031e3
0057B71B  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
0057B721  2D 99 00 00 00            SUB EAX,0x99
0057B726  74 17                     JZ 0x0057b73f
0057B728  83 E8 1E                  SUB EAX,0x1e
0057B72B  74 09                     JZ 0x0057b736
0057B72D  C7 45 08 96 00 00 00      MOV dword ptr [EBP + 0x8],0x96
0057B734  EB 10                     JMP 0x0057b746
LAB_0057b736:
0057B736  C7 45 08 B9 00 00 00      MOV dword ptr [EBP + 0x8],0xb9
0057B73D  EB 07                     JMP 0x0057b746
LAB_0057b73f:
0057B73F  C7 45 08 B4 00 00 00      MOV dword ptr [EBP + 0x8],0xb4
LAB_0057b746:
0057B746  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0057B749  8D 42 01                  LEA EAX,[EDX + 0x1]
0057B74C  3B C3                     CMP EAX,EBX
0057B74E  0F 8E 7C 01 00 00         JLE 0x0057b8d0
0057B754  57                        PUSH EDI
LAB_0057b755:
0057B755  B9 16 00 00 00            MOV ECX,0x16
0057B75A  33 C0                     XOR EAX,EAX
0057B75C  8D 7D A4                  LEA EDI,[EBP + -0x5c]
0057B75F  66 8B 96 47 02 00 00      MOV DX,word ptr [ESI + 0x247]
0057B766  F3 AB                     STOSD.REP ES:EDI
0057B768  66 8B 8E 45 02 00 00      MOV CX,word ptr [ESI + 0x245]
0057B76F  B8 01 00 00 00            MOV EAX,0x1
0057B774  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0057B777  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0057B77A  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0057B77D  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0057B780  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0057B783  66 8B 86 49 02 00 00      MOV AX,word ptr [ESI + 0x249]
0057B78A  66 89 4D B8               MOV word ptr [EBP + -0x48],CX
0057B78E  66 8B 8E 62 02 00 00      MOV CX,word ptr [ESI + 0x262]
0057B795  66 89 55 BA               MOV word ptr [EBP + -0x46],DX
0057B799  8B 96 5E 02 00 00         MOV EDX,dword ptr [ESI + 0x25e]
0057B79F  66 89 45 BC               MOV word ptr [EBP + -0x44],AX
0057B7A3  8A 86 5D 02 00 00         MOV AL,byte ptr [ESI + 0x25d]
0057B7A9  66 89 4D D5               MOV word ptr [EBP + -0x2b],CX
0057B7AD  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
0057B7B1  89 55 D1                  MOV dword ptr [EBP + -0x2f],EDX
0057B7B4  66 8B 55 18               MOV DX,word ptr [EBP + 0x18]
0057B7B8  88 45 D0                  MOV byte ptr [EBP + -0x30],AL
0057B7BB  66 8B 45 14               MOV AX,word ptr [EBP + 0x14]
0057B7BF  3B DF                     CMP EBX,EDI
0057B7C1  C7 45 A4 28 00 00 00      MOV dword ptr [EBP + -0x5c],0x28
0057B7C8  66 89 4D BE               MOV word ptr [EBP + -0x42],CX
0057B7CC  66 89 55 C0               MOV word ptr [EBP + -0x40],DX
0057B7D0  66 89 45 C2               MOV word ptr [EBP + -0x3e],AX
0057B7D4  74 1E                     JZ 0x0057b7f4
0057B7D6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057B7D9  66 8B 0C D8               MOV CX,word ptr [EAX + EBX*0x8]
0057B7DD  66 89 4D C4               MOV word ptr [EBP + -0x3c],CX
0057B7E1  66 8B 54 D8 02            MOV DX,word ptr [EAX + EBX*0x8 + 0x2]
0057B7E6  66 89 55 C6               MOV word ptr [EBP + -0x3a],DX
0057B7EA  66 8B 4C D8 04            MOV CX,word ptr [EAX + EBX*0x8 + 0x4]
0057B7EF  E9 A2 00 00 00            JMP 0x0057b896
LAB_0057b7f4:
0057B7F4  0F BF 56 38               MOVSX EDX,word ptr [ESI + 0x38]
0057B7F8  0F BF 46 36               MOVSX EAX,word ptr [ESI + 0x36]
0057B7FC  0F BF 4E 34               MOVSX ECX,word ptr [ESI + 0x34]
0057B800  52                        PUSH EDX
0057B801  50                        PUSH EAX
0057B802  0F BF 56 3E               MOVSX EDX,word ptr [ESI + 0x3e]
0057B806  0F BF 46 3C               MOVSX EAX,word ptr [ESI + 0x3c]
0057B80A  51                        PUSH ECX
0057B80B  52                        PUSH EDX
0057B80C  0F BF 4E 3A               MOVSX ECX,word ptr [ESI + 0x3a]
0057B810  50                        PUSH EAX
0057B811  51                        PUSH ECX
0057B812  E8 F6 16 13 00            CALL 0x006acf0d
0057B817  8B C8                     MOV ECX,EAX
0057B819  83 C4 18                  ADD ESP,0x18
0057B81C  85 C9                     TEST ECX,ECX
0057B81E  74 5C                     JZ 0x0057b87c
0057B820  0F BF 46 3A               MOVSX EAX,word ptr [ESI + 0x3a]
0057B824  0F BF 56 34               MOVSX EDX,word ptr [ESI + 0x34]
0057B828  2B C2                     SUB EAX,EDX
0057B82A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057B82D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057B830  C1 E0 02                  SHL EAX,0x2
0057B833  99                        CDQ
0057B834  F7 F9                     IDIV ECX
0057B836  03 45 0C                  ADD EAX,dword ptr [EBP + 0xc]
0057B839  0F BF 56 36               MOVSX EDX,word ptr [ESI + 0x36]
0057B83D  66 89 45 C4               MOV word ptr [EBP + -0x3c],AX
0057B841  0F BF 46 3C               MOVSX EAX,word ptr [ESI + 0x3c]
0057B845  2B C2                     SUB EAX,EDX
0057B847  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057B84A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057B84D  C1 E0 02                  SHL EAX,0x2
0057B850  99                        CDQ
0057B851  F7 F9                     IDIV ECX
0057B853  03 45 18                  ADD EAX,dword ptr [EBP + 0x18]
0057B856  0F BF 56 38               MOVSX EDX,word ptr [ESI + 0x38]
0057B85A  66 89 45 C6               MOV word ptr [EBP + -0x3a],AX
0057B85E  0F BF 46 3E               MOVSX EAX,word ptr [ESI + 0x3e]
0057B862  2B C2                     SUB EAX,EDX
0057B864  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057B867  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057B86A  C1 E0 02                  SHL EAX,0x2
0057B86D  99                        CDQ
0057B86E  F7 F9                     IDIV ECX
0057B870  03 45 14                  ADD EAX,dword ptr [EBP + 0x14]
0057B873  66 89 45 C8               MOV word ptr [EBP + -0x38],AX
0057B877  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057B87A  EB 1E                     JMP 0x0057b89a
LAB_0057b87c:
0057B87C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057B87F  66 8B 4C D8 F8            MOV CX,word ptr [EAX + EBX*0x8 + -0x8]
0057B884  66 89 4D C4               MOV word ptr [EBP + -0x3c],CX
0057B888  66 8B 54 D8 FA            MOV DX,word ptr [EAX + EBX*0x8 + -0x6]
0057B88D  66 89 55 C6               MOV word ptr [EBP + -0x3a],DX
0057B891  66 8B 4C D8 FC            MOV CX,word ptr [EAX + EBX*0x8 + -0x4]
LAB_0057b896:
0057B896  66 89 4D C8               MOV word ptr [EBP + -0x38],CX
LAB_0057b89a:
0057B89A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0057B89D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057B8A3  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0057B8A6  66 8B 44 D8 06            MOV AX,word ptr [EAX + EBX*0x8 + 0x6]
0057B8AB  66 89 45 CA               MOV word ptr [EBP + -0x36],AX
0057B8AF  8B 11                     MOV EDX,dword ptr [ECX]
0057B8B1  8D 45 A4                  LEA EAX,[EBP + -0x5c]
0057B8B4  6A 00                     PUSH 0x0
0057B8B6  50                        PUSH EAX
0057B8B7  6A 00                     PUSH 0x0
0057B8B9  6A 00                     PUSH 0x0
0057B8BB  68 06 01 00 00            PUSH 0x106
0057B8C0  FF 52 08                  CALL dword ptr [EDX + 0x8]
0057B8C3  43                        INC EBX
0057B8C4  8D 47 01                  LEA EAX,[EDI + 0x1]
0057B8C7  3B D8                     CMP EBX,EAX
0057B8C9  0F 8C 86 FE FF FF         JL 0x0057b755
0057B8CF  5F                        POP EDI
LAB_0057b8d0:
0057B8D0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057B8D3  85 C0                     TEST EAX,EAX
0057B8D5  74 09                     JZ 0x0057b8e0
0057B8D7  8D 4D FC                  LEA ECX,[EBP + -0x4]
0057B8DA  51                        PUSH ECX
0057B8DB  E8 80 F7 12 00            CALL 0x006ab060
LAB_0057b8e0:
0057B8E0  5E                        POP ESI
0057B8E1  B8 01 00 00 00            MOV EAX,0x1
0057B8E6  5B                        POP EBX
0057B8E7  8B E5                     MOV ESP,EBP
0057B8E9  5D                        POP EBP
0057B8EA  C3                        RET

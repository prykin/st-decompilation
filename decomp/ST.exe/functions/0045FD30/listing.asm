FUN_0045fd30:
0045FD30  55                        PUSH EBP
0045FD31  8B EC                     MOV EBP,ESP
0045FD33  51                        PUSH ECX
0045FD34  53                        PUSH EBX
0045FD35  56                        PUSH ESI
0045FD36  8B F1                     MOV ESI,ECX
0045FD38  57                        PUSH EDI
0045FD39  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
0045FD3D  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0045FD40  50                        PUSH EAX
0045FD41  51                        PUSH ECX
0045FD42  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0045FD48  E8 AC 5F FA FF            CALL 0x00405cf9
0045FD4D  8B D8                     MOV EBX,EAX
0045FD4F  85 DB                     TEST EBX,EBX
0045FD51  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0045FD54  75 0A                     JNZ 0x0045fd60
0045FD56  5F                        POP EDI
0045FD57  5E                        POP ESI
0045FD58  83 C8 FF                  OR EAX,0xffffffff
0045FD5B  5B                        POP EBX
0045FD5C  8B E5                     MOV ESP,EBP
0045FD5E  5D                        POP EBP
0045FD5F  C3                        RET
LAB_0045fd60:
0045FD60  8B 86 E8 00 00 00         MOV EAX,dword ptr [ESI + 0xe8]
0045FD66  BF 01 00 00 00            MOV EDI,0x1
0045FD6B  3B C7                     CMP EAX,EDI
0045FD6D  75 59                     JNZ 0x0045fdc8
0045FD6F  80 7E 4D 01               CMP byte ptr [ESI + 0x4d],0x1
0045FD73  75 25                     JNZ 0x0045fd9a
0045FD75  68 D4 A0 7A 00            PUSH 0x7aa0d4
0045FD7A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0045FD7F  6A 00                     PUSH 0x0
0045FD81  6A 00                     PUSH 0x0
0045FD83  68 98 14 00 00            PUSH 0x1498
0045FD88  68 3C 9D 7A 00            PUSH 0x7a9d3c
0045FD8D  E8 3E D7 24 00            CALL 0x006ad4d0
0045FD92  83 C4 18                  ADD ESP,0x18
0045FD95  85 C0                     TEST EAX,EAX
0045FD97  74 01                     JZ 0x0045fd9a
0045FD99  CC                        INT3
LAB_0045fd9a:
0045FD9A  8B CE                     MOV ECX,ESI
0045FD9C  C7 86 E8 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xe8],0x0
0045FDA6  E8 A7 5B FA FF            CALL 0x00405952
0045FDAB  33 D2                     XOR EDX,EDX
0045FDAD  8B CB                     MOV ECX,EBX
0045FDAF  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
0045FDB3  89 BE FD 00 00 00         MOV dword ptr [ESI + 0xfd],EDI
0045FDB9  52                        PUSH EDX
0045FDBA  E8 33 52 FA FF            CALL 0x00404ff2
0045FDBF  8B C7                     MOV EAX,EDI
0045FDC1  5F                        POP EDI
0045FDC2  5E                        POP ESI
0045FDC3  5B                        POP EBX
0045FDC4  8B E5                     MOV ESP,EBP
0045FDC6  5D                        POP EBP
0045FDC7  C3                        RET
LAB_0045fdc8:
0045FDC8  8A 46 40                  MOV AL,byte ptr [ESI + 0x40]
0045FDCB  84 C0                     TEST AL,AL
0045FDCD  0F 85 AA 00 00 00         JNZ 0x0045fe7d
0045FDD3  8A 46 4D                  MOV AL,byte ptr [ESI + 0x4d]
0045FDD6  84 C0                     TEST AL,AL
0045FDD8  0F 85 9F 00 00 00         JNZ 0x0045fe7d
0045FDDE  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
0045FDE2  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
0045FDE6  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
0045FDEA  66 85 C0                  TEST AX,AX
0045FDED  7C 5D                     JL 0x0045fe4c
0045FDEF  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0045FDF6  66 3B C7                  CMP AX,DI
0045FDF9  7D 51                     JGE 0x0045fe4c
0045FDFB  66 85 D2                  TEST DX,DX
0045FDFE  7C 4C                     JL 0x0045fe4c
0045FE00  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0045FE07  7D 43                     JGE 0x0045fe4c
0045FE09  66 85 C9                  TEST CX,CX
0045FE0C  7C 3E                     JL 0x0045fe4c
0045FE0E  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0045FE15  7D 35                     JGE 0x0045fe4c
0045FE17  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0045FE1E  0F BF C9                  MOVSX ECX,CX
0045FE21  0F AF D9                  IMUL EBX,ECX
0045FE24  0F BF CF                  MOVSX ECX,DI
0045FE27  0F BF D2                  MOVSX EDX,DX
0045FE2A  0F AF CA                  IMUL ECX,EDX
0045FE2D  0F BF C0                  MOVSX EAX,AX
0045FE30  03 D9                     ADD EBX,ECX
0045FE32  03 D8                     ADD EBX,EAX
0045FE34  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0045FE39  33 C9                     XOR ECX,ECX
0045FE3B  8A 8E 8E 00 00 00         MOV CL,byte ptr [ESI + 0x8e]
0045FE41  8D 14 59                  LEA EDX,[ECX + EBX*0x2]
0045FE44  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0045FE47  8B 04 90                  MOV EAX,dword ptr [EAX + EDX*0x4]
0045FE4A  EB 02                     JMP 0x0045fe4e
LAB_0045fe4c:
0045FE4C  33 C0                     XOR EAX,EAX
LAB_0045fe4e:
0045FE4E  3B C6                     CMP EAX,ESI
0045FE50  75 2B                     JNZ 0x0045fe7d
0045FE52  8B CE                     MOV ECX,ESI
0045FE54  E8 F9 5A FA FF            CALL 0x00405952
0045FE59  33 C9                     XOR ECX,ECX
0045FE5B  C7 86 FD 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0xfd],0x1
0045FE65  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
0045FE69  51                        PUSH ECX
0045FE6A  8B CB                     MOV ECX,EBX
0045FE6C  E8 81 51 FA FF            CALL 0x00404ff2
0045FE71  5F                        POP EDI
0045FE72  5E                        POP ESI
0045FE73  B8 01 00 00 00            MOV EAX,0x1
0045FE78  5B                        POP EBX
0045FE79  8B E5                     MOV ESP,EBP
0045FE7B  5D                        POP EBP
0045FE7C  C3                        RET
LAB_0045fe7d:
0045FE7D  8B CE                     MOV ECX,ESI
0045FE7F  E8 C0 3B FA FF            CALL 0x00403a44
0045FE84  83 F8 FF                  CMP EAX,-0x1
0045FE87  75 09                     JNZ 0x0045fe92
0045FE89  5F                        POP EDI
0045FE8A  5E                        POP ESI
0045FE8B  0B C0                     OR EAX,EAX
0045FE8D  5B                        POP EBX
0045FE8E  8B E5                     MOV ESP,EBP
0045FE90  5D                        POP EBP
0045FE91  C3                        RET
LAB_0045fe92:
0045FE92  83 F8 02                  CMP EAX,0x2
0045FE95  75 07                     JNZ 0x0045fe9e
0045FE97  8B CE                     MOV ECX,ESI
0045FE99  E8 B4 14 FA FF            CALL 0x00401352
LAB_0045fe9e:
0045FE9E  5F                        POP EDI
0045FE9F  5E                        POP ESI
0045FEA0  33 C0                     XOR EAX,EAX
0045FEA2  5B                        POP EBX
0045FEA3  8B E5                     MOV ESP,EBP
0045FEA5  5D                        POP EBP
0045FEA6  C3                        RET

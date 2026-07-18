FUN_00650940:
00650940  55                        PUSH EBP
00650941  8B EC                     MOV EBP,ESP
00650943  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00650946  33 C9                     XOR ECX,ECX
00650948  B2 08                     MOV DL,0x8
LAB_0065094a:
0065094A  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00650951  75 5C                     JNZ 0x006509af
00650953  41                        INC ECX
00650954  83 F9 03                  CMP ECX,0x3
00650957  7C F1                     JL 0x0065094a
00650959  66 8B 08                  MOV CX,word ptr [EAX]
0065095C  66 83 F9 04               CMP CX,0x4
00650960  7D 09                     JGE 0x0065096b
00650962  C7 40 14 01 00 00 00      MOV dword ptr [EAX + 0x14],0x1
00650969  EB 08                     JMP 0x00650973
LAB_0065096b:
0065096B  38 90 D3 00 00 00         CMP byte ptr [EAX + 0xd3],DL
00650971  75 3C                     JNZ 0x006509af
LAB_00650973:
00650973  66 83 F9 05               CMP CX,0x5
00650977  7D 09                     JGE 0x00650982
00650979  C7 40 18 00 00 00 00      MOV dword ptr [EAX + 0x18],0x0
00650980  EB 08                     JMP 0x0065098a
LAB_00650982:
00650982  38 90 D4 00 00 00         CMP byte ptr [EAX + 0xd4],DL
00650988  75 25                     JNZ 0x006509af
LAB_0065098a:
0065098A  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0065098D  81 F9 9B 00 00 00         CMP ECX,0x9b
00650993  73 1A                     JNC 0x006509af
00650995  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
00650998  85 C0                     TEST EAX,EAX
0065099A  7E 13                     JLE 0x006509af
0065099C  33 D2                     XOR EDX,EDX
0065099E  8A 91 D8 8F 79 00         MOV DL,byte ptr [ECX + 0x798fd8]
006509A4  3B C2                     CMP EAX,EDX
006509A6  7F 07                     JG 0x006509af
006509A8  B8 01 00 00 00            MOV EAX,0x1
006509AD  5D                        POP EBP
006509AE  C3                        RET
LAB_006509af:
006509AF  33 C0                     XOR EAX,EAX
006509B1  5D                        POP EBP
006509B2  C3                        RET
